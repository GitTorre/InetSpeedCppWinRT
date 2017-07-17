// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.SerialCommunication.0.h"

namespace winrt {

namespace Windows::Devices::SerialCommunication {

struct IErrorReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IErrorReceivedEventArgs>
{
    IErrorReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPinChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinChangedEventArgs>
{
    IPinChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISerialDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISerialDevice>,
    impl::require<ISerialDevice, Windows::Foundation::IClosable>
{
    ISerialDevice(std::nullptr_t = nullptr) noexcept {}
};

struct ISerialDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISerialDeviceStatics>
{
    ISerialDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
