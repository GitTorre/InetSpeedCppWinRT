﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.Resources.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Resources {

struct ResourceLoader :
    Windows::ApplicationModel::Resources::IResourceLoader,
    impl::require<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoader2>
{
    ResourceLoader(std::nullptr_t) noexcept {}
    ResourceLoader();
    [[deprecated("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")]] ResourceLoader(param::hstring const& name);
    [[deprecated("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")]] static hstring GetStringForReference(Windows::Foundation::Uri const& uri);
    static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView();
    static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView(param::hstring const& name);
    static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse();
    static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse(param::hstring const& name);
};

}

namespace impl {

}

}
