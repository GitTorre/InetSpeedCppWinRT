// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Printers.0.h"

namespace winrt {

namespace Windows::Devices::Printers {

struct IPrint3DDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DDevice>
{
    IPrint3DDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DDeviceStatics>
{
    IPrint3DDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintSchema :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintSchema>
{
    IPrintSchema(std::nullptr_t = nullptr) noexcept {}
};

}

}
