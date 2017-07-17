// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.SocialInfo.0.h"

namespace winrt {

namespace Windows::ApplicationModel::SocialInfo {

struct [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedChildItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedChildItem>
{
    ISocialFeedChildItem(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedContent>
{
    ISocialFeedContent(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedItem>
{
    ISocialFeedItem(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedSharedItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedSharedItem>
{
    ISocialFeedSharedItem(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialItemThumbnail :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialItemThumbnail>
{
    ISocialItemThumbnail(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialUserInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialUserInfo>
{
    ISocialUserInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
