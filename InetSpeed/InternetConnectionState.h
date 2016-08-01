#pragma once
#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Networking;
using namespace Windows::Networking::Connectivity;

using namespace std;

namespace InetSpeed
{
	class InternetConnectionState
	{
		static ConnectionType InternetConnectionState::GetConnectionType();
		static future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync(const std::atomic_bool& cancelled);
		static ConnectionSpeed InternetConnectionState::GetConnectionSpeed(double roundtriptime);

	public:
		static ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed();
		static ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeedWithHostName(HostName hostName);
		static bool InternetConnectionState::InternetConnected();
		static double InternetConnectionState::RawSpeed();
	};
}