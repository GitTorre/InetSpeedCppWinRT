// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Embedded.DeviceLockdown.0.h"

namespace winrt {

namespace Windows::Embedded::DeviceLockdown {

struct IDeviceLockdownProfileInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceLockdownProfileInformation>
{
    IDeviceLockdownProfileInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceLockdownProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceLockdownProfileStatics>
{
    IDeviceLockdownProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
