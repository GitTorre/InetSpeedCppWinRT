// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.PlayTo.0.h"

namespace winrt {

namespace Windows::Media::PlayTo {

struct ICurrentTimeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentTimeChangeRequestedEventArgs>
{
    ICurrentTimeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMuteChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMuteChangeRequestedEventArgs>
{
    IMuteChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")]] IPlayToConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnection>
{
    IPlayToConnection(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")]] IPlayToConnectionErrorEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionErrorEventArgs>
{
    IPlayToConnectionErrorEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToConnectionStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionStateChangedEventArgs>
{
    IPlayToConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToConnectionTransferredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionTransferredEventArgs>
{
    IPlayToConnectionTransferredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] IPlayToManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToManager>
{
    IPlayToManager(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] IPlayToManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToManagerStatics>
{
    IPlayToManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayToReceiver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToReceiver>
{
    IPlayToReceiver(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] IPlayToSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSource>
{
    IPlayToSource(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceDeferral>
{
    IPlayToSourceDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceRequest>
{
    IPlayToSourceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceRequestedEventArgs>
{
    IPlayToSourceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceSelectedEventArgs>
{
    IPlayToSourceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] IPlayToSourceWithPreferredSourceUri :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceWithPreferredSourceUri>
{
    IPlayToSourceWithPreferredSourceUri(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaybackRateChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
{
    IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISourceChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISourceChangeRequestedEventArgs>
{
    ISourceChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVolumeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVolumeChangeRequestedEventArgs>
{
    IVolumeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
