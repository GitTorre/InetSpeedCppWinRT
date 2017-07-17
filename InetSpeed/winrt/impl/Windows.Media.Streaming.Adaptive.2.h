// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.Streaming.Adaptive.1.h"

namespace winrt {

namespace Windows::Media::Streaming::Adaptive {

struct AdaptiveMediaSource :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource,
    impl::require<AdaptiveMediaSource, Windows::Foundation::IClosable, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3>
{
    AdaptiveMediaSource(std::nullptr_t) noexcept {}
    static bool IsContentTypeSupported(param::hstring const& contentType);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpClient const& httpClient);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType, Windows::Web::Http::HttpClient const& httpClient);
};

struct AdaptiveMediaSourceAdvancedSettings :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings
{
    AdaptiveMediaSourceAdvancedSettings(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceCorrelatedTimes :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes
{
    AdaptiveMediaSourceCorrelatedTimes(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceCreationResult :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult,
    impl::require<AdaptiveMediaSourceCreationResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2>
{
    AdaptiveMediaSourceCreationResult(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDiagnosticAvailableEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    AdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDiagnostics :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics
{
    AdaptiveMediaSourceDiagnostics(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadBitrateChangedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadBitrateChangedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    AdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadCompletedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadCompletedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    AdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadFailedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadFailedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    AdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadRequestedDeferral :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral
{
    AdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadRequestedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadRequestedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    AdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadResult :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult,
    impl::require<AdaptiveMediaSourceDownloadResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
{
    AdaptiveMediaSourceDownloadResult(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourceDownloadStatistics :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics
{
    AdaptiveMediaSourceDownloadStatistics(std::nullptr_t) noexcept {}
};

struct AdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
