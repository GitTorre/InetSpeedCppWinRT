// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.1.h"
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

struct GattCharacteristic :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic,
    impl::require<GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
{
    GattCharacteristic(std::nullptr_t) noexcept {}
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
};

struct GattCharacteristicUuids
{
    GattCharacteristicUuids() = delete;
    static GUID BatteryLevel();
    static GUID BloodPressureFeature();
    static GUID BloodPressureMeasurement();
    static GUID BodySensorLocation();
    static GUID CscFeature();
    static GUID CscMeasurement();
    static GUID GlucoseFeature();
    static GUID GlucoseMeasurement();
    static GUID GlucoseMeasurementContext();
    static GUID HeartRateControlPoint();
    static GUID HeartRateMeasurement();
    static GUID IntermediateCuffPressure();
    static GUID IntermediateTemperature();
    static GUID MeasurementInterval();
    static GUID RecordAccessControlPoint();
    static GUID RscFeature();
    static GUID RscMeasurement();
    static GUID SCControlPoint();
    static GUID SensorLocation();
    static GUID TemperatureMeasurement();
    static GUID TemperatureType();
    static GUID AlertCategoryId();
    static GUID AlertCategoryIdBitMask();
    static GUID AlertLevel();
    static GUID AlertNotificationControlPoint();
    static GUID AlertStatus();
    static GUID GapAppearance();
    static GUID BootKeyboardInputReport();
    static GUID BootKeyboardOutputReport();
    static GUID BootMouseInputReport();
    static GUID CurrentTime();
    static GUID CyclingPowerControlPoint();
    static GUID CyclingPowerFeature();
    static GUID CyclingPowerMeasurement();
    static GUID CyclingPowerVector();
    static GUID DateTime();
    static GUID DayDateTime();
    static GUID DayOfWeek();
    static GUID GapDeviceName();
    static GUID DstOffset();
    static GUID ExactTime256();
    static GUID FirmwareRevisionString();
    static GUID HardwareRevisionString();
    static GUID HidControlPoint();
    static GUID HidInformation();
    static GUID Ieee1107320601RegulatoryCertificationDataList();
    static GUID LnControlPoint();
    static GUID LnFeature();
    static GUID LocalTimeInformation();
    static GUID LocationAndSpeed();
    static GUID ManufacturerNameString();
    static GUID ModelNumberString();
    static GUID Navigation();
    static GUID NewAlert();
    static GUID GapPeripheralPreferredConnectionParameters();
    static GUID GapPeripheralPrivacyFlag();
    static GUID PnpId();
    static GUID PositionQuality();
    static GUID ProtocolMode();
    static GUID GapReconnectionAddress();
    static GUID ReferenceTimeInformation();
    static GUID Report();
    static GUID ReportMap();
    static GUID RingerControlPoint();
    static GUID RingerSetting();
    static GUID ScanIntervalWindow();
    static GUID ScanRefresh();
    static GUID SerialNumberString();
    static GUID GattServiceChanged();
    static GUID SoftwareRevisionString();
    static GUID SupportedNewAlertCategory();
    static GUID SupportUnreadAlertCategory();
    static GUID SystemId();
    static GUID TimeAccuracy();
    static GUID TimeSource();
    static GUID TimeUpdateControlPoint();
    static GUID TimeUpdateState();
    static GUID TimeWithDst();
    static GUID TimeZone();
    static GUID TxPowerLevel();
    static GUID UnreadAlertStatus();
};

struct GattCharacteristicsResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult
{
    GattCharacteristicsResult(std::nullptr_t) noexcept {}
};

struct GattClientNotificationResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult
{
    GattClientNotificationResult(std::nullptr_t) noexcept {}
};

struct GattDescriptor :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor,
    impl::require<GattDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
{
    GattDescriptor(std::nullptr_t) noexcept {}
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
};

struct GattDescriptorUuids
{
    GattDescriptorUuids() = delete;
    static GUID CharacteristicAggregateFormat();
    static GUID CharacteristicExtendedProperties();
    static GUID CharacteristicPresentationFormat();
    static GUID CharacteristicUserDescription();
    static GUID ClientCharacteristicConfiguration();
    static GUID ServerCharacteristicConfiguration();
};

struct GattDescriptorsResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult
{
    GattDescriptorsResult(std::nullptr_t) noexcept {}
};

struct GattDeviceService :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService,
    impl::require<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
{
    GattDeviceService(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelectorFromUuid(GUID const& serviceUuid);
    [[deprecated("Use GetDeviceSelectorFromUuid instead of GetDeviceSelectorFromShortId.  For more information, see MSDN.")]] static hstring GetDeviceSelectorFromShortId(uint16_t serviceShortId);
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode);
    static hstring GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId);
    static hstring GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
    static hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid);
    static hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
};

struct GattDeviceServicesResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult
{
    GattDeviceServicesResult(std::nullptr_t) noexcept {}
};

struct GattLocalCharacteristic :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic
{
    GattLocalCharacteristic(std::nullptr_t) noexcept {}
};

struct GattLocalCharacteristicParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters
{
    GattLocalCharacteristicParameters(std::nullptr_t) noexcept {}
    GattLocalCharacteristicParameters();
};

struct GattLocalCharacteristicResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult
{
    GattLocalCharacteristicResult(std::nullptr_t) noexcept {}
};

struct GattLocalDescriptor :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor
{
    GattLocalDescriptor(std::nullptr_t) noexcept {}
};

struct GattLocalDescriptorParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters
{
    GattLocalDescriptorParameters(std::nullptr_t) noexcept {}
    GattLocalDescriptorParameters();
};

struct GattLocalDescriptorResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult
{
    GattLocalDescriptorResult(std::nullptr_t) noexcept {}
};

struct GattLocalService :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService
{
    GattLocalService(std::nullptr_t) noexcept {}
};

struct GattPresentationFormat :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat
{
    GattPresentationFormat(std::nullptr_t) noexcept {}
    static uint8_t BluetoothSigAssignedNumbers();
    static Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description);
};

struct GattPresentationFormatTypes
{
    GattPresentationFormatTypes() = delete;
    static uint8_t Boolean();
    static uint8_t Bit2();
    static uint8_t Nibble();
    static uint8_t UInt8();
    static uint8_t UInt12();
    static uint8_t UInt16();
    static uint8_t UInt24();
    static uint8_t UInt32();
    static uint8_t UInt48();
    static uint8_t UInt64();
    static uint8_t UInt128();
    static uint8_t SInt8();
    static uint8_t SInt12();
    static uint8_t SInt16();
    static uint8_t SInt24();
    static uint8_t SInt32();
    static uint8_t SInt48();
    static uint8_t SInt64();
    static uint8_t SInt128();
    static uint8_t Float32();
    static uint8_t Float64();
    static uint8_t SFloat();
    static uint8_t Float();
    static uint8_t DUInt16();
    static uint8_t Utf8();
    static uint8_t Utf16();
    static uint8_t Struct();
};

struct GattProtocolError
{
    GattProtocolError() = delete;
    static uint8_t InvalidHandle();
    static uint8_t ReadNotPermitted();
    static uint8_t WriteNotPermitted();
    static uint8_t InvalidPdu();
    static uint8_t InsufficientAuthentication();
    static uint8_t RequestNotSupported();
    static uint8_t InvalidOffset();
    static uint8_t InsufficientAuthorization();
    static uint8_t PrepareQueueFull();
    static uint8_t AttributeNotFound();
    static uint8_t AttributeNotLong();
    static uint8_t InsufficientEncryptionKeySize();
    static uint8_t InvalidAttributeValueLength();
    static uint8_t UnlikelyError();
    static uint8_t InsufficientEncryption();
    static uint8_t UnsupportedGroupType();
    static uint8_t InsufficientResources();
};

struct GattReadClientCharacteristicConfigurationDescriptorResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult,
    impl::require<GattReadClientCharacteristicConfigurationDescriptorResult, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    GattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t) noexcept {}
};

struct GattReadRequest :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest
{
    GattReadRequest(std::nullptr_t) noexcept {}
};

struct GattReadRequestedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs
{
    GattReadRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct GattReadResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult,
    impl::require<GattReadResult, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
{
    GattReadResult(std::nullptr_t) noexcept {}
};

struct GattReliableWriteTransaction :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction,
    impl::require<GattReliableWriteTransaction, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
{
    GattReliableWriteTransaction(std::nullptr_t) noexcept {}
    GattReliableWriteTransaction();
};

struct GattRequestStateChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs
{
    GattRequestStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct GattServiceProvider :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider
{
    GattServiceProvider(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> CreateAsync(GUID const& serviceUuid);
};

struct GattServiceProviderAdvertisementStatusChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs
{
    GattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct GattServiceProviderAdvertisingParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters
{
    GattServiceProviderAdvertisingParameters(std::nullptr_t) noexcept {}
    GattServiceProviderAdvertisingParameters();
};

struct GattServiceProviderResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult
{
    GattServiceProviderResult(std::nullptr_t) noexcept {}
};

struct GattServiceUuids
{
    GattServiceUuids() = delete;
    static GUID Battery();
    static GUID BloodPressure();
    static GUID CyclingSpeedAndCadence();
    static GUID GenericAccess();
    static GUID GenericAttribute();
    static GUID Glucose();
    static GUID HealthThermometer();
    static GUID HeartRate();
    static GUID RunningSpeedAndCadence();
    static GUID AlertNotification();
    static GUID CurrentTime();
    static GUID CyclingPower();
    static GUID DeviceInformation();
    static GUID HumanInterfaceDevice();
    static GUID ImmediateAlert();
    static GUID LinkLoss();
    static GUID LocationAndNavigation();
    static GUID NextDstChange();
    static GUID PhoneAlertStatus();
    static GUID ReferenceTimeUpdate();
    static GUID ScanParameters();
    static GUID TxPower();
};

struct GattSession :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession,
    impl::require<GattSession, Windows::Foundation::IClosable>
{
    GattSession(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId);
};

struct GattSessionStatusChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs
{
    GattSessionStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct GattSubscribedClient :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient
{
    GattSubscribedClient(std::nullptr_t) noexcept {}
};

struct GattValueChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs
{
    GattValueChangedEventArgs(std::nullptr_t) noexcept {}
};

struct GattWriteRequest :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest
{
    GattWriteRequest(std::nullptr_t) noexcept {}
};

struct GattWriteRequestedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs
{
    GattWriteRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct GattWriteResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult
{
    GattWriteResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
