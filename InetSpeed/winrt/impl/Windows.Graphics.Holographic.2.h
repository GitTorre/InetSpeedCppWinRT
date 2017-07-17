// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Perception.1.h"
#include "Windows.Perception.Spatial.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.Graphics.Holographic.1.h"

namespace winrt {

namespace Windows::Graphics::Holographic {

struct HolographicAdapterId
{
    uint32_t LowPart;
    int32_t HighPart;
};

struct HolographicStereoTransform
{
    Windows::Foundation::Numerics::float4x4 Left;
    Windows::Foundation::Numerics::float4x4 Right;
};

struct HolographicCamera :
    Windows::Graphics::Holographic::IHolographicCamera,
    impl::require<HolographicCamera, Windows::Graphics::Holographic::IHolographicCamera2>
{
    HolographicCamera(std::nullptr_t) noexcept {}
};

struct HolographicCameraPose :
    Windows::Graphics::Holographic::IHolographicCameraPose
{
    HolographicCameraPose(std::nullptr_t) noexcept {}
};

struct HolographicCameraRenderingParameters :
    Windows::Graphics::Holographic::IHolographicCameraRenderingParameters,
    impl::require<HolographicCameraRenderingParameters, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
{
    HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
};

struct HolographicCameraViewportParameters :
    Windows::Graphics::Holographic::IHolographicCameraViewportParameters
{
    HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
};

struct HolographicDisplay :
    Windows::Graphics::Holographic::IHolographicDisplay
{
    HolographicDisplay(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicDisplay GetDefault();
};

struct HolographicFrame :
    Windows::Graphics::Holographic::IHolographicFrame
{
    HolographicFrame(std::nullptr_t) noexcept {}
};

struct HolographicFramePrediction :
    Windows::Graphics::Holographic::IHolographicFramePrediction
{
    HolographicFramePrediction(std::nullptr_t) noexcept {}
};

struct HolographicSpace :
    Windows::Graphics::Holographic::IHolographicSpace
{
    HolographicSpace(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicSpace CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window);
    static bool IsSupported();
    static bool IsAvailable();
    static event_token IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using IsAvailableChanged_revoker = factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2>;
    static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void IsAvailableChanged(event_token const& token);
};

struct HolographicSpaceCameraAddedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs
{
    HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
};

struct HolographicSpaceCameraRemovedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs
{
    HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
