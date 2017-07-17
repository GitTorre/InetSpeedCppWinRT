// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Web.Syndication.1.h"

namespace winrt {

namespace Windows::Web::Syndication {

struct RetrievalProgress
{
    uint32_t BytesRetrieved;
    uint32_t TotalBytesToRetrieve;
};

struct TransferProgress
{
    uint32_t BytesSent;
    uint32_t TotalBytesToSend;
    uint32_t BytesRetrieved;
    uint32_t TotalBytesToRetrieve;
};

struct SyndicationAttribute :
    Windows::Web::Syndication::ISyndicationAttribute
{
    SyndicationAttribute(std::nullptr_t) noexcept {}
    SyndicationAttribute();
    SyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue);
};

struct SyndicationCategory :
    Windows::Web::Syndication::ISyndicationCategory
{
    SyndicationCategory(std::nullptr_t) noexcept {}
    SyndicationCategory();
    SyndicationCategory(param::hstring const& term);
    SyndicationCategory(param::hstring const& term, param::hstring const& scheme, param::hstring const& label);
};

struct SyndicationClient :
    Windows::Web::Syndication::ISyndicationClient
{
    SyndicationClient(std::nullptr_t) noexcept {}
    SyndicationClient();
    SyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
};

struct SyndicationContent :
    Windows::Web::Syndication::ISyndicationContent
{
    SyndicationContent(std::nullptr_t) noexcept {}
    SyndicationContent();
    SyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type);
    SyndicationContent(Windows::Foundation::Uri const& sourceUri);
};

struct SyndicationError
{
    SyndicationError() = delete;
    static Windows::Web::Syndication::SyndicationErrorStatus GetStatus(int32_t hresult);
};

struct SyndicationFeed :
    Windows::Web::Syndication::ISyndicationFeed
{
    SyndicationFeed(std::nullptr_t) noexcept {}
    SyndicationFeed();
    SyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri);
};

struct SyndicationGenerator :
    Windows::Web::Syndication::ISyndicationGenerator,
    impl::require<SyndicationGenerator, Windows::Web::Syndication::ISyndicationNode>
{
    SyndicationGenerator(std::nullptr_t) noexcept {}
    SyndicationGenerator();
    SyndicationGenerator(param::hstring const& text);
};

struct SyndicationItem :
    Windows::Web::Syndication::ISyndicationItem
{
    SyndicationItem(std::nullptr_t) noexcept {}
    SyndicationItem();
    SyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri);
};

struct SyndicationLink :
    Windows::Web::Syndication::ISyndicationLink
{
    SyndicationLink(std::nullptr_t) noexcept {}
    SyndicationLink();
    SyndicationLink(Windows::Foundation::Uri const& uri);
    SyndicationLink(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length);
};

struct SyndicationNode :
    Windows::Web::Syndication::ISyndicationNode
{
    SyndicationNode(std::nullptr_t) noexcept {}
    SyndicationNode();
    SyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue);
};

struct SyndicationPerson :
    Windows::Web::Syndication::ISyndicationPerson
{
    SyndicationPerson(std::nullptr_t) noexcept {}
    SyndicationPerson();
    SyndicationPerson(param::hstring const& name);
    SyndicationPerson(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri);
};

struct SyndicationText :
    Windows::Web::Syndication::ISyndicationText
{
    SyndicationText(std::nullptr_t) noexcept {}
    SyndicationText();
    SyndicationText(param::hstring const& text);
    SyndicationText(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type);
};

}

namespace impl {

}

}
