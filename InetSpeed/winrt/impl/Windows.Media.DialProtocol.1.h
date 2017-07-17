// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Media.DialProtocol.0.h"

namespace winrt {

namespace Windows::Media::DialProtocol {

struct IDialApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialApp>
{
    IDialApp(std::nullptr_t = nullptr) noexcept {}
};

struct IDialAppStateDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialAppStateDetails>
{
    IDialAppStateDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevice>
{
    IDialDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevice2>
{
    IDialDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevicePicker>
{
    IDialDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevicePickerFilter>
{
    IDialDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDeviceSelectedEventArgs>
{
    IDialDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDeviceStatics>
{
    IDialDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDialDisconnectButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDisconnectButtonClickedEventArgs>
{
    IDialDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
