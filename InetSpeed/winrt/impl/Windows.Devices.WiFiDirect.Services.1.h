// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.WiFiDirect.Services.0.h"

namespace winrt {

namespace Windows::Devices::WiFiDirect::Services {

struct IWiFiDirectService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectService>
{
    IWiFiDirectService(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceAdvertiser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAdvertiser>
{
    IWiFiDirectServiceAdvertiser(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceAdvertiserFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAdvertiserFactory>
{
    IWiFiDirectServiceAdvertiserFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
{
    IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceProvisioningInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceProvisioningInfo>
{
    IWiFiDirectServiceProvisioningInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceRemotePortAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceRemotePortAddedEventArgs>
{
    IWiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSession>,
    impl::require<IWiFiDirectServiceSession, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSession(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceSessionDeferredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionDeferredEventArgs>
{
    IWiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceSessionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionRequest>,
    impl::require<IWiFiDirectServiceSessionRequest, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSessionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceSessionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionRequestedEventArgs>
{
    IWiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceStatics>
{
    IWiFiDirectServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
