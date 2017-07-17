// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Devices.Core.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.Devices.0.h"

namespace winrt {

namespace Windows::Media::Devices {

struct IAdvancedPhotoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoCaptureSettings>
{
    IAdvancedPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedPhotoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoControl>
{
    IAdvancedPhotoControl(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedVideoCaptureDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController>
{
    IAdvancedVideoCaptureDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedVideoCaptureDeviceController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController2>
{
    IAdvancedVideoCaptureDeviceController2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedVideoCaptureDeviceController3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController3>
{
    IAdvancedVideoCaptureDeviceController3(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedVideoCaptureDeviceController4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController4>
{
    IAdvancedVideoCaptureDeviceController4(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvancedVideoCaptureDeviceController5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController5>
{
    IAdvancedVideoCaptureDeviceController5(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceController>,
    impl::require<IAudioDeviceController, Windows::Media::Devices::IMediaDeviceController>
{
    IAudioDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioDeviceModule :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModule>
{
    IAudioDeviceModule(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioDeviceModuleNotificationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModuleNotificationEventArgs>
{
    IAudioDeviceModuleNotificationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioDeviceModulesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModulesManager>
{
    IAudioDeviceModulesManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioDeviceModulesManagerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModulesManagerFactory>
{
    IAudioDeviceModulesManagerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICallControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallControl>
{
    ICallControl(std::nullptr_t = nullptr) noexcept {}
};

struct ICallControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallControlStatics>
{
    ICallControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDefaultAudioDeviceChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDefaultAudioDeviceChangedEventArgs>
{
    IDefaultAudioDeviceChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDialRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialRequestedEventArgs>
{
    IDialRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IExposureCompensationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposureCompensationControl>
{
    IExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
};

struct IExposureControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposureControl>
{
    IExposureControl(std::nullptr_t = nullptr) noexcept {}
};

struct IExposurePriorityVideoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposurePriorityVideoControl>
{
    IExposurePriorityVideoControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFlashControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlashControl>
{
    IFlashControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFlashControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlashControl2>
{
    IFlashControl2(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusControl>
{
    IFocusControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusControl2>
{
    IFocusControl2(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusSettings>
{
    IFocusSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IHdrVideoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdrVideoControl>
{
    IHdrVideoControl(std::nullptr_t = nullptr) noexcept {}
};

struct IIsoSpeedControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIsoSpeedControl>
{
    IIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
};

struct IIsoSpeedControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIsoSpeedControl2>
{
    IIsoSpeedControl2(std::nullptr_t = nullptr) noexcept {}
};

struct IKeypadPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeypadPressedEventArgs>
{
    IKeypadPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagPhotoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoControl>
{
    ILowLagPhotoControl(std::nullptr_t = nullptr) noexcept {}
};

struct ILowLagPhotoSequenceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoSequenceControl>
{
    ILowLagPhotoSequenceControl(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaDeviceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceControl>
{
    IMediaDeviceControl(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaDeviceControlCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceControlCapabilities>
{
    IMediaDeviceControlCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceController>
{
    IMediaDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceStatics>
{
    IMediaDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IModuleCommandResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IModuleCommandResult>
{
    IModuleCommandResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOpticalImageStabilizationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpticalImageStabilizationControl>
{
    IOpticalImageStabilizationControl(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoConfirmationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoConfirmationControl>
{
    IPhotoConfirmationControl(std::nullptr_t = nullptr) noexcept {}
};

struct IRedialRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRedialRequestedEventArgs>
{
    IRedialRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRegionOfInterest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionOfInterest>
{
    IRegionOfInterest(std::nullptr_t = nullptr) noexcept {}
};

struct IRegionOfInterest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionOfInterest2>
{
    IRegionOfInterest2(std::nullptr_t = nullptr) noexcept {}
};

struct IRegionsOfInterestControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionsOfInterestControl>
{
    IRegionsOfInterestControl(std::nullptr_t = nullptr) noexcept {}
};

struct ISceneModeControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneModeControl>
{
    ISceneModeControl(std::nullptr_t = nullptr) noexcept {}
};

struct ITorchControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITorchControl>
{
    ITorchControl(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDeviceController>,
    impl::require<IVideoDeviceController, Windows::Media::Devices::IMediaDeviceController>
{
    IVideoDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoDeviceControllerGetDevicePropertyResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDeviceControllerGetDevicePropertyResult>
{
    IVideoDeviceControllerGetDevicePropertyResult(std::nullptr_t = nullptr) noexcept {}
};

struct IWhiteBalanceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWhiteBalanceControl>
{
    IWhiteBalanceControl(std::nullptr_t = nullptr) noexcept {}
};

struct IZoomControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomControl>
{
    IZoomControl(std::nullptr_t = nullptr) noexcept {}
};

struct IZoomControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomControl2>
{
    IZoomControl2(std::nullptr_t = nullptr) noexcept {}
};

struct IZoomSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomSettings>
{
    IZoomSettings(std::nullptr_t = nullptr) noexcept {}
};

}

}
