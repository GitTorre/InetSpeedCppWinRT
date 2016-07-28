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

	if (roundtriptime <= 0.0014)
	{
		return ConnectionSpeed::High;
	}

	if (roundtriptime > 0.0014 && roundtriptime < 0.14)
	{
		return ConnectionSpeed::Average;
	}

	return ConnectionSpeed::Low;
}

future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync()
{
	int retries = 4;
	double currentSpeed = 0.0;

	ConnectionType connectionType = InternetConnectionState::GetConnectionType();
	
	/* Need to figure out a timeout for when this becomes a component - API calls can only take so long....
	if (connectionType == ConnectionType::LAN)
	{
		//task_timeout_ms = 1000;
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

	return std::async(std::launch::async, []() -> ConnectionSpeed
	{
		return InternetConnectionState::InternetConnectSocketAsync().get();
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

	return std::async(std::launch::async, []() -> ConnectionSpeed
	{
		return InternetConnectSocketAsync().get();
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