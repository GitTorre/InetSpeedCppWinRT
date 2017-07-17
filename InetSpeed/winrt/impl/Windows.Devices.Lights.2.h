// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Lights.1.h"

namespace winrt {

namespace Windows::Devices::Lights {

struct Lamp :
    Windows::Devices::Lights::ILamp
{
    Lamp(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> GetDefaultAsync();
};

struct LampAvailabilityChangedEventArgs :
    Windows::Devices::Lights::ILampAvailabilityChangedEventArgs
{
    LampAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
