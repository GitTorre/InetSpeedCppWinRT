// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.SocialInfo.1.h"

namespace winrt {

namespace Windows::ApplicationModel::SocialInfo {

struct [[deprecated("SocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedChildItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem
{
    SocialFeedChildItem(std::nullptr_t) noexcept {}
    SocialFeedChildItem();
};

struct [[deprecated("SocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedContent :
    Windows::ApplicationModel::SocialInfo::ISocialFeedContent
{
    SocialFeedContent(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedItem
{
    SocialFeedItem(std::nullptr_t) noexcept {}
    SocialFeedItem();
};

struct [[deprecated("SocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedSharedItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem
{
    SocialFeedSharedItem(std::nullptr_t) noexcept {}
    SocialFeedSharedItem();
};

struct [[deprecated("SocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialItemThumbnail :
    Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail
{
    SocialItemThumbnail(std::nullptr_t) noexcept {}
    SocialItemThumbnail();
};

struct [[deprecated("SocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialUserInfo :
    Windows::ApplicationModel::SocialInfo::ISocialUserInfo
{
    SocialUserInfo(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
