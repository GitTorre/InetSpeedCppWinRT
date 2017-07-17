// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.Devices.Notification.1.h"

namespace winrt {

namespace Windows::Phone::Devices::Notification {

struct VibrationDevice :
    Windows::Phone::Devices::Notification::IVibrationDevice
{
    VibrationDevice(std::nullptr_t) noexcept {}
    static Windows::Phone::Devices::Notification::VibrationDevice GetDefault();
};

}

namespace impl {

}

}
