// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Radios.1.h"

namespace winrt {

namespace Windows::Devices::Radios {

struct Radio :
    Windows::Devices::Radios::IRadio
{
    Radio(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> GetRadiosAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> RequestAccessAsync();
};

}

namespace impl {

}

}
