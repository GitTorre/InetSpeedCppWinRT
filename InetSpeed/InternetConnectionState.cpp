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

struct ConnectionSpeedProfile
{
	double RawSpeed = 0.0;
	HostName ServerHost = g_socketTcpWellKnownHostNames[0];
	bool IsCustom = false;
	UINT Port = 0;
	UINT NumTests = 1;
} connectionProfile;

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
	if (roundtriptime <= 0.025)
	{
		return ConnectionSpeed::High;
	}

	if (roundtriptime > 0.015 && roundtriptime < 0.25)
	{
		return ConnectionSpeed::Medium;
	}

	return ConnectionSpeed::Low;
}

future<ConnectionSpeed>
InternetConnectionState::InternetConnectSocketAsync(const atomic_bool& cancelled)
{	
	double currentSpeed = 0.0;
	//auto connectionType = GetConnectionType();

	for (size_t i = 0; i < connectionProfile.NumTests; ++i)
	{
		if (cancelled)
		{
			currentSpeed = 0.0;
			break;
		}

		if (connectionProfile.ServerHost == nullptr || !connectionProfile.IsCustom)
		{
			connectionProfile.ServerHost = HostName(g_socketTcpWellKnownHostNames[i]);
		}

		StreamSocket _clientSocket;
		_clientSocket.Control().NoDelay(true);
		_clientSocket.Control().QualityOfService(SocketQualityOfService::LowLatency);
		_clientSocket.Control().KeepAlive(false);

		try
		{
			co_await _clientSocket.ConnectAsync(connectionProfile.ServerHost, to_wstring(connectionProfile.Port), SocketProtectionLevel::PlainSocket);
			currentSpeed += _clientSocket.Information().RoundTripTimeStatistics().Min / 1000000.0;
		}
		catch (SocketError)
		{
			currentSpeed = 0.0;
			connectionProfile.NumTests--;
		}
		//close socket...
		_clientSocket.Close();
	}

	//No need to continue...
	if (currentSpeed == 0.0 || connectionProfile.NumTests == 0)
	{
		return ConnectionSpeed::Unknown;
	}
	
	double rawSpeed = currentSpeed / connectionProfile.NumTests;
	connectionProfile.RawSpeed = rawSpeed;
	return GetConnectionSpeed(rawSpeed);
}

double InternetConnectionState::RawSpeed()
{
	return connectionProfile.RawSpeed;
}
//TODO: this needs to be async... IAsyncOperation<ConnectionSpeed>...
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed(UINT numTests)
{
	if (!InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	connectionProfile.ServerHost = nullptr;
	connectionProfile.IsCustom = false;
	connectionProfile.NumTests = numTests;
	auto timeout = chrono::milliseconds(1000);
	atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectSocketAsync(ref(cancellation_token));

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
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed(HostName hostName, UINT port, UINT numTests)
{
	if (!InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	if (hostName != nullptr)
	{
		connectionProfile.ServerHost = hostName;
		connectionProfile.IsCustom = true;
		connectionProfile.Port = port;
		connectionProfile.NumTests = numTests;
	}

	auto timeout = chrono::milliseconds(2000);
	atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectSocketAsync(ref(cancellation_token));

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