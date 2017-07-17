// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Media.Casting.0.h"

namespace winrt {

namespace Windows::Media::Casting {

struct ICastingConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingConnection>,
    impl::require<ICastingConnection, Windows::Foundation::IClosable>
{
    ICastingConnection(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingConnectionErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingConnectionErrorOccurredEventArgs>
{
    ICastingConnectionErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevice>
{
    ICastingDevice(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevicePicker>
{
    ICastingDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevicePickerFilter>
{
    ICastingDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDeviceSelectedEventArgs>
{
    ICastingDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDeviceStatics>
{
    ICastingDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICastingSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingSource>
{
    ICastingSource(std::nullptr_t = nullptr) noexcept {}
};

}

}
