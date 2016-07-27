// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.UI.Xaml.Automation.Peers.1.h"
#include "Windows.UI.Xaml.2.h"
#include "Windows.UI.Xaml.Automation.Provider.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_a8d8a409_9130_5e14_8426_0782aaf01608
#define WINRT_GENERIC_a8d8a409_9130_5e14_8426_0782aaf01608
template <> struct __declspec(uuid("a8d8a409-9130-5e14-8426-0782aaf01608")) __declspec(novtable) IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> : impl_IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> {};
#endif

#ifndef WINRT_GENERIC_b56a6076_19e2_50c1_930f_825bfc39635c
#define WINRT_GENERIC_b56a6076_19e2_50c1_930f_825bfc39635c
template <> struct __declspec(uuid("b56a6076-19e2-50c1-930f-825bfc39635c")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> : impl_IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> {};
#endif

#ifndef WINRT_GENERIC_d353f885_4bf0_5dc2_878e_ec7a394ee880
#define WINRT_GENERIC_d353f885_4bf0_5dc2_878e_ec7a394ee880
template <> struct __declspec(uuid("d353f885-4bf0-5dc2-878e-ec7a394ee880")) __declspec(novtable) IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> : impl_IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> {};
#endif

#ifndef WINRT_GENERIC_7f67a4e2_96e0_522b_8710_14c42d834f1e
#define WINRT_GENERIC_7f67a4e2_96e0_522b_8710_14c42d834f1e
template <> struct __declspec(uuid("7f67a4e2-96e0-522b-8710-14c42d834f1e")) __declspec(novtable) IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> : impl_IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_1f93cd7a_8075_5ba9_bc3e_b04a94e14bc0
#define WINRT_GENERIC_1f93cd7a_8075_5ba9_bc3e_b04a94e14bc0
template <> struct __declspec(uuid("1f93cd7a-8075-5ba9-bc3e-b04a94e14bc0")) __declspec(novtable) IIterator<Windows::UI::Xaml::Automation::Peers::AutomationPeer> : impl_IIterator<Windows::UI::Xaml::Automation::Peers::AutomationPeer> {};
#endif

#ifndef WINRT_GENERIC_3b415733_48f2_58b0_9884_6f0d0e35dc1a
#define WINRT_GENERIC_3b415733_48f2_58b0_9884_6f0d0e35dc1a
template <> struct __declspec(uuid("3b415733-48f2-58b0-9884-6f0d0e35dc1a")) __declspec(novtable) IIterator<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> : impl_IIterator<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> {};
#endif

#ifndef WINRT_GENERIC_dd28ff94_d11e_5ae7_b819_6177c1599313
#define WINRT_GENERIC_dd28ff94_d11e_5ae7_b819_6177c1599313
template <> struct __declspec(uuid("dd28ff94-d11e-5ae7-b819-6177c1599313")) __declspec(novtable) IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> : impl_IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> {};
#endif

#ifndef WINRT_GENERIC_00775c79_589b_5c36_ae72_2e7aab0270c6
#define WINRT_GENERIC_00775c79_589b_5c36_ae72_2e7aab0270c6
template <> struct __declspec(uuid("00775c79-589b-5c36-ae72-2e7aab0270c6")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> : impl_IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> {};
#endif


}

namespace Windows::UI::Xaml::Automation::Peers {

template <typename D>
class WINRT_EBO impl_IAppBarAutomationPeer
{
    auto shim() const { return impl::shim<D, IAppBarAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IAppBarAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IAppBarAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::AppBar & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IAppBarButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IAppBarButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IAppBarButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IAppBarButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::AppBarButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IAppBarToggleButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IAppBarToggleButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IAppBarToggleButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IAppBarToggleButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::AppBarToggleButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IAutoSuggestBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, IAutoSuggestBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IAutoSuggestBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IAutoSuggestBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::AutoSuggestBox & owner) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeer
{
    auto shim() const { return impl::shim<D, IAutomationPeer>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationPeer EventsSource() const;
    void EventsSource(const Windows::UI::Xaml::Automation::Peers::AutomationPeer & value) const;
    Windows::IInspectable GetPattern(Windows::UI::Xaml::Automation::Peers::PatternInterface patternInterface) const;
    void RaiseAutomationEvent(Windows::UI::Xaml::Automation::Peers::AutomationEvents eventId) const;
    void RaisePropertyChangedEvent(const Windows::UI::Xaml::Automation::AutomationProperty & automationProperty, const Windows::IInspectable & oldValue, const Windows::IInspectable & newValue) const;
    hstring GetAcceleratorKey() const;
    hstring GetAccessKey() const;
    Windows::UI::Xaml::Automation::Peers::AutomationControlType GetAutomationControlType() const;
    hstring GetAutomationId() const;
    Windows::Foundation::Rect GetBoundingRectangle() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetChildren() const;
    hstring GetClassName() const;
    Windows::Foundation::Point GetClickablePoint() const;
    hstring GetHelpText() const;
    hstring GetItemStatus() const;
    hstring GetItemType() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetLabeledBy() const;
    hstring GetLocalizedControlType() const;
    hstring GetName() const;
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation GetOrientation() const;
    bool HasKeyboardFocus() const;
    bool IsContentElement() const;
    bool IsControlElement() const;
    bool IsEnabled() const;
    bool IsKeyboardFocusable() const;
    bool IsOffscreen() const;
    bool IsPassword() const;
    bool IsRequiredForForm() const;
    void SetFocus() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetParent() const;
    void InvalidatePeer() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetPeerFromPoint(const Windows::Foundation::Point & point) const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSetting() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeer2
{
    auto shim() const { return impl::shim<D, IAutomationPeer2>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IAutomationPeer3
{
    auto shim() const { return impl::shim<D, IAutomationPeer3>(this); }

public:

    Windows::IInspectable Navigate(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction) const;
    Windows::IInspectable GetElementFromPoint(const Windows::Foundation::Point & pointInWindowCoordinates) const;
    Windows::IInspectable GetFocusedElement() const;
    void ShowContextMenu() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetControlledPeers() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> GetAnnotations() const;
    void SetParent(const Windows::UI::Xaml::Automation::Peers::AutomationPeer & peer) const;
    void RaiseTextEditTextChangedEvent(Windows::UI::Xaml::Automation::AutomationTextEditChangeType automationTextEditChangeType, const Windows::Foundation::Collections::IVectorView<hstring> & changedData) const;
    int32_t GetPositionInSet() const;
    int32_t GetSizeOfSet() const;
    int32_t GetLevel() const;
    void RaiseStructureChangedEvent(Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType structureChangeType, const Windows::UI::Xaml::Automation::Peers::AutomationPeer & child) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeer4
{
    auto shim() const { return impl::shim<D, IAutomationPeer4>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkType() const;
    hstring GetLocalizedLandmarkType() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeer5
{
    auto shim() const { return impl::shim<D, IAutomationPeer5>(this); }

public:

    bool IsPeripheral() const;
    bool IsDataValidForForm() const;
    hstring GetFullDescription() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerAnnotation
{
    auto shim() const { return impl::shim<D, IAutomationPeerAnnotation>(this); }

public:

    Windows::UI::Xaml::Automation::AnnotationType Type() const;
    void Type(Windows::UI::Xaml::Automation::AnnotationType value) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer Peer() const;
    void Peer(const Windows::UI::Xaml::Automation::Peers::AutomationPeer & value) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerAnnotationFactory
{
    auto shim() const { return impl::shim<D, IAutomationPeerAnnotationFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation CreateInstance(Windows::UI::Xaml::Automation::AnnotationType type) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation CreateWithPeerParameter(Windows::UI::Xaml::Automation::AnnotationType type, const Windows::UI::Xaml::Automation::Peers::AutomationPeer & peer) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerAnnotationStatics
{
    auto shim() const { return impl::shim<D, IAutomationPeerAnnotationStatics>(this); }

public:

    Windows::UI::Xaml::DependencyProperty TypeProperty() const;
    Windows::UI::Xaml::DependencyProperty PeerProperty() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationPeer CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerOverrides
{
    auto shim() const { return impl::shim<D, IAutomationPeerOverrides>(this); }

public:

    Windows::IInspectable GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface patternInterface) const;
    hstring GetAcceleratorKeyCore() const;
    hstring GetAccessKeyCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationControlType GetAutomationControlTypeCore() const;
    hstring GetAutomationIdCore() const;
    Windows::Foundation::Rect GetBoundingRectangleCore() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetChildrenCore() const;
    hstring GetClassNameCore() const;
    Windows::Foundation::Point GetClickablePointCore() const;
    hstring GetHelpTextCore() const;
    hstring GetItemStatusCore() const;
    hstring GetItemTypeCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetLabeledByCore() const;
    hstring GetLocalizedControlTypeCore() const;
    hstring GetNameCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation GetOrientationCore() const;
    bool HasKeyboardFocusCore() const;
    bool IsContentElementCore() const;
    bool IsControlElementCore() const;
    bool IsEnabledCore() const;
    bool IsKeyboardFocusableCore() const;
    bool IsOffscreenCore() const;
    bool IsPasswordCore() const;
    bool IsRequiredForFormCore() const;
    void SetFocusCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetPeerFromPointCore(const Windows::Foundation::Point & point) const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSettingCore() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerOverrides2
{
    auto shim() const { return impl::shim<D, IAutomationPeerOverrides2>(this); }

public:

    void ShowContextMenuCore() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetControlledPeersCore() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerOverrides3
{
    auto shim() const { return impl::shim<D, IAutomationPeerOverrides3>(this); }

public:

    Windows::IInspectable NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction) const;
    Windows::IInspectable GetElementFromPointCore(const Windows::Foundation::Point & pointInWindowCoordinates) const;
    Windows::IInspectable GetFocusedElementCore() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> GetAnnotationsCore() const;
    int32_t GetPositionInSetCore() const;
    int32_t GetSizeOfSetCore() const;
    int32_t GetLevelCore() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerOverrides4
{
    auto shim() const { return impl::shim<D, IAutomationPeerOverrides4>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkTypeCore() const;
    hstring GetLocalizedLandmarkTypeCore() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerOverrides5
{
    auto shim() const { return impl::shim<D, IAutomationPeerOverrides5>(this); }

public:

    bool IsPeripheralCore() const;
    bool IsDataValidForFormCore() const;
    hstring GetFullDescriptionCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetDescribedByCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsToCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsFromCore() const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerProtected
{
    auto shim() const { return impl::shim<D, IAutomationPeerProtected>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationPeer PeerFromProvider(const Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple & provider) const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple ProviderFromPeer(const Windows::UI::Xaml::Automation::Peers::AutomationPeer & peer) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerStatics
{
    auto shim() const { return impl::shim<D, IAutomationPeerStatics>(this); }

public:

    bool ListenerExists(Windows::UI::Xaml::Automation::Peers::AutomationEvents eventId) const;
};

template <typename D>
class WINRT_EBO impl_IAutomationPeerStatics3
{
    auto shim() const { return impl::shim<D, IAutomationPeerStatics3>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId GenerateRawElementProviderRuntimeId() const;
};

template <typename D>
class WINRT_EBO impl_IButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Button & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IButtonBaseAutomationPeer
{
    auto shim() const { return impl::shim<D, IButtonBaseAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IButtonBaseAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IButtonBaseAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::ButtonBase & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ICaptureElementAutomationPeer
{
    auto shim() const { return impl::shim<D, ICaptureElementAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ICaptureElementAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ICaptureElementAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::CaptureElement & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ICheckBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, ICheckBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ICheckBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ICheckBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::CheckBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IComboBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, IComboBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IComboBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IComboBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ComboBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IComboBoxItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IComboBoxItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IComboBoxItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IComboBoxItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ComboBoxItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IComboBoxItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IComboBoxItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IComboBoxItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IComboBoxItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IDatePickerAutomationPeer
{
    auto shim() const { return impl::shim<D, IDatePickerAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IDatePickerAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IDatePickerAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::DatePicker & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IDatePickerFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, IDatePickerFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IFlipViewAutomationPeer
{
    auto shim() const { return impl::shim<D, IFlipViewAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IFlipViewAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IFlipViewAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::FlipView & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IFlipViewItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IFlipViewItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IFlipViewItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IFlipViewItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::FlipViewItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IFlipViewItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IFlipViewItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IFlipViewItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IFlipViewItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, IFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IFlyoutPresenterAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IFlyoutPresenterAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::FlyoutPresenter & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IFrameworkElementAutomationPeer
{
    auto shim() const { return impl::shim<D, IFrameworkElementAutomationPeer>(this); }

public:

    Windows::UI::Xaml::UIElement Owner() const;
};

template <typename D>
class WINRT_EBO impl_IFrameworkElementAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IFrameworkElementAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::FrameworkElement & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IFrameworkElementAutomationPeerStatics
{
    auto shim() const { return impl::shim<D, IFrameworkElementAutomationPeerStatics>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::AutomationPeer FromElement(const Windows::UI::Xaml::UIElement & element) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer CreatePeerForElement(const Windows::UI::Xaml::UIElement & element) const;
};

template <typename D>
class WINRT_EBO impl_IGridViewAutomationPeer
{
    auto shim() const { return impl::shim<D, IGridViewAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IGridViewAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IGridViewAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::GridView & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IGridViewHeaderItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IGridViewHeaderItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IGridViewHeaderItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IGridViewHeaderItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::GridViewHeaderItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IGridViewItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IGridViewItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IGridViewItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IGridViewItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::GridViewItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IGridViewItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IGridViewItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IGridViewItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IGridViewItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IGroupItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IGroupItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IGroupItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IGroupItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::GroupItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IHubAutomationPeer
{
    auto shim() const { return impl::shim<D, IHubAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IHubAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IHubAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::HubAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Hub & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IHubSectionAutomationPeer
{
    auto shim() const { return impl::shim<D, IHubSectionAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IHubSectionAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IHubSectionAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::HubSection & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IHyperlinkButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IHyperlinkButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IHyperlinkButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IHyperlinkButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::HyperlinkButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IImageAutomationPeer
{
    auto shim() const { return impl::shim<D, IImageAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IImageAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IImageAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Image & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IInkToolbarAutomationPeer
{
    auto shim() const { return impl::shim<D, IInkToolbarAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IItemAutomationPeer>(this); }

public:

    Windows::IInspectable Item() const;
    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer ItemsControlAutomationPeer() const;
};

template <typename D>
class WINRT_EBO impl_IItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IItemsControlAutomationPeer
{
    auto shim() const { return impl::shim<D, IItemsControlAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IItemsControlAutomationPeer2
{
    auto shim() const { return impl::shim<D, IItemsControlAutomationPeer2>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer CreateItemAutomationPeer(const Windows::IInspectable & item) const;
};

template <typename D>
class WINRT_EBO impl_IItemsControlAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IItemsControlAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ItemsControl & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IItemsControlAutomationPeerOverrides2
{
    auto shim() const { return impl::shim<D, IItemsControlAutomationPeerOverrides2>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer OnCreateItemAutomationPeer(const Windows::IInspectable & item) const;
};

template <typename D>
class WINRT_EBO impl_IListBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, IListBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListBoxItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IListBoxItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListBoxItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListBoxItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListBoxItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListBoxItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IListBoxItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListBoxItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListBoxItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListPickerFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, IListPickerFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListView & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListViewBaseAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewBaseAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewBaseAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewBaseAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListViewBase & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListViewBaseHeaderItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewBaseHeaderItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewBaseHeaderItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewBaseHeaderItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListViewBaseHeaderItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListViewHeaderItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewHeaderItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewHeaderItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewHeaderItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListViewHeaderItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListViewItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ListViewItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IListViewItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IListViewItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IListViewItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IListViewItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ILoopingSelectorAutomationPeer
{
    auto shim() const { return impl::shim<D, ILoopingSelectorAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ILoopingSelectorItemAutomationPeer
{
    auto shim() const { return impl::shim<D, ILoopingSelectorItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ILoopingSelectorItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, ILoopingSelectorItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMapControlAutomationPeer
{
    auto shim() const { return impl::shim<D, IMapControlAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMediaElementAutomationPeer
{
    auto shim() const { return impl::shim<D, IMediaElementAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMediaElementAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IMediaElementAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::MediaElement & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IMediaPlayerElementAutomationPeer
{
    auto shim() const { return impl::shim<D, IMediaPlayerElementAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMediaPlayerElementAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IMediaPlayerElementAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::MediaPlayerElement & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IMediaTransportControlsAutomationPeer
{
    auto shim() const { return impl::shim<D, IMediaTransportControlsAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMediaTransportControlsAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IMediaTransportControlsAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::MediaTransportControls & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IMenuFlyoutItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IMenuFlyoutItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMenuFlyoutItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IMenuFlyoutItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::MenuFlyoutItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IMenuFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, IMenuFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IMenuFlyoutPresenterAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IMenuFlyoutPresenterAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::MenuFlyoutPresenter & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IPasswordBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, IPasswordBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IPasswordBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IPasswordBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::PasswordBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IPickerFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, IPickerFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IPivotAutomationPeer
{
    auto shim() const { return impl::shim<D, IPivotAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IPivotAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IPivotAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Pivot & owner) const;
};

template <typename D>
class WINRT_EBO impl_IPivotItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IPivotItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IPivotItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IPivotItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::PivotItem & owner) const;
};

template <typename D>
class WINRT_EBO impl_IPivotItemDataAutomationPeer
{
    auto shim() const { return impl::shim<D, IPivotItemDataAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IPivotItemDataAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IPivotItemDataAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer & parent) const;
};

template <typename D>
class WINRT_EBO impl_IProgressBarAutomationPeer
{
    auto shim() const { return impl::shim<D, IProgressBarAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IProgressBarAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IProgressBarAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ProgressBar & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IProgressRingAutomationPeer
{
    auto shim() const { return impl::shim<D, IProgressRingAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IProgressRingAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IProgressRingAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ProgressRing & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRadioButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IRadioButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRadioButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRadioButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::RadioButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRangeBaseAutomationPeer
{
    auto shim() const { return impl::shim<D, IRangeBaseAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRangeBaseAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRangeBaseAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::RangeBase & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRepeatButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IRepeatButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRepeatButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRepeatButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::RepeatButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRichEditBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, IRichEditBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRichEditBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRichEditBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::RichEditBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRichTextBlockAutomationPeer
{
    auto shim() const { return impl::shim<D, IRichTextBlockAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRichTextBlockAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRichTextBlockAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::RichTextBlock & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IRichTextBlockOverflowAutomationPeer
{
    auto shim() const { return impl::shim<D, IRichTextBlockOverflowAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IRichTextBlockOverflowAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IRichTextBlockOverflowAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::RichTextBlockOverflow & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IScrollBarAutomationPeer
{
    auto shim() const { return impl::shim<D, IScrollBarAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IScrollBarAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IScrollBarAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::ScrollBar & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IScrollViewerAutomationPeer
{
    auto shim() const { return impl::shim<D, IScrollViewerAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IScrollViewerAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IScrollViewerAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ScrollViewer & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISearchBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, ISearchBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISearchBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISearchBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::SearchBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISelectorAutomationPeer
{
    auto shim() const { return impl::shim<D, ISelectorAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISelectorAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISelectorAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::Selector & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISelectorItemAutomationPeer
{
    auto shim() const { return impl::shim<D, ISelectorItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISelectorItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISelectorItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer CreateInstanceWithParentAndItem(const Windows::IInspectable & item, const Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer & parent, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISemanticZoomAutomationPeer
{
    auto shim() const { return impl::shim<D, ISemanticZoomAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISemanticZoomAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISemanticZoomAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::SemanticZoom & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISettingsFlyoutAutomationPeer
{
    auto shim() const { return impl::shim<D, ISettingsFlyoutAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISettingsFlyoutAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISettingsFlyoutAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::SettingsFlyout & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ISliderAutomationPeer
{
    auto shim() const { return impl::shim<D, ISliderAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISliderAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ISliderAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Slider & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ITextBlockAutomationPeer
{
    auto shim() const { return impl::shim<D, ITextBlockAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ITextBlockAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ITextBlockAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::TextBlock & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ITextBoxAutomationPeer
{
    auto shim() const { return impl::shim<D, ITextBoxAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ITextBoxAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ITextBoxAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::TextBox & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IThumbAutomationPeer
{
    auto shim() const { return impl::shim<D, IThumbAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IThumbAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IThumbAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::Thumb & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ITimePickerAutomationPeer
{
    auto shim() const { return impl::shim<D, ITimePickerAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ITimePickerAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, ITimePickerAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::TimePicker & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_ITimePickerFlyoutPresenterAutomationPeer
{
    auto shim() const { return impl::shim<D, ITimePickerFlyoutPresenterAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IToggleButtonAutomationPeer
{
    auto shim() const { return impl::shim<D, IToggleButtonAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IToggleButtonAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IToggleButtonAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::Primitives::ToggleButton & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IToggleMenuFlyoutItemAutomationPeer
{
    auto shim() const { return impl::shim<D, IToggleMenuFlyoutItemAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IToggleMenuFlyoutItemAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IToggleMenuFlyoutItemAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IToggleSwitchAutomationPeer
{
    auto shim() const { return impl::shim<D, IToggleSwitchAutomationPeer>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IToggleSwitchAutomationPeerFactory
{
    auto shim() const { return impl::shim<D, IToggleSwitchAutomationPeerFactory>(this); }

public:

    Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer CreateInstanceWithOwner(const Windows::UI::Xaml::Controls::ToggleSwitch & owner, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

struct IAppBarAutomationPeer :
    Windows::IInspectable,
    impl::consume<IAppBarAutomationPeer>
{
    IAppBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarAutomationPeer>(m_ptr); }
};

struct IAppBarAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IAppBarAutomationPeerFactory>
{
    IAppBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarAutomationPeerFactory>(m_ptr); }
};

struct IAppBarButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IAppBarButtonAutomationPeer>
{
    IAppBarButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarButtonAutomationPeer>(m_ptr); }
};

struct IAppBarButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IAppBarButtonAutomationPeerFactory>
{
    IAppBarButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarButtonAutomationPeerFactory>(m_ptr); }
};

struct IAppBarToggleButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IAppBarToggleButtonAutomationPeer>
{
    IAppBarToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarToggleButtonAutomationPeer>(m_ptr); }
};

struct IAppBarToggleButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IAppBarToggleButtonAutomationPeerFactory>
{
    IAppBarToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarToggleButtonAutomationPeerFactory>(m_ptr); }
};

struct IAutoSuggestBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<IAutoSuggestBoxAutomationPeer>
{
    IAutoSuggestBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutoSuggestBoxAutomationPeer>(m_ptr); }
};

struct IAutoSuggestBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IAutoSuggestBoxAutomationPeerFactory>
{
    IAutoSuggestBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutoSuggestBoxAutomationPeerFactory>(m_ptr); }
};

struct IAutomationPeer :
    Windows::IInspectable,
    impl::consume<IAutomationPeer>
{
    IAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeer>(m_ptr); }
};

struct IAutomationPeer2 :
    Windows::IInspectable,
    impl::consume<IAutomationPeer2>
{
    IAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeer2>(m_ptr); }
};

struct IAutomationPeer3 :
    Windows::IInspectable,
    impl::consume<IAutomationPeer3>
{
    IAutomationPeer3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeer3>(m_ptr); }
};

struct IAutomationPeer4 :
    Windows::IInspectable,
    impl::consume<IAutomationPeer4>
{
    IAutomationPeer4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeer4>(m_ptr); }
};

struct IAutomationPeer5 :
    Windows::IInspectable,
    impl::consume<IAutomationPeer5>
{
    IAutomationPeer5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeer5>(m_ptr); }
};

struct IAutomationPeerAnnotation :
    Windows::IInspectable,
    impl::consume<IAutomationPeerAnnotation>
{
    IAutomationPeerAnnotation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerAnnotation>(m_ptr); }
};

struct IAutomationPeerAnnotationFactory :
    Windows::IInspectable,
    impl::consume<IAutomationPeerAnnotationFactory>
{
    IAutomationPeerAnnotationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerAnnotationFactory>(m_ptr); }
};

struct IAutomationPeerAnnotationStatics :
    Windows::IInspectable,
    impl::consume<IAutomationPeerAnnotationStatics>
{
    IAutomationPeerAnnotationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerAnnotationStatics>(m_ptr); }
};

struct IAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IAutomationPeerFactory>
{
    IAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerFactory>(m_ptr); }
};

struct IAutomationPeerOverrides :
    Windows::IInspectable,
    impl::consume<IAutomationPeerOverrides>
{
    IAutomationPeerOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerOverrides>(m_ptr); }
};

struct IAutomationPeerOverrides2 :
    Windows::IInspectable,
    impl::consume<IAutomationPeerOverrides2>
{
    IAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerOverrides2>(m_ptr); }
};

struct IAutomationPeerOverrides3 :
    Windows::IInspectable,
    impl::consume<IAutomationPeerOverrides3>
{
    IAutomationPeerOverrides3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerOverrides3>(m_ptr); }
};

struct IAutomationPeerOverrides4 :
    Windows::IInspectable,
    impl::consume<IAutomationPeerOverrides4>
{
    IAutomationPeerOverrides4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerOverrides4>(m_ptr); }
};

struct IAutomationPeerOverrides5 :
    Windows::IInspectable,
    impl::consume<IAutomationPeerOverrides5>
{
    IAutomationPeerOverrides5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerOverrides5>(m_ptr); }
};

struct IAutomationPeerProtected :
    Windows::IInspectable,
    impl::consume<IAutomationPeerProtected>
{
    IAutomationPeerProtected(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerProtected>(m_ptr); }
};

struct IAutomationPeerStatics :
    Windows::IInspectable,
    impl::consume<IAutomationPeerStatics>
{
    IAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerStatics>(m_ptr); }
};

struct IAutomationPeerStatics3 :
    Windows::IInspectable,
    impl::consume<IAutomationPeerStatics3>
{
    IAutomationPeerStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPeerStatics3>(m_ptr); }
};

struct IButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IButtonAutomationPeer>
{
    IButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonAutomationPeer>(m_ptr); }
};

struct IButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IButtonAutomationPeerFactory>
{
    IButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonAutomationPeerFactory>(m_ptr); }
};

struct IButtonBaseAutomationPeer :
    Windows::IInspectable,
    impl::consume<IButtonBaseAutomationPeer>
{
    IButtonBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonBaseAutomationPeer>(m_ptr); }
};

struct IButtonBaseAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IButtonBaseAutomationPeerFactory>
{
    IButtonBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonBaseAutomationPeerFactory>(m_ptr); }
};

struct ICaptureElementAutomationPeer :
    Windows::IInspectable,
    impl::consume<ICaptureElementAutomationPeer>
{
    ICaptureElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICaptureElementAutomationPeer>(m_ptr); }
};

struct ICaptureElementAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ICaptureElementAutomationPeerFactory>
{
    ICaptureElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICaptureElementAutomationPeerFactory>(m_ptr); }
};

struct ICheckBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<ICheckBoxAutomationPeer>
{
    ICheckBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICheckBoxAutomationPeer>(m_ptr); }
};

struct ICheckBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ICheckBoxAutomationPeerFactory>
{
    ICheckBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICheckBoxAutomationPeerFactory>(m_ptr); }
};

struct IComboBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<IComboBoxAutomationPeer>
{
    IComboBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxAutomationPeer>(m_ptr); }
};

struct IComboBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IComboBoxAutomationPeerFactory>
{
    IComboBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxAutomationPeerFactory>(m_ptr); }
};

struct IComboBoxItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IComboBoxItemAutomationPeer>
{
    IComboBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxItemAutomationPeer>(m_ptr); }
};

struct IComboBoxItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IComboBoxItemAutomationPeerFactory>
{
    IComboBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxItemAutomationPeerFactory>(m_ptr); }
};

struct IComboBoxItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IComboBoxItemDataAutomationPeer>
{
    IComboBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxItemDataAutomationPeer>(m_ptr); }
};

struct IComboBoxItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IComboBoxItemDataAutomationPeerFactory>
{
    IComboBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxItemDataAutomationPeerFactory>(m_ptr); }
};

struct IDatePickerAutomationPeer :
    Windows::IInspectable,
    impl::consume<IDatePickerAutomationPeer>
{
    IDatePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDatePickerAutomationPeer>(m_ptr); }
};

struct IDatePickerAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IDatePickerAutomationPeerFactory>
{
    IDatePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDatePickerAutomationPeerFactory>(m_ptr); }
};

struct IDatePickerFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<IDatePickerFlyoutPresenterAutomationPeer>
{
    IDatePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDatePickerFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IFlipViewAutomationPeer :
    Windows::IInspectable,
    impl::consume<IFlipViewAutomationPeer>
{
    IFlipViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewAutomationPeer>(m_ptr); }
};

struct IFlipViewAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IFlipViewAutomationPeerFactory>
{
    IFlipViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewAutomationPeerFactory>(m_ptr); }
};

struct IFlipViewItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IFlipViewItemAutomationPeer>
{
    IFlipViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewItemAutomationPeer>(m_ptr); }
};

struct IFlipViewItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IFlipViewItemAutomationPeerFactory>
{
    IFlipViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewItemAutomationPeerFactory>(m_ptr); }
};

struct IFlipViewItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IFlipViewItemDataAutomationPeer>
{
    IFlipViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewItemDataAutomationPeer>(m_ptr); }
};

struct IFlipViewItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IFlipViewItemDataAutomationPeerFactory>
{
    IFlipViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlipViewItemDataAutomationPeerFactory>(m_ptr); }
};

struct IFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<IFlyoutPresenterAutomationPeer>
{
    IFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IFlyoutPresenterAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IFlyoutPresenterAutomationPeerFactory>
{
    IFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutPresenterAutomationPeerFactory>(m_ptr); }
};

struct IFrameworkElementAutomationPeer :
    Windows::IInspectable,
    impl::consume<IFrameworkElementAutomationPeer>
{
    IFrameworkElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameworkElementAutomationPeer>(m_ptr); }
};

struct IFrameworkElementAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IFrameworkElementAutomationPeerFactory>
{
    IFrameworkElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameworkElementAutomationPeerFactory>(m_ptr); }
};

struct IFrameworkElementAutomationPeerStatics :
    Windows::IInspectable,
    impl::consume<IFrameworkElementAutomationPeerStatics>
{
    IFrameworkElementAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameworkElementAutomationPeerStatics>(m_ptr); }
};

struct IGridViewAutomationPeer :
    Windows::IInspectable,
    impl::consume<IGridViewAutomationPeer>
{
    IGridViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewAutomationPeer>(m_ptr); }
};

struct IGridViewAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IGridViewAutomationPeerFactory>
{
    IGridViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewAutomationPeerFactory>(m_ptr); }
};

struct IGridViewHeaderItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IGridViewHeaderItemAutomationPeer>
{
    IGridViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewHeaderItemAutomationPeer>(m_ptr); }
};

struct IGridViewHeaderItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IGridViewHeaderItemAutomationPeerFactory>
{
    IGridViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewHeaderItemAutomationPeerFactory>(m_ptr); }
};

struct IGridViewItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IGridViewItemAutomationPeer>
{
    IGridViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemAutomationPeer>(m_ptr); }
};

struct IGridViewItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IGridViewItemAutomationPeerFactory>
{
    IGridViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemAutomationPeerFactory>(m_ptr); }
};

struct IGridViewItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IGridViewItemDataAutomationPeer>
{
    IGridViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemDataAutomationPeer>(m_ptr); }
};

struct IGridViewItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IGridViewItemDataAutomationPeerFactory>
{
    IGridViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemDataAutomationPeerFactory>(m_ptr); }
};

struct IGroupItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IGroupItemAutomationPeer>
{
    IGroupItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGroupItemAutomationPeer>(m_ptr); }
};

struct IGroupItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IGroupItemAutomationPeerFactory>
{
    IGroupItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGroupItemAutomationPeerFactory>(m_ptr); }
};

struct IHubAutomationPeer :
    Windows::IInspectable,
    impl::consume<IHubAutomationPeer>
{
    IHubAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHubAutomationPeer>(m_ptr); }
};

struct IHubAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IHubAutomationPeerFactory>
{
    IHubAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHubAutomationPeerFactory>(m_ptr); }
};

struct IHubSectionAutomationPeer :
    Windows::IInspectable,
    impl::consume<IHubSectionAutomationPeer>
{
    IHubSectionAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHubSectionAutomationPeer>(m_ptr); }
};

struct IHubSectionAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IHubSectionAutomationPeerFactory>
{
    IHubSectionAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHubSectionAutomationPeerFactory>(m_ptr); }
};

struct IHyperlinkButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IHyperlinkButtonAutomationPeer>
{
    IHyperlinkButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkButtonAutomationPeer>(m_ptr); }
};

struct IHyperlinkButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IHyperlinkButtonAutomationPeerFactory>
{
    IHyperlinkButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkButtonAutomationPeerFactory>(m_ptr); }
};

struct IImageAutomationPeer :
    Windows::IInspectable,
    impl::consume<IImageAutomationPeer>
{
    IImageAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageAutomationPeer>(m_ptr); }
};

struct IImageAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IImageAutomationPeerFactory>
{
    IImageAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageAutomationPeerFactory>(m_ptr); }
};

struct IInkToolbarAutomationPeer :
    Windows::IInspectable,
    impl::consume<IInkToolbarAutomationPeer>
{
    IInkToolbarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInkToolbarAutomationPeer>(m_ptr); }
};

struct IItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IItemAutomationPeer>
{
    IItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemAutomationPeer>(m_ptr); }
};

struct IItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IItemAutomationPeerFactory>
{
    IItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemAutomationPeerFactory>(m_ptr); }
};

struct IItemsControlAutomationPeer :
    Windows::IInspectable,
    impl::consume<IItemsControlAutomationPeer>
{
    IItemsControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsControlAutomationPeer>(m_ptr); }
};

struct IItemsControlAutomationPeer2 :
    Windows::IInspectable,
    impl::consume<IItemsControlAutomationPeer2>
{
    IItemsControlAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsControlAutomationPeer2>(m_ptr); }
};

struct IItemsControlAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IItemsControlAutomationPeerFactory>
{
    IItemsControlAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsControlAutomationPeerFactory>(m_ptr); }
};

struct IItemsControlAutomationPeerOverrides2 :
    Windows::IInspectable,
    impl::consume<IItemsControlAutomationPeerOverrides2>
{
    IItemsControlAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsControlAutomationPeerOverrides2>(m_ptr); }
};

struct IListBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListBoxAutomationPeer>
{
    IListBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxAutomationPeer>(m_ptr); }
};

struct IListBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListBoxAutomationPeerFactory>
{
    IListBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxAutomationPeerFactory>(m_ptr); }
};

struct IListBoxItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListBoxItemAutomationPeer>
{
    IListBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxItemAutomationPeer>(m_ptr); }
};

struct IListBoxItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListBoxItemAutomationPeerFactory>
{
    IListBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxItemAutomationPeerFactory>(m_ptr); }
};

struct IListBoxItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListBoxItemDataAutomationPeer>
{
    IListBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxItemDataAutomationPeer>(m_ptr); }
};

struct IListBoxItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListBoxItemDataAutomationPeerFactory>
{
    IListBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListBoxItemDataAutomationPeerFactory>(m_ptr); }
};

struct IListPickerFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListPickerFlyoutPresenterAutomationPeer>
{
    IListPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListPickerFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IListViewAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewAutomationPeer>
{
    IListViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewAutomationPeer>(m_ptr); }
};

struct IListViewAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewAutomationPeerFactory>
{
    IListViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewAutomationPeerFactory>(m_ptr); }
};

struct IListViewBaseAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewBaseAutomationPeer>
{
    IListViewBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewBaseAutomationPeer>(m_ptr); }
};

struct IListViewBaseAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewBaseAutomationPeerFactory>
{
    IListViewBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewBaseAutomationPeerFactory>(m_ptr); }
};

struct IListViewBaseHeaderItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewBaseHeaderItemAutomationPeer>
{
    IListViewBaseHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewBaseHeaderItemAutomationPeer>(m_ptr); }
};

struct IListViewBaseHeaderItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewBaseHeaderItemAutomationPeerFactory>
{
    IListViewBaseHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewBaseHeaderItemAutomationPeerFactory>(m_ptr); }
};

struct IListViewHeaderItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewHeaderItemAutomationPeer>
{
    IListViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewHeaderItemAutomationPeer>(m_ptr); }
};

struct IListViewHeaderItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewHeaderItemAutomationPeerFactory>
{
    IListViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewHeaderItemAutomationPeerFactory>(m_ptr); }
};

struct IListViewItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewItemAutomationPeer>
{
    IListViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemAutomationPeer>(m_ptr); }
};

struct IListViewItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewItemAutomationPeerFactory>
{
    IListViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemAutomationPeerFactory>(m_ptr); }
};

struct IListViewItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IListViewItemDataAutomationPeer>
{
    IListViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemDataAutomationPeer>(m_ptr); }
};

struct IListViewItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IListViewItemDataAutomationPeerFactory>
{
    IListViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemDataAutomationPeerFactory>(m_ptr); }
};

struct ILoopingSelectorAutomationPeer :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorAutomationPeer>
{
    ILoopingSelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorAutomationPeer>(m_ptr); }
};

struct ILoopingSelectorItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorItemAutomationPeer>
{
    ILoopingSelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorItemAutomationPeer>(m_ptr); }
};

struct ILoopingSelectorItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorItemDataAutomationPeer>
{
    ILoopingSelectorItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorItemDataAutomationPeer>(m_ptr); }
};

struct IMapControlAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMapControlAutomationPeer>
{
    IMapControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapControlAutomationPeer>(m_ptr); }
};

struct IMediaElementAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMediaElementAutomationPeer>
{
    IMediaElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaElementAutomationPeer>(m_ptr); }
};

struct IMediaElementAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IMediaElementAutomationPeerFactory>
{
    IMediaElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaElementAutomationPeerFactory>(m_ptr); }
};

struct IMediaPlayerElementAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMediaPlayerElementAutomationPeer>
{
    IMediaPlayerElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerElementAutomationPeer>(m_ptr); }
};

struct IMediaPlayerElementAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IMediaPlayerElementAutomationPeerFactory>
{
    IMediaPlayerElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerElementAutomationPeerFactory>(m_ptr); }
};

struct IMediaTransportControlsAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMediaTransportControlsAutomationPeer>
{
    IMediaTransportControlsAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaTransportControlsAutomationPeer>(m_ptr); }
};

struct IMediaTransportControlsAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IMediaTransportControlsAutomationPeerFactory>
{
    IMediaTransportControlsAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaTransportControlsAutomationPeerFactory>(m_ptr); }
};

struct IMenuFlyoutItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMenuFlyoutItemAutomationPeer>
{
    IMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMenuFlyoutItemAutomationPeer>(m_ptr); }
};

struct IMenuFlyoutItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IMenuFlyoutItemAutomationPeerFactory>
{
    IMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMenuFlyoutItemAutomationPeerFactory>(m_ptr); }
};

struct IMenuFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<IMenuFlyoutPresenterAutomationPeer>
{
    IMenuFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMenuFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IMenuFlyoutPresenterAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IMenuFlyoutPresenterAutomationPeerFactory>
{
    IMenuFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMenuFlyoutPresenterAutomationPeerFactory>(m_ptr); }
};

struct IPasswordBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<IPasswordBoxAutomationPeer>
{
    IPasswordBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPasswordBoxAutomationPeer>(m_ptr); }
};

struct IPasswordBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IPasswordBoxAutomationPeerFactory>
{
    IPasswordBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPasswordBoxAutomationPeerFactory>(m_ptr); }
};

struct IPickerFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<IPickerFlyoutPresenterAutomationPeer>
{
    IPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IPivotAutomationPeer :
    Windows::IInspectable,
    impl::consume<IPivotAutomationPeer>
{
    IPivotAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotAutomationPeer>(m_ptr); }
};

struct IPivotAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IPivotAutomationPeerFactory>
{
    IPivotAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotAutomationPeerFactory>(m_ptr); }
};

struct IPivotItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IPivotItemAutomationPeer>
{
    IPivotItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotItemAutomationPeer>(m_ptr); }
};

struct IPivotItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IPivotItemAutomationPeerFactory>
{
    IPivotItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotItemAutomationPeerFactory>(m_ptr); }
};

struct IPivotItemDataAutomationPeer :
    Windows::IInspectable,
    impl::consume<IPivotItemDataAutomationPeer>
{
    IPivotItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotItemDataAutomationPeer>(m_ptr); }
};

struct IPivotItemDataAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IPivotItemDataAutomationPeerFactory>
{
    IPivotItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotItemDataAutomationPeerFactory>(m_ptr); }
};

struct IProgressBarAutomationPeer :
    Windows::IInspectable,
    impl::consume<IProgressBarAutomationPeer>
{
    IProgressBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressBarAutomationPeer>(m_ptr); }
};

struct IProgressBarAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IProgressBarAutomationPeerFactory>
{
    IProgressBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressBarAutomationPeerFactory>(m_ptr); }
};

struct IProgressRingAutomationPeer :
    Windows::IInspectable,
    impl::consume<IProgressRingAutomationPeer>
{
    IProgressRingAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressRingAutomationPeer>(m_ptr); }
};

struct IProgressRingAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IProgressRingAutomationPeerFactory>
{
    IProgressRingAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressRingAutomationPeerFactory>(m_ptr); }
};

struct IRadioButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRadioButtonAutomationPeer>
{
    IRadioButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRadioButtonAutomationPeer>(m_ptr); }
};

struct IRadioButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRadioButtonAutomationPeerFactory>
{
    IRadioButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRadioButtonAutomationPeerFactory>(m_ptr); }
};

struct IRangeBaseAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRangeBaseAutomationPeer>
{
    IRangeBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseAutomationPeer>(m_ptr); }
};

struct IRangeBaseAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRangeBaseAutomationPeerFactory>
{
    IRangeBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseAutomationPeerFactory>(m_ptr); }
};

struct IRepeatButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRepeatButtonAutomationPeer>
{
    IRepeatButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRepeatButtonAutomationPeer>(m_ptr); }
};

struct IRepeatButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRepeatButtonAutomationPeerFactory>
{
    IRepeatButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRepeatButtonAutomationPeerFactory>(m_ptr); }
};

struct IRichEditBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRichEditBoxAutomationPeer>
{
    IRichEditBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichEditBoxAutomationPeer>(m_ptr); }
};

struct IRichEditBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRichEditBoxAutomationPeerFactory>
{
    IRichEditBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichEditBoxAutomationPeerFactory>(m_ptr); }
};

struct IRichTextBlockAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRichTextBlockAutomationPeer>
{
    IRichTextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichTextBlockAutomationPeer>(m_ptr); }
};

struct IRichTextBlockAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRichTextBlockAutomationPeerFactory>
{
    IRichTextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichTextBlockAutomationPeerFactory>(m_ptr); }
};

struct IRichTextBlockOverflowAutomationPeer :
    Windows::IInspectable,
    impl::consume<IRichTextBlockOverflowAutomationPeer>
{
    IRichTextBlockOverflowAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichTextBlockOverflowAutomationPeer>(m_ptr); }
};

struct IRichTextBlockOverflowAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IRichTextBlockOverflowAutomationPeerFactory>
{
    IRichTextBlockOverflowAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRichTextBlockOverflowAutomationPeerFactory>(m_ptr); }
};

struct IScrollBarAutomationPeer :
    Windows::IInspectable,
    impl::consume<IScrollBarAutomationPeer>
{
    IScrollBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollBarAutomationPeer>(m_ptr); }
};

struct IScrollBarAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IScrollBarAutomationPeerFactory>
{
    IScrollBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollBarAutomationPeerFactory>(m_ptr); }
};

struct IScrollViewerAutomationPeer :
    Windows::IInspectable,
    impl::consume<IScrollViewerAutomationPeer>
{
    IScrollViewerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollViewerAutomationPeer>(m_ptr); }
};

struct IScrollViewerAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IScrollViewerAutomationPeerFactory>
{
    IScrollViewerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollViewerAutomationPeerFactory>(m_ptr); }
};

struct ISearchBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISearchBoxAutomationPeer>
{
    ISearchBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchBoxAutomationPeer>(m_ptr); }
};

struct ISearchBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISearchBoxAutomationPeerFactory>
{
    ISearchBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchBoxAutomationPeerFactory>(m_ptr); }
};

struct ISelectorAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISelectorAutomationPeer>
{
    ISelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorAutomationPeer>(m_ptr); }
};

struct ISelectorAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISelectorAutomationPeerFactory>
{
    ISelectorAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorAutomationPeerFactory>(m_ptr); }
};

struct ISelectorItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISelectorItemAutomationPeer>
{
    ISelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorItemAutomationPeer>(m_ptr); }
};

struct ISelectorItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISelectorItemAutomationPeerFactory>
{
    ISelectorItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorItemAutomationPeerFactory>(m_ptr); }
};

struct ISemanticZoomAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISemanticZoomAutomationPeer>
{
    ISemanticZoomAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISemanticZoomAutomationPeer>(m_ptr); }
};

struct ISemanticZoomAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISemanticZoomAutomationPeerFactory>
{
    ISemanticZoomAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISemanticZoomAutomationPeerFactory>(m_ptr); }
};

struct ISettingsFlyoutAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISettingsFlyoutAutomationPeer>
{
    ISettingsFlyoutAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISettingsFlyoutAutomationPeer>(m_ptr); }
};

struct ISettingsFlyoutAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISettingsFlyoutAutomationPeerFactory>
{
    ISettingsFlyoutAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISettingsFlyoutAutomationPeerFactory>(m_ptr); }
};

struct ISliderAutomationPeer :
    Windows::IInspectable,
    impl::consume<ISliderAutomationPeer>
{
    ISliderAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISliderAutomationPeer>(m_ptr); }
};

struct ISliderAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ISliderAutomationPeerFactory>
{
    ISliderAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISliderAutomationPeerFactory>(m_ptr); }
};

struct ITextBlockAutomationPeer :
    Windows::IInspectable,
    impl::consume<ITextBlockAutomationPeer>
{
    ITextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextBlockAutomationPeer>(m_ptr); }
};

struct ITextBlockAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ITextBlockAutomationPeerFactory>
{
    ITextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextBlockAutomationPeerFactory>(m_ptr); }
};

struct ITextBoxAutomationPeer :
    Windows::IInspectable,
    impl::consume<ITextBoxAutomationPeer>
{
    ITextBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextBoxAutomationPeer>(m_ptr); }
};

struct ITextBoxAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ITextBoxAutomationPeerFactory>
{
    ITextBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextBoxAutomationPeerFactory>(m_ptr); }
};

struct IThumbAutomationPeer :
    Windows::IInspectable,
    impl::consume<IThumbAutomationPeer>
{
    IThumbAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IThumbAutomationPeer>(m_ptr); }
};

struct IThumbAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IThumbAutomationPeerFactory>
{
    IThumbAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IThumbAutomationPeerFactory>(m_ptr); }
};

struct ITimePickerAutomationPeer :
    Windows::IInspectable,
    impl::consume<ITimePickerAutomationPeer>
{
    ITimePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimePickerAutomationPeer>(m_ptr); }
};

struct ITimePickerAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<ITimePickerAutomationPeerFactory>
{
    ITimePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimePickerAutomationPeerFactory>(m_ptr); }
};

struct ITimePickerFlyoutPresenterAutomationPeer :
    Windows::IInspectable,
    impl::consume<ITimePickerFlyoutPresenterAutomationPeer>
{
    ITimePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimePickerFlyoutPresenterAutomationPeer>(m_ptr); }
};

struct IToggleButtonAutomationPeer :
    Windows::IInspectable,
    impl::consume<IToggleButtonAutomationPeer>
{
    IToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButtonAutomationPeer>(m_ptr); }
};

struct IToggleButtonAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IToggleButtonAutomationPeerFactory>
{
    IToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButtonAutomationPeerFactory>(m_ptr); }
};

struct IToggleMenuFlyoutItemAutomationPeer :
    Windows::IInspectable,
    impl::consume<IToggleMenuFlyoutItemAutomationPeer>
{
    IToggleMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleMenuFlyoutItemAutomationPeer>(m_ptr); }
};

struct IToggleMenuFlyoutItemAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IToggleMenuFlyoutItemAutomationPeerFactory>
{
    IToggleMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleMenuFlyoutItemAutomationPeerFactory>(m_ptr); }
};

struct IToggleSwitchAutomationPeer :
    Windows::IInspectable,
    impl::consume<IToggleSwitchAutomationPeer>
{
    IToggleSwitchAutomationPeer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleSwitchAutomationPeer>(m_ptr); }
};

struct IToggleSwitchAutomationPeerFactory :
    Windows::IInspectable,
    impl::consume<IToggleSwitchAutomationPeerFactory>
{
    IToggleSwitchAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleSwitchAutomationPeerFactory>(m_ptr); }
};

}

}
