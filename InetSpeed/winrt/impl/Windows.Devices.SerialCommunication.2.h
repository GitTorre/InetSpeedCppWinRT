// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.SerialCommunication.1.h"

namespace winrt {

namespace Windows::Devices::SerialCommunication {

struct ErrorReceivedEventArgs :
    Windows::Devices::SerialCommunication::IErrorReceivedEventArgs
{
    ErrorReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct PinChangedEventArgs :
    Windows::Devices::SerialCommunication::IPinChangedEventArgs
{
    PinChangedEventArgs(std::nullptr_t) noexcept {}
};

struct SerialDevice :
    Windows::Devices::SerialCommunication::ISerialDevice
{
    SerialDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& portName);
    static hstring GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> FromIdAsync(param::hstring const& deviceId);
};

}

namespace impl {

}

}
