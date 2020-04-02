#pragma once
#include "pch.h"
#include "Enums.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Collections;
using namespace Windows::Networking;
using namespace Connectivity;

using namespace std;

namespace InetSpeed
{
	class InternetConnectionState
	{
		static future<ConnectionSpeed> InternetConnectionState::InternetConnectSocketAsync(const atomic_bool& cancelled);
		static ConnectionSpeed InternetConnectionState::GetConnectionSpeed(double roundtriptime);

	public:
		static ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed();
		static ConnectionSpeed InternetConnectionState::GetInternetConnectionSpeed(HostName hostName, UINT port, UINT numTests = 1);
		static bool InternetConnectionState::InternetConnected();
		static double InternetConnectionState::RawSpeed();
		static ConnectionType InternetConnectionState::GetConnectionType();
	};
}