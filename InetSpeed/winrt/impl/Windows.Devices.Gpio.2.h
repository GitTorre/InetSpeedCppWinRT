// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Gpio.Provider.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Gpio.1.h"

namespace winrt {

namespace Windows::Devices::Gpio {

struct GpioChangeCount
{
    uint64_t Count;
    Windows::Foundation::TimeSpan RelativeTime;
};

struct GpioChangeRecord
{
    Windows::Foundation::TimeSpan RelativeTime;
    Windows::Devices::Gpio::GpioPinEdge Edge;
};

struct GpioChangeCounter :
    Windows::Devices::Gpio::IGpioChangeCounter
{
    GpioChangeCounter(std::nullptr_t) noexcept {}
    GpioChangeCounter(Windows::Devices::Gpio::GpioPin const& pin);
};

struct GpioChangeReader :
    Windows::Devices::Gpio::IGpioChangeReader
{
    GpioChangeReader(std::nullptr_t) noexcept {}
    GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin);
    GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity);
};

struct GpioController :
    Windows::Devices::Gpio::IGpioController
{
    GpioController(std::nullptr_t) noexcept {}
    static Windows::Devices::Gpio::GpioController GetDefault();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GetDefaultAsync();
};

struct GpioPin :
    Windows::Devices::Gpio::IGpioPin
{
    GpioPin(std::nullptr_t) noexcept {}
};

struct GpioPinValueChangedEventArgs :
    Windows::Devices::Gpio::IGpioPinValueChangedEventArgs
{
    GpioPinValueChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
