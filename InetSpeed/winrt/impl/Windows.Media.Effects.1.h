// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Editing.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Render.0.h"
#include "Windows.Media.Transcoding.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Media.Effects.0.h"

namespace winrt {

namespace Windows::Media::Effects {

struct IAudioCaptureEffectsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioCaptureEffectsManager>
{
    IAudioCaptureEffectsManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffect>
{
    IAudioEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectDefinition>
{
    IAudioEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectDefinitionFactory>
{
    IAudioEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEffectsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectsManagerStatics>
{
    IAudioEffectsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioRenderEffectsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRenderEffectsManager>
{
    IAudioRenderEffectsManager(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("Not supported starting in windows 10")]] IAudioRenderEffectsManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRenderEffectsManager2>
{
    IAudioRenderEffectsManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IBasicAudioEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicAudioEffect>,
    impl::require<IBasicAudioEffect, Windows::Media::IMediaExtension>
{
    IBasicAudioEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IBasicVideoEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicVideoEffect>,
    impl::require<IBasicVideoEffect, Windows::Media::IMediaExtension>
{
    IBasicVideoEffect(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositeVideoFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeVideoFrameContext>
{
    ICompositeVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessAudioFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessAudioFrameContext>
{
    IProcessAudioFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessVideoFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessVideoFrameContext>
{
    IProcessVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct ISlowMotionEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISlowMotionEffectDefinition>,
    impl::require<ISlowMotionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    ISlowMotionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoCompositor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositor>,
    impl::require<IVideoCompositor, Windows::Media::IMediaExtension>
{
    IVideoCompositor(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoCompositorDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositorDefinition>
{
    IVideoCompositorDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoCompositorDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositorDefinitionFactory>
{
    IVideoCompositorDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectDefinition>
{
    IVideoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectDefinitionFactory>
{
    IVideoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoTransformEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTransformEffectDefinition>,
    impl::require<IVideoTransformEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    IVideoTransformEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

}

}
