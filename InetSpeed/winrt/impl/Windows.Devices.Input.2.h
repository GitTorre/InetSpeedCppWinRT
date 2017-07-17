// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Input.1.h"

namespace winrt {

namespace Windows::Devices::Input {

struct MouseDelta
{
    int32_t X;
    int32_t Y;
};

struct PointerDeviceUsage
{
    uint32_t UsagePage;
    uint32_t Usage;
    int32_t MinLogical;
    int32_t MaxLogical;
    int32_t MinPhysical;
    int32_t MaxPhysical;
    uint32_t Unit;
    float PhysicalMultiplier;
};

struct KeyboardCapabilities :
    Windows::Devices::Input::IKeyboardCapabilities
{
    KeyboardCapabilities(std::nullptr_t) noexcept {}
    KeyboardCapabilities();
};

struct MouseCapabilities :
    Windows::Devices::Input::IMouseCapabilities
{
    MouseCapabilities(std::nullptr_t) noexcept {}
    MouseCapabilities();
};

struct MouseDevice :
    Windows::Devices::Input::IMouseDevice
{
    MouseDevice(std::nullptr_t) noexcept {}
    static Windows::Devices::Input::MouseDevice GetForCurrentView();
};

struct MouseEventArgs :
    Windows::Devices::Input::IMouseEventArgs
{
    MouseEventArgs(std::nullptr_t) noexcept {}
};

struct PointerDevice :
    Windows::Devices::Input::IPointerDevice,
    impl::require<PointerDevice, Windows::Devices::Input::IPointerDevice2>
{
    PointerDevice(std::nullptr_t) noexcept {}
    static Windows::Devices::Input::PointerDevice GetPointerDevice(uint32_t pointerId);
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> GetPointerDevices();
};

struct TouchCapabilities :
    Windows::Devices::Input::ITouchCapabilities
{
    TouchCapabilities(std::nullptr_t) noexcept {}
    TouchCapabilities();
};

}

namespace impl {

}

}
