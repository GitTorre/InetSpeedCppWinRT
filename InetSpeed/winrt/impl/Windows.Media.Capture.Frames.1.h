// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Devices.0.h"
#include "Windows.Media.Devices.Core.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.Capture.Frames.0.h"

namespace winrt {

namespace Windows::Media::Capture::Frames {

struct IBufferMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferMediaFrame>
{
    IBufferMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IDepthMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrame>
{
    IDepthMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IDepthMediaFrame2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrame2>
{
    IDepthMediaFrame2(std::nullptr_t = nullptr) noexcept {}
};

struct IDepthMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrameFormat>
{
    IDepthMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

struct IInfraredMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInfraredMediaFrame>
{
    IInfraredMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameArrivedEventArgs>
{
    IMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameFormat>
{
    IMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameReader>,
    impl::require<IMediaFrameReader, Windows::Foundation::IClosable>
{
    IMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameReference>,
    impl::require<IMediaFrameReference, Windows::Foundation::IClosable>
{
    IMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSource>
{
    IMediaFrameSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceController>
{
    IMediaFrameSourceController(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceController2>
{
    IMediaFrameSourceController2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceGetPropertyResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGetPropertyResult>
{
    IMediaFrameSourceGetPropertyResult(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGroup>
{
    IMediaFrameSourceGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGroupStatics>
{
    IMediaFrameSourceGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaFrameSourceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceInfo>
{
    IMediaFrameSourceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IMultiSourceMediaFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameArrivedEventArgs>
{
    IMultiSourceMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMultiSourceMediaFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameReader>,
    impl::require<IMultiSourceMediaFrameReader, Windows::Foundation::IClosable>
{
    IMultiSourceMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct IMultiSourceMediaFrameReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameReference>,
    impl::require<IMultiSourceMediaFrameReference, Windows::Foundation::IClosable>
{
    IMultiSourceMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoMediaFrame>
{
    IVideoMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoMediaFrameFormat>
{
    IVideoMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

}

}
