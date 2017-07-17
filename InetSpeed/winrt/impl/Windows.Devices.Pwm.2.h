// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Pwm.Provider.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Pwm.1.h"

namespace winrt {

namespace Windows::Devices::Pwm {

struct PwmController :
    Windows::Devices::Pwm::IPwmController
{
    PwmController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& friendlyName);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> FromIdAsync(param::hstring const& deviceId);
};

struct PwmPin :
    Windows::Devices::Pwm::IPwmPin
{
    PwmPin(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
