// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Bluetooth.Advertisement.0.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::Advertisement {

struct IBluetoothLEAdvertisement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisement>
{
    IBluetoothLEAdvertisement(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementBytePattern :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementBytePattern>
{
    IBluetoothLEAdvertisementBytePattern(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementBytePatternFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementBytePatternFactory>
{
    IBluetoothLEAdvertisementBytePatternFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementDataSection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataSection>
{
    IBluetoothLEAdvertisementDataSection(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementDataSectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataSectionFactory>
{
    IBluetoothLEAdvertisementDataSectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementDataTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataTypesStatics>
{
    IBluetoothLEAdvertisementDataTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementFilter>
{
    IBluetoothLEAdvertisementFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementPublisher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisher>
{
    IBluetoothLEAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementPublisherFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherFactory>
{
    IBluetoothLEAdvertisementPublisherFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementPublisherStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>
{
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementReceivedEventArgs>
{
    IBluetoothLEAdvertisementReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcher>
{
    IBluetoothLEAdvertisementWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcherFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherFactory>
{
    IBluetoothLEAdvertisementWatcherFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcherStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherStoppedEventArgs>
{
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEManufacturerData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEManufacturerData>
{
    IBluetoothLEManufacturerData(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEManufacturerDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEManufacturerDataFactory>
{
    IBluetoothLEManufacturerDataFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
