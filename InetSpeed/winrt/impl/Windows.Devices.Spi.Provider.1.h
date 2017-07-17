// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Spi.Provider.0.h"

namespace winrt {

namespace Windows::Devices::Spi::Provider {

struct IProviderSpiConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderSpiConnectionSettings>
{
    IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IProviderSpiConnectionSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderSpiConnectionSettingsFactory>
{
    IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiControllerProvider>
{
    ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiDeviceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDeviceProvider>,
    impl::require<ISpiDeviceProvider, Windows::Foundation::IClosable>
{
    ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiProvider>
{
    ISpiProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
