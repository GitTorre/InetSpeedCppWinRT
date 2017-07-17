// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

struct IGattCharacteristic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic>
{
    IGattCharacteristic(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic2>,
    impl::require<IGattCharacteristic2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    IGattCharacteristic2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristic3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic3>
{
    IGattCharacteristic3(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicStatics>
{
    IGattCharacteristicStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicUuidsStatics>
{
    IGattCharacteristicUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicUuidsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicUuidsStatics2>
{
    IGattCharacteristicUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicsResult>
{
    IGattCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattClientNotificationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattClientNotificationResult>
{
    IGattClientNotificationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptor>
{
    IGattDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDescriptor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptor2>
{
    IGattDescriptor2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorStatics>
{
    IGattDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDescriptorUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorUuidsStatics>
{
    IGattDescriptorUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDescriptorsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorsResult>
{
    IGattDescriptorsResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService>,
    impl::require<IGattDeviceService, Windows::Foundation::IClosable>
{
    IGattDeviceService(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService2>,
    impl::require<IGattDeviceService2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService, Windows::Foundation::IClosable>
{
    IGattDeviceService2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceService3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService3>
{
    IGattDeviceService3(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServiceStatics>
{
    IGattDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceServiceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServiceStatics2>
{
    IGattDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattDeviceServicesResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServicesResult>
{
    IGattDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalCharacteristic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristic>
{
    IGattLocalCharacteristic(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalCharacteristicParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristicParameters>
{
    IGattLocalCharacteristicParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalCharacteristicResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristicResult>
{
    IGattLocalCharacteristicResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptor>
{
    IGattLocalDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalDescriptorParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptorParameters>
{
    IGattLocalDescriptorParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalDescriptorResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptorResult>
{
    IGattLocalDescriptorResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattLocalService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalService>
{
    IGattLocalService(std::nullptr_t = nullptr) noexcept {}
};

struct IGattPresentationFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormat>
{
    IGattPresentationFormat(std::nullptr_t = nullptr) noexcept {}
};

struct IGattPresentationFormatStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatStatics>
{
    IGattPresentationFormatStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattPresentationFormatStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatStatics2>,
    impl::require<IGattPresentationFormatStatics2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
{
    IGattPresentationFormatStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattPresentationFormatTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatTypesStatics>
{
    IGattPresentationFormatTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattProtocolErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattProtocolErrorStatics>
{
    IGattProtocolErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadClientCharacteristicConfigurationDescriptorResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    IGattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadClientCharacteristicConfigurationDescriptorResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    IGattReadClientCharacteristicConfigurationDescriptorResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadRequest>
{
    IGattReadRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadRequestedEventArgs>
{
    IGattReadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadResult>
{
    IGattReadResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReadResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadResult2>
{
    IGattReadResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReliableWriteTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReliableWriteTransaction>
{
    IGattReliableWriteTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct IGattReliableWriteTransaction2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReliableWriteTransaction2>
{
    IGattReliableWriteTransaction2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattRequestStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattRequestStateChangedEventArgs>
{
    IGattRequestStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProvider>
{
    IGattServiceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderAdvertisementStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderAdvertisementStatusChangedEventArgs>
{
    IGattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderAdvertisingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderAdvertisingParameters>
{
    IGattServiceProviderAdvertisingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderResult>
{
    IGattServiceProviderResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderStatics>
{
    IGattServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceUuidsStatics>
{
    IGattServiceUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceUuidsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceUuidsStatics2>
{
    IGattServiceUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSession>
{
    IGattSession(std::nullptr_t = nullptr) noexcept {}
};

struct IGattSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSessionStatics>
{
    IGattSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGattSessionStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSessionStatusChangedEventArgs>
{
    IGattSessionStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattSubscribedClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSubscribedClient>
{
    IGattSubscribedClient(std::nullptr_t = nullptr) noexcept {}
};

struct IGattValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattValueChangedEventArgs>
{
    IGattValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattWriteRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteRequest>
{
    IGattWriteRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IGattWriteRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteRequestedEventArgs>
{
    IGattWriteRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGattWriteResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteResult>
{
    IGattWriteResult(std::nullptr_t = nullptr) noexcept {}
};

}

}
