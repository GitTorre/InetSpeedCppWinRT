// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Haptics.0.h"

namespace winrt {

namespace Windows::Devices::Haptics {

struct IKnownSimpleHapticsControllerWaveformsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownSimpleHapticsControllerWaveformsStatics>
{
    IKnownSimpleHapticsControllerWaveformsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleHapticsController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleHapticsController>
{
    ISimpleHapticsController(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleHapticsControllerFeedback :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleHapticsControllerFeedback>
{
    ISimpleHapticsControllerFeedback(std::nullptr_t = nullptr) noexcept {}
};

struct IVibrationDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVibrationDevice>
{
    IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IVibrationDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVibrationDeviceStatics>
{
    IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
