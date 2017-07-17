// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Usb.0.h"

namespace winrt {

namespace Windows::Devices::Usb {

struct IUsbBulkInEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkInEndpointDescriptor>
{
    IUsbBulkInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbBulkInPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkInPipe>
{
    IUsbBulkInPipe(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbBulkOutEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkOutEndpointDescriptor>
{
    IUsbBulkOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbBulkOutPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkOutPipe>
{
    IUsbBulkOutPipe(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfiguration>
{
    IUsbConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbConfigurationDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfigurationDescriptor>
{
    IUsbConfigurationDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbConfigurationDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfigurationDescriptorStatics>
{
    IUsbConfigurationDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbControlRequestType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbControlRequestType>
{
    IUsbControlRequestType(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDescriptor>
{
    IUsbDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDevice>,
    impl::require<IUsbDevice, Windows::Foundation::IClosable>
{
    IUsbDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDeviceClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClass>
{
    IUsbDeviceClass(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDeviceClasses :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClasses>
{
    IUsbDeviceClasses(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDeviceClassesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClassesStatics>
{
    IUsbDeviceClassesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDeviceDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceDescriptor>
{
    IUsbDeviceDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceStatics>
{
    IUsbDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbEndpointDescriptor>
{
    IUsbEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbEndpointDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbEndpointDescriptorStatics>
{
    IUsbEndpointDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterface :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterface>
{
    IUsbInterface(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterfaceDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceDescriptor>
{
    IUsbInterfaceDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterfaceDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceDescriptorStatics>
{
    IUsbInterfaceDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterfaceSetting :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceSetting>
{
    IUsbInterfaceSetting(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterruptInEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInEndpointDescriptor>
{
    IUsbInterruptInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterruptInEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInEventArgs>
{
    IUsbInterruptInEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterruptInPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInPipe>
{
    IUsbInterruptInPipe(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterruptOutEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptOutEndpointDescriptor>
{
    IUsbInterruptOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbInterruptOutPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptOutPipe>
{
    IUsbInterruptOutPipe(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbSetupPacket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbSetupPacket>
{
    IUsbSetupPacket(std::nullptr_t = nullptr) noexcept {}
};

struct IUsbSetupPacketFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbSetupPacketFactory>
{
    IUsbSetupPacketFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
