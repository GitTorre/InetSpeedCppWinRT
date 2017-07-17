// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Sensors.Custom.1.h"

namespace winrt {

namespace Windows::Devices::Sensors::Custom {

struct CustomSensor :
    Windows::Devices::Sensors::Custom::ICustomSensor
{
    CustomSensor(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(GUID const& interfaceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> FromIdAsync(param::hstring const& sensorId);
};

struct CustomSensorReading :
    Windows::Devices::Sensors::Custom::ICustomSensorReading
{
    CustomSensorReading(std::nullptr_t) noexcept {}
};

struct CustomSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
{
    CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
