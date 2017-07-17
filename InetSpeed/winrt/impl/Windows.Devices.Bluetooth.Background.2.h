// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.1.h"
#include "Windows.Devices.Bluetooth.Advertisement.1.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"
#include "Windows.Devices.Bluetooth.Rfcomm.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Devices.Bluetooth.Background.1.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::Background {

struct BluetoothLEAdvertisementPublisherTriggerDetails :
    Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails
{
    BluetoothLEAdvertisementPublisherTriggerDetails(std::nullptr_t) noexcept {}
};

struct BluetoothLEAdvertisementWatcherTriggerDetails :
    Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails
{
    BluetoothLEAdvertisementWatcherTriggerDetails(std::nullptr_t) noexcept {}
};

struct GattCharacteristicNotificationTriggerDetails :
    Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails,
    impl::require<GattCharacteristicNotificationTriggerDetails, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
{
    GattCharacteristicNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct GattServiceProviderConnection :
    Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection
{
    GattServiceProviderConnection(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> AllServices();
};

struct GattServiceProviderTriggerDetails :
    Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails
{
    GattServiceProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct RfcommConnectionTriggerDetails :
    Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails
{
    RfcommConnectionTriggerDetails(std::nullptr_t) noexcept {}
};

struct RfcommInboundConnectionInformation :
    Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation
{
    RfcommInboundConnectionInformation(std::nullptr_t) noexcept {}
};

struct RfcommOutboundConnectionInformation :
    Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation
{
    RfcommOutboundConnectionInformation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
