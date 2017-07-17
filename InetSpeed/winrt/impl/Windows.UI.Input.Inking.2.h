// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.UI.Input.1.h"
#include "Windows.UI.Input.Inking.1.h"

namespace winrt {

namespace Windows::UI::Input::Inking {

struct InkDrawingAttributes :
    Windows::UI::Input::Inking::IInkDrawingAttributes,
    impl::require<InkDrawingAttributes, Windows::UI::Input::Inking::IInkDrawingAttributes2, Windows::UI::Input::Inking::IInkDrawingAttributes3, Windows::UI::Input::Inking::IInkDrawingAttributes4>
{
    InkDrawingAttributes(std::nullptr_t) noexcept {}
    InkDrawingAttributes();
    static Windows::UI::Input::Inking::InkDrawingAttributes CreateForPencil();
};

struct InkDrawingAttributesPencilProperties :
    Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties
{
    InkDrawingAttributesPencilProperties(std::nullptr_t) noexcept {}
};

struct InkInputProcessingConfiguration :
    Windows::UI::Input::Inking::IInkInputProcessingConfiguration
{
    InkInputProcessingConfiguration(std::nullptr_t) noexcept {}
};

struct InkManager :
    Windows::UI::Input::Inking::IInkManager
{
    InkManager(std::nullptr_t) noexcept {}
    InkManager();
};

struct InkPoint :
    Windows::UI::Input::Inking::IInkPoint,
    impl::require<InkPoint, Windows::UI::Input::Inking::IInkPoint2>
{
    InkPoint(std::nullptr_t) noexcept {}
    InkPoint(Windows::Foundation::Point const& position, float pressure);
    InkPoint(Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp);
};

struct InkPresenter :
    Windows::UI::Input::Inking::IInkPresenter,
    impl::require<InkPresenter, Windows::UI::Input::Inking::IInkPresenter2>
{
    InkPresenter(std::nullptr_t) noexcept {}
};

struct InkPresenterProtractor :
    Windows::UI::Input::Inking::IInkPresenterProtractor
{
    InkPresenterProtractor(std::nullptr_t) noexcept {}
    InkPresenterProtractor(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

struct InkPresenterRuler :
    Windows::UI::Input::Inking::IInkPresenterRuler,
    impl::require<InkPresenterRuler, Windows::UI::Input::Inking::IInkPresenterRuler2>
{
    InkPresenterRuler(std::nullptr_t) noexcept {}
    InkPresenterRuler(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

struct InkRecognitionResult :
    Windows::UI::Input::Inking::IInkRecognitionResult
{
    InkRecognitionResult(std::nullptr_t) noexcept {}
};

struct InkRecognizer :
    Windows::UI::Input::Inking::IInkRecognizer
{
    InkRecognizer(std::nullptr_t) noexcept {}
};

struct InkRecognizerContainer :
    Windows::UI::Input::Inking::IInkRecognizerContainer
{
    InkRecognizerContainer(std::nullptr_t) noexcept {}
    InkRecognizerContainer();
};

struct InkStroke :
    Windows::UI::Input::Inking::IInkStroke,
    impl::require<InkStroke, Windows::UI::Input::Inking::IInkStroke2, Windows::UI::Input::Inking::IInkStroke3>
{
    InkStroke(std::nullptr_t) noexcept {}
};

struct InkStrokeBuilder :
    Windows::UI::Input::Inking::IInkStrokeBuilder,
    impl::require<InkStrokeBuilder, Windows::UI::Input::Inking::IInkStrokeBuilder2, Windows::UI::Input::Inking::IInkStrokeBuilder3>
{
    InkStrokeBuilder(std::nullptr_t) noexcept {}
    InkStrokeBuilder();
    using impl::consume_t<InkStrokeBuilder, Windows::UI::Input::Inking::IInkStrokeBuilder2>::CreateStrokeFromInkPoints;
    using impl::consume_t<InkStrokeBuilder, Windows::UI::Input::Inking::IInkStrokeBuilder3>::CreateStrokeFromInkPoints;
};

struct InkStrokeContainer :
    Windows::UI::Input::Inking::IInkStrokeContainer,
    impl::require<InkStrokeContainer, Windows::UI::Input::Inking::IInkStrokeContainer2, Windows::UI::Input::Inking::IInkStrokeContainer3>
{
    InkStrokeContainer(std::nullptr_t) noexcept {}
    InkStrokeContainer();
    using impl::consume_t<InkStrokeContainer, Windows::UI::Input::Inking::IInkStrokeContainer3>::SaveAsync;
    using Windows::UI::Input::Inking::IInkStrokeContainer::SaveAsync;
};

struct InkStrokeInput :
    Windows::UI::Input::Inking::IInkStrokeInput
{
    InkStrokeInput(std::nullptr_t) noexcept {}
};

struct InkStrokeRenderingSegment :
    Windows::UI::Input::Inking::IInkStrokeRenderingSegment
{
    InkStrokeRenderingSegment(std::nullptr_t) noexcept {}
};

struct InkStrokesCollectedEventArgs :
    Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs
{
    InkStrokesCollectedEventArgs(std::nullptr_t) noexcept {}
};

struct InkStrokesErasedEventArgs :
    Windows::UI::Input::Inking::IInkStrokesErasedEventArgs
{
    InkStrokesErasedEventArgs(std::nullptr_t) noexcept {}
};

struct InkSynchronizer :
    Windows::UI::Input::Inking::IInkSynchronizer
{
    InkSynchronizer(std::nullptr_t) noexcept {}
};

struct InkUnprocessedInput :
    Windows::UI::Input::Inking::IInkUnprocessedInput
{
    InkUnprocessedInput(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
