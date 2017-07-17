// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Media.ContentRestrictions.1.h"

namespace winrt {

namespace Windows::Media::ContentRestrictions {

struct ContentRestrictionsBrowsePolicy :
    Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy
{
    ContentRestrictionsBrowsePolicy(std::nullptr_t) noexcept {}
};

struct RatedContentDescription :
    Windows::Media::ContentRestrictions::IRatedContentDescription
{
    RatedContentDescription(std::nullptr_t) noexcept {}
    RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category);
};

struct RatedContentRestrictions :
    Windows::Media::ContentRestrictions::IRatedContentRestrictions
{
    RatedContentRestrictions(std::nullptr_t) noexcept {}
    RatedContentRestrictions();
    RatedContentRestrictions(uint32_t maxAgeRating);
};

}

namespace impl {

}

}
