// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Store.LicenseManagement.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Store::LicenseManagement {

struct ILicenseManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseManagerStatics>
{
    ILicenseManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILicenseManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseManagerStatics2>
{
    ILicenseManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ILicenseSatisfactionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseSatisfactionInfo>
{
    ILicenseSatisfactionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ILicenseSatisfactionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseSatisfactionResult>
{
    ILicenseSatisfactionResult(std::nullptr_t = nullptr) noexcept {}
};

}

}
