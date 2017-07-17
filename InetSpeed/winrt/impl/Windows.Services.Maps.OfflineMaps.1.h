// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Services.Maps.OfflineMaps.0.h"

namespace winrt {

namespace Windows::Services::Maps::OfflineMaps {

struct IOfflineMapPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackage>
{
    IOfflineMapPackage(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageQueryResult>
{
    IOfflineMapPackageQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageStartDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStartDownloadResult>
{
    IOfflineMapPackageStartDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStatics>
{
    IOfflineMapPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
