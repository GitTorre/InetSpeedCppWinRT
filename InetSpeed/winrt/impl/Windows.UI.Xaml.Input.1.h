// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Input.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Input.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Input {

struct IAccessKeyDisplayDismissedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyDisplayDismissedEventArgs>
{
    IAccessKeyDisplayDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessKeyDisplayRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyDisplayRequestedEventArgs>
{
    IAccessKeyDisplayRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessKeyInvokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyInvokedEventArgs>
{
    IAccessKeyInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessKeyManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManager>
{
    IAccessKeyManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessKeyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManagerStatics>
{
    IAccessKeyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessKeyManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManagerStatics2>
{
    IAccessKeyManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommand>
{
    ICommand(std::nullptr_t = nullptr) noexcept {}
};

struct IContextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContextRequestedEventArgs>
{
    IContextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDoubleTappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDoubleTappedRoutedEventArgs>
{
    IDoubleTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFindNextElementOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFindNextElementOptions>
{
    IFindNextElementOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManager>
{
    IFocusManager(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics>
{
    IFocusManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics2>
{
    IFocusManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics3>
{
    IFocusManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IFocusManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics4>
{
    IFocusManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct IGettingFocusEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGettingFocusEventArgs>
{
    IGettingFocusEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHoldingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHoldingRoutedEventArgs>
{
    IHoldingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInertiaExpansionBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaExpansionBehavior>
{
    IInertiaExpansionBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct IInertiaRotationBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaRotationBehavior>
{
    IInertiaRotationBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct IInertiaTranslationBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaTranslationBehavior>
{
    IInertiaTranslationBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct IInputScope :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScope>
{
    IInputScope(std::nullptr_t = nullptr) noexcept {}
};

struct IInputScopeName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScopeName>
{
    IInputScopeName(std::nullptr_t = nullptr) noexcept {}
};

struct IInputScopeNameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScopeNameFactory>
{
    IInputScopeNameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs>
{
    IKeyRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyRoutedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs2>
{
    IKeyRoutedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyRoutedEventArgs3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs3>
{
    IKeyRoutedEventArgs3(std::nullptr_t = nullptr) noexcept {}
};

struct ILosingFocusEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILosingFocusEventArgs>
{
    ILosingFocusEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationCompletedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationCompletedRoutedEventArgs>
{
    IManipulationCompletedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationDeltaRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationDeltaRoutedEventArgs>
{
    IManipulationDeltaRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationInertiaStartingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationInertiaStartingRoutedEventArgs>
{
    IManipulationInertiaStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationPivot :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationPivot>
{
    IManipulationPivot(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationPivotFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationPivotFactory>
{
    IManipulationPivotFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationStartedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedRoutedEventArgs>
{
    IManipulationStartedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationStartedRoutedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedRoutedEventArgsFactory>
{
    IManipulationStartedRoutedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationStartingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartingRoutedEventArgs>
{
    IManipulationStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INoFocusCandidateFoundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INoFocusCandidateFoundEventArgs>
{
    INoFocusCandidateFoundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPointer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointer>
{
    IPointer(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerRoutedEventArgs>
{
    IPointerRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRightTappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRightTappedRoutedEventArgs>
{
    IRightTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITappedRoutedEventArgs>
{
    ITappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
