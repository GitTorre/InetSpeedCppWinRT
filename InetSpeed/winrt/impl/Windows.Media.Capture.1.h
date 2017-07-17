// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.Core.0.h"
#include "Windows.Media.Capture.Frames.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Devices.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Media.Capture.0.h"

namespace winrt {

namespace Windows::Media::Capture {

struct IAdvancedCapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto>
{
    IAdvancedCapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedCapturedPhoto2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto2>
{
    IAdvancedCapturedPhoto2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoCapture>
{
    IAdvancedPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastBackgroundService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundService>
{
    IAppBroadcastBackgroundService(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastBackgroundServiceSignInInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundServiceSignInInfo>
{
    IAppBroadcastBackgroundServiceSignInInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastBackgroundServiceStreamInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundServiceStreamInfo>
{
    IAppBroadcastBackgroundServiceStreamInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastCameraCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    IAppBroadcastCameraCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastGlobalSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastGlobalSettings>
{
    IAppBroadcastGlobalSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastHeartbeatRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastHeartbeatRequestedEventArgs>
{
    IAppBroadcastHeartbeatRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastManagerStatics>
{
    IAppBroadcastManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastMicrophoneCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    IAppBroadcastMicrophoneCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPlugIn :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugIn>
{
    IAppBroadcastPlugIn(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPlugInManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInManager>
{
    IAppBroadcastPlugInManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPlugInManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInManagerStatics>
{
    IAppBroadcastPlugInManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPlugInStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInStateChangedEventArgs>
{
    IAppBroadcastPlugInStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreview>
{
    IAppBroadcastPreview(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPreviewStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStateChangedEventArgs>
{
    IAppBroadcastPreviewStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPreviewStreamReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamReader>
{
    IAppBroadcastPreviewStreamReader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPreviewStreamVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamVideoFrame>
{
    IAppBroadcastPreviewStreamVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastPreviewStreamVideoHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamVideoHeader>
{
    IAppBroadcastPreviewStreamVideoHeader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastProviderSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastProviderSettings>
{
    IAppBroadcastProviderSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastServices>
{
    IAppBroadcastServices(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastSignInStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastSignInStateChangedEventArgs>
{
    IAppBroadcastSignInStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastState :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastState>
{
    IAppBroadcastState(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamAudioFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamAudioFrame>
{
    IAppBroadcastStreamAudioFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamAudioHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamAudioHeader>
{
    IAppBroadcastStreamAudioHeader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamReader>
{
    IAppBroadcastStreamReader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamStateChangedEventArgs>
{
    IAppBroadcastStreamStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamVideoFrame>
{
    IAppBroadcastStreamVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastStreamVideoHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamVideoHeader>
{
    IAppBroadcastStreamVideoHeader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerDetails>
{
    IAppBroadcastTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastViewerCountChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastViewerCountChangedEventArgs>
{
    IAppBroadcastViewerCountChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCapture>
{
    IAppCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureAlternateShortcutKeys :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys>
{
    IAppCaptureAlternateShortcutKeys(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureAlternateShortcutKeys2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys2>
{
    IAppCaptureAlternateShortcutKeys2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureAlternateShortcutKeys3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys3>
{
    IAppCaptureAlternateShortcutKeys3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureDurationGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureDurationGeneratedEventArgs>
{
    IAppCaptureDurationGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureFileGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureFileGeneratedEventArgs>
{
    IAppCaptureFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureManagerStatics>
{
    IAppCaptureManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureMicrophoneCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    IAppCaptureMicrophoneCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureRecordOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureRecordOperation>
{
    IAppCaptureRecordOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureRecordingStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureRecordingStateChangedEventArgs>
{
    IAppCaptureRecordingStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureServices>
{
    IAppCaptureServices(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings>
{
    IAppCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings2>
{
    IAppCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureSettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings3>
{
    IAppCaptureSettings3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureSettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings4>
{
    IAppCaptureSettings4(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureSettings5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings5>
{
    IAppCaptureSettings5(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureState :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureState>
{
    IAppCaptureState(std::nullptr_t = nullptr) noexcept {}
};

struct IAppCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureStatics>
{
    IAppCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraCaptureUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUI>
{
    ICameraCaptureUI(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraCaptureUIPhotoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIPhotoCaptureSettings>
{
    ICameraCaptureUIPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraCaptureUIVideoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIVideoCaptureSettings>
{
    ICameraCaptureUIVideoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraOptionsUIStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraOptionsUIStatics>
{
    ICameraOptionsUIStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICapturedFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrame>,
    impl::require<ICapturedFrame, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ICapturedFrame(std::nullptr_t = nullptr) noexcept {}
};

struct ICapturedFrameControlValues :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues>
{
    ICapturedFrameControlValues(std::nullptr_t = nullptr) noexcept {}
};

struct ICapturedFrameControlValues2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues2>
{
    ICapturedFrameControlValues2(std::nullptr_t = nullptr) noexcept {}
};

struct ICapturedFrameWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameWithSoftwareBitmap>
{
    ICapturedFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct ICapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedPhoto>
{
    ICapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServices>
{
    IGameBarServices(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServicesCommandEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesCommandEventArgs>
{
    IGameBarServicesCommandEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServicesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManager>
{
    IGameBarServicesManager(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServicesManagerGameBarServicesCreatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    IGameBarServicesManagerGameBarServicesCreatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServicesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManagerStatics>
{
    IGameBarServicesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGameBarServicesTargetInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesTargetInfo>
{
    IGameBarServicesTargetInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagMediaRecording :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording>
{
    ILowLagMediaRecording(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagMediaRecording2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording2>
{
    ILowLagMediaRecording2(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagMediaRecording3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording3>
{
    ILowLagMediaRecording3(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoCapture>
{
    ILowLagPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagPhotoSequenceCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoSequenceCapture>
{
    ILowLagPhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture>
{
    IMediaCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture2>
{
    IMediaCapture2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture3>
{
    IMediaCapture3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture4>
{
    IMediaCapture4(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture5>
{
    IMediaCapture5(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapture6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture6>
{
    IMediaCapture6(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFailedEventArgs>
{
    IMediaCaptureFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureFocusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFocusChangedEventArgs>
{
    IMediaCaptureFocusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings>
{
    IMediaCaptureInitializationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings2>
{
    IMediaCaptureInitializationSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings3>
{
    IMediaCaptureInitializationSettings3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings4>
{
    IMediaCaptureInitializationSettings4(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings5>
{
    IMediaCaptureInitializationSettings5(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureInitializationSettings6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings6>
{
    IMediaCaptureInitializationSettings6(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCapturePauseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapturePauseResult>
{
    IMediaCapturePauseResult(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings>
{
    IMediaCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings2>
{
    IMediaCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStatics>
{
    IMediaCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureStopResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStopResult>
{
    IMediaCaptureStopResult(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureVideoPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoPreview>
{
    IMediaCaptureVideoPreview(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureVideoProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfile>
{
    IMediaCaptureVideoProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCaptureVideoProfileMediaDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfileMediaDescription>
{
    IMediaCaptureVideoProfileMediaDescription(std::nullptr_t = nullptr) noexcept {}
};

struct IOptionalReferencePhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOptionalReferencePhotoCapturedEventArgs>
{
    IOptionalReferencePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoCapturedEventArgs>
{
    IPhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoConfirmationCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoConfirmationCapturedEventArgs>
{
    IPhotoConfirmationCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IScreenCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScreenCapture>
{
    IScreenCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IScreenCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScreenCaptureStatics>
{
    IScreenCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISourceSuspensionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISourceSuspensionChangedEventArgs>
{
    ISourceSuspensionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoStreamConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamConfiguration>
{
    IVideoStreamConfiguration(std::nullptr_t = nullptr) noexcept {}
};

}

}
