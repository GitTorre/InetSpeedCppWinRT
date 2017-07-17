// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.Media.DialProtocol.1.h"

namespace winrt {

namespace Windows::Media::DialProtocol {

struct DialApp :
    Windows::Media::DialProtocol::IDialApp
{
    DialApp(std::nullptr_t) noexcept {}
};

struct DialAppStateDetails :
    Windows::Media::DialProtocol::IDialAppStateDetails
{
    DialAppStateDetails(std::nullptr_t) noexcept {}
};

struct DialDevice :
    Windows::Media::DialProtocol::IDialDevice,
    impl::require<DialDevice, Windows::Media::DialProtocol::IDialDevice2>
{
    DialDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(param::hstring const& appName);
    static Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> FromIdAsync(param::hstring const& value);
    static Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device);
};

struct DialDevicePicker :
    Windows::Media::DialProtocol::IDialDevicePicker
{
    DialDevicePicker(std::nullptr_t) noexcept {}
    DialDevicePicker();
};

struct DialDevicePickerFilter :
    Windows::Media::DialProtocol::IDialDevicePickerFilter
{
    DialDevicePickerFilter(std::nullptr_t) noexcept {}
};

struct DialDeviceSelectedEventArgs :
    Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs
{
    DialDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct DialDisconnectButtonClickedEventArgs :
    Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs
{
    DialDisconnectButtonClickedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
