// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Custom.0.h"

namespace winrt {

namespace Windows::Devices::Custom {

struct ICustomDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomDevice>
{
    ICustomDevice(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomDeviceStatics>
{
    ICustomDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IIOControlCode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIOControlCode>
{
    IIOControlCode(std::nullptr_t = nullptr) noexcept {}
};

struct IIOControlCodeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIOControlCodeFactory>
{
    IIOControlCodeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownDeviceTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownDeviceTypesStatics>
{
    IKnownDeviceTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
