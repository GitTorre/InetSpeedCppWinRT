// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Media::Media3D {

template <typename D, typename ... Interfaces> struct Transform3DT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::Media3D::ITransform3D>
{
    using composable = Transform3D;

protected:

    Transform3DT()
    {
        get_activation_factory<Transform3D, ITransform3DFactory>().CreateInstance(*this, m_inner);
    }
};

}

}
