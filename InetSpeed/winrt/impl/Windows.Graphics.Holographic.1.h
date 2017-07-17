// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Perception.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.Graphics.Holographic.0.h"

namespace winrt {

namespace Windows::Graphics::Holographic {

struct IHolographicCamera :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCamera>
{
    IHolographicCamera(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicCamera2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCamera2>,
    impl::require<IHolographicCamera2, Windows::Graphics::Holographic::IHolographicCamera>
{
    IHolographicCamera2(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicCameraPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraPose>
{
    IHolographicCameraPose(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicCameraRenderingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraRenderingParameters>
{
    IHolographicCameraRenderingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicCameraRenderingParameters2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraRenderingParameters2>,
    impl::require<IHolographicCameraRenderingParameters2, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
{
    IHolographicCameraRenderingParameters2(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicCameraViewportParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraViewportParameters>
{
    IHolographicCameraViewportParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicDisplay>
{
    IHolographicDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicDisplayStatics>
{
    IHolographicDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicFrame>
{
    IHolographicFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicFramePrediction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicFramePrediction>
{
    IHolographicFramePrediction(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicSpace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpace>
{
    IHolographicSpace(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicSpaceCameraAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceCameraAddedEventArgs>
{
    IHolographicSpaceCameraAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicSpaceCameraRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceCameraRemovedEventArgs>
{
    IHolographicSpaceCameraRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicSpaceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceStatics>
{
    IHolographicSpaceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHolographicSpaceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceStatics2>
{
    IHolographicSpaceStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
