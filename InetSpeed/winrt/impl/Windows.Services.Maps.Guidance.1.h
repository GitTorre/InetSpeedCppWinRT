// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Services.Maps.0.h"
#include "Windows.UI.0.h"
#include "Windows.Services.Maps.Guidance.0.h"

namespace winrt {

namespace Windows::Services::Maps::Guidance {

struct IGuidanceAudioNotificationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceAudioNotificationRequestedEventArgs>
{
    IGuidanceAudioNotificationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceLaneInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceLaneInfo>
{
    IGuidanceLaneInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceManeuver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceManeuver>
{
    IGuidanceManeuver(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceMapMatchedCoordinate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceMapMatchedCoordinate>
{
    IGuidanceMapMatchedCoordinate(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceNavigator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigator>
{
    IGuidanceNavigator(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceNavigator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigator2>
{
    IGuidanceNavigator2(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceNavigatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigatorStatics>
{
    IGuidanceNavigatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceNavigatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigatorStatics2>
{
    IGuidanceNavigatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceReroutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceReroutedEventArgs>
{
    IGuidanceReroutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceRoadSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoadSegment>
{
    IGuidanceRoadSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceRoadSignpost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoadSignpost>
{
    IGuidanceRoadSignpost(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceRoute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoute>
{
    IGuidanceRoute(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceRouteStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRouteStatics>
{
    IGuidanceRouteStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceTelemetryCollector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceTelemetryCollector>
{
    IGuidanceTelemetryCollector(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceTelemetryCollectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceTelemetryCollectorStatics>
{
    IGuidanceTelemetryCollectorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGuidanceUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceUpdatedEventArgs>
{
    IGuidanceUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
