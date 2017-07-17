// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Display.0.h"
#include "Windows.Devices.Sensors.0.h"

namespace winrt {

namespace Windows::Devices::Sensors {

struct IAccelerometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometer>
{
    IAccelerometer(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometer2>
{
    IAccelerometer2(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometer3>
{
    IAccelerometer3(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometer4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometer4>
{
    IAccelerometer4(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerDeviceId>
{
    IAccelerometerDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerReading>
{
    IAccelerometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerReadingChangedEventArgs>
{
    IAccelerometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerShakenEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerShakenEventArgs>
{
    IAccelerometerShakenEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerStatics>
{
    IAccelerometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAccelerometerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccelerometerStatics2>
{
    IAccelerometerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensor>
{
    IActivitySensor(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorReading>
{
    IActivitySensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorReadingChangeReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorReadingChangeReport>
{
    IActivitySensorReadingChangeReport(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorReadingChangedEventArgs>
{
    IActivitySensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorStatics>
{
    IActivitySensorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorTriggerDetails>
{
    IActivitySensorTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAltimeter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAltimeter>
{
    IAltimeter(std::nullptr_t = nullptr) noexcept {}
};

struct IAltimeterReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAltimeterReading>
{
    IAltimeterReading(std::nullptr_t = nullptr) noexcept {}
};

struct IAltimeterReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAltimeterReadingChangedEventArgs>
{
    IAltimeterReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAltimeterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAltimeterStatics>
{
    IAltimeterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBarometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarometer>
{
    IBarometer(std::nullptr_t = nullptr) noexcept {}
};

struct IBarometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarometerReading>
{
    IBarometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IBarometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarometerReadingChangedEventArgs>
{
    IBarometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBarometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarometerStatics>
{
    IBarometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICompass :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompass>
{
    ICompass(std::nullptr_t = nullptr) noexcept {}
};

struct ICompass2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompass2>
{
    ICompass2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompassDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompassDeviceId>
{
    ICompassDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct ICompassReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompassReading>
{
    ICompassReading(std::nullptr_t = nullptr) noexcept {}
};

struct ICompassReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompassReadingChangedEventArgs>
{
    ICompassReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICompassReadingHeadingAccuracy :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompassReadingHeadingAccuracy>
{
    ICompassReadingHeadingAccuracy(std::nullptr_t = nullptr) noexcept {}
};

struct ICompassStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompassStatics>
{
    ICompassStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometer>
{
    IGyrometer(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometer2>
{
    IGyrometer2(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometerDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometerDeviceId>
{
    IGyrometerDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometerReading>
{
    IGyrometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometerReadingChangedEventArgs>
{
    IGyrometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGyrometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGyrometerStatics>
{
    IGyrometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometer>
{
    IInclinometer(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometer2>
{
    IInclinometer2(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerDeviceId>
{
    IInclinometerDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerReading>
{
    IInclinometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerReadingChangedEventArgs>
{
    IInclinometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerReadingYawAccuracy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerReadingYawAccuracy>
{
    IInclinometerReadingYawAccuracy(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerStatics>
{
    IInclinometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerStatics2>
{
    IInclinometerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IInclinometerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInclinometerStatics3>
{
    IInclinometerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct ILightSensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILightSensor>
{
    ILightSensor(std::nullptr_t = nullptr) noexcept {}
};

struct ILightSensorDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILightSensorDeviceId>
{
    ILightSensorDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct ILightSensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILightSensorReading>
{
    ILightSensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct ILightSensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILightSensorReadingChangedEventArgs>
{
    ILightSensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILightSensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILightSensorStatics>
{
    ILightSensorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometer>
{
    IMagnetometer(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometer2>
{
    IMagnetometer2(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometerDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometerDeviceId>
{
    IMagnetometerDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometerReading>
{
    IMagnetometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometerReadingChangedEventArgs>
{
    IMagnetometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMagnetometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagnetometerStatics>
{
    IMagnetometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensor>
{
    IOrientationSensor(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensor2>
{
    IOrientationSensor2(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorDeviceId>
{
    IOrientationSensorDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorReading>
{
    IOrientationSensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorReadingChangedEventArgs>
{
    IOrientationSensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorReadingYawAccuracy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorReadingYawAccuracy>
{
    IOrientationSensorReadingYawAccuracy(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorStatics>
{
    IOrientationSensorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorStatics2>
{
    IOrientationSensorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IOrientationSensorStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOrientationSensorStatics3>
{
    IOrientationSensorStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometer>
{
    IPedometer(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometer2>
{
    IPedometer2(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometerDataThresholdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometerDataThresholdFactory>
{
    IPedometerDataThresholdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometerReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometerReading>
{
    IPedometerReading(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometerReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometerReadingChangedEventArgs>
{
    IPedometerReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometerStatics>
{
    IPedometerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPedometerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPedometerStatics2>
{
    IPedometerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensor>
{
    IProximitySensor(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensorDataThresholdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensorDataThresholdFactory>
{
    IProximitySensorDataThresholdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensorReading>
{
    IProximitySensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensorReadingChangedEventArgs>
{
    IProximitySensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensorStatics>
{
    IProximitySensorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProximitySensorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximitySensorStatics2>
{
    IProximitySensorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThreshold :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThreshold>
{
    ISensorDataThreshold(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThresholdTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThresholdTriggerDetails>
{
    ISensorDataThresholdTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorQuaternion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorQuaternion>
{
    ISensorQuaternion(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorRotationMatrix :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorRotationMatrix>
{
    ISensorRotationMatrix(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleOrientationSensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleOrientationSensor>
{
    ISimpleOrientationSensor(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleOrientationSensor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleOrientationSensor2>
{
    ISimpleOrientationSensor2(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleOrientationSensorDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleOrientationSensorDeviceId>
{
    ISimpleOrientationSensorDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleOrientationSensorOrientationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleOrientationSensorOrientationChangedEventArgs>
{
    ISimpleOrientationSensorOrientationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISimpleOrientationSensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISimpleOrientationSensorStatics>
{
    ISimpleOrientationSensorStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
