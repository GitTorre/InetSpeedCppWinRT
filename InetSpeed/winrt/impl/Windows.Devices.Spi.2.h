// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Spi.Provider.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Spi.1.h"

namespace winrt {

namespace Windows::Devices::Spi {

struct SpiBusInfo :
    Windows::Devices::Spi::ISpiBusInfo
{
    SpiBusInfo(std::nullptr_t) noexcept {}
};

struct SpiConnectionSettings :
    Windows::Devices::Spi::ISpiConnectionSettings
{
    SpiConnectionSettings(std::nullptr_t) noexcept {}
    SpiConnectionSettings(int32_t chipSelectLine);
};

struct SpiController :
    Windows::Devices::Spi::ISpiController
{
    SpiController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider);
};

struct SpiDevice :
    Windows::Devices::Spi::ISpiDevice
{
    SpiDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& friendlyName);
    static Windows::Devices::Spi::SpiBusInfo GetBusInfo(param::hstring const& busId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings);
};

}

namespace impl {

}

}
