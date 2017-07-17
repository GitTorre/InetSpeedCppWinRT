// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.DirectX.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Perception.Spatial.Surfaces.0.h"

namespace winrt {

namespace Windows::Perception::Spatial::Surfaces {

struct ISpatialSurfaceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceInfo>
{
    ISpatialSurfaceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceMesh :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMesh>
{
    ISpatialSurfaceMesh(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceMeshBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshBuffer>
{
    ISpatialSurfaceMeshBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceMeshOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshOptions>
{
    ISpatialSurfaceMeshOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceMeshOptionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshOptionsStatics>
{
    ISpatialSurfaceMeshOptionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceObserver :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserver>
{
    ISpatialSurfaceObserver(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceObserverStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserverStatics>
{
    ISpatialSurfaceObserverStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialSurfaceObserverStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserverStatics2>,
    impl::require<ISpatialSurfaceObserverStatics2, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
{
    ISpatialSurfaceObserverStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
