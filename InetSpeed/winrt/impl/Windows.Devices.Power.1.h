// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Power.0.h"
#include "Windows.Devices.Power.0.h"

namespace winrt {

namespace Windows::Devices::Power {

struct IBattery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBattery>
{
    IBattery(std::nullptr_t = nullptr) noexcept {}
};

struct IBatteryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBatteryReport>
{
    IBatteryReport(std::nullptr_t = nullptr) noexcept {}
};

struct IBatteryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBatteryStatics>
{
    IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
