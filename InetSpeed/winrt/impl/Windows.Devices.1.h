// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Adc.Provider.0.h"
#include "Windows.Devices.Gpio.Provider.0.h"
#include "Windows.Devices.I2c.Provider.0.h"
#include "Windows.Devices.Pwm.Provider.0.h"
#include "Windows.Devices.Spi.Provider.0.h"
#include "Windows.Devices.0.h"

namespace winrt {

namespace Windows::Devices {

struct ILowLevelDevicesAggregateProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesAggregateProvider>
{
    ILowLevelDevicesAggregateProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLevelDevicesAggregateProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesAggregateProviderFactory>
{
    ILowLevelDevicesAggregateProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLevelDevicesController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesController>
{
    ILowLevelDevicesController(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLevelDevicesControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesControllerStatics>
{
    ILowLevelDevicesControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
