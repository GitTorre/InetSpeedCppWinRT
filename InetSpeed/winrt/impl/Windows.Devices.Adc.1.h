// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Adc.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Adc.0.h"

namespace winrt {

namespace Windows::Devices::Adc {

struct IAdcChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcChannel>,
    impl::require<IAdcChannel, Windows::Foundation::IClosable>
{
    IAdcChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IAdcController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcController>
{
    IAdcController(std::nullptr_t = nullptr) noexcept {}
};

struct IAdcControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcControllerStatics>
{
    IAdcControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdcControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdcControllerStatics2>
{
    IAdcControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
