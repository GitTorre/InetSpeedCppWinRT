// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.WiFiDirect.1.h"

namespace winrt {

namespace Windows::Devices::WiFiDirect {

struct WiFiDirectAdvertisement :
    Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement,
    impl::require<WiFiDirectAdvertisement, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
{
    WiFiDirectAdvertisement(std::nullptr_t) noexcept {}
};

struct WiFiDirectAdvertisementPublisher :
    Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher
{
    WiFiDirectAdvertisementPublisher(std::nullptr_t) noexcept {}
    WiFiDirectAdvertisementPublisher();
};

struct WiFiDirectAdvertisementPublisherStatusChangedEventArgs :
    Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    WiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WiFiDirectConnectionListener :
    Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener
{
    WiFiDirectConnectionListener(std::nullptr_t) noexcept {}
    WiFiDirectConnectionListener();
};

struct WiFiDirectConnectionParameters :
    Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters,
    impl::require<WiFiDirectConnectionParameters, Windows::Devices::Enumeration::IDevicePairingSettings, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>
{
    WiFiDirectConnectionParameters(std::nullptr_t) noexcept {}
    WiFiDirectConnectionParameters();
    static Windows::Devices::Enumeration::DevicePairingKinds GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod);
};

struct WiFiDirectConnectionRequest :
    Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest
{
    WiFiDirectConnectionRequest(std::nullptr_t) noexcept {}
};

struct WiFiDirectConnectionRequestedEventArgs :
    Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs
{
    WiFiDirectConnectionRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WiFiDirectDevice :
    Windows::Devices::WiFiDirect::IWiFiDirectDevice
{
    WiFiDirectDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters);
};

struct WiFiDirectInformationElement :
    Windows::Devices::WiFiDirect::IWiFiDirectInformationElement
{
    WiFiDirectInformationElement(std::nullptr_t) noexcept {}
    WiFiDirectInformationElement();
    static Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation);
};

struct WiFiDirectLegacySettings :
    Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings
{
    WiFiDirectLegacySettings(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
