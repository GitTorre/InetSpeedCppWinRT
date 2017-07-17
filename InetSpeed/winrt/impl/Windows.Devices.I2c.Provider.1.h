// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Devices.I2c.Provider.0.h"

namespace winrt {

namespace Windows::Devices::I2c::Provider {

struct II2cControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cControllerProvider>
{
    II2cControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct II2cDeviceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cDeviceProvider>,
    impl::require<II2cDeviceProvider, Windows::Foundation::IClosable>
{
    II2cDeviceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct II2cProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cProvider>
{
    II2cProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IProviderI2cConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderI2cConnectionSettings>
{
    IProviderI2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

}

}
