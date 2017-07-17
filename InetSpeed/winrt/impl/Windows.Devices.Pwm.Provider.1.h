// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Pwm.Provider.0.h"

namespace winrt {

namespace Windows::Devices::Pwm::Provider {

struct IPwmControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerProvider>
{
    IPwmControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IPwmProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmProvider>
{
    IPwmProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
