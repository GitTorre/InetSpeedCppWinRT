// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Devices.I2c.Provider.1.h"

namespace winrt {

namespace Windows::Devices::I2c::Provider {

struct ProviderI2cTransferResult
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferStatus Status;
    uint32_t BytesTransferred;
};

struct ProviderI2cConnectionSettings :
    Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings
{
    ProviderI2cConnectionSettings(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
