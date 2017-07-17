// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"

namespace winrt {

namespace Windows::Devices::Geolocation {

struct ICivicAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICivicAddress>
{
    ICivicAddress(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoboundingBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBox>,
    impl::require<IGeoboundingBox, Windows::Devices::Geolocation::IGeoshape>
{
    IGeoboundingBox(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoboundingBoxFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBoxFactory>
{
    IGeoboundingBoxFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoboundingBoxStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBoxStatics>
{
    IGeoboundingBoxStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocircle :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocircle>,
    impl::require<IGeocircle, Windows::Devices::Geolocation::IGeoshape>
{
    IGeocircle(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocircleFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocircleFactory>
{
    IGeocircleFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocoordinate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinate>
{
    IGeocoordinate(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocoordinateSatelliteData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateSatelliteData>
{
    IGeocoordinateSatelliteData(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocoordinateWithPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPoint>
{
    IGeocoordinateWithPoint(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocoordinateWithPositionData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPositionData>,
    impl::require<IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinate>
{
    IGeocoordinateWithPositionData(std::nullptr_t = nullptr) noexcept {}
};

struct IGeocoordinateWithPositionSourceTimestamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPositionSourceTimestamp>
{
    IGeocoordinateWithPositionSourceTimestamp(std::nullptr_t = nullptr) noexcept {}
};

struct IGeolocator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocator>
{
    IGeolocator(std::nullptr_t = nullptr) noexcept {}
};

struct IGeolocator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocator2>
{
    IGeolocator2(std::nullptr_t = nullptr) noexcept {}
};

struct IGeolocatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorStatics>
{
    IGeolocatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGeolocatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorStatics2>
{
    IGeolocatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGeolocatorWithScalarAccuracy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorWithScalarAccuracy>,
    impl::require<IGeolocatorWithScalarAccuracy, Windows::Devices::Geolocation::IGeolocator>
{
    IGeolocatorWithScalarAccuracy(std::nullptr_t = nullptr) noexcept {}
};

struct IGeopath :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopath>,
    impl::require<IGeopath, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopath(std::nullptr_t = nullptr) noexcept {}
};

struct IGeopathFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopathFactory>
{
    IGeopathFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeopoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopoint>,
    impl::require<IGeopoint, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopoint(std::nullptr_t = nullptr) noexcept {}
};

struct IGeopointFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopointFactory>
{
    IGeopointFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoposition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoposition>
{
    IGeoposition(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoposition2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoposition2>,
    impl::require<IGeoposition2, Windows::Devices::Geolocation::IGeoposition>
{
    IGeoposition2(std::nullptr_t = nullptr) noexcept {}
};

struct IGeoshape :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoshape>
{
    IGeoshape(std::nullptr_t = nullptr) noexcept {}
};

struct IPositionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPositionChangedEventArgs>
{
    IPositionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStatusChangedEventArgs>
{
    IStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVenueData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVenueData>
{
    IVenueData(std::nullptr_t = nullptr) noexcept {}
};

}

}
