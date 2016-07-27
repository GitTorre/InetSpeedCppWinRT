// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Input {

template <typename D, typename ... Interfaces> struct ManipulationStartedRoutedEventArgsT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IRoutedEventArgs, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>
{
    using composable = ManipulationStartedRoutedEventArgs;

protected:

    ManipulationStartedRoutedEventArgsT()
    {
        get_activation_factory<ManipulationStartedRoutedEventArgs, IManipulationStartedRoutedEventArgsFactory>().CreateInstance(*this, m_inner);
    }
};

}

}
