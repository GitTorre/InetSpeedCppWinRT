// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Bluetooth.Advertisement.0.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Bluetooth.Rfcomm.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Bluetooth.Background.0.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::Background {

struct IBluetoothLEAdvertisementPublisherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    IBluetoothLEAdvertisementPublisherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherTriggerDetails>
{
    IBluetoothLEAdvertisementWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerDetails>
{
    IGattCharacteristicNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerDetails2>
{
    IGattCharacteristicNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderConnection>
{
    IGattServiceProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderConnectionStatics>
{
    IGattServiceProviderConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerDetails>
{
    IGattServiceProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommConnectionTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommConnectionTriggerDetails>
{
    IRfcommConnectionTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommInboundConnectionInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommInboundConnectionInformation>
{
    IRfcommInboundConnectionInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommOutboundConnectionInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommOutboundConnectionInformation>
{
    IRfcommOutboundConnectionInformation(std::nullptr_t = nullptr) noexcept {}
};

}

}
