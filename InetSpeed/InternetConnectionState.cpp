#include "pch.h"
#include "InternetConnectionState.h"

using namespace winrt;

using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Networking;
using namespace Windows::Networking::Connectivity;
using namespace Windows::Networking::Sockets;

using namespace std;
using namespace InetSpeed;

hstring _socketTcpWellKnownHostNames[] = { L"google.com", L"bing.com", L"facebook.com", L"yahoo.com" };
double _rawSpeed;
HostName _serverHost = _socketTcpWellKnownHostNames[0];
bool _custom;

ConnectionType InternetConnectionState::GetConnectionType()
{
	auto profile = NetworkInformation::GetInternetConnectionProfile();
	if (profile == nullptr) return ConnectionType::Unknown;

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
	else
	{
		return ConnectionType::Unknown;
	}
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

future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync(const std::atomic_bool& cancelled)
{	
	int retries = 4;
	//long long task_timeout_ms = 1000;
	double currentSpeed = 0.0;
	auto connectionType = InternetConnectionState::GetConnectionType();

	if (connectionType == ConnectionType::Cellular || connectionType == ConnectionType::WiFi)
	{
		retries = 2;
	}

	for (int i = 0; i < retries; ++i)
	{
		if(cancelled)
			return ConnectionSpeed::Unknown;

		if (_serverHost == nullptr || !_custom)
		{
			_serverHost = HostName(_socketTcpWellKnownHostNames[i]);
		}

		StreamSocket _clientSocket;
		_clientSocket.Control().NoDelay(true);
		_clientSocket.Control().QualityOfService(SocketQualityOfService::LowLatency);
		_clientSocket.Control().KeepAlive(false);

		try
		{
			co_await _clientSocket.ConnectAsync(_serverHost, L"80", SocketProtectionLevel::PlainSocket);
			currentSpeed += _clientSocket.Information().RoundTripTimeStatistics().Min / 1000000.0;
		}
		catch (...)
		{
			currentSpeed = 0.0;
			retries--;
		}
		//close stream socket...
		_clientSocket.Close();
	}

	//Compute speed...
	if (currentSpeed == 0.0)
	{
		return ConnectionSpeed::Unknown;
	}
	
	double rawSpeed = currentSpeed / retries;
	_rawSpeed = rawSpeed;
	return InternetConnectionState::GetConnectionSpeed(rawSpeed);
}

double InternetConnectionState::RawSpeed()
{
	return _rawSpeed;
}
//TODO: this needs to be async... IAsyncOperation<ConnectionSpeed>...
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed()
{
	if (!InternetConnectionState::InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	_serverHost = nullptr;
	_custom = false;
	auto timeout = chrono::seconds(1);
	atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectionState::InternetConnectSocketAsync(std::ref(cancellation_token));

		//this guarantees this function will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancelation in winrt_await_adapters will replace this (and be used in InternetConnectSocketAsync)...
		auto status = future.wait_for(timeout);
		
		if (status == future_status::timeout)
		{
			cancellation_token = true;
			return ConnectionSpeed::Unknown;
		}
		
		return future.get();
		
	}).get();
}
//TODO: this needs to be async... IAsyncOperation<ConnectionSpeed>...
ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeedWithHostName(HostName hostName)
{
	if (!InternetConnectionState::InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	if (hostName != nullptr)
	{
		_serverHost = hostName;
		_custom = true;
	}

	auto timeout = std::chrono::seconds(1);
	std::atomic_bool cancellation_token = false;

	return async(launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectionState::InternetConnectSocketAsync(std::ref(cancellation_token));

		//this guarantees this function will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancelation in winrt_await_adapters will replace this (and be used in InternetConnectSocketAsync)...
		auto status = future.wait_for(timeout);

		if (status == future_status::timeout)
		{
			cancellation_token = true;
			return ConnectionSpeed::Unknown;
		}
		
	    return future.get();
		
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