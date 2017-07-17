// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.Media.Casting.1.h"

namespace winrt {

namespace Windows::Media::Casting {

struct CastingConnection :
    Windows::Media::Casting::ICastingConnection
{
    CastingConnection(std::nullptr_t) noexcept {}
};

struct CastingConnectionErrorOccurredEventArgs :
    Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs
{
    CastingConnectionErrorOccurredEventArgs(std::nullptr_t) noexcept {}
};

struct CastingDevice :
    Windows::Media::Casting::ICastingDevice
{
    CastingDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type);
    static Windows::Foundation::IAsyncOperation<hstring> GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> FromIdAsync(param::hstring const& value);
    static Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device);
};

struct CastingDevicePicker :
    Windows::Media::Casting::ICastingDevicePicker
{
    CastingDevicePicker(std::nullptr_t) noexcept {}
    CastingDevicePicker();
};

struct CastingDevicePickerFilter :
    Windows::Media::Casting::ICastingDevicePickerFilter
{
    CastingDevicePickerFilter(std::nullptr_t) noexcept {}
};

struct CastingDeviceSelectedEventArgs :
    Windows::Media::Casting::ICastingDeviceSelectedEventArgs
{
    CastingDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct CastingSource :
    Windows::Media::Casting::ICastingSource
{
    CastingSource(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
