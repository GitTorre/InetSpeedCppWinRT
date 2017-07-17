// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Devices.Portable.0.h"

namespace winrt {

namespace Windows::Devices::Portable {

struct IServiceDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceDeviceStatics>
{
    IServiceDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageDeviceStatics>
{
    IStorageDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
