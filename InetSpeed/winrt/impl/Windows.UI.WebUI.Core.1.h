// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.WebUI.Core.0.h"

namespace winrt {

namespace Windows::UI::WebUI::Core {

struct IWebUICommandBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBar>
{
    IWebUICommandBar(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarBitmapIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarBitmapIcon>,
    impl::require<IWebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarBitmapIcon(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarBitmapIconFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarBitmapIconFactory>
{
    IWebUICommandBarBitmapIconFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarConfirmationButton :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarConfirmationButton>,
    impl::require<IWebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarConfirmationButton(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarElement>
{
    IWebUICommandBarElement(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarIcon>
{
    IWebUICommandBarIcon(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarIconButton :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarIconButton>,
    impl::require<IWebUICommandBarIconButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarIconButton(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarItemInvokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarItemInvokedEventArgs>
{
    IWebUICommandBarItemInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarSizeChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSizeChangedEventArgs>
{
    IWebUICommandBarSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarStatics>
{
    IWebUICommandBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarSymbolIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSymbolIcon>,
    impl::require<IWebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarSymbolIcon(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUICommandBarSymbolIconFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSymbolIconFactory>
{
    IWebUICommandBarSymbolIconFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
