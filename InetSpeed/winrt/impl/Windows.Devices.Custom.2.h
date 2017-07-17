// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Devices.Custom.1.h"

namespace winrt {

namespace Windows::Devices::Custom {

struct CustomDevice :
    Windows::Devices::Custom::ICustomDevice
{
    CustomDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(GUID const& classGuid);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode);
};

struct IOControlCode :
    Windows::Devices::Custom::IIOControlCode
{
    IOControlCode(std::nullptr_t) noexcept {}
    IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod);
};

struct KnownDeviceTypes
{
    KnownDeviceTypes() = delete;
    static uint16_t Unknown();
};

}

namespace impl {

}

}
