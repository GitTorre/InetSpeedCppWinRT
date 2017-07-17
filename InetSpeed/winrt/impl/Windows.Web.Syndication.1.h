// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Web.Syndication.0.h"

namespace winrt {

namespace Windows::Web::Syndication {

struct ISyndicationAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationAttribute>
{
    ISyndicationAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationAttributeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationAttributeFactory>
{
    ISyndicationAttributeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationCategory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationCategory>,
    impl::require<ISyndicationCategory, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationCategory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationCategoryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationCategoryFactory>
{
    ISyndicationCategoryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationClient>
{
    ISyndicationClient(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationClientFactory>
{
    ISyndicationClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationContent>,
    impl::require<ISyndicationContent, Windows::Web::Syndication::ISyndicationNode, Windows::Web::Syndication::ISyndicationText>
{
    ISyndicationContent(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationContentFactory>
{
    ISyndicationContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationErrorStatics>
{
    ISyndicationErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationFeed :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationFeed>,
    impl::require<ISyndicationFeed, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationFeed(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationFeedFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationFeedFactory>
{
    ISyndicationFeedFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationGenerator>
{
    ISyndicationGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationGeneratorFactory>
{
    ISyndicationGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationItem>,
    impl::require<ISyndicationItem, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationItem(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationItemFactory>
{
    ISyndicationItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationLink :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationLink>,
    impl::require<ISyndicationLink, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationLink(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationLinkFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationLinkFactory>
{
    ISyndicationLinkFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationNode>
{
    ISyndicationNode(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationNodeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationNodeFactory>
{
    ISyndicationNodeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationPerson :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationPerson>,
    impl::require<ISyndicationPerson, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationPerson(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationPersonFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationPersonFactory>
{
    ISyndicationPersonFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationText :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationText>,
    impl::require<ISyndicationText, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationText(std::nullptr_t = nullptr) noexcept {}
};

struct ISyndicationTextFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationTextFactory>
{
    ISyndicationTextFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
