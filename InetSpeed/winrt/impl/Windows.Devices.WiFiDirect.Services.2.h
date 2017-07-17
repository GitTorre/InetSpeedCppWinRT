// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.WiFiDirect.Services.1.h"

namespace winrt {

namespace Windows::Devices::WiFiDirect::Services {

struct WiFiDirectService :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectService
{
    WiFiDirectService(std::nullptr_t) noexcept {}
    static hstring GetSelector(param::hstring const& serviceName);
    static hstring GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> FromIdAsync(param::hstring const& deviceId);
};

struct WiFiDirectServiceAdvertiser :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser
{
    WiFiDirectServiceAdvertiser(std::nullptr_t) noexcept {}
    WiFiDirectServiceAdvertiser(param::hstring const& serviceName);
};

struct WiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    WiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceProvisioningInfo :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo
{
    WiFiDirectServiceProvisioningInfo(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceRemotePortAddedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs
{
    WiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceSession :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession
{
    WiFiDirectServiceSession(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceSessionDeferredEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs
{
    WiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceSessionRequest :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest
{
    WiFiDirectServiceSessionRequest(std::nullptr_t) noexcept {}
};

struct WiFiDirectServiceSessionRequestedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs
{
    WiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
