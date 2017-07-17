// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Adc.Provider.0.h"

namespace winrt {

namespace Windows::Devices::Adc::Provider {

struct IAdcControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcControllerProvider>
{
    IAdcControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IAdcProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcProvider>
{
    IAdcProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
