// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.ContentRestrictions.0.h"

namespace winrt {

namespace Windows::Media::ContentRestrictions {

struct IContentRestrictionsBrowsePolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentRestrictionsBrowsePolicy>
{
    IContentRestrictionsBrowsePolicy(std::nullptr_t = nullptr) noexcept {}
};

struct IRatedContentDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentDescription>
{
    IRatedContentDescription(std::nullptr_t = nullptr) noexcept {}
};

struct IRatedContentDescriptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentDescriptionFactory>
{
    IRatedContentDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRatedContentRestrictions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentRestrictions>
{
    IRatedContentRestrictions(std::nullptr_t = nullptr) noexcept {}
};

struct IRatedContentRestrictionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentRestrictionsFactory>
{
    IRatedContentRestrictionsFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
