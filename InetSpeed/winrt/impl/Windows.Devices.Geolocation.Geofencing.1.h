// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Devices.Geolocation.Geofencing.0.h"

namespace winrt {

namespace Windows::Devices::Geolocation::Geofencing {

struct IGeofence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofence>
{
    IGeofence(std::nullptr_t = nullptr) noexcept {}
};

struct IGeofenceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceFactory>
{
    IGeofenceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeofenceMonitor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceMonitor>
{
    IGeofenceMonitor(std::nullptr_t = nullptr) noexcept {}
};

struct IGeofenceMonitorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceMonitorStatics>
{
    IGeofenceMonitorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGeofenceStateChangeReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceStateChangeReport>
{
    IGeofenceStateChangeReport(std::nullptr_t = nullptr) noexcept {}
};

}

}
