// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.Devices.Core.0.h"

namespace winrt {

namespace Windows::Media::Devices::Core {

struct ICameraIntrinsics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsics>
{
    ICameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraIntrinsics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsics2>
{
    ICameraIntrinsics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraIntrinsicsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsicsFactory>
{
    ICameraIntrinsicsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDepthCorrelatedCoordinateMapper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthCorrelatedCoordinateMapper>,
    impl::require<IDepthCorrelatedCoordinateMapper, Windows::Foundation::IClosable>
{
    IDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameControlCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameControlCapabilities>
{
    IFrameControlCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameControlCapabilities2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameControlCapabilities2>
{
    IFrameControlCapabilities2(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameController>
{
    IFrameController(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameController2>
{
    IFrameController2(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameExposureCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCapabilities>
{
    IFrameExposureCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameExposureCompensationCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCompensationCapabilities>
{
    IFrameExposureCompensationCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameExposureCompensationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCompensationControl>
{
    IFrameExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameExposureControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureControl>
{
    IFrameExposureControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameFlashCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFlashCapabilities>
{
    IFrameFlashCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameFlashControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFlashControl>
{
    IFrameFlashControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameFocusCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFocusCapabilities>
{
    IFrameFocusCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameFocusControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFocusControl>
{
    IFrameFocusControl(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameIsoSpeedCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameIsoSpeedCapabilities>
{
    IFrameIsoSpeedCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameIsoSpeedControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameIsoSpeedControl>
{
    IFrameIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
};

struct IVariablePhotoSequenceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceController>
{
    IVariablePhotoSequenceController(std::nullptr_t = nullptr) noexcept {}
};

}

}
