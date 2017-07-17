// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Display.1.h"
#include "Windows.Devices.Sensors.1.h"

namespace winrt {

namespace Windows::Devices::Sensors {

struct Accelerometer :
    Windows::Devices::Sensors::IAccelerometer,
    impl::require<Accelerometer, Windows::Devices::Sensors::IAccelerometer2, Windows::Devices::Sensors::IAccelerometer3, Windows::Devices::Sensors::IAccelerometer4, Windows::Devices::Sensors::IAccelerometerDeviceId>
{
    Accelerometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Accelerometer GetDefault();
    static Windows::Devices::Sensors::Accelerometer GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
};

struct AccelerometerReading :
    Windows::Devices::Sensors::IAccelerometerReading
{
    AccelerometerReading(std::nullptr_t) noexcept {}
};

struct AccelerometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs
{
    AccelerometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AccelerometerShakenEventArgs :
    Windows::Devices::Sensors::IAccelerometerShakenEventArgs
{
    AccelerometerShakenEventArgs(std::nullptr_t) noexcept {}
};

struct ActivitySensor :
    Windows::Devices::Sensors::IActivitySensor
{
    ActivitySensor(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
};

struct ActivitySensorReading :
    Windows::Devices::Sensors::IActivitySensorReading
{
    ActivitySensorReading(std::nullptr_t) noexcept {}
};

struct ActivitySensorReadingChangeReport :
    Windows::Devices::Sensors::IActivitySensorReadingChangeReport
{
    ActivitySensorReadingChangeReport(std::nullptr_t) noexcept {}
};

struct ActivitySensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs
{
    ActivitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct ActivitySensorTriggerDetails :
    Windows::Devices::Sensors::IActivitySensorTriggerDetails
{
    ActivitySensorTriggerDetails(std::nullptr_t) noexcept {}
};

struct Altimeter :
    Windows::Devices::Sensors::IAltimeter
{
    Altimeter(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Altimeter GetDefault();
};

struct AltimeterReading :
    Windows::Devices::Sensors::IAltimeterReading
{
    AltimeterReading(std::nullptr_t) noexcept {}
};

struct AltimeterReadingChangedEventArgs :
    Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs
{
    AltimeterReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Barometer :
    Windows::Devices::Sensors::IBarometer
{
    Barometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Barometer GetDefault();
};

struct BarometerReading :
    Windows::Devices::Sensors::IBarometerReading
{
    BarometerReading(std::nullptr_t) noexcept {}
};

struct BarometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IBarometerReadingChangedEventArgs
{
    BarometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Compass :
    Windows::Devices::Sensors::ICompass,
    impl::require<Compass, Windows::Devices::Sensors::ICompass2, Windows::Devices::Sensors::ICompassDeviceId>
{
    Compass(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Compass GetDefault();
};

struct CompassReading :
    Windows::Devices::Sensors::ICompassReading,
    impl::require<CompassReading, Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>
{
    CompassReading(std::nullptr_t) noexcept {}
};

struct CompassReadingChangedEventArgs :
    Windows::Devices::Sensors::ICompassReadingChangedEventArgs
{
    CompassReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Gyrometer :
    Windows::Devices::Sensors::IGyrometer,
    impl::require<Gyrometer, Windows::Devices::Sensors::IGyrometer2, Windows::Devices::Sensors::IGyrometerDeviceId>
{
    Gyrometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Gyrometer GetDefault();
};

struct GyrometerReading :
    Windows::Devices::Sensors::IGyrometerReading
{
    GyrometerReading(std::nullptr_t) noexcept {}
};

struct GyrometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs
{
    GyrometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Inclinometer :
    Windows::Devices::Sensors::IInclinometer,
    impl::require<Inclinometer, Windows::Devices::Sensors::IInclinometer2, Windows::Devices::Sensors::IInclinometerDeviceId>
{
    Inclinometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Inclinometer GetDefault();
    static Windows::Devices::Sensors::Inclinometer GetDefaultForRelativeReadings();
    static Windows::Devices::Sensors::Inclinometer GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
};

struct InclinometerReading :
    Windows::Devices::Sensors::IInclinometerReading,
    impl::require<InclinometerReading, Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>
{
    InclinometerReading(std::nullptr_t) noexcept {}
};

struct InclinometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs
{
    InclinometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct LightSensor :
    Windows::Devices::Sensors::ILightSensor,
    impl::require<LightSensor, Windows::Devices::Sensors::ILightSensorDeviceId>
{
    LightSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::LightSensor GetDefault();
};

struct LightSensorReading :
    Windows::Devices::Sensors::ILightSensorReading
{
    LightSensorReading(std::nullptr_t) noexcept {}
};

struct LightSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs
{
    LightSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Magnetometer :
    Windows::Devices::Sensors::IMagnetometer,
    impl::require<Magnetometer, Windows::Devices::Sensors::IMagnetometer2, Windows::Devices::Sensors::IMagnetometerDeviceId>
{
    Magnetometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Magnetometer GetDefault();
};

struct MagnetometerReading :
    Windows::Devices::Sensors::IMagnetometerReading
{
    MagnetometerReading(std::nullptr_t) noexcept {}
};

struct MagnetometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs
{
    MagnetometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct OrientationSensor :
    Windows::Devices::Sensors::IOrientationSensor,
    impl::require<OrientationSensor, Windows::Devices::Sensors::IOrientationSensor2, Windows::Devices::Sensors::IOrientationSensorDeviceId>
{
    OrientationSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::OrientationSensor GetDefault();
    static Windows::Devices::Sensors::OrientationSensor GetDefaultForRelativeReadings();
    static Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
    static Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
};

struct OrientationSensorReading :
    Windows::Devices::Sensors::IOrientationSensorReading,
    impl::require<OrientationSensorReading, Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>
{
    OrientationSensorReading(std::nullptr_t) noexcept {}
};

struct OrientationSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs
{
    OrientationSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Pedometer :
    Windows::Devices::Sensors::IPedometer,
    impl::require<Pedometer, Windows::Devices::Sensors::IPedometer2>
{
    Pedometer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
};

struct PedometerDataThreshold :
    Windows::Devices::Sensors::ISensorDataThreshold
{
    PedometerDataThreshold(std::nullptr_t) noexcept {}
    PedometerDataThreshold(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal);
};

struct PedometerReading :
    Windows::Devices::Sensors::IPedometerReading
{
    PedometerReading(std::nullptr_t) noexcept {}
};

struct PedometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IPedometerReadingChangedEventArgs
{
    PedometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct ProximitySensor :
    Windows::Devices::Sensors::IProximitySensor
{
    ProximitySensor(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Devices::Sensors::ProximitySensor FromId(param::hstring const& sensorId);
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
};

struct ProximitySensorDataThreshold :
    Windows::Devices::Sensors::ISensorDataThreshold
{
    ProximitySensorDataThreshold(std::nullptr_t) noexcept {}
    ProximitySensorDataThreshold(Windows::Devices::Sensors::ProximitySensor const& sensor);
};

struct ProximitySensorDisplayOnOffController :
    Windows::Foundation::IClosable
{
    ProximitySensorDisplayOnOffController(std::nullptr_t) noexcept {}
};

struct ProximitySensorReading :
    Windows::Devices::Sensors::IProximitySensorReading
{
    ProximitySensorReading(std::nullptr_t) noexcept {}
};

struct ProximitySensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs
{
    ProximitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct SensorDataThresholdTriggerDetails :
    Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails
{
    SensorDataThresholdTriggerDetails(std::nullptr_t) noexcept {}
};

struct SensorQuaternion :
    Windows::Devices::Sensors::ISensorQuaternion
{
    SensorQuaternion(std::nullptr_t) noexcept {}
};

struct SensorRotationMatrix :
    Windows::Devices::Sensors::ISensorRotationMatrix
{
    SensorRotationMatrix(std::nullptr_t) noexcept {}
};

struct SimpleOrientationSensor :
    Windows::Devices::Sensors::ISimpleOrientationSensor,
    impl::require<SimpleOrientationSensor, Windows::Devices::Sensors::ISimpleOrientationSensor2, Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>
{
    SimpleOrientationSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::SimpleOrientationSensor GetDefault();
};

struct SimpleOrientationSensorOrientationChangedEventArgs :
    Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs
{
    SimpleOrientationSensorOrientationChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
