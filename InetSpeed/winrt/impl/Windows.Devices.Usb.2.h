// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.Usb.1.h"

namespace winrt {

namespace Windows::Devices::Usb {

struct UsbBulkInEndpointDescriptor :
    Windows::Devices::Usb::IUsbBulkInEndpointDescriptor
{
    UsbBulkInEndpointDescriptor(std::nullptr_t) noexcept {}
};

struct UsbBulkInPipe :
    Windows::Devices::Usb::IUsbBulkInPipe
{
    UsbBulkInPipe(std::nullptr_t) noexcept {}
};

struct UsbBulkOutEndpointDescriptor :
    Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor
{
    UsbBulkOutEndpointDescriptor(std::nullptr_t) noexcept {}
};

struct UsbBulkOutPipe :
    Windows::Devices::Usb::IUsbBulkOutPipe
{
    UsbBulkOutPipe(std::nullptr_t) noexcept {}
};

struct UsbConfiguration :
    Windows::Devices::Usb::IUsbConfiguration
{
    UsbConfiguration(std::nullptr_t) noexcept {}
};

struct UsbConfigurationDescriptor :
    Windows::Devices::Usb::IUsbConfigurationDescriptor
{
    UsbConfigurationDescriptor(std::nullptr_t) noexcept {}
    static bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed);
    static Windows::Devices::Usb::UsbConfigurationDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
};

struct UsbControlRequestType :
    Windows::Devices::Usb::IUsbControlRequestType
{
    UsbControlRequestType(std::nullptr_t) noexcept {}
    UsbControlRequestType();
};

struct UsbDescriptor :
    Windows::Devices::Usb::IUsbDescriptor
{
    UsbDescriptor(std::nullptr_t) noexcept {}
};

struct UsbDevice :
    Windows::Devices::Usb::IUsbDevice
{
    UsbDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID const& winUsbInterfaceClass);
    static hstring GetDeviceSelector(GUID const& winUsbInterfaceClass);
    static hstring GetDeviceSelector(uint32_t vendorId, uint32_t productId);
    static hstring GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> FromIdAsync(param::hstring const& deviceId);
};

struct UsbDeviceClass :
    Windows::Devices::Usb::IUsbDeviceClass
{
    UsbDeviceClass(std::nullptr_t) noexcept {}
    UsbDeviceClass();
};

struct UsbDeviceClasses :
    Windows::Devices::Usb::IUsbDeviceClasses
{
    UsbDeviceClasses(std::nullptr_t) noexcept {}
    static Windows::Devices::Usb::UsbDeviceClass CdcControl();
    static Windows::Devices::Usb::UsbDeviceClass Physical();
    static Windows::Devices::Usb::UsbDeviceClass PersonalHealthcare();
    static Windows::Devices::Usb::UsbDeviceClass ActiveSync();
    static Windows::Devices::Usb::UsbDeviceClass PalmSync();
    static Windows::Devices::Usb::UsbDeviceClass DeviceFirmwareUpdate();
    static Windows::Devices::Usb::UsbDeviceClass Irda();
    static Windows::Devices::Usb::UsbDeviceClass Measurement();
    static Windows::Devices::Usb::UsbDeviceClass VendorSpecific();
};

struct UsbDeviceDescriptor :
    Windows::Devices::Usb::IUsbDeviceDescriptor
{
    UsbDeviceDescriptor(std::nullptr_t) noexcept {}
};

struct UsbEndpointDescriptor :
    Windows::Devices::Usb::IUsbEndpointDescriptor
{
    UsbEndpointDescriptor(std::nullptr_t) noexcept {}
    static bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed);
    static Windows::Devices::Usb::UsbEndpointDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
};

struct UsbInterface :
    Windows::Devices::Usb::IUsbInterface
{
    UsbInterface(std::nullptr_t) noexcept {}
};

struct UsbInterfaceDescriptor :
    Windows::Devices::Usb::IUsbInterfaceDescriptor
{
    UsbInterfaceDescriptor(std::nullptr_t) noexcept {}
    static bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed);
    static Windows::Devices::Usb::UsbInterfaceDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
};

struct UsbInterfaceSetting :
    Windows::Devices::Usb::IUsbInterfaceSetting
{
    UsbInterfaceSetting(std::nullptr_t) noexcept {}
};

struct UsbInterruptInEndpointDescriptor :
    Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor
{
    UsbInterruptInEndpointDescriptor(std::nullptr_t) noexcept {}
};

struct UsbInterruptInEventArgs :
    Windows::Devices::Usb::IUsbInterruptInEventArgs
{
    UsbInterruptInEventArgs(std::nullptr_t) noexcept {}
};

struct UsbInterruptInPipe :
    Windows::Devices::Usb::IUsbInterruptInPipe
{
    UsbInterruptInPipe(std::nullptr_t) noexcept {}
};

struct UsbInterruptOutEndpointDescriptor :
    Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor
{
    UsbInterruptOutEndpointDescriptor(std::nullptr_t) noexcept {}
};

struct UsbInterruptOutPipe :
    Windows::Devices::Usb::IUsbInterruptOutPipe
{
    UsbInterruptOutPipe(std::nullptr_t) noexcept {}
};

struct UsbSetupPacket :
    Windows::Devices::Usb::IUsbSetupPacket
{
    UsbSetupPacket(std::nullptr_t) noexcept {}
    UsbSetupPacket();
    UsbSetupPacket(Windows::Storage::Streams::IBuffer const& eightByteBuffer);
};

}

namespace impl {

}

}
