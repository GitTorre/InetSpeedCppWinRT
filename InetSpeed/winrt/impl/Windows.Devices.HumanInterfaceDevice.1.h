// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.HumanInterfaceDevice.0.h"

namespace winrt {

namespace Windows::Devices::HumanInterfaceDevice {

struct IHidBooleanControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControl>
{
    IHidBooleanControl(std::nullptr_t = nullptr) noexcept {}
};

struct IHidBooleanControlDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControlDescription>
{
    IHidBooleanControlDescription(std::nullptr_t = nullptr) noexcept {}
};

struct IHidBooleanControlDescription2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControlDescription2>
{
    IHidBooleanControlDescription2(std::nullptr_t = nullptr) noexcept {}
};

struct IHidCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidCollection>
{
    IHidCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHidDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidDevice>,
    impl::require<IHidDevice, Windows::Foundation::IClosable>
{
    IHidDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IHidDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidDeviceStatics>
{
    IHidDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHidFeatureReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidFeatureReport>
{
    IHidFeatureReport(std::nullptr_t = nullptr) noexcept {}
};

struct IHidInputReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidInputReport>
{
    IHidInputReport(std::nullptr_t = nullptr) noexcept {}
};

struct IHidInputReportReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidInputReportReceivedEventArgs>
{
    IHidInputReportReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHidNumericControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidNumericControl>
{
    IHidNumericControl(std::nullptr_t = nullptr) noexcept {}
};

struct IHidNumericControlDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidNumericControlDescription>
{
    IHidNumericControlDescription(std::nullptr_t = nullptr) noexcept {}
};

struct IHidOutputReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidOutputReport>
{
    IHidOutputReport(std::nullptr_t = nullptr) noexcept {}
};

}

}
