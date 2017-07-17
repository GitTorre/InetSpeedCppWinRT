// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Background.0.h"

namespace winrt {

namespace Windows::Devices::Background {

struct IDeviceServicingDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceServicingDetails>
{
    IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceUseDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUseDetails>
{
    IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
