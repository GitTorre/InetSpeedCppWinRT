﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.WebUI.Core.1.h"

namespace winrt {

namespace Windows::UI::WebUI::Core {

struct MenuClosedEventHandler : Windows::Foundation::IUnknown
{
    MenuClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MenuClosedEventHandler(L lambda);
    template <typename F> MenuClosedEventHandler(F* function);
    template <typename O, typename M> MenuClosedEventHandler(O* object, M method);
    void operator()() const;
};

struct MenuOpenedEventHandler : Windows::Foundation::IUnknown
{
    MenuOpenedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MenuOpenedEventHandler(L lambda);
    template <typename F> MenuOpenedEventHandler(F* function);
    template <typename O, typename M> MenuOpenedEventHandler(O* object, M method);
    void operator()() const;
};

struct SizeChangedEventHandler : Windows::Foundation::IUnknown
{
    SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SizeChangedEventHandler(L lambda);
    template <typename F> SizeChangedEventHandler(F* function);
    template <typename O, typename M> SizeChangedEventHandler(O* object, M method);
    void operator()(Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs const& eventArgs) const;
};

struct WebUICommandBar :
    Windows::UI::WebUI::Core::IWebUICommandBar
{
    WebUICommandBar(std::nullptr_t) noexcept {}
    static Windows::UI::WebUI::Core::WebUICommandBar GetForCurrentView();
};

struct WebUICommandBarBitmapIcon :
    Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon
{
    WebUICommandBarBitmapIcon(std::nullptr_t) noexcept {}
    WebUICommandBarBitmapIcon();
    WebUICommandBarBitmapIcon(Windows::Foundation::Uri const& uri);
};

struct WebUICommandBarConfirmationButton :
    Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton
{
    WebUICommandBarConfirmationButton(std::nullptr_t) noexcept {}
    WebUICommandBarConfirmationButton();
};

struct WebUICommandBarIconButton :
    Windows::UI::WebUI::Core::IWebUICommandBarIconButton
{
    WebUICommandBarIconButton(std::nullptr_t) noexcept {}
    WebUICommandBarIconButton();
};

struct WebUICommandBarItemInvokedEventArgs :
    Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs
{
    WebUICommandBarItemInvokedEventArgs(std::nullptr_t) noexcept {}
};

struct WebUICommandBarSizeChangedEventArgs :
    Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs
{
    WebUICommandBarSizeChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WebUICommandBarSymbolIcon :
    Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon
{
    WebUICommandBarSymbolIcon(std::nullptr_t) noexcept {}
    WebUICommandBarSymbolIcon();
    WebUICommandBarSymbolIcon(param::hstring const& symbol);
};

}

namespace impl {

}

}
