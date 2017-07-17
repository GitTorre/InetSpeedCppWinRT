// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Devices.Portable.1.h"

namespace winrt {

namespace Windows::Devices::Portable {

struct ServiceDevice
{
    ServiceDevice() = delete;
    static hstring GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType);
    static hstring GetDeviceSelectorFromServiceId(GUID const& serviceId);
};

struct StorageDevice
{
    StorageDevice() = delete;
    static Windows::Storage::StorageFolder FromId(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

}

namespace impl {

}

}
