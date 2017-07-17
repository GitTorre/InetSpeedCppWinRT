// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.Syndication.0.h"
#include "Windows.Web.AtomPub.0.h"

namespace winrt {

namespace Windows::Web::AtomPub {

struct IAtomPubClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAtomPubClient>,
    impl::require<IAtomPubClient, Windows::Web::Syndication::ISyndicationClient>
{
    IAtomPubClient(std::nullptr_t = nullptr) noexcept {}
};

struct IAtomPubClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAtomPubClientFactory>
{
    IAtomPubClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCollection>,
    impl::require<IResourceCollection, Windows::Web::Syndication::ISyndicationNode>
{
    IResourceCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IServiceDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceDocument>,
    impl::require<IServiceDocument, Windows::Web::Syndication::ISyndicationNode>
{
    IServiceDocument(std::nullptr_t = nullptr) noexcept {}
};

struct IWorkspace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkspace>,
    impl::require<IWorkspace, Windows::Web::Syndication::ISyndicationNode>
{
    IWorkspace(std::nullptr_t = nullptr) noexcept {}
};

}

}
