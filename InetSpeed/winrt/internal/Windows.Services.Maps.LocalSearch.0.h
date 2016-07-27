// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Maps::LocalSearch {

struct ILocalCategoriesStatics;
struct ILocalLocation;
struct ILocalLocation2;
struct ILocalLocationFinderResult;
struct ILocalLocationFinderStatics;
struct ILocalLocationHoursOfOperationItem;
struct ILocalLocationRatingInfo;
struct LocalLocation;
struct LocalLocationFinderResult;
struct LocalLocationHoursOfOperationItem;
struct LocalLocationRatingInfo;

}

namespace Windows::Services::Maps::LocalSearch {

struct ILocalCategoriesStatics;
struct ILocalLocation;
struct ILocalLocation2;
struct ILocalLocationFinderResult;
struct ILocalLocationFinderStatics;
struct ILocalLocationHoursOfOperationItem;
struct ILocalLocationRatingInfo;
struct LocalCategories;
struct LocalLocation;
struct LocalLocationFinder;
struct LocalLocationFinderResult;
struct LocalLocationHoursOfOperationItem;
struct LocalLocationRatingInfo;

}

namespace Windows::Services::Maps::LocalSearch {

enum class LocalLocationFinderStatus
{
    Success = 0,
    UnknownError = 1,
    InvalidCredentials = 2,
    InvalidCategory = 3,
    InvalidSearchTerm = 4,
    InvalidSearchArea = 5,
    NetworkFailure = 6,
    NotSupported = 7,
};

}

}