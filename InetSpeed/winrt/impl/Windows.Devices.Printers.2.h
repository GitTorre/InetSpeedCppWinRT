// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Devices.Printers.1.h"

namespace winrt {

namespace Windows::Devices::Printers {

struct Print3DDevice :
    Windows::Devices::Printers::IPrint3DDevice
{
    Print3DDevice(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct PrintSchema :
    Windows::Devices::Printers::IPrintSchema
{
    PrintSchema(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
