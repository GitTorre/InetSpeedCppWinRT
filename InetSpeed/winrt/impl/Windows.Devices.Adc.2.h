// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Adc.Provider.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Adc.1.h"

namespace winrt {

namespace Windows::Devices::Adc {

struct AdcChannel :
    Windows::Devices::Adc::IAdcChannel
{
    AdcChannel(std::nullptr_t) noexcept {}
};

struct AdcController :
    Windows::Devices::Adc::IAdcController
{
    AdcController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> GetDefaultAsync();
};

}

namespace impl {

}

}
