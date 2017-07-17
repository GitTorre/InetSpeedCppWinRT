// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.0.h"
#include "Windows.Graphics.DirectX.0.h"
#include "Windows.Graphics.Effects.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.UI.Composition.0.h"

namespace winrt {

namespace Windows::UI::Composition {

struct IAmbientLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAmbientLight>
{
    IAmbientLight(std::nullptr_t = nullptr) noexcept {}
};

struct IColorKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorKeyFrameAnimation>
{
    IColorKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimation>
{
    ICompositionAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionAnimation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimation2>
{
    ICompositionAnimation2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionAnimationBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationBase>
{
    ICompositionAnimationBase(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionAnimationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationFactory>
{
    ICompositionAnimationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionAnimationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationGroup>,
    impl::require<ICompositionAnimationGroup, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation>>
{
    ICompositionAnimationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionBackdropBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBackdropBrush>
{
    ICompositionBackdropBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionBatchCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBatchCompletedEventArgs>
{
    ICompositionBatchCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBrush>
{
    ICompositionBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBrushFactory>
{
    ICompositionBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCapabilities>
{
    ICompositionCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionCapabilitiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCapabilitiesStatics>
{
    ICompositionCapabilitiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClip>
{
    ICompositionClip(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionClip2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClip2>
{
    ICompositionClip2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionClipFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClipFactory>
{
    ICompositionClipFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionColorBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionColorBrush>
{
    ICompositionColorBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionCommitBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCommitBatch>
{
    ICompositionCommitBatch(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionDrawingSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurface>
{
    ICompositionDrawingSurface(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionDrawingSurface2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurface2>
{
    ICompositionDrawingSurface2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionDrawingSurfaceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurfaceFactory>
{
    ICompositionDrawingSurfaceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEasingFunction>
{
    ICompositionEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEasingFunctionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEasingFunctionFactory>
{
    ICompositionEasingFunctionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEffectBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectBrush>
{
    ICompositionEffectBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectFactory>
{
    ICompositionEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEffectSourceParameter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectSourceParameter>,
    impl::require<ICompositionEffectSourceParameter, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICompositionEffectSourceParameter(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionEffectSourceParameterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectSourceParameterFactory>
{
    ICompositionEffectSourceParameterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionGraphicsDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionGraphicsDevice>
{
    ICompositionGraphicsDevice(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionGraphicsDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionGraphicsDevice2>
{
    ICompositionGraphicsDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionLight>
{
    ICompositionLight(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionLightFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionLightFactory>
{
    ICompositionLightFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionMaskBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionMaskBrush>
{
    ICompositionMaskBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionNineGridBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionNineGridBrush>
{
    ICompositionNineGridBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObject>
{
    ICompositionObject(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionObject2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObject2>
{
    ICompositionObject2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObjectFactory>
{
    ICompositionObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionPropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionPropertySet>
{
    ICompositionPropertySet(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionPropertySet2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionPropertySet2>
{
    ICompositionPropertySet2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionScopedBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionScopedBatch>
{
    ICompositionScopedBatch(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionShadow :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionShadow>
{
    ICompositionShadow(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionShadowFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionShadowFactory>
{
    ICompositionShadowFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurface>
{
    ICompositionSurface(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionSurfaceBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurfaceBrush>
{
    ICompositionSurfaceBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionSurfaceBrush2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurfaceBrush2>
{
    ICompositionSurfaceBrush2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTarget>
{
    ICompositionTarget(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionVirtualDrawingSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionVirtualDrawingSurface>
{
    ICompositionVirtualDrawingSurface(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionVirtualDrawingSurfaceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionVirtualDrawingSurfaceFactory>
{
    ICompositionVirtualDrawingSurfaceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor>
{
    ICompositor(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor2>
{
    ICompositor2(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositor3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor3>
{
    ICompositor3(std::nullptr_t = nullptr) noexcept {}
};

struct IContainerVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerVisual>
{
    IContainerVisual(std::nullptr_t = nullptr) noexcept {}
};

struct IContainerVisualFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerVisualFactory>
{
    IContainerVisualFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICubicBezierEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICubicBezierEasingFunction>
{
    ICubicBezierEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct IDistantLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDistantLight>
{
    IDistantLight(std::nullptr_t = nullptr) noexcept {}
};

struct IDropShadow :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDropShadow>
{
    IDropShadow(std::nullptr_t = nullptr) noexcept {}
};

struct IExpressionAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExpressionAnimation>
{
    IExpressionAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IImplicitAnimationCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImplicitAnimationCollection>,
    impl::require<IImplicitAnimationCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::UI::Composition::ICompositionAnimationBase>>, Windows::Foundation::Collections::IMap<hstring, Windows::UI::Composition::ICompositionAnimationBase>>
{
    IImplicitAnimationCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IInsetClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInsetClip>
{
    IInsetClip(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation>
{
    IKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyFrameAnimation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation2>
{
    IKeyFrameAnimation2(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyFrameAnimation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation3>
{
    IKeyFrameAnimation3(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyFrameAnimationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimationFactory>
{
    IKeyFrameAnimationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILayerVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILayerVisual>
{
    ILayerVisual(std::nullptr_t = nullptr) noexcept {}
};

struct ILinearEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearEasingFunction>
{
    ILinearEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct IPointLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointLight>
{
    IPointLight(std::nullptr_t = nullptr) noexcept {}
};

struct IQuaternionKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuaternionKeyFrameAnimation>
{
    IQuaternionKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IRenderingDeviceReplacedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRenderingDeviceReplacedEventArgs>
{
    IRenderingDeviceReplacedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IScalarKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScalarKeyFrameAnimation>
{
    IScalarKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct ISpotLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpotLight>
{
    ISpotLight(std::nullptr_t = nullptr) noexcept {}
};

struct ISpriteVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpriteVisual>
{
    ISpriteVisual(std::nullptr_t = nullptr) noexcept {}
};

struct ISpriteVisual2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpriteVisual2>
{
    ISpriteVisual2(std::nullptr_t = nullptr) noexcept {}
};

struct IStepEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStepEasingFunction>
{
    IStepEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct IVector2KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector2KeyFrameAnimation>
{
    IVector2KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IVector3KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector3KeyFrameAnimation>
{
    IVector3KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IVector4KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector4KeyFrameAnimation>
{
    IVector4KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisual>
{
    IVisual(std::nullptr_t = nullptr) noexcept {}
};

struct IVisual2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisual2>
{
    IVisual2(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualCollection>,
    impl::require<IVisualCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>>
{
    IVisualCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualFactory>
{
    IVisualFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualUnorderedCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualUnorderedCollection>,
    impl::require<IVisualUnorderedCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>>
{
    IVisualUnorderedCollection(std::nullptr_t = nullptr) noexcept {}
};

}

}
