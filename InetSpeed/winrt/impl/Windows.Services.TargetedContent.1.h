// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Services.TargetedContent.0.h"

namespace winrt {

namespace Windows::Services::TargetedContent {

struct ITargetedContentAction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentAction>
{
    ITargetedContentAction(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentAvailabilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentAvailabilityChangedEventArgs>
{
    ITargetedContentAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentChangedEventArgs>
{
    ITargetedContentChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentCollection>
{
    ITargetedContentCollection(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentContainer>
{
    ITargetedContentContainer(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentContainerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentContainerStatics>
{
    ITargetedContentContainerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentImage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentImage>,
    impl::require<ITargetedContentImage, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    ITargetedContentImage(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentItem>
{
    ITargetedContentItem(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentItemState :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentItemState>
{
    ITargetedContentItemState(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentObject>
{
    ITargetedContentObject(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentStateChangedEventArgs>
{
    ITargetedContentStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentSubscription :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscription>
{
    ITargetedContentSubscription(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentSubscriptionOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscriptionOptions>
{
    ITargetedContentSubscriptionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentSubscriptionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscriptionStatics>
{
    ITargetedContentSubscriptionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetedContentValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentValue>
{
    ITargetedContentValue(std::nullptr_t = nullptr) noexcept {}
};

}

}
