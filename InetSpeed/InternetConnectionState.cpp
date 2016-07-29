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
	if (profile == nullptr) return ConnectionType::None;

	auto interfaceType = profile.NetworkAdapter().IanaInterfaceType();

	// 71 is WiFi & 6 is Ethernet(LAN)
	if (interfaceType == 71)
	{
		return ConnectionType::WiFi;
	}
	else if (interfaceType == 6)
	{
		return ConnectionType::LAN;
	}
	// 243 & 244 is 3G/Mobile
	else if (interfaceType == 243 || interfaceType == 244)
	{
		return ConnectionType::Cellular;
	}
	else
	{
		return ConnectionType::None;
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

future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync()
{
	bool _canceled = false;
	int retries = 4;
	//long long task_timeout_ms = 1000;
	double currentSpeed = 0.0;
	auto connectionType = InternetConnectionState::GetConnectionType();
	
	/* Need to figure out a timeout for when this becomes a component - API calls can only take so long....
	if (connectionType == ConnectionType::LAN)
	{
		//task_timeout_ms = 500;
	}
	*/

	if (connectionType == ConnectionType::Cellular || connectionType == ConnectionType::WiFi)
	{
		retries = 2;
	}

	for (int i = 0; i < retries; ++i)
	{
		if (_serverHost == nullptr || !_custom)
		{
			_serverHost = HostName(_socketTcpWellKnownHostNames[i]);
		}

		//this must complete in a fixed amount of time, cancel otherwise...
		//concurrency::cancellation_token_source tcs;
		//auto token = tcs.get_token();
		//std::chrono::milliseconds timeout(task_timeout_ms);

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
	else
	{
		double rawSpeed = currentSpeed / retries;
		_rawSpeed = rawSpeed;
		return InternetConnectionState::GetConnectionSpeed(rawSpeed);
	}
}

double InternetConnectionState::RawSpeed()
{
	return _rawSpeed;
}

ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed()
{
	if (!InternetConnectionState::InternetConnected())
	{
		return ConnectionSpeed::Unknown;
	}

	_serverHost = nullptr;
	_custom = false;
	auto timeout = std::chrono::seconds(1LL);

	return std::async(std::launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectionState::InternetConnectSocketAsync();
		auto status = future.wait_for(timeout);
		//if shared state is not ready and timeout has elapsed, abandon (?..) future and return Unknown. Else, get() result...
		//this guarantees that the API will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancellation in winrt_await_adapters will replace this since I'll be able to cancel the ConnectAsync co_awaitable operation...
		if (status == future_status::timeout)
		{
			future._Abandon();
			return ConnectionSpeed::Unknown;
		}
		else 
		{
			return future.get();
		}
	}).get();
}

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

	auto timeout = std::chrono::seconds(1LL);

	return std::async(std::launch::async, [&]() -> ConnectionSpeed
	{
		auto future = InternetConnectionState::InternetConnectSocketAsync();
		auto status = future.wait_for(timeout);
		//if shared state is not ready and timeout has elapsed, abandon (?.._Abandon) future and return ConnectionSpeed::Unknown. Else, get() result...
		//this guarantees that this function will return a result in a reasonable amount of time (1s). However, this is a hack...
		//Proper support for cancellation in winrt_await_adapters will replace this since I'll be able to cancel the ConnectAsync co_awaitable operation...
		if (status == future_status::timeout)
		{
			future._Abandon();
			return ConnectionSpeed::Unknown;
		}
		else
		{
			return future.get();
		}
	}).get();
}

bool InternetConnectionState::InternetConnected()
{
	auto internetConnectionProfile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
	if (internetConnectionProfile == nullptr)
	{
		return false;
	}
	else
	{
		if (internetConnectionProfile.GetNetworkConnectivityLevel() == NetworkConnectivityLevel::InternetAccess)
		{
			return true;
		}
	}

	return false;
}

template <typename T>
concurrency::cancellation_token operator * (concurrency::cancellation_token ct, T* async)
{
	ct.register_callback([=]()
	{
		async->Cancel();
	});
	return async;
}
