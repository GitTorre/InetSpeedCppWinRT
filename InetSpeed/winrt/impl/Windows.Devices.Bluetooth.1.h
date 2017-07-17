// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Bluetooth.Rfcomm.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Devices.Radios.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Bluetooth.0.h"

namespace winrt {

namespace Windows::Devices::Bluetooth {

struct IBluetoothAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothAdapter>
{
    IBluetoothAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothAdapterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothAdapterStatics>
{
    IBluetoothAdapterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothClassOfDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothClassOfDevice>
{
    IBluetoothClassOfDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothClassOfDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothClassOfDeviceStatics>
{
    IBluetoothClassOfDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice>
{
    IBluetoothDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice2>,
    impl::require<IBluetoothDevice2, Windows::Devices::Bluetooth::IBluetoothDevice>
{
    IBluetoothDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDevice3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice3>,
    impl::require<IBluetoothDevice3, Windows::Devices::Bluetooth::IBluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDevice2>
{
    IBluetoothDevice3(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceId>
{
    IBluetoothDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceStatics2>,
    impl::require<IBluetoothDeviceStatics2, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAppearance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearance>
{
    IBluetoothLEAppearance(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAppearanceCategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceCategoriesStatics>
{
    IBluetoothLEAppearanceCategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAppearanceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceStatics>
{
    IBluetoothLEAppearanceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAppearanceSubcategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceSubcategoriesStatics>
{
    IBluetoothLEAppearanceSubcategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice>
{
    IBluetoothLEDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice2>,
    impl::require<IBluetoothLEDevice2, Windows::Devices::Bluetooth::IBluetoothLEDevice>
{
    IBluetoothLEDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEDevice3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice3>
{
    IBluetoothLEDevice3(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDeviceStatics>
{
    IBluetoothLEDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDeviceStatics2>
{
    IBluetoothLEDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothSignalStrengthFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothSignalStrengthFilter>
{
    IBluetoothSignalStrengthFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothUuidHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothUuidHelperStatics>
{
    IBluetoothUuidHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
