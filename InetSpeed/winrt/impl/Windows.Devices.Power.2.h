// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Power.1.h"
#include "Windows.Devices.Power.1.h"

namespace winrt {

namespace Windows::Devices::Power {

struct Battery :
    Windows::Devices::Power::IBattery
{
    Battery(std::nullptr_t) noexcept {}
    static Windows::Devices::Power::Battery AggregateBattery();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct BatteryReport :
    Windows::Devices::Power::IBatteryReport
{
    BatteryReport(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
