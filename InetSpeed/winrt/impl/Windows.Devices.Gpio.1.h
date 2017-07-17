// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Gpio.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Gpio.0.h"

namespace winrt {

namespace Windows::Devices::Gpio {

struct IGpioChangeCounter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeCounter>,
    impl::require<IGpioChangeCounter, Windows::Foundation::IClosable>
{
    IGpioChangeCounter(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioChangeCounterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeCounterFactory>
{
    IGpioChangeCounterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeReader>,
    impl::require<IGpioChangeReader, Windows::Foundation::IClosable>
{
    IGpioChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioChangeReaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeReaderFactory>
{
    IGpioChangeReaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioController>
{
    IGpioController(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerStatics>
{
    IGpioControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerStatics2>
{
    IGpioControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioPin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPin>,
    impl::require<IGpioPin, Windows::Foundation::IClosable>
{
    IGpioPin(std::nullptr_t = nullptr) noexcept {}
};

struct IGpioPinValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinValueChangedEventArgs>
{
    IGpioPinValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
