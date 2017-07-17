// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.DirectX.1.h"
#include "Windows.Perception.Spatial.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Perception.Spatial.Surfaces.1.h"

namespace winrt {

namespace Windows::Perception::Spatial::Surfaces {

struct SpatialSurfaceInfo :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo
{
    SpatialSurfaceInfo(std::nullptr_t) noexcept {}
};

struct SpatialSurfaceMesh :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh
{
    SpatialSurfaceMesh(std::nullptr_t) noexcept {}
};

struct SpatialSurfaceMeshBuffer :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer
{
    SpatialSurfaceMeshBuffer(std::nullptr_t) noexcept {}
};

struct SpatialSurfaceMeshOptions :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions
{
    SpatialSurfaceMeshOptions(std::nullptr_t) noexcept {}
    SpatialSurfaceMeshOptions();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedVertexPositionFormats();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedTriangleIndexFormats();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedVertexNormalFormats();
};

struct SpatialSurfaceObserver :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver
{
    SpatialSurfaceObserver(std::nullptr_t) noexcept {}
    SpatialSurfaceObserver();
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> RequestAccessAsync();
    static bool IsSupported();
};

}

namespace impl {

}

}
