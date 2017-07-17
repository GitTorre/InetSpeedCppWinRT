﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Perception.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.RemoteSystems.1.h"
#include "Windows.Perception.Spatial.1.h"

namespace winrt {

namespace Windows::Perception::Spatial {

struct SpatialBoundingBox
{
    Windows::Foundation::Numerics::float3 Center;
    Windows::Foundation::Numerics::float3 Extents;
};

struct SpatialBoundingFrustum
{
    Windows::Foundation::Numerics::plane Near;
    Windows::Foundation::Numerics::plane Far;
    Windows::Foundation::Numerics::plane Right;
    Windows::Foundation::Numerics::plane Left;
    Windows::Foundation::Numerics::plane Top;
    Windows::Foundation::Numerics::plane Bottom;
};

struct SpatialBoundingOrientedBox
{
    Windows::Foundation::Numerics::float3 Center;
    Windows::Foundation::Numerics::float3 Extents;
    Windows::Foundation::Numerics::quaternion Orientation;
};

struct SpatialBoundingSphere
{
    Windows::Foundation::Numerics::float3 Center;
    float Radius;
};

struct SpatialAnchor :
    Windows::Perception::Spatial::ISpatialAnchor,
    impl::require<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchor2>
{
    SpatialAnchor(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position);
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation);
};

struct SpatialAnchorManager
{
    SpatialAnchorManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> RequestStoreAsync();
};

struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs :
    Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    SpatialAnchorRawCoordinateSystemAdjustedEventArgs(std::nullptr_t) noexcept {}
};

struct SpatialAnchorStore :
    Windows::Perception::Spatial::ISpatialAnchorStore
{
    SpatialAnchorStore(std::nullptr_t) noexcept {}
};

struct [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] SpatialAnchorTransferManager
{
    SpatialAnchorTransferManager() = delete;
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream);
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<bool> TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream);
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> RequestAccessAsync();
};

struct SpatialBoundingVolume :
    Windows::Perception::Spatial::ISpatialBoundingVolume
{
    SpatialBoundingVolume(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialBoundingVolume FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum);
};

struct SpatialCoordinateSystem :
    Windows::Perception::Spatial::ISpatialCoordinateSystem
{
    SpatialCoordinateSystem(std::nullptr_t) noexcept {}
};

struct SpatialEntity :
    Windows::Perception::Spatial::ISpatialEntity
{
    SpatialEntity(std::nullptr_t) noexcept {}
    SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor);
    SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet);
};

struct SpatialEntityAddedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityAddedEventArgs
{
    SpatialEntityAddedEventArgs(std::nullptr_t) noexcept {}
};

struct SpatialEntityRemovedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs
{
    SpatialEntityRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct SpatialEntityStore :
    Windows::Perception::Spatial::ISpatialEntityStore
{
    SpatialEntityStore(std::nullptr_t) noexcept {}
    static bool IsSupported();
    static Windows::Perception::Spatial::SpatialEntityStore TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session);
};

struct SpatialEntityUpdatedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs
{
    SpatialEntityUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct SpatialEntityWatcher :
    Windows::Perception::Spatial::ISpatialEntityWatcher
{
    SpatialEntityWatcher(std::nullptr_t) noexcept {}
};

struct SpatialLocation :
    Windows::Perception::Spatial::ISpatialLocation
{
    SpatialLocation(std::nullptr_t) noexcept {}
};

struct SpatialLocator :
    Windows::Perception::Spatial::ISpatialLocator
{
    SpatialLocator(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialLocator GetDefault();
};

struct SpatialLocatorAttachedFrameOfReference :
    Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference
{
    SpatialLocatorAttachedFrameOfReference(std::nullptr_t) noexcept {}
};

struct SpatialLocatorPositionalTrackingDeactivatingEventArgs :
    Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    SpatialLocatorPositionalTrackingDeactivatingEventArgs(std::nullptr_t) noexcept {}
};

struct SpatialStageFrameOfReference :
    Windows::Perception::Spatial::ISpatialStageFrameOfReference
{
    SpatialStageFrameOfReference(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialStageFrameOfReference Current();
    static event_token CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using CurrentChanged_revoker = factory_event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>;
    static CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void CurrentChanged(event_token const& cookie);
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> RequestNewStageAsync();
};

struct SpatialStationaryFrameOfReference :
    Windows::Perception::Spatial::ISpatialStationaryFrameOfReference
{
    SpatialStationaryFrameOfReference(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
