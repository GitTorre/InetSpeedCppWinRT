// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Pwm.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Pwm.0.h"

namespace winrt {

namespace Windows::Devices::Pwm {

struct IPwmController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmController>
{
    IPwmController(std::nullptr_t = nullptr) noexcept {}
};

struct IPwmControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics>
{
    IPwmControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPwmControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics2>
{
    IPwmControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPwmControllerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics3>
{
    IPwmControllerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPwmPin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmPin>,
    impl::require<IPwmPin, Windows::Foundation::IClosable>
{
    IPwmPin(std::nullptr_t = nullptr) noexcept {}
};

}

}
