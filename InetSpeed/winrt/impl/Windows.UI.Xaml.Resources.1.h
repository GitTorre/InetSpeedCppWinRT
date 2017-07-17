// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.Resources.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Resources {

struct ICustomXamlResourceLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoader>
{
    ICustomXamlResourceLoader(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomXamlResourceLoaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderFactory>
{
    ICustomXamlResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomXamlResourceLoaderOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderOverrides>
{
    ICustomXamlResourceLoaderOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomXamlResourceLoaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderStatics>
{
    ICustomXamlResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
