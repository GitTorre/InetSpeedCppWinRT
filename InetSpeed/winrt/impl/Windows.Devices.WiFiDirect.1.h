// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.WiFiDirect.0.h"

namespace winrt {

namespace Windows::Devices::WiFiDirect {

struct IWiFiDirectAdvertisement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisement>
{
    IWiFiDirectAdvertisement(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectAdvertisement2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisement2>
{
    IWiFiDirectAdvertisement2(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectAdvertisementPublisher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisementPublisher>
{
    IWiFiDirectAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectAdvertisementPublisherStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
{
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionListener>
{
    IWiFiDirectConnectionListener(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParameters>
{
    IWiFiDirectConnectionParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionParameters2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParameters2>
{
    IWiFiDirectConnectionParameters2(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionParametersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParametersStatics>
{
    IWiFiDirectConnectionParametersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionRequest>,
    impl::require<IWiFiDirectConnectionRequest, Windows::Foundation::IClosable>
{
    IWiFiDirectConnectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectConnectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionRequestedEventArgs>
{
    IWiFiDirectConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDevice>,
    impl::require<IWiFiDirectDevice, Windows::Foundation::IClosable>
{
    IWiFiDirectDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDeviceStatics>
{
    IWiFiDirectDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDeviceStatics2>
{
    IWiFiDirectDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectInformationElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectInformationElement>
{
    IWiFiDirectInformationElement(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectInformationElementStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectInformationElementStatics>
{
    IWiFiDirectInformationElementStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWiFiDirectLegacySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectLegacySettings>
{
    IWiFiDirectLegacySettings(std::nullptr_t = nullptr) noexcept {}
};

}

}
