// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Media.PlayTo.3.h"
#include "Windows.Media.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Time(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Time());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Mute(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnection> : produce_base<D, Windows::Media::PlayTo::IPlayToConnection>
{
    HRESULT __stdcall get_State(Windows::Media::PlayTo::PlayToConnectionState * value) noexcept override
    {
        try
        {
            *value = detach(shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Transferred(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Transferred(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Transferred(event_token token) noexcept override
    {
        try
        {
            shim().Transferred(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Error(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Error(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Error(event_token token) noexcept override
    {
        try
        {
            shim().Error(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>
{
    HRESULT __stdcall get_Code(Windows::Media::PlayTo::PlayToConnectionError * value) noexcept override
    {
        try
        {
            *value = detach(shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Message());
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
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>
{
    HRESULT __stdcall get_PreviousState(Windows::Media::PlayTo::PlayToConnectionState * value) noexcept override
    {
        try
        {
            *value = detach(shim().PreviousState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(Windows::Media::PlayTo::PlayToConnectionState * value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>
{
    HRESULT __stdcall get_PreviousSource(abi_arg_out<Windows::Media::PlayTo::IPlayToSource> value) noexcept override
    {
        try
        {
            *value = detach(shim().PreviousSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentSource(abi_arg_out<Windows::Media::PlayTo::IPlayToSource> value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentSource());
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
struct produce<D, Windows::Media::PlayTo::IPlayToManager> : produce_base<D, Windows::Media::PlayTo::IPlayToManager>
{
    HRESULT __stdcall add_SourceRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SourceRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRequested(event_token token) noexcept override
    {
        try
        {
            shim().SourceRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceSelected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SourceSelected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceSelected(event_token token) noexcept override
    {
        try
        {
            shim().SourceSelected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultSourceSelection(bool value) noexcept override
    {
        try
        {
            shim().DefaultSourceSelection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultSourceSelection(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultSourceSelection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToManagerStatics> : produce_base<D, Windows::Media::PlayTo::IPlayToManagerStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Media::PlayTo::IPlayToManager> playToManager) noexcept override
    {
        try
        {
            *playToManager = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *playToManager = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowPlayToUI() noexcept override
    {
        try
        {
            shim().ShowPlayToUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToReceiver> : produce_base<D, Windows::Media::PlayTo::IPlayToReceiver>
{
    HRESULT __stdcall add_PlayRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PlayRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayRequested(event_token token) noexcept override
    {
        try
        {
            shim().PlayRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PauseRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PauseRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PauseRequested(event_token token) noexcept override
    {
        try
        {
            shim().PauseRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SourceChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChangeRequested(event_token token) noexcept override
    {
        try
        {
            shim().SourceChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PlaybackRateChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChangeRequested(event_token token) noexcept override
    {
        try
        {
            shim().PlaybackRateChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentTimeChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CurrentTimeChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentTimeChangeRequested(event_token token) noexcept override
    {
        try
        {
            shim().CurrentTimeChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MuteChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().MuteChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MuteChangeRequested(event_token token) noexcept override
    {
        try
        {
            shim().MuteChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VolumeChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().VolumeChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VolumeChangeRequested(event_token token) noexcept override
    {
        try
        {
            shim().VolumeChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TimeUpdateRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().TimeUpdateRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TimeUpdateRequested(event_token token) noexcept override
    {
        try
        {
            shim().TimeUpdateRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StopRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().StopRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StopRequested(event_token token) noexcept override
    {
        try
        {
            shim().StopRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyVolumeChange(double volume, bool mute) noexcept override
    {
        try
        {
            shim().NotifyVolumeChange(volume, mute);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyRateChange(double rate) noexcept override
    {
        try
        {
            shim().NotifyRateChange(rate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyLoadedMetadata() noexcept override
    {
        try
        {
            shim().NotifyLoadedMetadata();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyTimeUpdate(abi_arg_in<Windows::Foundation::TimeSpan> currentTime) noexcept override
    {
        try
        {
            shim().NotifyTimeUpdate(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&currentTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyDurationChange(abi_arg_in<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            shim().NotifyDurationChange(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifySeeking() noexcept override
    {
        try
        {
            shim().NotifySeeking();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifySeeked() noexcept override
    {
        try
        {
            shim().NotifySeeked();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyPaused() noexcept override
    {
        try
        {
            shim().NotifyPaused();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyPlaying() noexcept override
    {
        try
        {
            shim().NotifyPlaying();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyEnded() noexcept override
    {
        try
        {
            shim().NotifyEnded();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyError() noexcept override
    {
        try
        {
            shim().NotifyError();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyStopped() noexcept override
    {
        try
        {
            shim().NotifyStopped();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().FriendlyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsImage(bool value) noexcept override
    {
        try
        {
            shim().SupportsImage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsImage(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsImage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsAudio(bool value) noexcept override
    {
        try
        {
            shim().SupportsAudio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsAudio(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsVideo(bool value) noexcept override
    {
        try
        {
            shim().SupportsVideo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSource> : produce_base<D, Windows::Media::PlayTo::IPlayToSource>
{
    HRESULT __stdcall get_Connection(abi_arg_out<Windows::Media::PlayTo::IPlayToConnection> value) noexcept override
    {
        try
        {
            *value = detach(shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Next(abi_arg_out<Windows::Media::PlayTo::IPlayToSource> value) noexcept override
    {
        try
        {
            *value = detach(shim().Next());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Next(abi_arg_in<Windows::Media::PlayTo::IPlayToSource> value) noexcept override
    {
        try
        {
            shim().Next(*reinterpret_cast<const Windows::Media::PlayTo::PlayToSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PlayNext() noexcept override
    {
        try
        {
            shim().PlayNext();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceDeferral> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceRequest> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceRequest>
{
    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisplayErrorString(abi_arg_in<hstring> errorString) noexcept override
    {
        try
        {
            shim().DisplayErrorString(*reinterpret_cast<const hstring *>(&errorString));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Media::PlayTo::IPlayToSourceDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSource(abi_arg_in<Windows::Media::PlayTo::IPlayToSource> value) noexcept override
    {
        try
        {
            shim().SetSource(*reinterpret_cast<const Windows::Media::PlayTo::PlayToSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>
{
    HRESULT __stdcall get_SourceRequest(abi_arg_out<Windows::Media::PlayTo::IPlayToSourceRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().SourceRequest());
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
struct produce<D, Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>
{
    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamWithContentType> value) noexcept override
    {
        try
        {
            *value = detach(shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsImage(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsImage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsAudio(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportsVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
{
    HRESULT __stdcall get_PreferredSourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().PreferredSourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredSourceUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().PreferredSourceUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Rate(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Rate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Stream(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamWithContentType> value) noexcept override
    {
        try
        {
            *value = detach(shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Author(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Album(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Genre());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rating(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Properties());
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
struct produce<D, Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Volume(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::PlayTo {

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType impl_ISourceChangeRequestedEventArgs<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value;
    check_hresult(shim()->get_Stream(put(value)));
    return value;
}

template <typename D> hstring impl_ISourceChangeRequestedEventArgs<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_ISourceChangeRequestedEventArgs<D>::Author() const
{
    hstring value;
    check_hresult(shim()->get_Author(put(value)));
    return value;
}

template <typename D> hstring impl_ISourceChangeRequestedEventArgs<D>::Album() const
{
    hstring value;
    check_hresult(shim()->get_Album(put(value)));
    return value;
}

template <typename D> hstring impl_ISourceChangeRequestedEventArgs<D>::Genre() const
{
    hstring value;
    check_hresult(shim()->get_Genre(put(value)));
    return value;
}

template <typename D> hstring impl_ISourceChangeRequestedEventArgs<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_ISourceChangeRequestedEventArgs<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_Date(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_ISourceChangeRequestedEventArgs<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(shim()->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ISourceChangeRequestedEventArgs<D>::Rating() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_Rating(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_ISourceChangeRequestedEventArgs<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> double impl_IPlaybackRateChangeRequestedEventArgs<D>::Rate() const
{
    double value {};
    check_hresult(shim()->get_Rate(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ICurrentTimeChangeRequestedEventArgs<D>::Time() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Time(put(value)));
    return value;
}

template <typename D> bool impl_IMuteChangeRequestedEventArgs<D>::Mute() const
{
    bool value {};
    check_hresult(shim()->get_Mute(&value));
    return value;
}

template <typename D> double impl_IVolumeChangeRequestedEventArgs<D>::Volume() const
{
    double value {};
    check_hresult(shim()->get_Volume(&value));
    return value;
}

template <typename D> event_token impl_IPlayToReceiver<D>::PlayRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PlayRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::PlayRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_PlayRequested, PlayRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::PlayRequested(event_token token) const
{
    check_hresult(shim()->remove_PlayRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::PauseRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PauseRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::PauseRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_PauseRequested, PauseRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::PauseRequested(event_token token) const
{
    check_hresult(shim()->remove_PauseRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::SourceChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SourceChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::SourceChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_SourceChangeRequested, SourceChangeRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::SourceChangeRequested(event_token token) const
{
    check_hresult(shim()->remove_SourceChangeRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::PlaybackRateChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PlaybackRateChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::PlaybackRateChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_PlaybackRateChangeRequested, PlaybackRateChangeRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::PlaybackRateChangeRequested(event_token token) const
{
    check_hresult(shim()->remove_PlaybackRateChangeRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::CurrentTimeChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CurrentTimeChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::CurrentTimeChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_CurrentTimeChangeRequested, CurrentTimeChangeRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::CurrentTimeChangeRequested(event_token token) const
{
    check_hresult(shim()->remove_CurrentTimeChangeRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::MuteChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_MuteChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::MuteChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_MuteChangeRequested, MuteChangeRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::MuteChangeRequested(event_token token) const
{
    check_hresult(shim()->remove_MuteChangeRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::VolumeChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_VolumeChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::VolumeChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_VolumeChangeRequested, VolumeChangeRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::VolumeChangeRequested(event_token token) const
{
    check_hresult(shim()->remove_VolumeChangeRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::TimeUpdateRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_TimeUpdateRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::TimeUpdateRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_TimeUpdateRequested, TimeUpdateRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::TimeUpdateRequested(event_token token) const
{
    check_hresult(shim()->remove_TimeUpdateRequested(token));
}

template <typename D> event_token impl_IPlayToReceiver<D>::StopRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_StopRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToReceiver> impl_IPlayToReceiver<D>::StopRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPlayToReceiver>(this, &ABI::Windows::Media::PlayTo::IPlayToReceiver::remove_StopRequested, StopRequested(handler));
}

template <typename D> void impl_IPlayToReceiver<D>::StopRequested(event_token token) const
{
    check_hresult(shim()->remove_StopRequested(token));
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyVolumeChange(double volume, bool mute) const
{
    check_hresult(shim()->abi_NotifyVolumeChange(volume, mute));
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyRateChange(double rate) const
{
    check_hresult(shim()->abi_NotifyRateChange(rate));
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyLoadedMetadata() const
{
    check_hresult(shim()->abi_NotifyLoadedMetadata());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyTimeUpdate(const Windows::Foundation::TimeSpan & currentTime) const
{
    check_hresult(shim()->abi_NotifyTimeUpdate(get(currentTime)));
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyDurationChange(const Windows::Foundation::TimeSpan & duration) const
{
    check_hresult(shim()->abi_NotifyDurationChange(get(duration)));
}

template <typename D> void impl_IPlayToReceiver<D>::NotifySeeking() const
{
    check_hresult(shim()->abi_NotifySeeking());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifySeeked() const
{
    check_hresult(shim()->abi_NotifySeeked());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyPaused() const
{
    check_hresult(shim()->abi_NotifyPaused());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyPlaying() const
{
    check_hresult(shim()->abi_NotifyPlaying());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyEnded() const
{
    check_hresult(shim()->abi_NotifyEnded());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyError() const
{
    check_hresult(shim()->abi_NotifyError());
}

template <typename D> void impl_IPlayToReceiver<D>::NotifyStopped() const
{
    check_hresult(shim()->abi_NotifyStopped());
}

template <typename D> hstring impl_IPlayToReceiver<D>::FriendlyName() const
{
    hstring value;
    check_hresult(shim()->get_FriendlyName(put(value)));
    return value;
}

template <typename D> void impl_IPlayToReceiver<D>::FriendlyName(hstring_ref value) const
{
    check_hresult(shim()->put_FriendlyName(get(value)));
}

template <typename D> void impl_IPlayToReceiver<D>::SupportsImage(bool value) const
{
    check_hresult(shim()->put_SupportsImage(value));
}

template <typename D> bool impl_IPlayToReceiver<D>::SupportsImage() const
{
    bool value {};
    check_hresult(shim()->get_SupportsImage(&value));
    return value;
}

template <typename D> void impl_IPlayToReceiver<D>::SupportsAudio(bool value) const
{
    check_hresult(shim()->put_SupportsAudio(value));
}

template <typename D> bool impl_IPlayToReceiver<D>::SupportsAudio() const
{
    bool value {};
    check_hresult(shim()->get_SupportsAudio(&value));
    return value;
}

template <typename D> void impl_IPlayToReceiver<D>::SupportsVideo(bool value) const
{
    check_hresult(shim()->put_SupportsVideo(value));
}

template <typename D> bool impl_IPlayToReceiver<D>::SupportsVideo() const
{
    bool value {};
    check_hresult(shim()->get_SupportsVideo(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IPlayToReceiver<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPlayToReceiver<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(shim()->abi_StartAsync(put(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPlayToReceiver<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(shim()->abi_StopAsync(put(action)));
    return action;
}

template <typename D> Windows::Media::PlayTo::PlayToConnection impl_IPlayToSource<D>::Connection() const
{
    Windows::Media::PlayTo::PlayToConnection value { nullptr };
    check_hresult(shim()->get_Connection(put(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource impl_IPlayToSource<D>::Next() const
{
    Windows::Media::PlayTo::PlayToSource value { nullptr };
    check_hresult(shim()->get_Next(put(value)));
    return value;
}

template <typename D> void impl_IPlayToSource<D>::Next(const Windows::Media::PlayTo::PlayToSource & value) const
{
    check_hresult(shim()->put_Next(get(value)));
}

template <typename D> void impl_IPlayToSource<D>::PlayNext() const
{
    check_hresult(shim()->abi_PlayNext());
}

template <typename D> Windows::Foundation::Uri impl_IPlayToSourceWithPreferredSourceUri<D>::PreferredSourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_PreferredSourceUri(put(value)));
    return value;
}

template <typename D> void impl_IPlayToSourceWithPreferredSourceUri<D>::PreferredSourceUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_PreferredSourceUri(get(value)));
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState impl_IPlayToConnectionStateChangedEventArgs<D>::PreviousState() const
{
    Windows::Media::PlayTo::PlayToConnectionState value {};
    check_hresult(shim()->get_PreviousState(&value));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState impl_IPlayToConnectionStateChangedEventArgs<D>::CurrentState() const
{
    Windows::Media::PlayTo::PlayToConnectionState value {};
    check_hresult(shim()->get_CurrentState(&value));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource impl_IPlayToConnectionTransferredEventArgs<D>::PreviousSource() const
{
    Windows::Media::PlayTo::PlayToSource value { nullptr };
    check_hresult(shim()->get_PreviousSource(put(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource impl_IPlayToConnectionTransferredEventArgs<D>::CurrentSource() const
{
    Windows::Media::PlayTo::PlayToSource value { nullptr };
    check_hresult(shim()->get_CurrentSource(put(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionError impl_IPlayToConnectionErrorEventArgs<D>::Code() const
{
    Windows::Media::PlayTo::PlayToConnectionError value {};
    check_hresult(shim()->get_Code(&value));
    return value;
}

template <typename D> hstring impl_IPlayToConnectionErrorEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(shim()->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState impl_IPlayToConnection<D>::State() const
{
    Windows::Media::PlayTo::PlayToConnectionState value {};
    check_hresult(shim()->get_State(&value));
    return value;
}

template <typename D> event_token impl_IPlayToConnection<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_StateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToConnection> impl_IPlayToConnection<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToConnection>(this, &ABI::Windows::Media::PlayTo::IPlayToConnection::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_IPlayToConnection<D>::StateChanged(event_token token) const
{
    check_hresult(shim()->remove_StateChanged(token));
}

template <typename D> event_token impl_IPlayToConnection<D>::Transferred(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Transferred(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToConnection> impl_IPlayToConnection<D>::Transferred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToConnection>(this, &ABI::Windows::Media::PlayTo::IPlayToConnection::remove_Transferred, Transferred(handler));
}

template <typename D> void impl_IPlayToConnection<D>::Transferred(event_token token) const
{
    check_hresult(shim()->remove_Transferred(token));
}

template <typename D> event_token impl_IPlayToConnection<D>::Error(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Error(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToConnection> impl_IPlayToConnection<D>::Error(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToConnection>(this, &ABI::Windows::Media::PlayTo::IPlayToConnection::remove_Error, Error(handler));
}

template <typename D> void impl_IPlayToConnection<D>::Error(event_token token) const
{
    check_hresult(shim()->remove_Error(token));
}

template <typename D> hstring impl_IPlayToSourceSelectedEventArgs<D>::FriendlyName() const
{
    hstring value;
    check_hresult(shim()->get_FriendlyName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType impl_IPlayToSourceSelectedEventArgs<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value;
    check_hresult(shim()->get_Icon(put(value)));
    return value;
}

template <typename D> bool impl_IPlayToSourceSelectedEventArgs<D>::SupportsImage() const
{
    bool value {};
    check_hresult(shim()->get_SupportsImage(&value));
    return value;
}

template <typename D> bool impl_IPlayToSourceSelectedEventArgs<D>::SupportsAudio() const
{
    bool value {};
    check_hresult(shim()->get_SupportsAudio(&value));
    return value;
}

template <typename D> bool impl_IPlayToSourceSelectedEventArgs<D>::SupportsVideo() const
{
    bool value {};
    check_hresult(shim()->get_SupportsVideo(&value));
    return value;
}

template <typename D> void impl_IPlayToSourceDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> Windows::Foundation::DateTime impl_IPlayToSourceRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> void impl_IPlayToSourceRequest<D>::DisplayErrorString(hstring_ref errorString) const
{
    check_hresult(shim()->abi_DisplayErrorString(get(errorString)));
}

template <typename D> Windows::Media::PlayTo::PlayToSourceDeferral impl_IPlayToSourceRequest<D>::GetDeferral() const
{
    Windows::Media::PlayTo::PlayToSourceDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> void impl_IPlayToSourceRequest<D>::SetSource(const Windows::Media::PlayTo::PlayToSource & value) const
{
    check_hresult(shim()->abi_SetSource(get(value)));
}

template <typename D> Windows::Media::PlayTo::PlayToSourceRequest impl_IPlayToSourceRequestedEventArgs<D>::SourceRequest() const
{
    Windows::Media::PlayTo::PlayToSourceRequest value { nullptr };
    check_hresult(shim()->get_SourceRequest(put(value)));
    return value;
}

template <typename D> event_token impl_IPlayToManager<D>::SourceRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SourceRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToManager> impl_IPlayToManager<D>::SourceRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToManager>(this, &ABI::Windows::Media::PlayTo::IPlayToManager::remove_SourceRequested, SourceRequested(handler));
}

template <typename D> void impl_IPlayToManager<D>::SourceRequested(event_token token) const
{
    check_hresult(shim()->remove_SourceRequested(token));
}

template <typename D> event_token impl_IPlayToManager<D>::SourceSelected(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SourceSelected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPlayToManager> impl_IPlayToManager<D>::SourceSelected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPlayToManager>(this, &ABI::Windows::Media::PlayTo::IPlayToManager::remove_SourceSelected, SourceSelected(handler));
}

template <typename D> void impl_IPlayToManager<D>::SourceSelected(event_token token) const
{
    check_hresult(shim()->remove_SourceSelected(token));
}

template <typename D> void impl_IPlayToManager<D>::DefaultSourceSelection(bool value) const
{
    check_hresult(shim()->put_DefaultSourceSelection(value));
}

template <typename D> bool impl_IPlayToManager<D>::DefaultSourceSelection() const
{
    bool value {};
    check_hresult(shim()->get_DefaultSourceSelection(&value));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToManager impl_IPlayToManagerStatics<D>::GetForCurrentView() const
{
    Windows::Media::PlayTo::PlayToManager playToManager { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(playToManager)));
    return playToManager;
}

template <typename D> void impl_IPlayToManagerStatics<D>::ShowPlayToUI() const
{
    check_hresult(shim()->abi_ShowPlayToUI());
}

inline Windows::Media::PlayTo::PlayToManager PlayToManager::GetForCurrentView()
{
    return get_activation_factory<PlayToManager, IPlayToManagerStatics>().GetForCurrentView();
}

inline void PlayToManager::ShowPlayToUI()
{
    get_activation_factory<PlayToManager, IPlayToManagerStatics>().ShowPlayToUI();
}

inline PlayToReceiver::PlayToReceiver() :
    PlayToReceiver(activate_instance<PlayToReceiver>())
{}

}

}
