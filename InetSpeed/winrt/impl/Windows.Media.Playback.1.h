// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Casting.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Protection.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Composition.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Playback.0.h"

namespace winrt {

namespace Windows::Media::Playback {

struct [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] IBackgroundMediaPlayerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundMediaPlayerStatics>
{
    IBackgroundMediaPlayerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentMediaPlaybackItemChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs>
{
    ICurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentMediaPlaybackItemChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs2>,
    impl::require<ICurrentMediaPlaybackItemChangedEventArgs2, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
{
    ICurrentMediaPlaybackItemChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreak :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreak>
{
    IMediaBreak(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakEndedEventArgs>
{
    IMediaBreakEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakFactory>
{
    IMediaBreakFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakManager>
{
    IMediaBreakManager(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakSchedule :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSchedule>
{
    IMediaBreakSchedule(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakSeekedOverEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSeekedOverEventArgs>
{
    IMediaBreakSeekedOverEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakSkippedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSkippedEventArgs>
{
    IMediaBreakSkippedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBreakStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakStartedEventArgs>
{
    IMediaBreakStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")]] IMediaEnginePlaybackSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEnginePlaybackSource>
{
    IMediaEnginePlaybackSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaItemDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaItemDisplayProperties>
{
    IMediaItemDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManager>
{
    IMediaPlaybackCommandManager(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
{
    IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerCommandBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerCommandBehavior>
{
    IMediaPlaybackCommandManagerCommandBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerFastForwardReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
{
    IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerNextReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerNextReceivedEventArgs>
{
    IMediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerPauseReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPauseReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerPlayReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPlayReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerPositionReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPositionReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerPreviousReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerRateReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerRateReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerRewindReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerRewindReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackCommandManagerShuffleReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
{
    IMediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem>,
    impl::require<IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem2>,
    impl::require<IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItem3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem3>,
    impl::require<IMediaPlaybackItem3, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemError>
{
    IMediaPlaybackItemError(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFactory2>,
    impl::require<IMediaPlaybackItemFactory2, Windows::Media::Playback::IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFailedEventArgs>
{
    IMediaPlaybackItemFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemOpenedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemOpenedEventArgs>
{
    IMediaPlaybackItemOpenedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemStatics>
{
    IMediaPlaybackItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList>,
    impl::require<IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList2>,
    impl::require<IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackList3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList3>,
    impl::require<IMediaPlaybackList3, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSession>
{
    IMediaPlaybackSession(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackSession2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSession2>
{
    IMediaPlaybackSession2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSource>
{
    IMediaPlaybackSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackSphericalVideoProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSphericalVideoProjection>
{
    IMediaPlaybackSphericalVideoProjection(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlaybackTimedMetadataTrackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackTimedMetadataTrackList>
{
    IMediaPlaybackTimedMetadataTrackList(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer>
{
    IMediaPlayer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer2>
{
    IMediaPlayer2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer3>
{
    IMediaPlayer3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayer4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer4>
{
    IMediaPlayer4(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayer5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer5>
{
    IMediaPlayer5(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerDataReceivedEventArgs>
{
    IMediaPlayerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerEffects :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerEffects>
{
    IMediaPlayerEffects(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerEffects2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerEffects2>
{
    IMediaPlayerEffects2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerFailedEventArgs>
{
    IMediaPlayerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerRateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerRateChangedEventArgs>
{
    IMediaPlayerRateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSource>
{
    IMediaPlayerSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSource2>
{
    IMediaPlayerSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSurface>
{
    IMediaPlayerSurface(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackMediaMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarker>
{
    IPlaybackMediaMarker(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackMediaMarkerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerFactory>
{
    IPlaybackMediaMarkerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackMediaMarkerReachedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerReachedEventArgs>
{
    IPlaybackMediaMarkerReachedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackMediaMarkerSequence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerSequence>,
    impl::require<IPlaybackMediaMarkerSequence, Windows::Foundation::Collections::IIterable<Windows::Media::Playback::PlaybackMediaMarker>>
{
    IPlaybackMediaMarkerSequence(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataPresentationModeChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataPresentationModeChangedEventArgs>
{
    ITimedMetadataPresentationModeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
