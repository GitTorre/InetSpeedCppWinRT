// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Streaming.Adaptive.0.h"

namespace winrt {

namespace Windows::Media::Streaming::Adaptive {

struct IAdaptiveMediaSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource>,
    impl::require<IAdaptiveMediaSource, Windows::Media::Core::IMediaSource>
{
    IAdaptiveMediaSource(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource2>
{
    IAdaptiveMediaSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource3>
{
    IAdaptiveMediaSource3(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceAdvancedSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceAdvancedSettings>
{
    IAdaptiveMediaSourceAdvancedSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCorrelatedTimes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCorrelatedTimes>
{
    IAdaptiveMediaSourceCorrelatedTimes(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCreationResult>
{
    IAdaptiveMediaSourceCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCreationResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCreationResult2>
{
    IAdaptiveMediaSourceCreationResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDiagnosticAvailableEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDiagnosticAvailableEventArgs>
{
    IAdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDiagnostics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDiagnostics>
{
    IAdaptiveMediaSourceDiagnostics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadCompletedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadFailedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedDeferral>
{
    IAdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadResult>
{
    IAdaptiveMediaSourceDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadResult2>
{
    IAdaptiveMediaSourceDownloadResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadStatistics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadStatistics>
{
    IAdaptiveMediaSourceDownloadStatistics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceStatics>
{
    IAdaptiveMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
