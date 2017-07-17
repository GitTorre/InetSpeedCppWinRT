// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Lights.0.h"

namespace winrt {

namespace Windows::Devices::Lights {

struct ILamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILamp>,
    impl::require<ILamp, Windows::Foundation::IClosable>
{
    ILamp(std::nullptr_t = nullptr) noexcept {}
};

struct ILampAvailabilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILampAvailabilityChangedEventArgs>
{
    ILampAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILampStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILampStatics>
{
    ILampStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
