// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.ApplicationModel.Resources.Management.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Resources::Management {

struct WINRT_EBO IndexedResourceCandidate :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate
{
    IndexedResourceCandidate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO IndexedResourceQualifier :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier
{
    IndexedResourceQualifier(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceIndexer :
    Windows::ApplicationModel::Resources::Management::IResourceIndexer
{
    ResourceIndexer(std::nullptr_t) noexcept {}
    ResourceIndexer(const Windows::Foundation::Uri & projectRoot);
    ResourceIndexer(const Windows::Foundation::Uri & projectRoot, const Windows::Foundation::Uri & extensionDllPath);
};

}

}
