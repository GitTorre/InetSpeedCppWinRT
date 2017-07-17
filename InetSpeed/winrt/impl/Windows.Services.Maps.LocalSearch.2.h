// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Globalization.1.h"
#include "Windows.Services.Maps.1.h"
#include "Windows.Services.Maps.LocalSearch.1.h"

namespace winrt {

namespace Windows::Services::Maps::LocalSearch {

struct LocalCategories
{
    LocalCategories() = delete;
    static hstring BankAndCreditUnions();
    static hstring EatDrink();
    static hstring Hospitals();
    static hstring HotelsAndMotels();
    static hstring All();
    static hstring Parking();
    static hstring SeeDo();
    static hstring Shop();
};

struct LocalLocation :
    Windows::Services::Maps::LocalSearch::ILocalLocation,
    impl::require<LocalLocation, Windows::Services::Maps::LocalSearch::ILocalLocation2>
{
    LocalLocation(std::nullptr_t) noexcept {}
};

struct LocalLocationFinder
{
    LocalLocationFinder() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults);
};

struct LocalLocationFinderResult :
    Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult
{
    LocalLocationFinderResult(std::nullptr_t) noexcept {}
};

struct LocalLocationHoursOfOperationItem :
    Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem
{
    LocalLocationHoursOfOperationItem(std::nullptr_t) noexcept {}
};

struct LocalLocationRatingInfo :
    Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo
{
    LocalLocationRatingInfo(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
