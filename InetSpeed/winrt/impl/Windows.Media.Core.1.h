// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Devices.0.h"
#include "Windows.Media.Devices.Core.0.h"
#include "Windows.Media.FaceAnalysis.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Playback.0.h"
#include "Windows.Media.Protection.0.h"
#include "Windows.Media.Streaming.Adaptive.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.Core.0.h"

namespace winrt {

namespace Windows::Media::Core {

struct IAudioStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptor>,
    impl::require<IAudioStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioStreamDescriptor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptor2>,
    impl::require<IAudioStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioStreamDescriptorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptorFactory>
{
    IAudioStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrack>
{
    IAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioTrackOpenFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrackOpenFailedEventArgs>
{
    IAudioTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioTrackSupportInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrackSupportInfo>
{
    IAudioTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IChapterCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChapterCue>,
    impl::require<IChapterCue, Windows::Media::Core::IMediaCue>
{
    IChapterCue(std::nullptr_t = nullptr) noexcept {}
};

struct ICodecInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecInfo>
{
    ICodecInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ICodecQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecQuery>
{
    ICodecQuery(std::nullptr_t = nullptr) noexcept {}
};

struct ICodecSubtypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecSubtypesStatics>
{
    ICodecSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDataCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataCue>,
    impl::require<IDataCue, Windows::Media::Core::IMediaCue>
{
    IDataCue(std::nullptr_t = nullptr) noexcept {}
};

struct IDataCue2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataCue2>,
    impl::require<IDataCue2, Windows::Media::Core::IDataCue, Windows::Media::Core::IMediaCue>
{
    IDataCue2(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectedEventArgs>
{
    IFaceDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetectionEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffect>,
    impl::require<IFaceDetectionEffect, Windows::Media::IMediaExtension>
{
    IFaceDetectionEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetectionEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffectDefinition>,
    impl::require<IFaceDetectionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    IFaceDetectionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetectionEffectFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffectFrame>,
    impl::require<IFaceDetectionEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IFaceDetectionEffectFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IHighDynamicRangeControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHighDynamicRangeControl>
{
    IHighDynamicRangeControl(std::nullptr_t = nullptr) noexcept {}
};

struct IHighDynamicRangeOutput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHighDynamicRangeOutput>
{
    IHighDynamicRangeOutput(std::nullptr_t = nullptr) noexcept {}
};

struct IImageCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageCue>,
    impl::require<IImageCue, Windows::Media::Core::IMediaCue>
{
    IImageCue(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBinder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBinder>
{
    IMediaBinder(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBindingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBindingEventArgs>
{
    IMediaBindingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaBindingEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBindingEventArgs2>
{
    IMediaBindingEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCue>
{
    IMediaCue(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCueEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCueEventArgs>
{
    IMediaCueEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource>
{
    IMediaSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource2>,
    impl::require<IMediaSource2, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource3>,
    impl::require<IMediaSource3, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSource4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource4>,
    impl::require<IMediaSource4, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Core::IMediaSource3, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource4(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSourceError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceError>
{
    IMediaSourceError(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSourceOpenOperationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceOpenOperationCompletedEventArgs>
{
    IMediaSourceOpenOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSourceStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStateChangedEventArgs>
{
    IMediaSourceStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStatics>
{
    IMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaSourceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStatics2>
{
    IMediaSourceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamDescriptor>
{
    IMediaStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSample :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSample>
{
    IMediaStreamSample(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSampleProtectionProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSampleProtectionProperties>
{
    IMediaStreamSampleProtectionProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSampleStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSampleStatics>
{
    IMediaStreamSampleStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource>,
    impl::require<IMediaStreamSource, Windows::Media::Core::IMediaSource>
{
    IMediaStreamSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource2>,
    impl::require<IMediaStreamSource2, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
{
    IMediaStreamSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource3>,
    impl::require<IMediaStreamSource3, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
{
    IMediaStreamSource3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceClosedEventArgs>
{
    IMediaStreamSourceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceClosedRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceClosedRequest>
{
    IMediaStreamSourceClosedRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceFactory>
{
    IMediaStreamSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSampleRenderedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRenderedEventArgs>
{
    IMediaStreamSourceSampleRenderedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSampleRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequest>
{
    IMediaStreamSourceSampleRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSampleRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequestDeferral>
{
    IMediaStreamSourceSampleRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSampleRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequestedEventArgs>
{
    IMediaStreamSourceSampleRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceStartingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingEventArgs>
{
    IMediaStreamSourceStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceStartingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingRequest>
{
    IMediaStreamSourceStartingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceStartingRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingRequestDeferral>
{
    IMediaStreamSourceStartingRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSwitchStreamsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequest>
{
    IMediaStreamSourceSwitchStreamsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSwitchStreamsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequestDeferral>
{
    IMediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaStreamSourceSwitchStreamsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    IMediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTrack>
{
    IMediaTrack(std::nullptr_t = nullptr) noexcept {}
};

struct IMseSourceBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseSourceBuffer>
{
    IMseSourceBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IMseSourceBufferList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseSourceBufferList>
{
    IMseSourceBufferList(std::nullptr_t = nullptr) noexcept {}
};

struct IMseStreamSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseStreamSource>,
    impl::require<IMseStreamSource, Windows::Media::Core::IMediaSource>
{
    IMseStreamSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMseStreamSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseStreamSourceStatics>
{
    IMseStreamSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISceneAnalysisEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalysisEffect>,
    impl::require<ISceneAnalysisEffect, Windows::Media::IMediaExtension>
{
    ISceneAnalysisEffect(std::nullptr_t = nullptr) noexcept {}
};

struct ISceneAnalysisEffectFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalysisEffectFrame>,
    impl::require<ISceneAnalysisEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    ISceneAnalysisEffectFrame(std::nullptr_t = nullptr) noexcept {}
};

struct ISceneAnalyzedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalyzedEventArgs>
{
    ISceneAnalyzedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISingleSelectMediaTrackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISingleSelectMediaTrackList>
{
    ISingleSelectMediaTrackList(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechCue>,
    impl::require<ISpeechCue, Windows::Media::Core::IMediaCue>
{
    ISpeechCue(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrack>,
    impl::require<ITimedMetadataTrack, Windows::Media::Core::IMediaTrack>
{
    ITimedMetadataTrack(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrack2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrack2>,
    impl::require<ITimedMetadataTrack2, Windows::Media::Core::IMediaTrack, Windows::Media::Core::ITimedMetadataTrack>
{
    ITimedMetadataTrack2(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrackError :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackError>
{
    ITimedMetadataTrackError(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrackFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackFactory>
{
    ITimedMetadataTrackFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrackFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackFailedEventArgs>
{
    ITimedMetadataTrackFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedMetadataTrackProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackProvider>
{
    ITimedMetadataTrackProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextCue>,
    impl::require<ITimedTextCue, Windows::Media::Core::IMediaCue>
{
    ITimedTextCue(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextLine>
{
    ITimedTextLine(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextRegion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextRegion>
{
    ITimedTextRegion(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSource>
{
    ITimedTextSource(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextSourceResolveResultEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceResolveResultEventArgs>
{
    ITimedTextSourceResolveResultEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceStatics>
{
    ITimedTextSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextSourceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceStatics2>
{
    ITimedTextSourceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextStyle :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextStyle>
{
    ITimedTextStyle(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextStyle2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextStyle2>
{
    ITimedTextStyle2(std::nullptr_t = nullptr) noexcept {}
};

struct ITimedTextSubformat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSubformat>
{
    ITimedTextSubformat(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoStabilizationEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStabilizationEffect>,
    impl::require<IVideoStabilizationEffect, Windows::Media::IMediaExtension>
{
    IVideoStabilizationEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoStabilizationEffectEnabledChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStabilizationEffectEnabledChangedEventArgs>
{
    IVideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamDescriptor>,
    impl::require<IVideoStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IVideoStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoStreamDescriptorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamDescriptorFactory>
{
    IVideoStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrack>
{
    IVideoTrack(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoTrackOpenFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrackOpenFailedEventArgs>
{
    IVideoTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoTrackSupportInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrackSupportInfo>
{
    IVideoTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
