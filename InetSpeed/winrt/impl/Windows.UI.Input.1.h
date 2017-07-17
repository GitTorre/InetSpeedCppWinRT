// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Haptics.0.h"
#include "Windows.Devices.Input.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"

namespace winrt {

namespace Windows::UI::Input {

struct ICrossSlidingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICrossSlidingEventArgs>
{
    ICrossSlidingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDraggingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDraggingEventArgs>
{
    IDraggingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEdgeGesture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGesture>
{
    IEdgeGesture(std::nullptr_t = nullptr) noexcept {}
};

struct IEdgeGestureEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGestureEventArgs>
{
    IEdgeGestureEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEdgeGestureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGestureStatics>
{
    IEdgeGestureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGestureRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGestureRecognizer>
{
    IGestureRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct IHoldingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHoldingEventArgs>
{
    IHoldingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyboardDeliveryInterceptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyboardDeliveryInterceptor>
{
    IKeyboardDeliveryInterceptor(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyboardDeliveryInterceptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyboardDeliveryInterceptorStatics>
{
    IKeyboardDeliveryInterceptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationCompletedEventArgs>
{
    IManipulationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationInertiaStartingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationInertiaStartingEventArgs>
{
    IManipulationInertiaStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedEventArgs>
{
    IManipulationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IManipulationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationUpdatedEventArgs>
{
    IManipulationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMouseWheelParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseWheelParameters>
{
    IMouseWheelParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPoint>
{
    IPointerPoint(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerPointProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointProperties>
{
    IPointerPointProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerPointProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointProperties2>
{
    IPointerPointProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerPointStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointStatics>
{
    IPointerPointStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerPointTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointTransform>
{
    IPointerPointTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerVisualizationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerVisualizationSettings>
{
    IPointerVisualizationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerVisualizationSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerVisualizationSettingsStatics>
{
    IPointerVisualizationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialController>
{
    IRadialController(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialController2>
{
    IRadialController2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonClickedEventArgs>
{
    IRadialControllerButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerButtonClickedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonClickedEventArgs2>
{
    IRadialControllerButtonClickedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerButtonHoldingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonHoldingEventArgs>
{
    IRadialControllerButtonHoldingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerButtonPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonPressedEventArgs>
{
    IRadialControllerButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerButtonReleasedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonReleasedEventArgs>
{
    IRadialControllerButtonReleasedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfiguration>
{
    IRadialControllerConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfiguration2>
{
    IRadialControllerConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerConfigurationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfigurationStatics>
{
    IRadialControllerConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerControlAcquiredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerControlAcquiredEventArgs>
{
    IRadialControllerControlAcquiredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerControlAcquiredEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerControlAcquiredEventArgs2>
{
    IRadialControllerControlAcquiredEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerMenu :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenu>
{
    IRadialControllerMenu(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerMenuItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItem>
{
    IRadialControllerMenuItem(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerMenuItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItemStatics>
{
    IRadialControllerMenuItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerMenuItemStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItemStatics2>
{
    IRadialControllerMenuItemStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerRotationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerRotationChangedEventArgs>
{
    IRadialControllerRotationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerRotationChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerRotationChangedEventArgs2>
{
    IRadialControllerRotationChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContact>
{
    IRadialControllerScreenContact(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContactContinuedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactContinuedEventArgs>
{
    IRadialControllerScreenContactContinuedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContactContinuedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactContinuedEventArgs2>
{
    IRadialControllerScreenContactContinuedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContactEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactEndedEventArgs>
{
    IRadialControllerScreenContactEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContactStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactStartedEventArgs>
{
    IRadialControllerScreenContactStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerScreenContactStartedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactStartedEventArgs2>
{
    IRadialControllerScreenContactStartedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerStatics>
{
    IRadialControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRightTappedEventArgs>
{
    IRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITappedEventArgs>
{
    ITappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
