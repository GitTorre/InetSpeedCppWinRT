// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.Resources.Management.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Resources::Management {

struct IndexedResourceCandidate :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate
{
    IndexedResourceCandidate(std::nullptr_t) noexcept {}
};

struct IndexedResourceQualifier :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier
{
    IndexedResourceQualifier(std::nullptr_t) noexcept {}
};

struct ResourceIndexer :
    Windows::ApplicationModel::Resources::Management::IResourceIndexer
{
    ResourceIndexer(std::nullptr_t) noexcept {}
    ResourceIndexer(Windows::Foundation::Uri const& projectRoot);
    ResourceIndexer(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath);
};

}

namespace impl {

}

}
