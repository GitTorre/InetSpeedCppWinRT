#include "pch.h"
#include "InternetConnectionState.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Collections;
using namespace Windows::Networking;
using namespace Connectivity;
using namespace Sockets;
using namespace std;
using namespace InetSpeed;

const HostName g_socketTcpWellKnownHostNames[4] = 
				{ 
					HostName(L"google.com"),
					HostName(L"bing.com"),
					HostName(L"facebook.com"),
					HostName(L"yahoo.com")
				};

double g_rawSpeed = 0.0;
HostName g_serverHost = g_socketTcpWellKnownHostNames[0];
bool g_custom = false;
UINT g_port = 0;

ConnectionType InternetConnectionState::GetConnectionType()
{
	auto profile = NetworkInformation::GetInternetConnectionProfile();
	if (profile == nullptr) 
	{
		return ConnectionType::Other;
	}

	auto interfaceType = profile.NetworkAdapter().IanaInterfaceType();

	// 71 is WiFi & 6 is Ethernet(LAN)
	if (interfaceType == 71)
	{
		return ConnectionType::WiFi;
	}
	
	if (interfaceType == 6)
	{
		return ConnectionType::LAN;
	}
	// 243 & 244 is 3G/Mobile
	if (interfaceType == 243 || interfaceType == 244)
	{
		return ConnectionType::Cellular;
	}
    return ConnectionType::Other;
}

ConnectionSpeed InternetConnectionState::GetConnectionSpeed(double roundtriptime)
{
	if (!(roundtriptime > 0.0))
	{
		return ConnectionSpeed::Unknown;
	}

	if (roundtriptime <= 0.005)
	{
		return ConnectionSpeed::High;
	}

	if (roundtriptime > 0.005 && roundtriptime < 0.15)
	{
		return ConnectionSpeed::Average;
	}

	return ConnectionSpeed::Low;
}

future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync(const atomic_bool& cancelled)
{	
	int retries = 4;
	//long long task_timeout_ms = 1000;
	double currentSpeed = 0.0;
	auto connectionType = GetConnectionType();

	if (connectionType == ConnectionType::Cellular || connectionType == ConnectionType::WiFi)
	{
		retries = 2;
	}

	for (size_t i = 0; i < retries; ++i)
	{
		if (cancelled)
		{
			currentSpeed = 0.0;
			break;
		}

		if (g_serverHost == nullptr || !g_custom)
		{
			g_serverHost = HostName(g_socketTcpWellKnownHostNames[i]);
		}

		StreamSocket _clientSocket;
		_clientSocket.Control().NoDelay(true);
		_clientSocket.Control().QualityOfService(SocketQualityOfService::LowLatency);
		_clientSocket.Control().KeepAlive(false);

		try
		{
			co_await _clientSocket.ConnectAsync(g_serverHost, to_wstring(g_port), SocketProtectionLevel::PlainSocket);
			currentSpeed += _clientSocket.Information().RoundTripTimeStatistics().Min / 1000000.0;
		}
		catch (...)
		{
			currentSpeed = 0.0;
			retries--;
		}
		//close socket...
		_clientSocket.Close();
	}

	//No need to continue...
	if (currentSpeed == 0.0)
	{
		return ConnectionSpeed::Unknown;
	}
	
	double rawSpeed = currentSpeed / retries;
	g_rawSpeed = rawSpeed;
	return GetConnectionSpeed(rawSpeed);
}

double InternetConnectionState::RawSpeed()
{
	return g_rawSpeed;
}
//TODO: this needs to be async... IAsyncOperation<ConnectionSpeed>...
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed()
{
	if (!InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	g_serverHost = nullptr;
	g_custom = false;
	auto timeout = chrono::seconds(1);
	atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectSocketAsync(ref(cancellation_token));

		//this guarantees this function will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancelation in winrt_await_adapters will replace this (and be used in InternetConnectSocketAsync)...
		future_status status;
		do
		{
			status = future.wait_for(timeout);
			if (status == std::future_status::timeout)
			{
				cancellation_token = true;
			}
			else if (status == std::future_status::ready)
			{
				return future.get();
			}
		} while (status != std::future_status::ready);

		return ConnectionSpeed::Unknown;
		
	}).get();
}
//TODO: this needs to be async... IAsyncOperation<ConnectionSpeed>...
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed(HostName hostName, UINT port)
{
	if (!InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	if (hostName != nullptr)
	{
		g_serverHost = hostName;
		g_custom = true;
		g_port = port;
	}

	auto timeout = chrono::seconds(1);
	atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectSocketAsync(ref(cancellation_token));

		//this guarantees this function will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancelation in winrt_await_adapters will replace this (and be used in InternetConnectSocketAsync)...
		future_status status;
		do 
		{
			status = future.wait_for(timeout);
			if (status == std::future_status::timeout) 
			{
				cancellation_token = true;
			}
			else if (status == std::future_status::ready) 
			{
				return future.get();
			}
		} 
		while (status != std::future_status::ready);
		
		return ConnectionSpeed::Unknown;

	}).get();
}

bool InternetConnectionState::InternetConnected()
{
	auto internetConnectionProfile = NetworkInformation::GetInternetConnectionProfile();
	if (internetConnectionProfile == nullptr)
	{
		return false;
	}
	
	if (internetConnectionProfile.GetNetworkConnectivityLevel() == NetworkConnectivityLevel::InternetAccess)
	{
		return true;
	}
	
	return false;
}