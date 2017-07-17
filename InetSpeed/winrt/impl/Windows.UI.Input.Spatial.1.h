// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Haptics.0.h"
#include "Windows.Perception.0.h"
#include "Windows.Perception.People.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.UI.Input.Spatial.0.h"

namespace winrt {

namespace Windows::UI::Input::Spatial {

struct ISpatialGestureRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialGestureRecognizer>
{
    ISpatialGestureRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialGestureRecognizerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialGestureRecognizerFactory>
{
    ISpatialGestureRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialHoldCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldCanceledEventArgs>
{
    ISpatialHoldCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialHoldCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldCompletedEventArgs>
{
    ISpatialHoldCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialHoldStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldStartedEventArgs>
{
    ISpatialHoldStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteraction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteraction>
{
    ISpatialInteraction(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionController>
{
    ISpatialInteractionController(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionControllerProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionControllerProperties>
{
    ISpatialInteractionControllerProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionDetectedEventArgs>
{
    ISpatialInteractionDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionDetectedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionDetectedEventArgs2>,
    impl::require<ISpatialInteractionDetectedEventArgs2, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    ISpatialInteractionDetectedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionManager>
{
    ISpatialInteractionManager(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionManagerStatics>
{
    ISpatialInteractionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSource>
{
    ISpatialInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSource2>,
    impl::require<ISpatialInteractionSource2, Windows::UI::Input::Spatial::ISpatialInteractionSource>
{
    ISpatialInteractionSource2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceEventArgs>
{
    ISpatialInteractionSourceEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceEventArgs2>,
    impl::require<ISpatialInteractionSourceEventArgs2, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    ISpatialInteractionSourceEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceLocation>
{
    ISpatialInteractionSourceLocation(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceLocation2>
{
    ISpatialInteractionSourceLocation2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceProperties>
{
    ISpatialInteractionSourceProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceState :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceState>
{
    ISpatialInteractionSourceState(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialInteractionSourceState2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceState2>,
    impl::require<ISpatialInteractionSourceState2, Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
{
    ISpatialInteractionSourceState2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialManipulationCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationCanceledEventArgs>
{
    ISpatialManipulationCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialManipulationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationCompletedEventArgs>
{
    ISpatialManipulationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialManipulationDelta :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationDelta>
{
    ISpatialManipulationDelta(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialManipulationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationStartedEventArgs>
{
    ISpatialManipulationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialManipulationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationUpdatedEventArgs>
{
    ISpatialManipulationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialNavigationCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationCanceledEventArgs>
{
    ISpatialNavigationCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialNavigationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationCompletedEventArgs>
{
    ISpatialNavigationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialNavigationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationStartedEventArgs>
{
    ISpatialNavigationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialNavigationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationUpdatedEventArgs>
{
    ISpatialNavigationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialPointerInteractionSourcePose :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerInteractionSourcePose>
{
    ISpatialPointerInteractionSourcePose(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialPointerPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPose>
{
    ISpatialPointerPose(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialPointerPose2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPose2>,
    impl::require<ISpatialPointerPose2, Windows::UI::Input::Spatial::ISpatialPointerPose>
{
    ISpatialPointerPose2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialPointerPoseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPoseStatics>
{
    ISpatialPointerPoseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialRecognitionEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialRecognitionEndedEventArgs>
{
    ISpatialRecognitionEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialRecognitionStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialRecognitionStartedEventArgs>
{
    ISpatialRecognitionStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialTappedEventArgs>
{
    ISpatialTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
