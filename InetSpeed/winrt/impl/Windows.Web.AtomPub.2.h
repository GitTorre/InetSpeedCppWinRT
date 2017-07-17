// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.Syndication.1.h"
#include "Windows.Web.AtomPub.1.h"

namespace winrt {

namespace Windows::Web::AtomPub {

struct AtomPubClient :
    Windows::Web::AtomPub::IAtomPubClient
{
    AtomPubClient(std::nullptr_t) noexcept {}
    AtomPubClient();
    AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
};

struct ResourceCollection :
    Windows::Web::AtomPub::IResourceCollection
{
    ResourceCollection(std::nullptr_t) noexcept {}
};

struct ServiceDocument :
    Windows::Web::AtomPub::IServiceDocument
{
    ServiceDocument(std::nullptr_t) noexcept {}
};

struct Workspace :
    Windows::Web::AtomPub::IWorkspace
{
    Workspace(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
