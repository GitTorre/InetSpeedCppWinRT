// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Spi.Provider.1.h"

namespace winrt {

namespace Windows::Devices::Spi::Provider {

struct ProviderSpiConnectionSettings :
    Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings
{
    ProviderSpiConnectionSettings(std::nullptr_t) noexcept {}
    ProviderSpiConnectionSettings(int32_t chipSelectLine);
};

}

namespace impl {

}

}
