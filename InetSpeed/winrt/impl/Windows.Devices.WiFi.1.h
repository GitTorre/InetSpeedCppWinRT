// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.Connectivity.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Devices.WiFi.0.h"

namespace winrt {

namespace Windows::Devices::WiFi {

struct IWiFiAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAdapter>
{
    IWiFiAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiAdapterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAdapterStatics>
{
    IWiFiAdapterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiAvailableNetwork :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAvailableNetwork>
{
    IWiFiAvailableNetwork(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiConnectionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiConnectionResult>
{
    IWiFiConnectionResult(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiNetworkReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiNetworkReport>
{
    IWiFiNetworkReport(std::nullptr_t = nullptr) noexcept {}
};

}

}
