// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Composition.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.UI.Xaml.Hosting.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Hosting {

struct IElementCompositionPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreview>
{
    IElementCompositionPreview(std::nullptr_t = nullptr) noexcept {}
};

struct IElementCompositionPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics>
{
    IElementCompositionPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IElementCompositionPreviewStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics2>
{
    IElementCompositionPreviewStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenter>
{
    IXamlUIPresenter(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenterHost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost>
{
    IXamlUIPresenterHost(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenterHost2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost2>
{
    IXamlUIPresenterHost2(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenterHost3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost3>
{
    IXamlUIPresenterHost3(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterStatics>
{
    IXamlUIPresenterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlUIPresenterStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterStatics2>
{
    IXamlUIPresenterStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
