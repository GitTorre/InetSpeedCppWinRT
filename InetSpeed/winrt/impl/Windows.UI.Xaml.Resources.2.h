// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.Resources.1.h"

namespace winrt {

namespace Windows::UI::Xaml::Resources {

struct CustomXamlResourceLoader :
    Windows::UI::Xaml::Resources::ICustomXamlResourceLoader,
    impl::require<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    CustomXamlResourceLoader(std::nullptr_t) noexcept {}
    CustomXamlResourceLoader();
    static Windows::UI::Xaml::Resources::CustomXamlResourceLoader Current();
    static void Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value);
};

template <typename D>
class ICustomXamlResourceLoaderOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using ICustomXamlResourceLoaderOverrides = winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides;

    Windows::Foundation::IInspectable GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
};

}

namespace impl {

}

}
