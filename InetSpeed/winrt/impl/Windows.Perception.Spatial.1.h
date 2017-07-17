// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Perception.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.Perception.Spatial.0.h"

namespace winrt {

namespace Windows::Perception::Spatial {

struct ISpatialAnchor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchor>
{
    ISpatialAnchor(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialAnchor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchor2>
{
    ISpatialAnchor2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialAnchorManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchorManagerStatics>
{
    ISpatialAnchorManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialAnchorRawCoordinateSystemAdjustedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
{
    ISpatialAnchorRawCoordinateSystemAdjustedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialAnchorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchorStatics>
{
    ISpatialAnchorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialAnchorStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchorStore>
{
    ISpatialAnchorStore(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] ISpatialAnchorTransferManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialAnchorTransferManagerStatics>
{
    ISpatialAnchorTransferManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialBoundingVolume :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialBoundingVolume>
{
    ISpatialBoundingVolume(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialBoundingVolumeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialBoundingVolumeStatics>
{
    ISpatialBoundingVolumeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialCoordinateSystem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialCoordinateSystem>
{
    ISpatialCoordinateSystem(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntity :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntity>
{
    ISpatialEntity(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityAddedEventArgs>
{
    ISpatialEntityAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityFactory>
{
    ISpatialEntityFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityRemovedEventArgs>
{
    ISpatialEntityRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityStore>
{
    ISpatialEntityStore(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityStoreStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityStoreStatics>
{
    ISpatialEntityStoreStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityUpdatedEventArgs>
{
    ISpatialEntityUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialEntityWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialEntityWatcher>
{
    ISpatialEntityWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialLocation>
{
    ISpatialLocation(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialLocator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialLocator>
{
    ISpatialLocator(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialLocatorAttachedFrameOfReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialLocatorAttachedFrameOfReference>
{
    ISpatialLocatorAttachedFrameOfReference(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
{
    ISpatialLocatorPositionalTrackingDeactivatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialLocatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialLocatorStatics>
{
    ISpatialLocatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialStageFrameOfReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialStageFrameOfReference>
{
    ISpatialStageFrameOfReference(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialStageFrameOfReferenceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialStageFrameOfReferenceStatics>
{
    ISpatialStageFrameOfReferenceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpatialStationaryFrameOfReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialStationaryFrameOfReference>
{
    ISpatialStationaryFrameOfReference(std::nullptr_t = nullptr) noexcept {}
};

}

}
