// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.AppService.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.0.h"

namespace winrt {

namespace Windows::Media {

struct IAudioBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioBuffer>,
    impl::require<IAudioBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
{
    IAudioBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrame>,
    impl::require<IAudioFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IAudioFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioFrameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrameFactory>
{
    IAudioFrameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAutoRepeatModeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoRepeatModeChangeRequestedEventArgs>
{
    IAutoRepeatModeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IImageDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageDisplayProperties>
{
    IImageDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] IMediaControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaControl>
{
    IMediaControl(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtension>
{
    IMediaExtension(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaExtensionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtensionManager>
{
    IMediaExtensionManager(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaExtensionManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtensionManager2>,
    impl::require<IMediaExtensionManager2, Windows::Media::IMediaExtensionManager>
{
    IMediaExtensionManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrame>,
    impl::require<IMediaFrame, Windows::Foundation::IClosable>
{
    IMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarker>
{
    IMediaMarker(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaMarkerTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarkerTypesStatics>
{
    IMediaMarkerTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaMarkers :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarkers>
{
    IMediaMarkers(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProcessingTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProcessingTriggerDetails>
{
    IMediaProcessingTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTimelineController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineController>
{
    IMediaTimelineController(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTimelineController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineController2>
{
    IMediaTimelineController2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTimelineControllerFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineControllerFailedEventArgs>
{
    IMediaTimelineControllerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMusicDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties>
{
    IMusicDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IMusicDisplayProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties2>
{
    IMusicDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IMusicDisplayProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties3>
{
    IMusicDisplayProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackPositionChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackPositionChangeRequestedEventArgs>
{
    IPlaybackPositionChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackRateChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
{
    IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IShuffleEnabledChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShuffleEnabledChangeRequestedEventArgs>
{
    IShuffleEnabledChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControls :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControls>
{
    ISystemMediaTransportControls(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControls2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControls2>
{
    ISystemMediaTransportControls2(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControlsButtonPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsButtonPressedEventArgs>
{
    ISystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControlsDisplayUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsDisplayUpdater>
{
    ISystemMediaTransportControlsDisplayUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControlsPropertyChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsPropertyChangedEventArgs>
{
    ISystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControlsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsStatics>
{
    ISystemMediaTransportControlsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaTransportControlsTimelineProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsTimelineProperties>
{
    ISystemMediaTransportControlsTimelineProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDisplayProperties>
{
    IVideoDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoDisplayProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDisplayProperties2>
{
    IVideoDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEffectsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectsStatics>
{
    IVideoEffectsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoFrame>,
    impl::require<IVideoFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoFrameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoFrameFactory>
{
    IVideoFrameFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
