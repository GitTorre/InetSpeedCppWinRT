// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.UI.Input.Inking.0.h"

namespace winrt {

namespace Windows::UI::Input::Inking {

struct IInkDrawingAttributes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes>
{
    IInkDrawingAttributes(std::nullptr_t = nullptr) noexcept {}
};

struct IInkDrawingAttributes2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes2>
{
    IInkDrawingAttributes2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkDrawingAttributes3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes3>
{
    IInkDrawingAttributes3(std::nullptr_t = nullptr) noexcept {}
};

struct IInkDrawingAttributes4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes4>
{
    IInkDrawingAttributes4(std::nullptr_t = nullptr) noexcept {}
};

struct IInkDrawingAttributesPencilProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributesPencilProperties>
{
    IInkDrawingAttributesPencilProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IInkDrawingAttributesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributesStatics>
{
    IInkDrawingAttributesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInkInputProcessingConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkInputProcessingConfiguration>
{
    IInkInputProcessingConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IInkManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkManager>,
    impl::require<IInkManager, Windows::UI::Input::Inking::IInkRecognizerContainer, Windows::UI::Input::Inking::IInkStrokeContainer>
{
    IInkManager(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IInkManager, Windows::UI::Input::Inking::IInkRecognizerContainer>::RecognizeAsync;
    using impl::consume_t<IInkManager, Windows::UI::Input::Inking::IInkManager>::RecognizeAsync;
};

struct IInkPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPoint>
{
    IInkPoint(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPoint2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPoint2>
{
    IInkPoint2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPointFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPointFactory>
{
    IInkPointFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPointFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPointFactory2>
{
    IInkPointFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenter>
{
    IInkPresenter(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenter2>,
    impl::require<IInkPresenter2, Windows::UI::Input::Inking::IInkPresenter>
{
    IInkPresenter2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterProtractor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterProtractor>,
    impl::require<IInkPresenterProtractor, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    IInkPresenterProtractor(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterProtractorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterProtractorFactory>
{
    IInkPresenterProtractorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterRuler :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRuler>,
    impl::require<IInkPresenterRuler, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    IInkPresenterRuler(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterRuler2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRuler2>
{
    IInkPresenterRuler2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterRulerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRulerFactory>
{
    IInkPresenterRulerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInkPresenterStencil :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterStencil>
{
    IInkPresenterStencil(std::nullptr_t = nullptr) noexcept {}
};

struct IInkRecognitionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognitionResult>
{
    IInkRecognitionResult(std::nullptr_t = nullptr) noexcept {}
};

struct IInkRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognizer>
{
    IInkRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct IInkRecognizerContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognizerContainer>
{
    IInkRecognizerContainer(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStroke :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke>
{
    IInkStroke(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStroke2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke2>
{
    IInkStroke2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStroke3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke3>
{
    IInkStroke3(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder>
{
    IInkStrokeBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeBuilder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder2>
{
    IInkStrokeBuilder2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeBuilder3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder3>
{
    IInkStrokeBuilder3(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer>
{
    IInkStrokeContainer(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeContainer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer2>
{
    IInkStrokeContainer2(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeContainer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer3>
{
    IInkStrokeContainer3(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeInput>
{
    IInkStrokeInput(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokeRenderingSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeRenderingSegment>
{
    IInkStrokeRenderingSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokesCollectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokesCollectedEventArgs>
{
    IInkStrokesCollectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInkStrokesErasedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokesErasedEventArgs>
{
    IInkStrokesErasedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInkSynchronizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkSynchronizer>
{
    IInkSynchronizer(std::nullptr_t = nullptr) noexcept {}
};

struct IInkUnprocessedInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkUnprocessedInput>
{
    IInkUnprocessedInput(std::nullptr_t = nullptr) noexcept {}
};

}

}
