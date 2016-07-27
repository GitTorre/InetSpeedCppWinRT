// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.UI.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Devices.Geolocation.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Services.Maps.3.h"
#include "internal\Windows.Services.Maps.Guidance.3.h"
#include "Windows.Services.Maps.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>
{
    HRESULT __stdcall get_AudioNotification(Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().AudioNotification());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFilePaths(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AudioFilePaths());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AudioText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceLaneInfo> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceLaneInfo>
{
    HRESULT __stdcall get_LaneMarkers(Windows::Services::Maps::Guidance::GuidanceLaneMarkers * value) noexcept override
    {
        try
        {
            *value = detach(shim().LaneMarkers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnRoute(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOnRoute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceManeuver> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceManeuver>
{
    HRESULT __stdcall get_StartLocation(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(shim().StartLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceFromRouteStart(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DistanceFromRouteStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceFromPreviousManeuver(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DistanceFromPreviousManeuver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepartureRoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DepartureRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextRoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NextRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepartureShortRoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DepartureShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextShortRoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NextShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Services::Maps::Guidance::GuidanceManeuverKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartAngle(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().StartAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndAngle(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().EndAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadSignpost(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> value) noexcept override
    {
        try
        {
            *value = detach(shim().RoadSignpost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstructionText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().InstructionText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>
{
    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentHeading(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentSpeed(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentSpeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnStreet(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOnStreet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Road(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceRoadSegment> value) noexcept override
    {
        try
        {
            *value = detach(shim().Road());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigator> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>
{
    HRESULT __stdcall abi_StartNavigating(abi_arg_in<Windows::Services::Maps::Guidance::IGuidanceRoute> route) noexcept override
    {
        try
        {
            shim().StartNavigating(*reinterpret_cast<const Windows::Services::Maps::Guidance::GuidanceRoute *>(&route));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartSimulating(abi_arg_in<Windows::Services::Maps::Guidance::IGuidanceRoute> route, int32_t speedInMetersPerSecond) noexcept override
    {
        try
        {
            shim().StartSimulating(*reinterpret_cast<const Windows::Services::Maps::Guidance::GuidanceRoute *>(&route), speedInMetersPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartTracking() noexcept override
    {
        try
        {
            shim().StartTracking();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause() noexcept override
    {
        try
        {
            shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RepeatLastAudioNotification() noexcept override
    {
        try
        {
            shim().RepeatLastAudioNotification();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem * value) noexcept override
    {
        try
        {
            *value = detach(shim().AudioMeasurementSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value) noexcept override
    {
        try
        {
            shim().AudioMeasurementSystem(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications * value) noexcept override
    {
        try
        {
            *value = detach(shim().AudioNotifications());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications value) noexcept override
    {
        try
        {
            shim().AudioNotifications(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GuidanceUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().GuidanceUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GuidanceUpdated(event_token token) noexcept override
    {
        try
        {
            shim().GuidanceUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DestinationReached(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DestinationReached(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DestinationReached(event_token token) noexcept override
    {
        try
        {
            shim().DestinationReached(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Rerouting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Rerouting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Rerouting(event_token token) noexcept override
    {
        try
        {
            shim().Rerouting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Rerouted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Rerouted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Rerouted(event_token token) noexcept override
    {
        try
        {
            shim().Rerouted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RerouteFailed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().RerouteFailed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RerouteFailed(event_token token) noexcept override
    {
        try
        {
            shim().RerouteFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserLocationLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().UserLocationLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserLocationLost(event_token token) noexcept override
    {
        try
        {
            shim().UserLocationLost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserLocationRestored(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().UserLocationRestored(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserLocationRestored(event_token token) noexcept override
    {
        try
        {
            shim().UserLocationRestored(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetGuidanceVoice(int32_t voiceId, abi_arg_in<hstring> voiceFolder) noexcept override
    {
        try
        {
            shim().SetGuidanceVoice(voiceId, *reinterpret_cast<const hstring *>(&voiceFolder));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateUserLocation(abi_arg_in<Windows::Devices::Geolocation::IGeocoordinate> userLocation) noexcept override
    {
        try
        {
            shim().UpdateUserLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geocoordinate *>(&userLocation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateUserLocationWithPositionOverride(abi_arg_in<Windows::Devices::Geolocation::IGeocoordinate> userLocation, abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> positionOverride) noexcept override
    {
        try
        {
            shim().UpdateUserLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geocoordinate *>(&userLocation), *reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&positionOverride));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigator2> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigator2>
{
    HRESULT __stdcall add_AudioNotificationRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().AudioNotificationRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioNotificationRequested(event_token token) noexcept override
    {
        try
        {
            shim().AudioNotificationRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGuidanceAudioMuted(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsGuidanceAudioMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsGuidanceAudioMuted(bool value) noexcept override
    {
        try
        {
            shim().IsGuidanceAudioMuted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>
{
    HRESULT __stdcall abi_GetCurrent(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceNavigator> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetCurrent());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>
{
    HRESULT __stdcall get_UseAppProvidedVoice(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().UseAppProvidedVoice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>
{
    HRESULT __stdcall get_Route(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceRoute> result) noexcept override
    {
        try
        {
            *result = detach(shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoadSegment> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoadSegment>
{
    HRESULT __stdcall get_RoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortRoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedLimit(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().SpeedLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TravelTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().TravelTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHighway(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsHighway());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTunnel(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsTunnel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTollRoad(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsTollRoad());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>
{
    HRESULT __stdcall get_ExitNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExitNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exit(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Exit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDirections(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExitDirections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoute> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoute>
{
    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Distance(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Distance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maneuvers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Maneuvers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingBox(abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadSegments(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment>> value) noexcept override
    {
        try
        {
            *value = detach(shim().RoadSegments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertToMapRoute(abi_arg_out<Windows::Services::Maps::IMapRoute> result) noexcept override
    {
        try
        {
            *result = detach(shim().ConvertToMapRoute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRouteStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRouteStatics>
{
    HRESULT __stdcall abi_CanCreateFromMapRoute(abi_arg_in<Windows::Services::Maps::IMapRoute> mapRoute, bool * result) noexcept override
    {
        try
        {
            *result = detach(shim().CanCreateFromMapRoute(*reinterpret_cast<const Windows::Services::Maps::MapRoute *>(&mapRoute)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateFromMapRoute(abi_arg_in<Windows::Services::Maps::IMapRoute> mapRoute, abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceRoute> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryCreateFromMapRoute(*reinterpret_cast<const Windows::Services::Maps::MapRoute *>(&mapRoute)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>
{
    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearLocalData() noexcept override
    {
        try
        {
            shim().ClearLocalData();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedTrigger(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().SpeedTrigger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpeedTrigger(double value) noexcept override
    {
        try
        {
            shim().SpeedTrigger(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UploadFrequency(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UploadFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UploadFrequency(int32_t value) noexcept override
    {
        try
        {
            shim().UploadFrequency(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>
{
    HRESULT __stdcall abi_GetCurrent(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetCurrent());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>
{
    HRESULT __stdcall get_Mode(Windows::Services::Maps::Guidance::GuidanceMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextManeuver(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceManeuver> value) noexcept override
    {
        try
        {
            *value = detach(shim().NextManeuver());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextManeuverDistance(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().NextManeuverDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AfterNextManeuver(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceManeuver> value) noexcept override
    {
        try
        {
            *value = detach(shim().AfterNextManeuver());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AfterNextManeuverDistance(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AfterNextManeuverDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceToDestination(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DistanceToDestination());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElapsedDistance(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ElapsedDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElapsedTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().ElapsedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToDestination(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().TimeToDestination());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Route(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceRoute> result) noexcept override
    {
        try
        {
            *result = detach(shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentLocation(abi_arg_out<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> result) noexcept override
    {
        try
        {
            *result = detach(shim().CurrentLocation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNewManeuver(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsNewManeuver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaneInfo(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo>> value) noexcept override
    {
        try
        {
            *value = detach(shim().LaneInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Services::Maps::Guidance {

template <typename D> hstring impl_IGuidanceRoadSignpost<D>::ExitNumber() const
{
    hstring value;
    check_hresult(shim()->get_ExitNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceRoadSignpost<D>::Exit() const
{
    hstring value;
    check_hresult(shim()->get_Exit(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IGuidanceRoadSignpost<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IGuidanceRoadSignpost<D>::ForegroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_ForegroundColor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGuidanceRoadSignpost<D>::ExitDirections() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_ExitDirections(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGuidanceManeuver<D>::StartLocation() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(shim()->get_StartLocation(put(value)));
    return value;
}

template <typename D> int32_t impl_IGuidanceManeuver<D>::DistanceFromRouteStart() const
{
    int32_t value {};
    check_hresult(shim()->get_DistanceFromRouteStart(&value));
    return value;
}

template <typename D> int32_t impl_IGuidanceManeuver<D>::DistanceFromPreviousManeuver() const
{
    int32_t value {};
    check_hresult(shim()->get_DistanceFromPreviousManeuver(&value));
    return value;
}

template <typename D> hstring impl_IGuidanceManeuver<D>::DepartureRoadName() const
{
    hstring value;
    check_hresult(shim()->get_DepartureRoadName(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceManeuver<D>::NextRoadName() const
{
    hstring value;
    check_hresult(shim()->get_NextRoadName(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceManeuver<D>::DepartureShortRoadName() const
{
    hstring value;
    check_hresult(shim()->get_DepartureShortRoadName(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceManeuver<D>::NextShortRoadName() const
{
    hstring value;
    check_hresult(shim()->get_NextShortRoadName(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuverKind impl_IGuidanceManeuver<D>::Kind() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuverKind value {};
    check_hresult(shim()->get_Kind(&value));
    return value;
}

template <typename D> int32_t impl_IGuidanceManeuver<D>::StartAngle() const
{
    int32_t value {};
    check_hresult(shim()->get_StartAngle(&value));
    return value;
}

template <typename D> int32_t impl_IGuidanceManeuver<D>::EndAngle() const
{
    int32_t value {};
    check_hresult(shim()->get_EndAngle(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoadSignpost impl_IGuidanceManeuver<D>::RoadSignpost() const
{
    Windows::Services::Maps::Guidance::GuidanceRoadSignpost value { nullptr };
    check_hresult(shim()->get_RoadSignpost(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceManeuver<D>::InstructionText() const
{
    hstring value;
    check_hresult(shim()->get_InstructionText(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceMode impl_IGuidanceUpdatedEventArgs<D>::Mode() const
{
    Windows::Services::Maps::Guidance::GuidanceMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuver impl_IGuidanceUpdatedEventArgs<D>::NextManeuver() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuver value { nullptr };
    check_hresult(shim()->get_NextManeuver(put(value)));
    return value;
}

template <typename D> int32_t impl_IGuidanceUpdatedEventArgs<D>::NextManeuverDistance() const
{
    int32_t value {};
    check_hresult(shim()->get_NextManeuverDistance(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuver impl_IGuidanceUpdatedEventArgs<D>::AfterNextManeuver() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuver value { nullptr };
    check_hresult(shim()->get_AfterNextManeuver(put(value)));
    return value;
}

template <typename D> int32_t impl_IGuidanceUpdatedEventArgs<D>::AfterNextManeuverDistance() const
{
    int32_t value {};
    check_hresult(shim()->get_AfterNextManeuverDistance(&value));
    return value;
}

template <typename D> int32_t impl_IGuidanceUpdatedEventArgs<D>::DistanceToDestination() const
{
    int32_t value {};
    check_hresult(shim()->get_DistanceToDestination(&value));
    return value;
}

template <typename D> int32_t impl_IGuidanceUpdatedEventArgs<D>::ElapsedDistance() const
{
    int32_t value {};
    check_hresult(shim()->get_ElapsedDistance(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGuidanceUpdatedEventArgs<D>::ElapsedTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_ElapsedTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGuidanceUpdatedEventArgs<D>::TimeToDestination() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_TimeToDestination(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceUpdatedEventArgs<D>::RoadName() const
{
    hstring value;
    check_hresult(shim()->get_RoadName(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute impl_IGuidanceUpdatedEventArgs<D>::Route() const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result { nullptr };
    check_hresult(shim()->get_Route(put(result)));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate impl_IGuidanceUpdatedEventArgs<D>::CurrentLocation() const
{
    Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate result { nullptr };
    check_hresult(shim()->get_CurrentLocation(put(result)));
    return result;
}

template <typename D> bool impl_IGuidanceUpdatedEventArgs<D>::IsNewManeuver() const
{
    bool value {};
    check_hresult(shim()->get_IsNewManeuver(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> impl_IGuidanceUpdatedEventArgs<D>::LaneInfo() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> value;
    check_hresult(shim()->get_LaneInfo(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute impl_IGuidanceReroutedEventArgs<D>::Route() const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result { nullptr };
    check_hresult(shim()->get_Route(put(result)));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind impl_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioNotification() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind value {};
    check_hresult(shim()->get_AudioNotification(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioFilePaths() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_AudioFilePaths(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioText() const
{
    hstring value;
    check_hresult(shim()->get_AudioText(put(value)));
    return value;
}

template <typename D> void impl_IGuidanceNavigator<D>::StartNavigating(const Windows::Services::Maps::Guidance::GuidanceRoute & route) const
{
    check_hresult(shim()->abi_StartNavigating(get(route)));
}

template <typename D> void impl_IGuidanceNavigator<D>::StartSimulating(const Windows::Services::Maps::Guidance::GuidanceRoute & route, int32_t speedInMetersPerSecond) const
{
    check_hresult(shim()->abi_StartSimulating(get(route), speedInMetersPerSecond));
}

template <typename D> void impl_IGuidanceNavigator<D>::StartTracking() const
{
    check_hresult(shim()->abi_StartTracking());
}

template <typename D> void impl_IGuidanceNavigator<D>::Pause() const
{
    check_hresult(shim()->abi_Pause());
}

template <typename D> void impl_IGuidanceNavigator<D>::Resume() const
{
    check_hresult(shim()->abi_Resume());
}

template <typename D> void impl_IGuidanceNavigator<D>::Stop() const
{
    check_hresult(shim()->abi_Stop());
}

template <typename D> void impl_IGuidanceNavigator<D>::RepeatLastAudioNotification() const
{
    check_hresult(shim()->abi_RepeatLastAudioNotification());
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem impl_IGuidanceNavigator<D>::AudioMeasurementSystem() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value {};
    check_hresult(shim()->get_AudioMeasurementSystem(&value));
    return value;
}

template <typename D> void impl_IGuidanceNavigator<D>::AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value) const
{
    check_hresult(shim()->put_AudioMeasurementSystem(value));
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioNotifications impl_IGuidanceNavigator<D>::AudioNotifications() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotifications value {};
    check_hresult(shim()->get_AudioNotifications(&value));
    return value;
}

template <typename D> void impl_IGuidanceNavigator<D>::AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications value) const
{
    check_hresult(shim()->put_AudioNotifications(value));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::GuidanceUpdated(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_GuidanceUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::GuidanceUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_GuidanceUpdated, GuidanceUpdated(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::GuidanceUpdated(event_token token) const
{
    check_hresult(shim()->remove_GuidanceUpdated(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::DestinationReached(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_DestinationReached(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::DestinationReached(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_DestinationReached, DestinationReached(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::DestinationReached(event_token token) const
{
    check_hresult(shim()->remove_DestinationReached(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::Rerouting(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Rerouting(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::Rerouting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_Rerouting, Rerouting(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::Rerouting(event_token token) const
{
    check_hresult(shim()->remove_Rerouting(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::Rerouted(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Rerouted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::Rerouted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_Rerouted, Rerouted(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::Rerouted(event_token token) const
{
    check_hresult(shim()->remove_Rerouted(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::RerouteFailed(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_RerouteFailed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::RerouteFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_RerouteFailed, RerouteFailed(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::RerouteFailed(event_token token) const
{
    check_hresult(shim()->remove_RerouteFailed(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::UserLocationLost(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_UserLocationLost(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::UserLocationLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_UserLocationLost, UserLocationLost(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::UserLocationLost(event_token token) const
{
    check_hresult(shim()->remove_UserLocationLost(token));
}

template <typename D> event_token impl_IGuidanceNavigator<D>::UserLocationRestored(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_UserLocationRestored(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator> impl_IGuidanceNavigator<D>::UserLocationRestored(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator::remove_UserLocationRestored, UserLocationRestored(handler));
}

template <typename D> void impl_IGuidanceNavigator<D>::UserLocationRestored(event_token token) const
{
    check_hresult(shim()->remove_UserLocationRestored(token));
}

template <typename D> void impl_IGuidanceNavigator<D>::SetGuidanceVoice(int32_t voiceId, hstring_ref voiceFolder) const
{
    check_hresult(shim()->abi_SetGuidanceVoice(voiceId, get(voiceFolder)));
}

template <typename D> void impl_IGuidanceNavigator<D>::UpdateUserLocation(const Windows::Devices::Geolocation::Geocoordinate & userLocation) const
{
    check_hresult(shim()->abi_UpdateUserLocation(get(userLocation)));
}

template <typename D> void impl_IGuidanceNavigator<D>::UpdateUserLocation(const Windows::Devices::Geolocation::Geocoordinate & userLocation, const Windows::Devices::Geolocation::BasicGeoposition & positionOverride) const
{
    check_hresult(shim()->abi_UpdateUserLocationWithPositionOverride(get(userLocation), get(positionOverride)));
}

template <typename D> event_token impl_IGuidanceNavigator2<D>::AudioNotificationRequested(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(shim()->add_AudioNotificationRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<IGuidanceNavigator2> impl_IGuidanceNavigator2<D>::AudioNotificationRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IGuidanceNavigator2>(this, &ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator2::remove_AudioNotificationRequested, AudioNotificationRequested(value));
}

template <typename D> void impl_IGuidanceNavigator2<D>::AudioNotificationRequested(event_token token) const
{
    check_hresult(shim()->remove_AudioNotificationRequested(token));
}

template <typename D> bool impl_IGuidanceNavigator2<D>::IsGuidanceAudioMuted() const
{
    bool value {};
    check_hresult(shim()->get_IsGuidanceAudioMuted(&value));
    return value;
}

template <typename D> void impl_IGuidanceNavigator2<D>::IsGuidanceAudioMuted(bool value) const
{
    check_hresult(shim()->put_IsGuidanceAudioMuted(value));
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceNavigator impl_IGuidanceNavigatorStatics<D>::GetCurrent() const
{
    Windows::Services::Maps::Guidance::GuidanceNavigator result { nullptr };
    check_hresult(shim()->abi_GetCurrent(put(result)));
    return result;
}

template <typename D> bool impl_IGuidanceNavigatorStatics2<D>::UseAppProvidedVoice() const
{
    bool value {};
    check_hresult(shim()->get_UseAppProvidedVoice(&value));
    return value;
}

template <typename D> hstring impl_IGuidanceRoadSegment<D>::RoadName() const
{
    hstring value;
    check_hresult(shim()->get_RoadName(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceRoadSegment<D>::ShortRoadName() const
{
    hstring value;
    check_hresult(shim()->get_ShortRoadName(put(value)));
    return value;
}

template <typename D> double impl_IGuidanceRoadSegment<D>::SpeedLimit() const
{
    double value {};
    check_hresult(shim()->get_SpeedLimit(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGuidanceRoadSegment<D>::TravelTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_TravelTime(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IGuidanceRoadSegment<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(shim()->get_Path(put(value)));
    return value;
}

template <typename D> hstring impl_IGuidanceRoadSegment<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> bool impl_IGuidanceRoadSegment<D>::IsHighway() const
{
    bool value {};
    check_hresult(shim()->get_IsHighway(&value));
    return value;
}

template <typename D> bool impl_IGuidanceRoadSegment<D>::IsTunnel() const
{
    bool value {};
    check_hresult(shim()->get_IsTunnel(&value));
    return value;
}

template <typename D> bool impl_IGuidanceRoadSegment<D>::IsTollRoad() const
{
    bool value {};
    check_hresult(shim()->get_IsTollRoad(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGuidanceMapMatchedCoordinate<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(shim()->get_Location(put(value)));
    return value;
}

template <typename D> double impl_IGuidanceMapMatchedCoordinate<D>::CurrentHeading() const
{
    double value {};
    check_hresult(shim()->get_CurrentHeading(&value));
    return value;
}

template <typename D> double impl_IGuidanceMapMatchedCoordinate<D>::CurrentSpeed() const
{
    double value {};
    check_hresult(shim()->get_CurrentSpeed(&value));
    return value;
}

template <typename D> bool impl_IGuidanceMapMatchedCoordinate<D>::IsOnStreet() const
{
    bool value {};
    check_hresult(shim()->get_IsOnStreet(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoadSegment impl_IGuidanceMapMatchedCoordinate<D>::Road() const
{
    Windows::Services::Maps::Guidance::GuidanceRoadSegment value { nullptr };
    check_hresult(shim()->get_Road(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceTelemetryCollector impl_IGuidanceTelemetryCollectorStatics<D>::GetCurrent() const
{
    Windows::Services::Maps::Guidance::GuidanceTelemetryCollector result { nullptr };
    check_hresult(shim()->abi_GetCurrent(put(result)));
    return result;
}

template <typename D> bool impl_IGuidanceTelemetryCollector<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> void impl_IGuidanceTelemetryCollector<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> void impl_IGuidanceTelemetryCollector<D>::ClearLocalData() const
{
    check_hresult(shim()->abi_ClearLocalData());
}

template <typename D> double impl_IGuidanceTelemetryCollector<D>::SpeedTrigger() const
{
    double value {};
    check_hresult(shim()->get_SpeedTrigger(&value));
    return value;
}

template <typename D> void impl_IGuidanceTelemetryCollector<D>::SpeedTrigger(double value) const
{
    check_hresult(shim()->put_SpeedTrigger(value));
}

template <typename D> int32_t impl_IGuidanceTelemetryCollector<D>::UploadFrequency() const
{
    int32_t value {};
    check_hresult(shim()->get_UploadFrequency(&value));
    return value;
}

template <typename D> void impl_IGuidanceTelemetryCollector<D>::UploadFrequency(int32_t value) const
{
    check_hresult(shim()->put_UploadFrequency(value));
}

template <typename D> bool impl_IGuidanceRouteStatics<D>::CanCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute) const
{
    bool result {};
    check_hresult(shim()->abi_CanCreateFromMapRoute(get(mapRoute), &result));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute impl_IGuidanceRouteStatics<D>::TryCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute) const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result { nullptr };
    check_hresult(shim()->abi_TryCreateFromMapRoute(get(mapRoute), put(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGuidanceRoute<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Duration(put(value)));
    return value;
}

template <typename D> int32_t impl_IGuidanceRoute<D>::Distance() const
{
    int32_t value {};
    check_hresult(shim()->get_Distance(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> impl_IGuidanceRoute<D>::Maneuvers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> value;
    check_hresult(shim()->get_Maneuvers(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGuidanceRoute<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(shim()->get_BoundingBox(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IGuidanceRoute<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(shim()->get_Path(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> impl_IGuidanceRoute<D>::RoadSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> value;
    check_hresult(shim()->get_RoadSegments(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRoute impl_IGuidanceRoute<D>::ConvertToMapRoute() const
{
    Windows::Services::Maps::MapRoute result { nullptr };
    check_hresult(shim()->abi_ConvertToMapRoute(put(result)));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceLaneMarkers impl_IGuidanceLaneInfo<D>::LaneMarkers() const
{
    Windows::Services::Maps::Guidance::GuidanceLaneMarkers value {};
    check_hresult(shim()->get_LaneMarkers(&value));
    return value;
}

template <typename D> bool impl_IGuidanceLaneInfo<D>::IsOnRoute() const
{
    bool value {};
    check_hresult(shim()->get_IsOnRoute(&value));
    return value;
}

inline Windows::Services::Maps::Guidance::GuidanceNavigator GuidanceNavigator::GetCurrent()
{
    return get_activation_factory<GuidanceNavigator, IGuidanceNavigatorStatics>().GetCurrent();
}

inline bool GuidanceNavigator::UseAppProvidedVoice()
{
    return get_activation_factory<GuidanceNavigator, IGuidanceNavigatorStatics2>().UseAppProvidedVoice();
}

inline bool GuidanceRoute::CanCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute)
{
    return get_activation_factory<GuidanceRoute, IGuidanceRouteStatics>().CanCreateFromMapRoute(mapRoute);
}

inline Windows::Services::Maps::Guidance::GuidanceRoute GuidanceRoute::TryCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute)
{
    return get_activation_factory<GuidanceRoute, IGuidanceRouteStatics>().TryCreateFromMapRoute(mapRoute);
}

inline Windows::Services::Maps::Guidance::GuidanceTelemetryCollector GuidanceTelemetryCollector::GetCurrent()
{
    return get_activation_factory<GuidanceTelemetryCollector, IGuidanceTelemetryCollectorStatics>().GetCurrent();
}

}

}
