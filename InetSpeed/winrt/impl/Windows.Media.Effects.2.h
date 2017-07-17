// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.Capture.1.h"
#include "Windows.Media.Editing.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Media.Render.1.h"
#include "Windows.Media.Transcoding.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.1.h"
#include "Windows.Media.Effects.1.h"

namespace winrt {

namespace Windows::Media::Effects {

struct AudioCaptureEffectsManager :
    Windows::Media::Effects::IAudioCaptureEffectsManager
{
    AudioCaptureEffectsManager(std::nullptr_t) noexcept {}
};

struct AudioEffect :
    Windows::Media::Effects::IAudioEffect
{
    AudioEffect(std::nullptr_t) noexcept {}
};

struct AudioEffectDefinition :
    Windows::Media::Effects::IAudioEffectDefinition
{
    AudioEffectDefinition(std::nullptr_t) noexcept {}
    AudioEffectDefinition(param::hstring const& activatableClassId);
    AudioEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct AudioEffectsManager
{
    AudioEffectsManager() = delete;
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category);
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode);
};

struct AudioRenderEffectsManager :
    Windows::Media::Effects::IAudioRenderEffectsManager,
    impl::require<AudioRenderEffectsManager, Windows::Media::Effects::IAudioRenderEffectsManager2>
{
    AudioRenderEffectsManager(std::nullptr_t) noexcept {}
};

struct CompositeVideoFrameContext :
    Windows::Media::Effects::ICompositeVideoFrameContext
{
    CompositeVideoFrameContext(std::nullptr_t) noexcept {}
};

struct ProcessAudioFrameContext :
    Windows::Media::Effects::IProcessAudioFrameContext
{
    ProcessAudioFrameContext(std::nullptr_t) noexcept {}
};

struct ProcessVideoFrameContext :
    Windows::Media::Effects::IProcessVideoFrameContext
{
    ProcessVideoFrameContext(std::nullptr_t) noexcept {}
};

struct SlowMotionEffectDefinition :
    Windows::Media::Effects::ISlowMotionEffectDefinition
{
    SlowMotionEffectDefinition(std::nullptr_t) noexcept {}
    SlowMotionEffectDefinition();
};

struct VideoCompositorDefinition :
    Windows::Media::Effects::IVideoCompositorDefinition
{
    VideoCompositorDefinition(std::nullptr_t) noexcept {}
    VideoCompositorDefinition(param::hstring const& activatableClassId);
    VideoCompositorDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct VideoEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition
{
    VideoEffectDefinition(std::nullptr_t) noexcept {}
    VideoEffectDefinition(param::hstring const& activatableClassId);
    VideoEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct VideoTransformEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition,
    impl::require<VideoTransformEffectDefinition, Windows::Media::Effects::IVideoTransformEffectDefinition>
{
    VideoTransformEffectDefinition(std::nullptr_t) noexcept {}
    VideoTransformEffectDefinition();
};

}

namespace impl {

}

}
