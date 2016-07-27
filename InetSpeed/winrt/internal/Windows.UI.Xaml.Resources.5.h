// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Resources {

template <typename D, typename ... Interfaces> struct CustomXamlResourceLoaderT :
    overrides<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverridesT<D>, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
{
    using composable = CustomXamlResourceLoader;

protected:

    CustomXamlResourceLoaderT()
    {
        get_activation_factory<CustomXamlResourceLoader, ICustomXamlResourceLoaderFactory>().CreateInstance(*this, m_inner);
    }
};

}

}
