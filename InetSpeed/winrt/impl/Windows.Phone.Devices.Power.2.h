// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.Devices.Power.1.h"

namespace winrt {

namespace Windows::Phone::Devices::Power {

struct Battery :
    Windows::Phone::Devices::Power::IBattery
{
    Battery(std::nullptr_t) noexcept {}
    static Windows::Phone::Devices::Power::Battery GetDefault();
};

}

namespace impl {

}

}
