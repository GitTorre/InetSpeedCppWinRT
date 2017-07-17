// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Services.Maps.0.h"
#include "Windows.Services.Maps.LocalSearch.0.h"

namespace winrt {

namespace Windows::Services::Maps::LocalSearch {

struct ILocalCategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalCategoriesStatics>
{
    ILocalCategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocation>
{
    ILocalLocation(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocation2>
{
    ILocalLocation2(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocationFinderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationFinderResult>
{
    ILocalLocationFinderResult(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocationFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationFinderStatics>
{
    ILocalLocationFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocationHoursOfOperationItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationHoursOfOperationItem>
{
    ILocalLocationHoursOfOperationItem(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalLocationRatingInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationRatingInfo>
{
    ILocalLocationRatingInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
