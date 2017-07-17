// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Media.Media3D.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Media::Media3D {

struct ICompositeTransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform3D>
{
    ICompositeTransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositeTransform3DStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform3DStatics>
{
    ICompositeTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrix3DHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DHelper>
{
    IMatrix3DHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrix3DHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DHelperStatics>
{
    IMatrix3DHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPerspectiveTransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerspectiveTransform3D>
{
    IPerspectiveTransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct IPerspectiveTransform3DStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerspectiveTransform3DStatics>
{
    IPerspectiveTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform3D>
{
    ITransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct ITransform3DFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform3DFactory>
{
    ITransform3DFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
