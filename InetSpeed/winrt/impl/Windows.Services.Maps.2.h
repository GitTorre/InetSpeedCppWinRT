﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Services.Maps.1.h"

namespace winrt {

namespace Windows::Services::Maps {

struct EnhancedWaypoint :
    Windows::Services::Maps::IEnhancedWaypoint
{
    EnhancedWaypoint(std::nullptr_t) noexcept {}
    EnhancedWaypoint(Windows::Devices::Geolocation::Geopoint const& point, Windows::Services::Maps::WaypointKind const& kind);
};

struct ManeuverWarning :
    Windows::Services::Maps::IManeuverWarning
{
    ManeuverWarning(std::nullptr_t) noexcept {}
};

struct MapAddress :
    Windows::Services::Maps::IMapAddress,
    impl::require<MapAddress, Windows::Services::Maps::IMapAddress2>
{
    MapAddress(std::nullptr_t) noexcept {}
};

struct MapLocation :
    Windows::Services::Maps::IMapLocation
{
    MapLocation(std::nullptr_t) noexcept {}
};

struct MapLocationFinder
{
    MapLocationFinder() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy);
};

struct MapLocationFinderResult :
    Windows::Services::Maps::IMapLocationFinderResult
{
    MapLocationFinderResult(std::nullptr_t) noexcept {}
};

struct MapManager
{
    MapManager() = delete;
    static void ShowDownloadedMapsUI();
    static void ShowMapsUpdateUI();
};

struct MapRoute :
    Windows::Services::Maps::IMapRoute,
    impl::require<MapRoute, Windows::Services::Maps::IMapRoute2, Windows::Services::Maps::IMapRoute3>
{
    MapRoute(std::nullptr_t) noexcept {}
};

struct MapRouteDrivingOptions :
    Windows::Services::Maps::IMapRouteDrivingOptions
{
    MapRouteDrivingOptions(std::nullptr_t) noexcept {}
    MapRouteDrivingOptions();
};

struct MapRouteFinder
{
    MapRouteFinder() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteDrivingOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints, Windows::Services::Maps::MapRouteDrivingOptions const& options);
};

struct MapRouteFinderResult :
    Windows::Services::Maps::IMapRouteFinderResult,
    impl::require<MapRouteFinderResult, Windows::Services::Maps::IMapRouteFinderResult2>
{
    MapRouteFinderResult(std::nullptr_t) noexcept {}
};

struct MapRouteLeg :
    Windows::Services::Maps::IMapRouteLeg,
    impl::require<MapRouteLeg, Windows::Services::Maps::IMapRouteLeg2>
{
    MapRouteLeg(std::nullptr_t) noexcept {}
};

struct MapRouteManeuver :
    Windows::Services::Maps::IMapRouteManeuver,
    impl::require<MapRouteManeuver, Windows::Services::Maps::IMapRouteManeuver2, Windows::Services::Maps::IMapRouteManeuver3>
{
    MapRouteManeuver(std::nullptr_t) noexcept {}
};

struct MapService
{
    MapService() = delete;
    static void ServiceToken(param::hstring const& value);
    static hstring ServiceToken();
    static hstring WorldViewRegionCode();
    static hstring DataAttributions();
    static void DataUsagePreference(Windows::Services::Maps::MapServiceDataUsagePreference const& value);
    static Windows::Services::Maps::MapServiceDataUsagePreference DataUsagePreference();
};

}

namespace impl {

}

}
