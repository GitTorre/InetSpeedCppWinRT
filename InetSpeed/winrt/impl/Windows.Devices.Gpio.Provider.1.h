// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Gpio.Provider.0.h"

namespace winrt {

namespace Windows::Devices::Gpio::Provider {

struct IGpioControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerProvider>
{
    IGpioControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioPinProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProvider>
{
    IGpioPinProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioPinProviderValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProviderValueChangedEventArgs>
{
    IGpioPinProviderValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioPinProviderValueChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProviderValueChangedEventArgsFactory>
{
    IGpioPinProviderValueChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioProvider>
{
    IGpioProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
