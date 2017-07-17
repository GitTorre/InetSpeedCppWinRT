// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Services.TargetedContent.1.h"

namespace winrt {

namespace Windows::Services::TargetedContent {

struct TargetedContentAction :
    Windows::Services::TargetedContent::ITargetedContentAction
{
    TargetedContentAction(std::nullptr_t) noexcept {}
};

struct TargetedContentAvailabilityChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs
{
    TargetedContentAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
};

struct TargetedContentChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentChangedEventArgs
{
    TargetedContentChangedEventArgs(std::nullptr_t) noexcept {}
};

struct TargetedContentCollection :
    Windows::Services::TargetedContent::ITargetedContentCollection
{
    TargetedContentCollection(std::nullptr_t) noexcept {}
};

struct TargetedContentContainer :
    Windows::Services::TargetedContent::ITargetedContentContainer
{
    TargetedContentContainer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetAsync(param::hstring const& contentId);
};

struct TargetedContentFile :
    Windows::Storage::Streams::IRandomAccessStreamReference
{
    TargetedContentFile(std::nullptr_t) noexcept {}
};

struct TargetedContentImage :
    Windows::Services::TargetedContent::ITargetedContentImage
{
    TargetedContentImage(std::nullptr_t) noexcept {}
};

struct TargetedContentItem :
    Windows::Services::TargetedContent::ITargetedContentItem
{
    TargetedContentItem(std::nullptr_t) noexcept {}
};

struct TargetedContentItemState :
    Windows::Services::TargetedContent::ITargetedContentItemState
{
    TargetedContentItemState(std::nullptr_t) noexcept {}
};

struct TargetedContentObject :
    Windows::Services::TargetedContent::ITargetedContentObject
{
    TargetedContentObject(std::nullptr_t) noexcept {}
};

struct TargetedContentStateChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs
{
    TargetedContentStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct TargetedContentSubscription :
    Windows::Services::TargetedContent::ITargetedContentSubscription
{
    TargetedContentSubscription(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> GetAsync(param::hstring const& subscriptionId);
    static Windows::Services::TargetedContent::TargetedContentSubscriptionOptions GetOptions(param::hstring const& subscriptionId);
};

struct TargetedContentSubscriptionOptions :
    Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions
{
    TargetedContentSubscriptionOptions(std::nullptr_t) noexcept {}
};

struct TargetedContentValue :
    Windows::Services::TargetedContent::ITargetedContentValue
{
    TargetedContentValue(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
