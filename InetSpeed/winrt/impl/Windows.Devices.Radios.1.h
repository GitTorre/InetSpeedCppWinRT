// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Radios.0.h"

namespace winrt {

namespace Windows::Devices::Radios {

struct IRadio :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadio>
{
    IRadio(std::nullptr_t = nullptr) noexcept {}
};

struct IRadioStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioStatics>
{
    IRadioStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
