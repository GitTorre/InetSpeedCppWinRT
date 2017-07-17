// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.Connectivity.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Devices.WiFi.1.h"

namespace winrt {

namespace Windows::Devices::WiFi {

struct WiFiAdapter :
    Windows::Devices::WiFi::IWiFiAdapter
{
    WiFiAdapter(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> FindAllAdaptersAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> RequestAccessAsync();
};

struct WiFiAvailableNetwork :
    Windows::Devices::WiFi::IWiFiAvailableNetwork
{
    WiFiAvailableNetwork(std::nullptr_t) noexcept {}
};

struct WiFiConnectionResult :
    Windows::Devices::WiFi::IWiFiConnectionResult
{
    WiFiConnectionResult(std::nullptr_t) noexcept {}
};

struct WiFiNetworkReport :
    Windows::Devices::WiFi::IWiFiNetworkReport
{
    WiFiNetworkReport(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
