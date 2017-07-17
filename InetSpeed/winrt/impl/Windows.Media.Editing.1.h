// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Transcoding.0.h"
#include "Windows.Storage.0.h"
#include "Windows.UI.0.h"
#include "Windows.Media.Editing.0.h"

namespace winrt {

namespace Windows::Media::Editing {

struct IBackgroundAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundAudioTrack>
{
    IBackgroundAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundAudioTrackStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundAudioTrackStatics>
{
    IBackgroundAudioTrackStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IEmbeddedAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmbeddedAudioTrack>
{
    IEmbeddedAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClip>
{
    IMediaClip(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaClipStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClipStatics>
{
    IMediaClipStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaClipStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClipStatics2>
{
    IMediaClipStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaComposition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaComposition>
{
    IMediaComposition(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaComposition2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaComposition2>
{
    IMediaComposition2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaCompositionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCompositionStatics>
{
    IMediaCompositionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaOverlay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlay>
{
    IMediaOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaOverlayFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayFactory>
{
    IMediaOverlayFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaOverlayLayer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayLayer>
{
    IMediaOverlayLayer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaOverlayLayerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayLayerFactory>
{
    IMediaOverlayLayerFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
