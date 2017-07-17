// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Services.Maps.OfflineMaps.1.h"

namespace winrt {

namespace Windows::Services::Maps::OfflineMaps {

struct OfflineMapPackage :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackage
{
    OfflineMapPackage(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle);
};

struct OfflineMapPackageQueryResult :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult
{
    OfflineMapPackageQueryResult(std::nullptr_t) noexcept {}
};

struct OfflineMapPackageStartDownloadResult :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult
{
    OfflineMapPackageStartDownloadResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
