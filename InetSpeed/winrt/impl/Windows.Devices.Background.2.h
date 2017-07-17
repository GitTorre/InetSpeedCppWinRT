// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Background.1.h"

namespace winrt {

namespace Windows::Devices::Background {

struct DeviceServicingDetails :
    Windows::Devices::Background::IDeviceServicingDetails
{
    DeviceServicingDetails(std::nullptr_t) noexcept {}
};

struct DeviceUseDetails :
    Windows::Devices::Background::IDeviceUseDetails
{
    DeviceUseDetails(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
