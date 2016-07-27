// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Web.AtomPub.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Web::AtomPub {

struct WINRT_EBO AtomPubClient :
    Windows::Web::AtomPub::IAtomPubClient
{
    AtomPubClient(std::nullptr_t) noexcept {}
    AtomPubClient();
    AtomPubClient(const Windows::Security::Credentials::PasswordCredential & serverCredential);
};

struct WINRT_EBO ResourceCollection :
    Windows::Web::AtomPub::IResourceCollection
{
    ResourceCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ServiceDocument :
    Windows::Web::AtomPub::IServiceDocument
{
    ServiceDocument(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Workspace :
    Windows::Web::AtomPub::IWorkspace
{
    Workspace(std::nullptr_t) noexcept {}
};

}

}
