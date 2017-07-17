// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.Effects.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Media.Transcoding.1.h"
#include "Windows.Storage.1.h"
#include "Windows.UI.1.h"
#include "Windows.Media.Editing.1.h"

namespace winrt {

namespace Windows::Media::Editing {

struct BackgroundAudioTrack :
    Windows::Media::Editing::IBackgroundAudioTrack
{
    BackgroundAudioTrack(std::nullptr_t) noexcept {}
    static Windows::Media::Editing::BackgroundAudioTrack CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
};

struct EmbeddedAudioTrack :
    Windows::Media::Editing::IEmbeddedAudioTrack
{
    EmbeddedAudioTrack(std::nullptr_t) noexcept {}
};

struct MediaClip :
    Windows::Media::Editing::IMediaClip
{
    MediaClip(std::nullptr_t) noexcept {}
    static Windows::Media::Editing::MediaClip CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration);
    static Windows::Media::Editing::MediaClip CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration);
};

struct MediaComposition :
    Windows::Media::Editing::IMediaComposition,
    impl::require<MediaComposition, Windows::Media::Editing::IMediaComposition2>
{
    MediaComposition(std::nullptr_t) noexcept {}
    MediaComposition();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> LoadAsync(Windows::Storage::StorageFile const& file);
};

struct MediaOverlay :
    Windows::Media::Editing::IMediaOverlay
{
    MediaOverlay(std::nullptr_t) noexcept {}
    MediaOverlay(Windows::Media::Editing::MediaClip const& clip);
    MediaOverlay(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity);
};

struct MediaOverlayLayer :
    Windows::Media::Editing::IMediaOverlayLayer
{
    MediaOverlayLayer(std::nullptr_t) noexcept {}
    MediaOverlayLayer();
    MediaOverlayLayer(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition);
};

}

namespace impl {

}

}
