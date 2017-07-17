// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.0.h"
#include "Windows.UI.Xaml.Automation.0.h"
#include "Windows.UI.Xaml.Automation.Peers.0.h"
#include "Windows.UI.Xaml.Automation.Text.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Automation.Provider.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Automation::Provider {

struct IAnnotationProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnnotationProvider>
{
    IAnnotationProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomNavigationProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomNavigationProvider>
{
    ICustomNavigationProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IDockProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDockProvider>
{
    IDockProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IDragProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDragProvider>
{
    IDragProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IDropTargetProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDropTargetProvider>
{
    IDropTargetProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IExpandCollapseProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExpandCollapseProvider>
{
    IExpandCollapseProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGridItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridItemProvider>
{
    IGridItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGridProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridProvider>
{
    IGridProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IIRawElementProviderSimple :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIRawElementProviderSimple>
{
    IIRawElementProviderSimple(std::nullptr_t = nullptr) noexcept {}
};

struct IInvokeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInvokeProvider>
{
    IInvokeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IItemContainerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemContainerProvider>
{
    IItemContainerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IMultipleViewProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultipleViewProvider>
{
    IMultipleViewProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IObjectModelProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IObjectModelProvider>
{
    IObjectModelProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IRangeValueProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeValueProvider>
{
    IRangeValueProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollItemProvider>
{
    IScrollItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollProvider>
{
    IScrollProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectionItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionItemProvider>
{
    ISelectionItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectionProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionProvider>
{
    ISelectionProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISpreadsheetItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpreadsheetItemProvider>
{
    ISpreadsheetItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISpreadsheetProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpreadsheetProvider>
{
    ISpreadsheetProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IStylesProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStylesProvider>
{
    IStylesProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISynchronizedInputProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISynchronizedInputProvider>
{
    ISynchronizedInputProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITableItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableItemProvider>
{
    ITableItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITableProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableProvider>
{
    ITableProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITextChildProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextChildProvider>
{
    ITextChildProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITextEditProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextEditProvider>,
    impl::require<ITextEditProvider, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextEditProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITextProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextProvider>
{
    ITextProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITextProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextProvider2>,
    impl::require<ITextProvider2, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct ITextRangeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRangeProvider>
{
    ITextRangeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITextRangeProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRangeProvider2>,
    impl::require<ITextRangeProvider2, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
{
    ITextRangeProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleProvider>
{
    IToggleProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITransformProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformProvider>
{
    ITransformProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ITransformProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformProvider2>,
    impl::require<ITransformProvider2, Windows::UI::Xaml::Automation::Provider::ITransformProvider>
{
    ITransformProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct IValueProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueProvider>
{
    IValueProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IVirtualizedItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVirtualizedItemProvider>
{
    IVirtualizedItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IWindowProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowProvider>
{
    IWindowProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
