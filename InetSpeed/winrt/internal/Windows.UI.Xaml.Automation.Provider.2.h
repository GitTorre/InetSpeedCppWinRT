// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.UI.Xaml.Automation.Provider.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Automation::Provider {

template <typename D>
class WINRT_EBO impl_IAnnotationProvider
{
    auto shim() const { return impl::shim<D, IAnnotationProvider>(this); }

public:

    int32_t AnnotationTypeId() const;
    hstring AnnotationTypeName() const;
    hstring Author() const;
    hstring DateTime() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple Target() const;
};

template <typename D>
class WINRT_EBO impl_ICustomNavigationProvider
{
    auto shim() const { return impl::shim<D, ICustomNavigationProvider>(this); }

public:

    Windows::IInspectable NavigateCustom(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction) const;
};

template <typename D>
class WINRT_EBO impl_IDockProvider
{
    auto shim() const { return impl::shim<D, IDockProvider>(this); }

public:

    Windows::UI::Xaml::Automation::DockPosition DockPosition() const;
    void SetDockPosition(Windows::UI::Xaml::Automation::DockPosition dockPosition) const;
};

template <typename D>
class WINRT_EBO impl_IDragProvider
{
    auto shim() const { return impl::shim<D, IDragProvider>(this); }

public:

    bool IsGrabbed() const;
    hstring DropEffect() const;
    com_array<hstring> DropEffects() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetGrabbedItems() const;
};

template <typename D>
class WINRT_EBO impl_IDropTargetProvider
{
    auto shim() const { return impl::shim<D, IDropTargetProvider>(this); }

public:

    hstring DropEffect() const;
    com_array<hstring> DropEffects() const;
};

template <typename D>
class WINRT_EBO impl_IExpandCollapseProvider
{
    auto shim() const { return impl::shim<D, IExpandCollapseProvider>(this); }

public:

    Windows::UI::Xaml::Automation::ExpandCollapseState ExpandCollapseState() const;
    void Collapse() const;
    void Expand() const;
};

template <typename D>
class WINRT_EBO impl_IGridItemProvider
{
    auto shim() const { return impl::shim<D, IGridItemProvider>(this); }

public:

    int32_t Column() const;
    int32_t ColumnSpan() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple ContainingGrid() const;
    int32_t Row() const;
    int32_t RowSpan() const;
};

template <typename D>
class WINRT_EBO impl_IGridProvider
{
    auto shim() const { return impl::shim<D, IGridProvider>(this); }

public:

    int32_t ColumnCount() const;
    int32_t RowCount() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetItem(int32_t row, int32_t column) const;
};

template <typename D>
class WINRT_EBO impl_IIRawElementProviderSimple
{
    auto shim() const { return impl::shim<D, IIRawElementProviderSimple>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IInvokeProvider
{
    auto shim() const { return impl::shim<D, IInvokeProvider>(this); }

public:

    void Invoke() const;
};

template <typename D>
class WINRT_EBO impl_IItemContainerProvider
{
    auto shim() const { return impl::shim<D, IItemContainerProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple FindItemByProperty(const Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple & startAfter, const Windows::UI::Xaml::Automation::AutomationProperty & automationProperty, const Windows::IInspectable & value) const;
};

template <typename D>
class WINRT_EBO impl_IMultipleViewProvider
{
    auto shim() const { return impl::shim<D, IMultipleViewProvider>(this); }

public:

    int32_t CurrentView() const;
    com_array<int32_t> GetSupportedViews() const;
    hstring GetViewName(int32_t viewId) const;
    void SetCurrentView(int32_t viewId) const;
};

template <typename D>
class WINRT_EBO impl_IObjectModelProvider
{
    auto shim() const { return impl::shim<D, IObjectModelProvider>(this); }

public:

    Windows::IInspectable GetUnderlyingObjectModel() const;
};

template <typename D>
class WINRT_EBO impl_IRangeValueProvider
{
    auto shim() const { return impl::shim<D, IRangeValueProvider>(this); }

public:

    bool IsReadOnly() const;
    double LargeChange() const;
    double Maximum() const;
    double Minimum() const;
    double SmallChange() const;
    double Value() const;
    void SetValue(double value) const;
};

template <typename D>
class WINRT_EBO impl_IScrollItemProvider
{
    auto shim() const { return impl::shim<D, IScrollItemProvider>(this); }

public:

    void ScrollIntoView() const;
};

template <typename D>
class WINRT_EBO impl_IScrollProvider
{
    auto shim() const { return impl::shim<D, IScrollProvider>(this); }

public:

    bool HorizontallyScrollable() const;
    double HorizontalScrollPercent() const;
    double HorizontalViewSize() const;
    bool VerticallyScrollable() const;
    double VerticalScrollPercent() const;
    double VerticalViewSize() const;
    void Scroll(Windows::UI::Xaml::Automation::ScrollAmount horizontalAmount, Windows::UI::Xaml::Automation::ScrollAmount verticalAmount) const;
    void SetScrollPercent(double horizontalPercent, double verticalPercent) const;
};

template <typename D>
class WINRT_EBO impl_ISelectionItemProvider
{
    auto shim() const { return impl::shim<D, ISelectionItemProvider>(this); }

public:

    bool IsSelected() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple SelectionContainer() const;
    void AddToSelection() const;
    void RemoveFromSelection() const;
    void Select() const;
};

template <typename D>
class WINRT_EBO impl_ISelectionProvider
{
    auto shim() const { return impl::shim<D, ISelectionProvider>(this); }

public:

    bool CanSelectMultiple() const;
    bool IsSelectionRequired() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetSelection() const;
};

template <typename D>
class WINRT_EBO impl_ISpreadsheetItemProvider
{
    auto shim() const { return impl::shim<D, ISpreadsheetItemProvider>(this); }

public:

    hstring Formula() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetAnnotationObjects() const;
    com_array<Windows::UI::Xaml::Automation::AnnotationType> GetAnnotationTypes() const;
};

template <typename D>
class WINRT_EBO impl_ISpreadsheetProvider
{
    auto shim() const { return impl::shim<D, ISpreadsheetProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetItemByName(hstring_ref name) const;
};

template <typename D>
class WINRT_EBO impl_IStylesProvider
{
    auto shim() const { return impl::shim<D, IStylesProvider>(this); }

public:

    hstring ExtendedProperties() const;
    Windows::UI::Color FillColor() const;
    Windows::UI::Color FillPatternColor() const;
    hstring FillPatternStyle() const;
    hstring Shape() const;
    int32_t StyleId() const;
    hstring StyleName() const;
};

template <typename D>
class WINRT_EBO impl_ISynchronizedInputProvider
{
    auto shim() const { return impl::shim<D, ISynchronizedInputProvider>(this); }

public:

    void Cancel() const;
    void StartListening(Windows::UI::Xaml::Automation::SynchronizedInputType inputType) const;
};

template <typename D>
class WINRT_EBO impl_ITableItemProvider
{
    auto shim() const { return impl::shim<D, ITableItemProvider>(this); }

public:

    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetColumnHeaderItems() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetRowHeaderItems() const;
};

template <typename D>
class WINRT_EBO impl_ITableProvider
{
    auto shim() const { return impl::shim<D, ITableProvider>(this); }

public:

    Windows::UI::Xaml::Automation::RowOrColumnMajor RowOrColumnMajor() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetColumnHeaders() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetRowHeaders() const;
};

template <typename D>
class WINRT_EBO impl_ITextChildProvider
{
    auto shim() const { return impl::shim<D, ITextChildProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple TextContainer() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider TextRange() const;
};

template <typename D>
class WINRT_EBO impl_ITextEditProvider
{
    auto shim() const { return impl::shim<D, ITextEditProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetActiveComposition() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetConversionTarget() const;
};

template <typename D>
class WINRT_EBO impl_ITextProvider
{
    auto shim() const { return impl::shim<D, ITextProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider DocumentRange() const;
    Windows::UI::Xaml::Automation::SupportedTextSelection SupportedTextSelection() const;
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> GetSelection() const;
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> GetVisibleRanges() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromChild(const Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple & childElement) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromPoint(const Windows::Foundation::Point & screenLocation) const;
};

template <typename D>
class WINRT_EBO impl_ITextProvider2
{
    auto shim() const { return impl::shim<D, ITextProvider2>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromAnnotation(const Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple & annotationElement) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetCaretRange(bool & isActive) const;
};

template <typename D>
class WINRT_EBO impl_ITextRangeProvider
{
    auto shim() const { return impl::shim<D, ITextRangeProvider>(this); }

public:

    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider Clone() const;
    bool Compare(const Windows::UI::Xaml::Automation::Provider::ITextRangeProvider & textRangeProvider) const;
    int32_t CompareEndpoints(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint, const Windows::UI::Xaml::Automation::Provider::ITextRangeProvider & textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint targetEndpoint) const;
    void ExpandToEnclosingUnit(Windows::UI::Xaml::Automation::Text::TextUnit unit) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider FindAttribute(int32_t attributeId, const Windows::IInspectable & value, bool backward) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider FindText(hstring_ref text, bool backward, bool ignoreCase) const;
    Windows::IInspectable GetAttributeValue(int32_t attributeId) const;
    void GetBoundingRectangles(com_array<double> & returnValue) const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetEnclosingElement() const;
    hstring GetText(int32_t maxLength) const;
    int32_t Move(Windows::UI::Xaml::Automation::Text::TextUnit unit, int32_t count) const;
    int32_t MoveEndpointByUnit(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint, Windows::UI::Xaml::Automation::Text::TextUnit unit, int32_t count) const;
    void MoveEndpointByRange(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint, const Windows::UI::Xaml::Automation::Provider::ITextRangeProvider & textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint targetEndpoint) const;
    void Select() const;
    void AddToSelection() const;
    void RemoveFromSelection() const;
    void ScrollIntoView(bool alignToTop) const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetChildren() const;
};

template <typename D>
class WINRT_EBO impl_ITextRangeProvider2
{
    auto shim() const { return impl::shim<D, ITextRangeProvider2>(this); }

public:

    void ShowContextMenu() const;
};

template <typename D>
class WINRT_EBO impl_IToggleProvider
{
    auto shim() const { return impl::shim<D, IToggleProvider>(this); }

public:

    Windows::UI::Xaml::Automation::ToggleState ToggleState() const;
    void Toggle() const;
};

template <typename D>
class WINRT_EBO impl_ITransformProvider
{
    auto shim() const { return impl::shim<D, ITransformProvider>(this); }

public:

    bool CanMove() const;
    bool CanResize() const;
    bool CanRotate() const;
    void Move(double x, double y) const;
    void Resize(double width, double height) const;
    void Rotate(double degrees) const;
};

template <typename D>
class WINRT_EBO impl_ITransformProvider2
{
    auto shim() const { return impl::shim<D, ITransformProvider2>(this); }

public:

    bool CanZoom() const;
    double ZoomLevel() const;
    double MaxZoom() const;
    double MinZoom() const;
    void Zoom(double zoom) const;
    void ZoomByUnit(Windows::UI::Xaml::Automation::ZoomUnit zoomUnit) const;
};

template <typename D>
class WINRT_EBO impl_IValueProvider
{
    auto shim() const { return impl::shim<D, IValueProvider>(this); }

public:

    bool IsReadOnly() const;
    hstring Value() const;
    void SetValue(hstring_ref value) const;
};

template <typename D>
class WINRT_EBO impl_IVirtualizedItemProvider
{
    auto shim() const { return impl::shim<D, IVirtualizedItemProvider>(this); }

public:

    void Realize() const;
};

template <typename D>
class WINRT_EBO impl_IWindowProvider
{
    auto shim() const { return impl::shim<D, IWindowProvider>(this); }

public:

    bool IsModal() const;
    bool IsTopmost() const;
    bool Maximizable() const;
    bool Minimizable() const;
    Windows::UI::Xaml::Automation::WindowInteractionState InteractionState() const;
    Windows::UI::Xaml::Automation::WindowVisualState VisualState() const;
    void Close() const;
    void SetVisualState(Windows::UI::Xaml::Automation::WindowVisualState state) const;
    bool WaitForInputIdle(int32_t milliseconds) const;
};

struct IAnnotationProvider :
    Windows::IInspectable,
    impl::consume<IAnnotationProvider>
{
    IAnnotationProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAnnotationProvider>(m_ptr); }
};

struct ICustomNavigationProvider :
    Windows::IInspectable,
    impl::consume<ICustomNavigationProvider>
{
    ICustomNavigationProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomNavigationProvider>(m_ptr); }
};

struct IDockProvider :
    Windows::IInspectable,
    impl::consume<IDockProvider>
{
    IDockProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDockProvider>(m_ptr); }
};

struct IDragProvider :
    Windows::IInspectable,
    impl::consume<IDragProvider>
{
    IDragProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragProvider>(m_ptr); }
};

struct IDropTargetProvider :
    Windows::IInspectable,
    impl::consume<IDropTargetProvider>
{
    IDropTargetProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDropTargetProvider>(m_ptr); }
};

struct IExpandCollapseProvider :
    Windows::IInspectable,
    impl::consume<IExpandCollapseProvider>
{
    IExpandCollapseProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IExpandCollapseProvider>(m_ptr); }
};

struct IGridItemProvider :
    Windows::IInspectable,
    impl::consume<IGridItemProvider>
{
    IGridItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridItemProvider>(m_ptr); }
};

struct IGridProvider :
    Windows::IInspectable,
    impl::consume<IGridProvider>
{
    IGridProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridProvider>(m_ptr); }
};

struct IIRawElementProviderSimple :
    Windows::IInspectable,
    impl::consume<IIRawElementProviderSimple>
{
    IIRawElementProviderSimple(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IIRawElementProviderSimple>(m_ptr); }
};

struct IInvokeProvider :
    Windows::IInspectable,
    impl::consume<IInvokeProvider>
{
    IInvokeProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInvokeProvider>(m_ptr); }
};

struct IItemContainerProvider :
    Windows::IInspectable,
    impl::consume<IItemContainerProvider>
{
    IItemContainerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemContainerProvider>(m_ptr); }
};

struct IMultipleViewProvider :
    Windows::IInspectable,
    impl::consume<IMultipleViewProvider>
{
    IMultipleViewProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMultipleViewProvider>(m_ptr); }
};

struct IObjectModelProvider :
    Windows::IInspectable,
    impl::consume<IObjectModelProvider>
{
    IObjectModelProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IObjectModelProvider>(m_ptr); }
};

struct IRangeValueProvider :
    Windows::IInspectable,
    impl::consume<IRangeValueProvider>
{
    IRangeValueProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeValueProvider>(m_ptr); }
};

struct IScrollItemProvider :
    Windows::IInspectable,
    impl::consume<IScrollItemProvider>
{
    IScrollItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollItemProvider>(m_ptr); }
};

struct IScrollProvider :
    Windows::IInspectable,
    impl::consume<IScrollProvider>
{
    IScrollProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollProvider>(m_ptr); }
};

struct ISelectionItemProvider :
    Windows::IInspectable,
    impl::consume<ISelectionItemProvider>
{
    ISelectionItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionItemProvider>(m_ptr); }
};

struct ISelectionProvider :
    Windows::IInspectable,
    impl::consume<ISelectionProvider>
{
    ISelectionProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionProvider>(m_ptr); }
};

struct ISpreadsheetItemProvider :
    Windows::IInspectable,
    impl::consume<ISpreadsheetItemProvider>
{
    ISpreadsheetItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpreadsheetItemProvider>(m_ptr); }
};

struct ISpreadsheetProvider :
    Windows::IInspectable,
    impl::consume<ISpreadsheetProvider>
{
    ISpreadsheetProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpreadsheetProvider>(m_ptr); }
};

struct IStylesProvider :
    Windows::IInspectable,
    impl::consume<IStylesProvider>
{
    IStylesProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStylesProvider>(m_ptr); }
};

struct ISynchronizedInputProvider :
    Windows::IInspectable,
    impl::consume<ISynchronizedInputProvider>
{
    ISynchronizedInputProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISynchronizedInputProvider>(m_ptr); }
};

struct ITableItemProvider :
    Windows::IInspectable,
    impl::consume<ITableItemProvider>
{
    ITableItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITableItemProvider>(m_ptr); }
};

struct ITableProvider :
    Windows::IInspectable,
    impl::consume<ITableProvider>
{
    ITableProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITableProvider>(m_ptr); }
};

struct ITextChildProvider :
    Windows::IInspectable,
    impl::consume<ITextChildProvider>
{
    ITextChildProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextChildProvider>(m_ptr); }
};

struct ITextEditProvider :
    Windows::IInspectable,
    impl::consume<ITextEditProvider>,
    impl::require<ITextEditProvider, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextEditProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextEditProvider>(m_ptr); }
};

struct ITextProvider :
    Windows::IInspectable,
    impl::consume<ITextProvider>
{
    ITextProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextProvider>(m_ptr); }
};

struct ITextProvider2 :
    Windows::IInspectable,
    impl::consume<ITextProvider2>,
    impl::require<ITextProvider2, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextProvider2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextProvider2>(m_ptr); }
};

struct ITextRangeProvider :
    Windows::IInspectable,
    impl::consume<ITextRangeProvider>
{
    ITextRangeProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextRangeProvider>(m_ptr); }
};

struct ITextRangeProvider2 :
    Windows::IInspectable,
    impl::consume<ITextRangeProvider2>,
    impl::require<ITextRangeProvider2, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
{
    ITextRangeProvider2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextRangeProvider2>(m_ptr); }
};

struct IToggleProvider :
    Windows::IInspectable,
    impl::consume<IToggleProvider>
{
    IToggleProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleProvider>(m_ptr); }
};

struct ITransformProvider :
    Windows::IInspectable,
    impl::consume<ITransformProvider>
{
    ITransformProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformProvider>(m_ptr); }
};

struct ITransformProvider2 :
    Windows::IInspectable,
    impl::consume<ITransformProvider2>,
    impl::require<ITransformProvider2, Windows::UI::Xaml::Automation::Provider::ITransformProvider>
{
    ITransformProvider2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformProvider2>(m_ptr); }
};

struct IValueProvider :
    Windows::IInspectable,
    impl::consume<IValueProvider>
{
    IValueProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IValueProvider>(m_ptr); }
};

struct IVirtualizedItemProvider :
    Windows::IInspectable,
    impl::consume<IVirtualizedItemProvider>
{
    IVirtualizedItemProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVirtualizedItemProvider>(m_ptr); }
};

struct IWindowProvider :
    Windows::IInspectable,
    impl::consume<IWindowProvider>
{
    IWindowProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWindowProvider>(m_ptr); }
};

}

}
