// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.Devices.Notification.0.h"

namespace winrt {

namespace Windows::Phone::Devices::Notification {

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
