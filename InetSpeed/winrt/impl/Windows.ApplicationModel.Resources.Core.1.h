// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.ApplicationModel.Resources.Core.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Resources::Core {

struct INamedResource :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedResource>
{
    INamedResource(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceCandidate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCandidate>
{
    IResourceCandidate(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceCandidate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCandidate2>
{
    IResourceCandidate2(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContext>
{
    IResourceContext(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")]] IResourceContextStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics>
{
    IResourceContextStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceContextStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics2>
{
    IResourceContextStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceContextStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics3>
{
    IResourceContextStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManager>
{
    IResourceManager(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManager2>
{
    IResourceManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManagerStatics>
{
    IResourceManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceMap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceMap>,
    impl::require<IResourceMap, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>, Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>
{
    IResourceMap(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceQualifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceQualifier>
{
    IResourceQualifier(std::nullptr_t = nullptr) noexcept {}
};

}

}
