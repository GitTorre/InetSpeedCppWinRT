// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.Capture.Core.1.h"
#include "Windows.Media.Capture.Frames.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.Devices.1.h"
#include "Windows.Media.Effects.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Security.Authentication.Web.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.1.h"
#include "Windows.Media.Capture.1.h"

namespace winrt {

namespace Windows::Media::Capture {

struct MediaCaptureFailedEventHandler : Windows::Foundation::IUnknown
{
    MediaCaptureFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MediaCaptureFailedEventHandler(L lambda);
    template <typename F> MediaCaptureFailedEventHandler(F* function);
    template <typename O, typename M> MediaCaptureFailedEventHandler(O* object, M method);
    void operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const;
};

struct RecordLimitationExceededEventHandler : Windows::Foundation::IUnknown
{
    RecordLimitationExceededEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RecordLimitationExceededEventHandler(L lambda);
    template <typename F> RecordLimitationExceededEventHandler(F* function);
    template <typename O, typename M> RecordLimitationExceededEventHandler(O* object, M method);
    void operator()(Windows::Media::Capture::MediaCapture const& sender) const;
};

struct WhiteBalanceGain
{
    double R;
    double G;
    double B;
};

struct AdvancedCapturedPhoto :
    Windows::Media::Capture::IAdvancedCapturedPhoto,
    impl::require<AdvancedCapturedPhoto, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    AdvancedCapturedPhoto(std::nullptr_t) noexcept {}
};

struct AdvancedPhotoCapture :
    Windows::Media::Capture::IAdvancedPhotoCapture
{
    AdvancedPhotoCapture(std::nullptr_t) noexcept {}
};

struct AppBroadcastBackgroundService :
    Windows::Media::Capture::IAppBroadcastBackgroundService
{
    AppBroadcastBackgroundService(std::nullptr_t) noexcept {}
};

struct AppBroadcastBackgroundServiceSignInInfo :
    Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo
{
    AppBroadcastBackgroundServiceSignInInfo(std::nullptr_t) noexcept {}
};

struct AppBroadcastBackgroundServiceStreamInfo :
    Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo
{
    AppBroadcastBackgroundServiceStreamInfo(std::nullptr_t) noexcept {}
};

struct AppBroadcastCameraCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs
{
    AppBroadcastCameraCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastGlobalSettings :
    Windows::Media::Capture::IAppBroadcastGlobalSettings
{
    AppBroadcastGlobalSettings(std::nullptr_t) noexcept {}
};

struct AppBroadcastHeartbeatRequestedEventArgs :
    Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs
{
    AppBroadcastHeartbeatRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastManager
{
    AppBroadcastManager() = delete;
    static Windows::Media::Capture::AppBroadcastGlobalSettings GetGlobalSettings();
    static void ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value);
    static Windows::Media::Capture::AppBroadcastProviderSettings GetProviderSettings();
    static void ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value);
};

struct AppBroadcastMicrophoneCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    AppBroadcastMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastPlugIn :
    Windows::Media::Capture::IAppBroadcastPlugIn
{
    AppBroadcastPlugIn(std::nullptr_t) noexcept {}
};

struct AppBroadcastPlugInManager :
    Windows::Media::Capture::IAppBroadcastPlugInManager
{
    AppBroadcastPlugInManager(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::AppBroadcastPlugInManager GetDefault();
    static Windows::Media::Capture::AppBroadcastPlugInManager GetForUser(Windows::System::User const& user);
};

struct AppBroadcastPlugInStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs
{
    AppBroadcastPlugInStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastPreview :
    Windows::Media::Capture::IAppBroadcastPreview
{
    AppBroadcastPreview(std::nullptr_t) noexcept {}
};

struct AppBroadcastPreviewStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs
{
    AppBroadcastPreviewStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastPreviewStreamReader :
    Windows::Media::Capture::IAppBroadcastPreviewStreamReader
{
    AppBroadcastPreviewStreamReader(std::nullptr_t) noexcept {}
};

struct AppBroadcastPreviewStreamVideoFrame :
    Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame
{
    AppBroadcastPreviewStreamVideoFrame(std::nullptr_t) noexcept {}
};

struct AppBroadcastPreviewStreamVideoHeader :
    Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader
{
    AppBroadcastPreviewStreamVideoHeader(std::nullptr_t) noexcept {}
};

struct AppBroadcastProviderSettings :
    Windows::Media::Capture::IAppBroadcastProviderSettings
{
    AppBroadcastProviderSettings(std::nullptr_t) noexcept {}
};

struct AppBroadcastServices :
    Windows::Media::Capture::IAppBroadcastServices
{
    AppBroadcastServices(std::nullptr_t) noexcept {}
};

struct AppBroadcastSignInStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs
{
    AppBroadcastSignInStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastState :
    Windows::Media::Capture::IAppBroadcastState
{
    AppBroadcastState(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamAudioFrame :
    Windows::Media::Capture::IAppBroadcastStreamAudioFrame
{
    AppBroadcastStreamAudioFrame(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamAudioHeader :
    Windows::Media::Capture::IAppBroadcastStreamAudioHeader
{
    AppBroadcastStreamAudioHeader(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamReader :
    Windows::Media::Capture::IAppBroadcastStreamReader
{
    AppBroadcastStreamReader(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs
{
    AppBroadcastStreamStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamVideoFrame :
    Windows::Media::Capture::IAppBroadcastStreamVideoFrame
{
    AppBroadcastStreamVideoFrame(std::nullptr_t) noexcept {}
};

struct AppBroadcastStreamVideoHeader :
    Windows::Media::Capture::IAppBroadcastStreamVideoHeader
{
    AppBroadcastStreamVideoHeader(std::nullptr_t) noexcept {}
};

struct AppBroadcastTriggerDetails :
    Windows::Media::Capture::IAppBroadcastTriggerDetails
{
    AppBroadcastTriggerDetails(std::nullptr_t) noexcept {}
};

struct AppBroadcastViewerCountChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs
{
    AppBroadcastViewerCountChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCapture :
    Windows::Media::Capture::IAppCapture
{
    AppCapture(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::AppCapture GetForCurrentView();
};

struct AppCaptureAlternateShortcutKeys :
    Windows::Media::Capture::IAppCaptureAlternateShortcutKeys,
    impl::require<AppCaptureAlternateShortcutKeys, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    AppCaptureAlternateShortcutKeys(std::nullptr_t) noexcept {}
};

struct AppCaptureDurationGeneratedEventArgs :
    Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs
{
    AppCaptureDurationGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCaptureFileGeneratedEventArgs :
    Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs
{
    AppCaptureFileGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCaptureManager
{
    AppCaptureManager() = delete;
    static Windows::Media::Capture::AppCaptureSettings GetCurrentSettings();
    static void ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings);
};

struct AppCaptureMicrophoneCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    AppCaptureMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCaptureRecordOperation :
    Windows::Media::Capture::IAppCaptureRecordOperation
{
    AppCaptureRecordOperation(std::nullptr_t) noexcept {}
};

struct AppCaptureRecordingStateChangedEventArgs :
    Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs
{
    AppCaptureRecordingStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCaptureServices :
    Windows::Media::Capture::IAppCaptureServices
{
    AppCaptureServices(std::nullptr_t) noexcept {}
};

struct AppCaptureSettings :
    Windows::Media::Capture::IAppCaptureSettings,
    impl::require<AppCaptureSettings, Windows::Media::Capture::IAppCaptureSettings2, Windows::Media::Capture::IAppCaptureSettings3, Windows::Media::Capture::IAppCaptureSettings4, Windows::Media::Capture::IAppCaptureSettings5>
{
    AppCaptureSettings(std::nullptr_t) noexcept {}
};

struct AppCaptureState :
    Windows::Media::Capture::IAppCaptureState
{
    AppCaptureState(std::nullptr_t) noexcept {}
};

struct CameraCaptureUI :
    Windows::Media::Capture::ICameraCaptureUI
{
    CameraCaptureUI(std::nullptr_t) noexcept {}
    CameraCaptureUI();
};

struct CameraCaptureUIPhotoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings
{
    CameraCaptureUIPhotoCaptureSettings(std::nullptr_t) noexcept {}
};

struct CameraCaptureUIVideoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings
{
    CameraCaptureUIVideoCaptureSettings(std::nullptr_t) noexcept {}
};

struct CameraOptionsUI
{
    CameraOptionsUI() = delete;
    static void Show(Windows::Media::Capture::MediaCapture const& mediaCapture);
};

struct CapturedFrame :
    Windows::Media::Capture::ICapturedFrame,
    impl::require<CapturedFrame, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    CapturedFrame(std::nullptr_t) noexcept {}
};

struct CapturedFrameControlValues :
    Windows::Media::Capture::ICapturedFrameControlValues,
    impl::require<CapturedFrameControlValues, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    CapturedFrameControlValues(std::nullptr_t) noexcept {}
};

struct CapturedPhoto :
    Windows::Media::Capture::ICapturedPhoto
{
    CapturedPhoto(std::nullptr_t) noexcept {}
};

struct GameBarServices :
    Windows::Media::Capture::IGameBarServices
{
    GameBarServices(std::nullptr_t) noexcept {}
};

struct GameBarServicesCommandEventArgs :
    Windows::Media::Capture::IGameBarServicesCommandEventArgs
{
    GameBarServicesCommandEventArgs(std::nullptr_t) noexcept {}
};

struct GameBarServicesManager :
    Windows::Media::Capture::IGameBarServicesManager
{
    GameBarServicesManager(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::GameBarServicesManager GetDefault();
};

struct GameBarServicesManagerGameBarServicesCreatedEventArgs :
    Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    GameBarServicesManagerGameBarServicesCreatedEventArgs(std::nullptr_t) noexcept {}
};

struct GameBarServicesTargetInfo :
    Windows::Media::Capture::IGameBarServicesTargetInfo
{
    GameBarServicesTargetInfo(std::nullptr_t) noexcept {}
};

struct LowLagMediaRecording :
    Windows::Media::Capture::ILowLagMediaRecording,
    impl::require<LowLagMediaRecording, Windows::Media::Capture::ILowLagMediaRecording2, Windows::Media::Capture::ILowLagMediaRecording3>
{
    LowLagMediaRecording(std::nullptr_t) noexcept {}
};

struct LowLagPhotoCapture :
    Windows::Media::Capture::ILowLagPhotoCapture
{
    LowLagPhotoCapture(std::nullptr_t) noexcept {}
};

struct LowLagPhotoSequenceCapture :
    Windows::Media::Capture::ILowLagPhotoSequenceCapture
{
    LowLagPhotoSequenceCapture(std::nullptr_t) noexcept {}
};

struct MediaCapture :
    Windows::Media::Capture::IMediaCapture,
    impl::require<MediaCapture, Windows::Foundation::IClosable, Windows::Media::Capture::IMediaCapture2, Windows::Media::Capture::IMediaCapture3, Windows::Media::Capture::IMediaCapture4, Windows::Media::Capture::IMediaCapture5, Windows::Media::Capture::IMediaCapture6, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    MediaCapture(std::nullptr_t) noexcept {}
    MediaCapture();
    static bool IsVideoProfileSupported(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name);
};

struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaCaptureFailedEventArgs :
    Windows::Media::Capture::IMediaCaptureFailedEventArgs
{
    MediaCaptureFailedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaCaptureFocusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs
{
    MediaCaptureFocusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaCaptureInitializationSettings :
    Windows::Media::Capture::IMediaCaptureInitializationSettings,
    impl::require<MediaCaptureInitializationSettings, Windows::Media::Capture::IMediaCaptureInitializationSettings2, Windows::Media::Capture::IMediaCaptureInitializationSettings3, Windows::Media::Capture::IMediaCaptureInitializationSettings4, Windows::Media::Capture::IMediaCaptureInitializationSettings5, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    MediaCaptureInitializationSettings(std::nullptr_t) noexcept {}
    MediaCaptureInitializationSettings();
};

struct MediaCapturePauseResult :
    Windows::Media::Capture::IMediaCapturePauseResult,
    impl::require<MediaCapturePauseResult, Windows::Foundation::IClosable>
{
    MediaCapturePauseResult(std::nullptr_t) noexcept {}
};

struct MediaCaptureSettings :
    Windows::Media::Capture::IMediaCaptureSettings,
    impl::require<MediaCaptureSettings, Windows::Media::Capture::IMediaCaptureSettings2>
{
    MediaCaptureSettings(std::nullptr_t) noexcept {}
};

struct MediaCaptureStopResult :
    Windows::Media::Capture::IMediaCaptureStopResult,
    impl::require<MediaCaptureStopResult, Windows::Foundation::IClosable>
{
    MediaCaptureStopResult(std::nullptr_t) noexcept {}
};

struct MediaCaptureVideoProfile :
    Windows::Media::Capture::IMediaCaptureVideoProfile
{
    MediaCaptureVideoProfile(std::nullptr_t) noexcept {}
};

struct MediaCaptureVideoProfileMediaDescription :
    Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription
{
    MediaCaptureVideoProfileMediaDescription(std::nullptr_t) noexcept {}
};

struct OptionalReferencePhotoCapturedEventArgs :
    Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs
{
    OptionalReferencePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct PhotoCapturedEventArgs :
    Windows::Media::Capture::IPhotoCapturedEventArgs
{
    PhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct PhotoConfirmationCapturedEventArgs :
    Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs
{
    PhotoConfirmationCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct ScreenCapture :
    Windows::Media::Capture::IScreenCapture
{
    ScreenCapture(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::ScreenCapture GetForCurrentView();
};

struct SourceSuspensionChangedEventArgs :
    Windows::Media::Capture::ISourceSuspensionChangedEventArgs
{
    SourceSuspensionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct VideoStreamConfiguration :
    Windows::Media::Capture::IVideoStreamConfiguration
{
    VideoStreamConfiguration(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
