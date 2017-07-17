// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.Casting.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Media.Protection.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.Composition.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Playback.1.h"

namespace winrt {

namespace Windows::Media::Playback {

struct [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] BackgroundMediaPlayer
{
    BackgroundMediaPlayer() = delete;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static Windows::Media::Playback::MediaPlayer Current();
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static event_token MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    using MessageReceivedFromBackground_revoker = factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void MessageReceivedFromBackground(event_token const& token);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static event_token MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    using MessageReceivedFromForeground_revoker = factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void MessageReceivedFromForeground(event_token const& token);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static bool IsMediaPlaying();
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void Shutdown();
};

struct CurrentMediaPlaybackItemChangedEventArgs :
    Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs,
    impl::require<CurrentMediaPlaybackItemChangedEventArgs, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
{
    CurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaBreak :
    Windows::Media::Playback::IMediaBreak
{
    MediaBreak(std::nullptr_t) noexcept {}
    MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod);
    MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition);
};

struct MediaBreakEndedEventArgs :
    Windows::Media::Playback::IMediaBreakEndedEventArgs
{
    MediaBreakEndedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaBreakManager :
    Windows::Media::Playback::IMediaBreakManager
{
    MediaBreakManager(std::nullptr_t) noexcept {}
};

struct MediaBreakSchedule :
    Windows::Media::Playback::IMediaBreakSchedule
{
    MediaBreakSchedule(std::nullptr_t) noexcept {}
};

struct MediaBreakSeekedOverEventArgs :
    Windows::Media::Playback::IMediaBreakSeekedOverEventArgs
{
    MediaBreakSeekedOverEventArgs(std::nullptr_t) noexcept {}
};

struct MediaBreakSkippedEventArgs :
    Windows::Media::Playback::IMediaBreakSkippedEventArgs
{
    MediaBreakSkippedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaBreakStartedEventArgs :
    Windows::Media::Playback::IMediaBreakStartedEventArgs
{
    MediaBreakStartedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaItemDisplayProperties :
    Windows::Media::Playback::IMediaItemDisplayProperties
{
    MediaItemDisplayProperties(std::nullptr_t) noexcept {}
};

struct MediaPlaybackAudioTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>,
    impl::require<MediaPlaybackAudioTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
{
    MediaPlaybackAudioTrackList(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManager :
    Windows::Media::Playback::IMediaPlaybackCommandManager
{
    MediaPlaybackCommandManager(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerCommandBehavior :
    Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior
{
    MediaPlaybackCommandManagerCommandBehavior(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerFastForwardReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    MediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerNextReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs
{
    MediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerPauseReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    MediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerPlayReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    MediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerPositionReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    MediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerPreviousReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    MediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerRateReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs
{
    MediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerRewindReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    MediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackCommandManagerShuffleReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    MediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackItem :
    Windows::Media::Playback::IMediaPlaybackItem,
    impl::require<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem3>
{
    MediaPlaybackItem(std::nullptr_t) noexcept {}
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source);
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime);
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit);
    static Windows::Media::Playback::MediaPlaybackItem FindFromMediaSource(Windows::Media::Core::MediaSource const& source);
};

struct MediaPlaybackItemError :
    Windows::Media::Playback::IMediaPlaybackItemError
{
    MediaPlaybackItemError(std::nullptr_t) noexcept {}
};

struct MediaPlaybackItemFailedEventArgs :
    Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs
{
    MediaPlaybackItemFailedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackItemOpenedEventArgs :
    Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs
{
    MediaPlaybackItemOpenedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlaybackList :
    Windows::Media::Playback::IMediaPlaybackList,
    impl::require<MediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList3>
{
    MediaPlaybackList(std::nullptr_t) noexcept {}
    MediaPlaybackList();
};

struct MediaPlaybackSession :
    Windows::Media::Playback::IMediaPlaybackSession,
    impl::require<MediaPlaybackSession, Windows::Media::Playback::IMediaPlaybackSession2>
{
    MediaPlaybackSession(std::nullptr_t) noexcept {}
};

struct MediaPlaybackSphericalVideoProjection :
    Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection
{
    MediaPlaybackSphericalVideoProjection(std::nullptr_t) noexcept {}
};

struct MediaPlaybackTimedMetadataTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>,
    impl::require<MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
{
    MediaPlaybackTimedMetadataTrackList(std::nullptr_t) noexcept {}
};

struct MediaPlaybackVideoTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>,
    impl::require<MediaPlaybackVideoTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
{
    MediaPlaybackVideoTrackList(std::nullptr_t) noexcept {}
};

struct MediaPlayer :
    Windows::Media::Playback::IMediaPlayer,
    impl::require<MediaPlayer, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlayer2, Windows::Media::Playback::IMediaPlayer3, Windows::Media::Playback::IMediaPlayer4, Windows::Media::Playback::IMediaPlayer5, Windows::Media::Playback::IMediaPlayerEffects, Windows::Media::Playback::IMediaPlayerEffects2, Windows::Media::Playback::IMediaPlayerSource, Windows::Media::Playback::IMediaPlayerSource2>
{
    MediaPlayer(std::nullptr_t) noexcept {}
    MediaPlayer();
};

struct MediaPlayerDataReceivedEventArgs :
    Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs
{
    MediaPlayerDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlayerFailedEventArgs :
    Windows::Media::Playback::IMediaPlayerFailedEventArgs
{
    MediaPlayerFailedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlayerRateChangedEventArgs :
    Windows::Media::Playback::IMediaPlayerRateChangedEventArgs
{
    MediaPlayerRateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaPlayerSurface :
    Windows::Media::Playback::IMediaPlayerSurface,
    impl::require<MediaPlayerSurface, Windows::Foundation::IClosable>
{
    MediaPlayerSurface(std::nullptr_t) noexcept {}
};

struct PlaybackMediaMarker :
    Windows::Media::Playback::IPlaybackMediaMarker
{
    PlaybackMediaMarker(std::nullptr_t) noexcept {}
    PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value);
    PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text);
};

struct PlaybackMediaMarkerReachedEventArgs :
    Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs
{
    PlaybackMediaMarkerReachedEventArgs(std::nullptr_t) noexcept {}
};

struct PlaybackMediaMarkerSequence :
    Windows::Media::Playback::IPlaybackMediaMarkerSequence
{
    PlaybackMediaMarkerSequence(std::nullptr_t) noexcept {}
};

struct TimedMetadataPresentationModeChangedEventArgs :
    Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs
{
    TimedMetadataPresentationModeChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
