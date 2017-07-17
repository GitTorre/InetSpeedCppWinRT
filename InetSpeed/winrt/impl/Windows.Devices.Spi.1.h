// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Spi.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Spi.0.h"

namespace winrt {

namespace Windows::Devices::Spi {

struct ISpiBusInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiBusInfo>
{
    ISpiBusInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiConnectionSettings>
{
    ISpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiConnectionSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiConnectionSettingsFactory>
{
    ISpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiController>
{
    ISpiController(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiControllerStatics>
{
    ISpiControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDevice>,
    impl::require<ISpiDevice, Windows::Foundation::IClosable>
{
    ISpiDevice(std::nullptr_t = nullptr) noexcept {}
};

struct ISpiDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDeviceStatics>
{
    ISpiDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
