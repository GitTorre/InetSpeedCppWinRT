// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Perception.Spatial.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.Devices.Core.1.h"

namespace winrt {

namespace Windows::Media::Devices::Core {

struct CameraIntrinsics :
    Windows::Media::Devices::Core::ICameraIntrinsics,
    impl::require<CameraIntrinsics, Windows::Media::Devices::Core::ICameraIntrinsics2>
{
    CameraIntrinsics(std::nullptr_t) noexcept {}
};

struct DepthCorrelatedCoordinateMapper :
    Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper
{
    DepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
};

struct FrameControlCapabilities :
    Windows::Media::Devices::Core::IFrameControlCapabilities,
    impl::require<FrameControlCapabilities, Windows::Media::Devices::Core::IFrameControlCapabilities2>
{
    FrameControlCapabilities(std::nullptr_t) noexcept {}
};

struct FrameController :
    Windows::Media::Devices::Core::IFrameController,
    impl::require<FrameController, Windows::Media::Devices::Core::IFrameController2>
{
    FrameController(std::nullptr_t) noexcept {}
    FrameController();
};

struct FrameExposureCapabilities :
    Windows::Media::Devices::Core::IFrameExposureCapabilities
{
    FrameExposureCapabilities(std::nullptr_t) noexcept {}
};

struct FrameExposureCompensationCapabilities :
    Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities
{
    FrameExposureCompensationCapabilities(std::nullptr_t) noexcept {}
};

struct FrameExposureCompensationControl :
    Windows::Media::Devices::Core::IFrameExposureCompensationControl
{
    FrameExposureCompensationControl(std::nullptr_t) noexcept {}
};

struct FrameExposureControl :
    Windows::Media::Devices::Core::IFrameExposureControl
{
    FrameExposureControl(std::nullptr_t) noexcept {}
};

struct FrameFlashCapabilities :
    Windows::Media::Devices::Core::IFrameFlashCapabilities
{
    FrameFlashCapabilities(std::nullptr_t) noexcept {}
};

struct FrameFlashControl :
    Windows::Media::Devices::Core::IFrameFlashControl
{
    FrameFlashControl(std::nullptr_t) noexcept {}
};

struct FrameFocusCapabilities :
    Windows::Media::Devices::Core::IFrameFocusCapabilities
{
    FrameFocusCapabilities(std::nullptr_t) noexcept {}
};

struct FrameFocusControl :
    Windows::Media::Devices::Core::IFrameFocusControl
{
    FrameFocusControl(std::nullptr_t) noexcept {}
};

struct FrameIsoSpeedCapabilities :
    Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities
{
    FrameIsoSpeedCapabilities(std::nullptr_t) noexcept {}
};

struct FrameIsoSpeedControl :
    Windows::Media::Devices::Core::IFrameIsoSpeedControl
{
    FrameIsoSpeedControl(std::nullptr_t) noexcept {}
};

struct VariablePhotoSequenceController :
    Windows::Media::Devices::Core::IVariablePhotoSequenceController
{
    VariablePhotoSequenceController(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
