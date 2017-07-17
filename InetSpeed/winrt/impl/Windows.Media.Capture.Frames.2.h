// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.Capture.1.h"
#include "Windows.Media.Devices.1.h"
#include "Windows.Media.Devices.Core.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Perception.Spatial.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.Capture.Frames.1.h"

namespace winrt {

namespace Windows::Media::Capture::Frames {

struct BufferMediaFrame :
    Windows::Media::Capture::Frames::IBufferMediaFrame
{
    BufferMediaFrame(std::nullptr_t) noexcept {}
};

struct DepthMediaFrame :
    Windows::Media::Capture::Frames::IDepthMediaFrame,
    impl::require<DepthMediaFrame, Windows::Media::Capture::Frames::IDepthMediaFrame2>
{
    DepthMediaFrame(std::nullptr_t) noexcept {}
};

struct DepthMediaFrameFormat :
    Windows::Media::Capture::Frames::IDepthMediaFrameFormat
{
    DepthMediaFrameFormat(std::nullptr_t) noexcept {}
};

struct InfraredMediaFrame :
    Windows::Media::Capture::Frames::IInfraredMediaFrame
{
    InfraredMediaFrame(std::nullptr_t) noexcept {}
};

struct MediaFrameArrivedEventArgs :
    Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs
{
    MediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct MediaFrameFormat :
    Windows::Media::Capture::Frames::IMediaFrameFormat
{
    MediaFrameFormat(std::nullptr_t) noexcept {}
};

struct MediaFrameReader :
    Windows::Media::Capture::Frames::IMediaFrameReader
{
    MediaFrameReader(std::nullptr_t) noexcept {}
};

struct MediaFrameReference :
    Windows::Media::Capture::Frames::IMediaFrameReference
{
    MediaFrameReference(std::nullptr_t) noexcept {}
};

struct MediaFrameSource :
    Windows::Media::Capture::Frames::IMediaFrameSource
{
    MediaFrameSource(std::nullptr_t) noexcept {}
};

struct MediaFrameSourceController :
    Windows::Media::Capture::Frames::IMediaFrameSourceController,
    impl::require<MediaFrameSourceController, Windows::Media::Capture::Frames::IMediaFrameSourceController2>
{
    MediaFrameSourceController(std::nullptr_t) noexcept {}
};

struct MediaFrameSourceGetPropertyResult :
    Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult
{
    MediaFrameSourceGetPropertyResult(std::nullptr_t) noexcept {}
};

struct MediaFrameSourceGroup :
    Windows::Media::Capture::Frames::IMediaFrameSourceGroup
{
    MediaFrameSourceGroup(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> FromIdAsync(param::hstring const& id);
    static hstring GetDeviceSelector();
};

struct MediaFrameSourceInfo :
    Windows::Media::Capture::Frames::IMediaFrameSourceInfo
{
    MediaFrameSourceInfo(std::nullptr_t) noexcept {}
};

struct MultiSourceMediaFrameArrivedEventArgs :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs
{
    MultiSourceMediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct MultiSourceMediaFrameReader :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader
{
    MultiSourceMediaFrameReader(std::nullptr_t) noexcept {}
};

struct MultiSourceMediaFrameReference :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference
{
    MultiSourceMediaFrameReference(std::nullptr_t) noexcept {}
};

struct VideoMediaFrame :
    Windows::Media::Capture::Frames::IVideoMediaFrame
{
    VideoMediaFrame(std::nullptr_t) noexcept {}
};

struct VideoMediaFrameFormat :
    Windows::Media::Capture::Frames::IVideoMediaFrameFormat
{
    VideoMediaFrameFormat(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
