// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Sensors.Custom.0.h"

namespace winrt {

namespace Windows::Devices::Sensors::Custom {

struct ICustomSensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensor>
{
    ICustomSensor(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomSensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorReading>
{
    ICustomSensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomSensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorReadingChangedEventArgs>
{
    ICustomSensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomSensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorStatics>
{
    ICustomSensorStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
