// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Automation.0.h"
#include "Windows.UI.Xaml.Automation.Provider.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.UI.Xaml.Automation.Peers.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Automation::Peers {

struct IAppBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarAutomationPeer>
{
    IAppBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarAutomationPeerFactory>
{
    IAppBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBarButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarButtonAutomationPeer>
{
    IAppBarButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBarButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarButtonAutomationPeerFactory>
{
    IAppBarButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBarToggleButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarToggleButtonAutomationPeer>
{
    IAppBarToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBarToggleButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarToggleButtonAutomationPeerFactory>
{
    IAppBarToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAutoSuggestBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoSuggestBoxAutomationPeer>
{
    IAutoSuggestBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IAutoSuggestBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoSuggestBoxAutomationPeerFactory>
{
    IAutoSuggestBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer>
{
    IAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer2>
{
    IAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer3>
{
    IAutomationPeer3(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer4>
{
    IAutomationPeer4(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer5>
{
    IAutomationPeer5(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeer6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer6>
{
    IAutomationPeer6(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerAnnotation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotation>
{
    IAutomationPeerAnnotation(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerAnnotationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotationFactory>
{
    IAutomationPeerAnnotationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerAnnotationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotationStatics>
{
    IAutomationPeerAnnotationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerFactory>
{
    IAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides>
{
    IAutomationPeerOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides2>
{
    IAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides3>
{
    IAutomationPeerOverrides3(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides4>
{
    IAutomationPeerOverrides4(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides5>
{
    IAutomationPeerOverrides5(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerOverrides6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides6>
{
    IAutomationPeerOverrides6(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerProtected>
{
    IAutomationPeerProtected(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerStatics>
{
    IAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationPeerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerStatics3>
{
    IAutomationPeerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonAutomationPeer>
{
    IButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonAutomationPeerFactory>
{
    IButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IButtonBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonBaseAutomationPeer>
{
    IButtonBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IButtonBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonBaseAutomationPeerFactory>
{
    IButtonBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICaptureElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICaptureElementAutomationPeer>
{
    ICaptureElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ICaptureElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICaptureElementAutomationPeerFactory>
{
    ICaptureElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICheckBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICheckBoxAutomationPeer>
{
    ICheckBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ICheckBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICheckBoxAutomationPeerFactory>
{
    ICheckBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxAutomationPeer>
{
    IComboBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxAutomationPeerFactory>
{
    IComboBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemAutomationPeer>
{
    IComboBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemAutomationPeerFactory>
{
    IComboBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemDataAutomationPeer>
{
    IComboBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IComboBoxItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemDataAutomationPeerFactory>
{
    IComboBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDatePickerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerAutomationPeer>
{
    IDatePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IDatePickerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerAutomationPeerFactory>
{
    IDatePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDatePickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerFlyoutPresenterAutomationPeer>
{
    IDatePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewAutomationPeer>
{
    IFlipViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewAutomationPeerFactory>
{
    IFlipViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemAutomationPeer>
{
    IFlipViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemAutomationPeerFactory>
{
    IFlipViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemDataAutomationPeer>
{
    IFlipViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFlipViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemDataAutomationPeerFactory>
{
    IFlipViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlyoutPresenterAutomationPeer>
{
    IFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFlyoutPresenterAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlyoutPresenterAutomationPeerFactory>
{
    IFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameworkElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeer>
{
    IFrameworkElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameworkElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeerFactory>
{
    IFrameworkElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameworkElementAutomationPeerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeerStatics>
{
    IFrameworkElementAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewAutomationPeer>
{
    IGridViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewAutomationPeerFactory>
{
    IGridViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewHeaderItemAutomationPeer>
{
    IGridViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewHeaderItemAutomationPeerFactory>
{
    IGridViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemAutomationPeer>
{
    IGridViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemAutomationPeerFactory>
{
    IGridViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemDataAutomationPeer>
{
    IGridViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IGridViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemDataAutomationPeerFactory>
{
    IGridViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGroupItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGroupItemAutomationPeer>
{
    IGroupItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IGroupItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGroupItemAutomationPeerFactory>
{
    IGroupItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHubAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubAutomationPeer>
{
    IHubAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IHubAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubAutomationPeerFactory>
{
    IHubAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHubSectionAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubSectionAutomationPeer>
{
    IHubSectionAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IHubSectionAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubSectionAutomationPeerFactory>
{
    IHubSectionAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHyperlinkButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHyperlinkButtonAutomationPeer>
{
    IHyperlinkButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IHyperlinkButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHyperlinkButtonAutomationPeerFactory>
{
    IHyperlinkButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IImageAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageAutomationPeer>
{
    IImageAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IImageAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageAutomationPeerFactory>
{
    IImageAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInkToolbarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkToolbarAutomationPeer>
{
    IInkToolbarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemAutomationPeer>
{
    IItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemAutomationPeerFactory>
{
    IItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IItemsControlAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeer>
{
    IItemsControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IItemsControlAutomationPeer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeer2>
{
    IItemsControlAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
};

struct IItemsControlAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeerFactory>
{
    IItemsControlAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IItemsControlAutomationPeerOverrides2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeerOverrides2>
{
    IItemsControlAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxAutomationPeer>
{
    IListBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxAutomationPeerFactory>
{
    IListBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemAutomationPeer>
{
    IListBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemAutomationPeerFactory>
{
    IListBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemDataAutomationPeer>
{
    IListBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListBoxItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemDataAutomationPeerFactory>
{
    IListBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListPickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListPickerFlyoutPresenterAutomationPeer>
{
    IListPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewAutomationPeer>
{
    IListViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewAutomationPeerFactory>
{
    IListViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseAutomationPeer>
{
    IListViewBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseAutomationPeerFactory>
{
    IListViewBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewBaseHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseHeaderItemAutomationPeer>
{
    IListViewBaseHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewBaseHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseHeaderItemAutomationPeerFactory>
{
    IListViewBaseHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewHeaderItemAutomationPeer>
{
    IListViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewHeaderItemAutomationPeerFactory>
{
    IListViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemAutomationPeer>
{
    IListViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemAutomationPeerFactory>
{
    IListViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemDataAutomationPeer>
{
    IListViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IListViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemDataAutomationPeerFactory>
{
    IListViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoopingSelectorAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorAutomationPeer>
{
    ILoopingSelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ILoopingSelectorItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorItemAutomationPeer>
{
    ILoopingSelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ILoopingSelectorItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorItemDataAutomationPeer>
{
    ILoopingSelectorItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlAutomationPeer>
{
    IMapControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaElementAutomationPeer>
{
    IMediaElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaElementAutomationPeerFactory>
{
    IMediaElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerElementAutomationPeer>
{
    IMediaPlayerElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaPlayerElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerElementAutomationPeerFactory>
{
    IMediaPlayerElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTransportControlsAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsAutomationPeer>
{
    IMediaTransportControlsAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTransportControlsAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsAutomationPeerFactory>
{
    IMediaTransportControlsAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMenuFlyoutItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutItemAutomationPeer>
{
    IMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMenuFlyoutItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutItemAutomationPeerFactory>
{
    IMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMenuFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutPresenterAutomationPeer>
{
    IMenuFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IMenuFlyoutPresenterAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutPresenterAutomationPeerFactory>
{
    IMenuFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPasswordBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordBoxAutomationPeer>
{
    IPasswordBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IPasswordBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordBoxAutomationPeerFactory>
{
    IPasswordBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerFlyoutPresenterAutomationPeer>
{
    IPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotAutomationPeer>
{
    IPivotAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotAutomationPeerFactory>
{
    IPivotAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemAutomationPeer>
{
    IPivotItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemAutomationPeerFactory>
{
    IPivotItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemDataAutomationPeer>
{
    IPivotItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IPivotItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemDataAutomationPeerFactory>
{
    IPivotItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IProgressBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressBarAutomationPeer>
{
    IProgressBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IProgressBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressBarAutomationPeerFactory>
{
    IProgressBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IProgressRingAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressRingAutomationPeer>
{
    IProgressRingAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IProgressRingAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressRingAutomationPeerFactory>
{
    IProgressRingAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRadioButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioButtonAutomationPeer>
{
    IRadioButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRadioButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioButtonAutomationPeerFactory>
{
    IRadioButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRangeBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeBaseAutomationPeer>
{
    IRangeBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRangeBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeBaseAutomationPeerFactory>
{
    IRangeBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRepeatButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRepeatButtonAutomationPeer>
{
    IRepeatButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRepeatButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRepeatButtonAutomationPeerFactory>
{
    IRepeatButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRichEditBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichEditBoxAutomationPeer>
{
    IRichEditBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRichEditBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichEditBoxAutomationPeerFactory>
{
    IRichEditBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRichTextBlockAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockAutomationPeer>
{
    IRichTextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRichTextBlockAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockAutomationPeerFactory>
{
    IRichTextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRichTextBlockOverflowAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockOverflowAutomationPeer>
{
    IRichTextBlockOverflowAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IRichTextBlockOverflowAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockOverflowAutomationPeerFactory>
{
    IRichTextBlockOverflowAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollBarAutomationPeer>
{
    IScrollBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollBarAutomationPeerFactory>
{
    IScrollBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollViewerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollViewerAutomationPeer>
{
    IScrollViewerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IScrollViewerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollViewerAutomationPeerFactory>
{
    IScrollViewerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchBoxAutomationPeer>
{
    ISearchBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchBoxAutomationPeerFactory>
{
    ISearchBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectorAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorAutomationPeer>
{
    ISelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectorAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorAutomationPeerFactory>
{
    ISelectorAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectorItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorItemAutomationPeer>
{
    ISelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectorItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorItemAutomationPeerFactory>
{
    ISelectorItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISemanticZoomAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticZoomAutomationPeer>
{
    ISemanticZoomAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISemanticZoomAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticZoomAutomationPeerFactory>
{
    ISemanticZoomAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISettingsFlyoutAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsFlyoutAutomationPeer>
{
    ISettingsFlyoutAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISettingsFlyoutAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsFlyoutAutomationPeerFactory>
{
    ISettingsFlyoutAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISliderAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISliderAutomationPeer>
{
    ISliderAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ISliderAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISliderAutomationPeerFactory>
{
    ISliderAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITextBlockAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBlockAutomationPeer>
{
    ITextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ITextBlockAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBlockAutomationPeerFactory>
{
    ITextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITextBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBoxAutomationPeer>
{
    ITextBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ITextBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBoxAutomationPeerFactory>
{
    ITextBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IThumbAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbAutomationPeer>
{
    IThumbAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IThumbAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbAutomationPeerFactory>
{
    IThumbAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITimePickerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerAutomationPeer>
{
    ITimePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct ITimePickerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerAutomationPeerFactory>
{
    ITimePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITimePickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerFlyoutPresenterAutomationPeer>
{
    ITimePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleButtonAutomationPeer>
{
    IToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleButtonAutomationPeerFactory>
{
    IToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleMenuFlyoutItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleMenuFlyoutItemAutomationPeer>
{
    IToggleMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleMenuFlyoutItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleMenuFlyoutItemAutomationPeerFactory>
{
    IToggleMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleSwitchAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleSwitchAutomationPeer>
{
    IToggleSwitchAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct IToggleSwitchAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleSwitchAutomationPeerFactory>
{
    IToggleSwitchAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
