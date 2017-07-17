// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Storage.FileProperties.1.h"

namespace winrt {

namespace Windows::Storage::FileProperties {

struct BasicProperties :
    Windows::Storage::FileProperties::IBasicProperties,
    impl::require<BasicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    BasicProperties(std::nullptr_t) noexcept {}
};

struct DocumentProperties :
    Windows::Storage::FileProperties::IDocumentProperties
{
    DocumentProperties(std::nullptr_t) noexcept {}
};

struct GeotagHelper
{
    GeotagHelper() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> GetGeotagAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncAction SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator);
    static Windows::Foundation::IAsyncAction SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint);
};

struct ImageProperties :
    Windows::Storage::FileProperties::IImageProperties
{
    ImageProperties(std::nullptr_t) noexcept {}
};

struct MusicProperties :
    Windows::Storage::FileProperties::IMusicProperties
{
    MusicProperties(std::nullptr_t) noexcept {}
};

struct StorageItemContentProperties :
    Windows::Storage::FileProperties::IStorageItemContentProperties
{
    StorageItemContentProperties(std::nullptr_t) noexcept {}
};

struct StorageItemThumbnail :
    Windows::Storage::Streams::IRandomAccessStreamWithContentType,
    impl::require<StorageItemThumbnail, Windows::Storage::FileProperties::IThumbnailProperties>
{
    StorageItemThumbnail(std::nullptr_t) noexcept {}
};

struct VideoProperties :
    Windows::Storage::FileProperties::IVideoProperties
{
    VideoProperties(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
