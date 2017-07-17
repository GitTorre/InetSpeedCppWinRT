// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Media.PlayTo.1.h"

namespace winrt {

namespace Windows::Media::PlayTo {

struct CurrentTimeChangeRequestedEventArgs :
    Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs
{
    CurrentTimeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct MuteChangeRequestedEventArgs :
    Windows::Media::PlayTo::IMuteChangeRequestedEventArgs
{
    MuteChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")]] PlayToConnection :
    Windows::Media::PlayTo::IPlayToConnection
{
    PlayToConnection(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")]] PlayToConnectionErrorEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs
{
    PlayToConnectionErrorEventArgs(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToConnectionStateChangedEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs
{
    PlayToConnectionStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToConnectionTransferredEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs
{
    PlayToConnectionTransferredEventArgs(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] PlayToManager :
    Windows::Media::PlayTo::IPlayToManager
{
    PlayToManager(std::nullptr_t) noexcept {}
    [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] static Windows::Media::PlayTo::PlayToManager GetForCurrentView();
    [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] static void ShowPlayToUI();
};

struct PlayToReceiver :
    Windows::Media::PlayTo::IPlayToReceiver
{
    PlayToReceiver(std::nullptr_t) noexcept {}
    PlayToReceiver();
};

struct [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] PlayToSource :
    Windows::Media::PlayTo::IPlayToSource,
    impl::require<PlayToSource, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
{
    PlayToSource(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")]] PlayToSourceDeferral :
    Windows::Media::PlayTo::IPlayToSourceDeferral
{
    PlayToSourceDeferral(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")]] PlayToSourceRequest :
    Windows::Media::PlayTo::IPlayToSourceRequest
{
    PlayToSourceRequest(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToSourceRequestedEventArgs :
    Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs
{
    PlayToSourceRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct [[deprecated("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToSourceSelectedEventArgs :
    Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs
{
    PlayToSourceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct PlaybackRateChangeRequestedEventArgs :
    Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs
{
    PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct SourceChangeRequestedEventArgs :
    Windows::Media::PlayTo::ISourceChangeRequestedEventArgs
{
    SourceChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct VolumeChangeRequestedEventArgs :
    Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs
{
    VolumeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
