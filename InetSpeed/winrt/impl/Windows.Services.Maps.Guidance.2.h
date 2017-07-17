// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Services.Maps.1.h"
#include "Windows.UI.1.h"
#include "Windows.Services.Maps.Guidance.1.h"

namespace winrt {

namespace Windows::Services::Maps::Guidance {

struct GuidanceAudioNotificationRequestedEventArgs :
    Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs
{
    GuidanceAudioNotificationRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct GuidanceLaneInfo :
    Windows::Services::Maps::Guidance::IGuidanceLaneInfo
{
    GuidanceLaneInfo(std::nullptr_t) noexcept {}
};

struct GuidanceManeuver :
    Windows::Services::Maps::Guidance::IGuidanceManeuver
{
    GuidanceManeuver(std::nullptr_t) noexcept {}
};

struct GuidanceMapMatchedCoordinate :
    Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate
{
    GuidanceMapMatchedCoordinate(std::nullptr_t) noexcept {}
};

struct GuidanceNavigator :
    Windows::Services::Maps::Guidance::IGuidanceNavigator,
    impl::require<GuidanceNavigator, Windows::Services::Maps::Guidance::IGuidanceNavigator2>
{
    GuidanceNavigator(std::nullptr_t) noexcept {}
    static Windows::Services::Maps::Guidance::GuidanceNavigator GetCurrent();
    static bool UseAppProvidedVoice();
};

struct GuidanceReroutedEventArgs :
    Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs
{
    GuidanceReroutedEventArgs(std::nullptr_t) noexcept {}
};

struct GuidanceRoadSegment :
    Windows::Services::Maps::Guidance::IGuidanceRoadSegment
{
    GuidanceRoadSegment(std::nullptr_t) noexcept {}
};

struct GuidanceRoadSignpost :
    Windows::Services::Maps::Guidance::IGuidanceRoadSignpost
{
    GuidanceRoadSignpost(std::nullptr_t) noexcept {}
};

struct GuidanceRoute :
    Windows::Services::Maps::Guidance::IGuidanceRoute
{
    GuidanceRoute(std::nullptr_t) noexcept {}
    static bool CanCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute);
    static Windows::Services::Maps::Guidance::GuidanceRoute TryCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute);
};

struct GuidanceTelemetryCollector :
    Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector
{
    GuidanceTelemetryCollector(std::nullptr_t) noexcept {}
    static Windows::Services::Maps::Guidance::GuidanceTelemetryCollector GetCurrent();
};

struct GuidanceUpdatedEventArgs :
    Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs
{
    GuidanceUpdatedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
