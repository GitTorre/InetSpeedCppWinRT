// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Input.0.h"

namespace winrt {

namespace Windows::Devices::Input {

struct IKeyboardCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyboardCapabilities>
{
    IKeyboardCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IMouseCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseCapabilities>
{
    IMouseCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IMouseDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseDevice>
{
    IMouseDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IMouseDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseDeviceStatics>
{
    IMouseDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMouseEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseEventArgs>
{
    IMouseEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerDevice>
{
    IPointerDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerDevice2>
{
    IPointerDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerDeviceStatics>
{
    IPointerDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITouchCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITouchCapabilities>
{
    ITouchCapabilities(std::nullptr_t = nullptr) noexcept {}
};

}

}
