// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.Resources.Management.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Resources::Management {

struct IIndexedResourceCandidate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexedResourceCandidate>
{
    IIndexedResourceCandidate(std::nullptr_t = nullptr) noexcept {}
};

struct IIndexedResourceQualifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexedResourceQualifier>
{
    IIndexedResourceQualifier(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceIndexer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexer>
{
    IResourceIndexer(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceIndexerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexerFactory>
{
    IResourceIndexerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceIndexerFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexerFactory2>
{
    IResourceIndexerFactory2(std::nullptr_t = nullptr) noexcept {}
};

}

}
