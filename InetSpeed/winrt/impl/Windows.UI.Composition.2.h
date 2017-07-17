﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.1.h"
#include "Windows.Graphics.DirectX.1.h"
#include "Windows.Graphics.Effects.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.UI.Composition.1.h"

namespace winrt {

namespace Windows::UI::Composition {

struct AmbientLight :
    Windows::UI::Composition::IAmbientLight,
    impl::base<AmbientLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
    impl::require<AmbientLight, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    AmbientLight(std::nullptr_t) noexcept {}
};

struct ColorKeyFrameAnimation :
    Windows::UI::Composition::IColorKeyFrameAnimation,
    impl::base<ColorKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<ColorKeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    ColorKeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct CompositionAnimation :
    Windows::UI::Composition::ICompositionAnimation,
    impl::base<CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionAnimation(std::nullptr_t) noexcept {}
};

struct CompositionAnimationGroup :
    Windows::UI::Composition::ICompositionAnimationGroup,
    impl::base<CompositionAnimationGroup, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionAnimationGroup, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionAnimationGroup(std::nullptr_t) noexcept {}
};

struct CompositionBackdropBrush :
    Windows::UI::Composition::ICompositionBackdropBrush,
    impl::base<CompositionBackdropBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionBackdropBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionBackdropBrush(std::nullptr_t) noexcept {}
};

struct CompositionBatchCompletedEventArgs :
    Windows::UI::Composition::ICompositionBatchCompletedEventArgs,
    impl::base<CompositionBatchCompletedEventArgs, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionBatchCompletedEventArgs, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionBatchCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct CompositionBrush :
    Windows::UI::Composition::ICompositionBrush,
    impl::base<CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionBrush(std::nullptr_t) noexcept {}
};

struct CompositionCapabilities :
    Windows::UI::Composition::ICompositionCapabilities
{
    CompositionCapabilities(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::CompositionCapabilities GetForCurrentView();
};

struct CompositionClip :
    Windows::UI::Composition::ICompositionClip,
    impl::base<CompositionClip, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionClip, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionClip(std::nullptr_t) noexcept {}
};

struct CompositionColorBrush :
    Windows::UI::Composition::ICompositionColorBrush,
    impl::base<CompositionColorBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionColorBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionColorBrush(std::nullptr_t) noexcept {}
};

struct CompositionCommitBatch :
    Windows::UI::Composition::ICompositionCommitBatch,
    impl::base<CompositionCommitBatch, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionCommitBatch, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionCommitBatch(std::nullptr_t) noexcept {}
};

struct CompositionDrawingSurface :
    Windows::UI::Composition::ICompositionDrawingSurface,
    impl::base<CompositionDrawingSurface, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionDrawingSurface, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionDrawingSurface2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionSurface>
{
    CompositionDrawingSurface(std::nullptr_t) noexcept {}
};

struct CompositionEasingFunction :
    Windows::UI::Composition::ICompositionEasingFunction,
    impl::base<CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionEasingFunction, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionEasingFunction(std::nullptr_t) noexcept {}
};

struct CompositionEffectBrush :
    Windows::UI::Composition::ICompositionEffectBrush,
    impl::base<CompositionEffectBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionEffectBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionEffectBrush(std::nullptr_t) noexcept {}
};

struct CompositionEffectFactory :
    Windows::UI::Composition::ICompositionEffectFactory,
    impl::base<CompositionEffectFactory, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionEffectFactory, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionEffectFactory(std::nullptr_t) noexcept {}
};

struct CompositionEffectSourceParameter :
    Windows::UI::Composition::ICompositionEffectSourceParameter
{
    CompositionEffectSourceParameter(std::nullptr_t) noexcept {}
    CompositionEffectSourceParameter(param::hstring const& name);
};

struct CompositionGraphicsDevice :
    Windows::UI::Composition::ICompositionGraphicsDevice,
    impl::base<CompositionGraphicsDevice, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionGraphicsDevice, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionGraphicsDevice2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionGraphicsDevice(std::nullptr_t) noexcept {}
};

struct CompositionLight :
    Windows::UI::Composition::ICompositionLight,
    impl::base<CompositionLight, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionLight, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionLight(std::nullptr_t) noexcept {}
};

struct CompositionMaskBrush :
    Windows::UI::Composition::ICompositionMaskBrush,
    impl::base<CompositionMaskBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionMaskBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionMaskBrush(std::nullptr_t) noexcept {}
};

struct CompositionNineGridBrush :
    Windows::UI::Composition::ICompositionNineGridBrush,
    impl::base<CompositionNineGridBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionNineGridBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionNineGridBrush(std::nullptr_t) noexcept {}
};

struct CompositionObject :
    Windows::UI::Composition::ICompositionObject,
    impl::require<CompositionObject, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject2>
{
    CompositionObject(std::nullptr_t) noexcept {}
};

struct CompositionPropertySet :
    Windows::UI::Composition::ICompositionPropertySet,
    impl::base<CompositionPropertySet, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionPropertySet, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionPropertySet2>
{
    CompositionPropertySet(std::nullptr_t) noexcept {}
};

struct CompositionScopedBatch :
    Windows::UI::Composition::ICompositionScopedBatch,
    impl::base<CompositionScopedBatch, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionScopedBatch, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionScopedBatch(std::nullptr_t) noexcept {}
};

struct CompositionShadow :
    Windows::UI::Composition::ICompositionShadow,
    impl::base<CompositionShadow, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionShadow, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionShadow(std::nullptr_t) noexcept {}
};

struct CompositionSurfaceBrush :
    Windows::UI::Composition::ICompositionSurfaceBrush,
    impl::base<CompositionSurfaceBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionSurfaceBrush, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionSurfaceBrush2>
{
    CompositionSurfaceBrush(std::nullptr_t) noexcept {}
};

struct CompositionTarget :
    Windows::UI::Composition::ICompositionTarget,
    impl::base<CompositionTarget, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionTarget, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionTarget(std::nullptr_t) noexcept {}
};

struct CompositionVirtualDrawingSurface :
    Windows::UI::Composition::ICompositionVirtualDrawingSurface,
    impl::base<CompositionVirtualDrawingSurface, Windows::UI::Composition::CompositionDrawingSurface, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionVirtualDrawingSurface, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionDrawingSurface, Windows::UI::Composition::ICompositionDrawingSurface2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionSurface>
{
    CompositionVirtualDrawingSurface(std::nullptr_t) noexcept {}
};

struct Compositor :
    Windows::UI::Composition::ICompositor,
    impl::require<Compositor, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositor2, Windows::UI::Composition::ICompositor3>
{
    Compositor(std::nullptr_t) noexcept {}
    Compositor();
};

struct ContainerVisual :
    Windows::UI::Composition::IContainerVisual,
    impl::base<ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
    impl::require<ContainerVisual, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2>
{
    ContainerVisual(std::nullptr_t) noexcept {}
};

struct CubicBezierEasingFunction :
    Windows::UI::Composition::ICubicBezierEasingFunction,
    impl::base<CubicBezierEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
    impl::require<CubicBezierEasingFunction, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CubicBezierEasingFunction(std::nullptr_t) noexcept {}
};

struct DistantLight :
    Windows::UI::Composition::IDistantLight,
    impl::base<DistantLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
    impl::require<DistantLight, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    DistantLight(std::nullptr_t) noexcept {}
};

struct DropShadow :
    Windows::UI::Composition::IDropShadow,
    impl::base<DropShadow, Windows::UI::Composition::CompositionShadow, Windows::UI::Composition::CompositionObject>,
    impl::require<DropShadow, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionShadow>
{
    DropShadow(std::nullptr_t) noexcept {}
};

struct ExpressionAnimation :
    Windows::UI::Composition::IExpressionAnimation,
    impl::base<ExpressionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<ExpressionAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    ExpressionAnimation(std::nullptr_t) noexcept {}
};

struct ImplicitAnimationCollection :
    Windows::UI::Composition::IImplicitAnimationCollection,
    impl::base<ImplicitAnimationCollection, Windows::UI::Composition::CompositionObject>,
    impl::require<ImplicitAnimationCollection, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    ImplicitAnimationCollection(std::nullptr_t) noexcept {}
};

struct InsetClip :
    Windows::UI::Composition::IInsetClip,
    impl::base<InsetClip, Windows::UI::Composition::CompositionClip, Windows::UI::Composition::CompositionObject>,
    impl::require<InsetClip, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionClip, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    InsetClip(std::nullptr_t) noexcept {}
};

struct KeyFrameAnimation :
    Windows::UI::Composition::IKeyFrameAnimation,
    impl::base<KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<KeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    KeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct LayerVisual :
    Windows::UI::Composition::ILayerVisual,
    impl::base<LayerVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
    impl::require<LayerVisual, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2>
{
    LayerVisual(std::nullptr_t) noexcept {}
};

struct LinearEasingFunction :
    Windows::UI::Composition::ILinearEasingFunction,
    impl::base<LinearEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
    impl::require<LinearEasingFunction, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    LinearEasingFunction(std::nullptr_t) noexcept {}
};

struct PointLight :
    Windows::UI::Composition::IPointLight,
    impl::base<PointLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
    impl::require<PointLight, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    PointLight(std::nullptr_t) noexcept {}
};

struct QuaternionKeyFrameAnimation :
    Windows::UI::Composition::IQuaternionKeyFrameAnimation,
    impl::base<QuaternionKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<QuaternionKeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    QuaternionKeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct RenderingDeviceReplacedEventArgs :
    Windows::UI::Composition::IRenderingDeviceReplacedEventArgs,
    impl::base<RenderingDeviceReplacedEventArgs, Windows::UI::Composition::CompositionObject>,
    impl::require<RenderingDeviceReplacedEventArgs, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    RenderingDeviceReplacedEventArgs(std::nullptr_t) noexcept {}
};

struct ScalarKeyFrameAnimation :
    Windows::UI::Composition::IScalarKeyFrameAnimation,
    impl::base<ScalarKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<ScalarKeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    ScalarKeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct SpotLight :
    Windows::UI::Composition::ISpotLight,
    impl::base<SpotLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
    impl::require<SpotLight, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    SpotLight(std::nullptr_t) noexcept {}
};

struct SpriteVisual :
    Windows::UI::Composition::ISpriteVisual,
    impl::base<SpriteVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
    impl::require<SpriteVisual, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::ISpriteVisual2, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2>
{
    SpriteVisual(std::nullptr_t) noexcept {}
};

struct StepEasingFunction :
    Windows::UI::Composition::IStepEasingFunction,
    impl::base<StepEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
    impl::require<StepEasingFunction, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    StepEasingFunction(std::nullptr_t) noexcept {}
};

struct Vector2KeyFrameAnimation :
    Windows::UI::Composition::IVector2KeyFrameAnimation,
    impl::base<Vector2KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<Vector2KeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    Vector2KeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct Vector3KeyFrameAnimation :
    Windows::UI::Composition::IVector3KeyFrameAnimation,
    impl::base<Vector3KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<Vector3KeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    Vector3KeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct Vector4KeyFrameAnimation :
    Windows::UI::Composition::IVector4KeyFrameAnimation,
    impl::base<Vector4KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
    impl::require<Vector4KeyFrameAnimation, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3>
{
    Vector4KeyFrameAnimation(std::nullptr_t) noexcept {}
};

struct Visual :
    Windows::UI::Composition::IVisual,
    impl::base<Visual, Windows::UI::Composition::CompositionObject>,
    impl::require<Visual, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::IVisual2>
{
    Visual(std::nullptr_t) noexcept {}
};

struct VisualCollection :
    Windows::UI::Composition::IVisualCollection,
    impl::base<VisualCollection, Windows::UI::Composition::CompositionObject>,
    impl::require<VisualCollection, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    VisualCollection(std::nullptr_t) noexcept {}
};

struct VisualUnorderedCollection :
    Windows::UI::Composition::IVisualUnorderedCollection,
    impl::base<VisualUnorderedCollection, Windows::UI::Composition::CompositionObject>,
    impl::require<VisualUnorderedCollection, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    VisualUnorderedCollection(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
