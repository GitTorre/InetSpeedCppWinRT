// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.HumanInterfaceDevice.1.h"

namespace winrt {

namespace Windows::Devices::HumanInterfaceDevice {

struct HidBooleanControl :
    Windows::Devices::HumanInterfaceDevice::IHidBooleanControl
{
    HidBooleanControl(std::nullptr_t) noexcept {}
};

struct HidBooleanControlDescription :
    Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription,
    impl::require<HidBooleanControlDescription, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
{
    HidBooleanControlDescription(std::nullptr_t) noexcept {}
};

struct HidCollection :
    Windows::Devices::HumanInterfaceDevice::IHidCollection
{
    HidCollection(std::nullptr_t) noexcept {}
};

struct HidDevice :
    Windows::Devices::HumanInterfaceDevice::IHidDevice
{
    HidDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId);
    static hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> FromIdAsync(param::hstring const& deviceId, Windows::Storage::FileAccessMode const& accessMode);
};

struct HidFeatureReport :
    Windows::Devices::HumanInterfaceDevice::IHidFeatureReport
{
    HidFeatureReport(std::nullptr_t) noexcept {}
};

struct HidInputReport :
    Windows::Devices::HumanInterfaceDevice::IHidInputReport
{
    HidInputReport(std::nullptr_t) noexcept {}
};

struct HidInputReportReceivedEventArgs :
    Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs
{
    HidInputReportReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct HidNumericControl :
    Windows::Devices::HumanInterfaceDevice::IHidNumericControl
{
    HidNumericControl(std::nullptr_t) noexcept {}
};

struct HidNumericControlDescription :
    Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription
{
    HidNumericControlDescription(std::nullptr_t) noexcept {}
};

struct HidOutputReport :
    Windows::Devices::HumanInterfaceDevice::IHidOutputReport
{
    HidOutputReport(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
