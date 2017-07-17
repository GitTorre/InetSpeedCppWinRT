// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Management.Deployment.0.h"
#include "Windows.Phone.Management.Deployment.0.h"

namespace winrt {

namespace Windows::Phone::Management::Deployment {

struct IEnterprise :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterprise>
{
    IEnterprise(std::nullptr_t = nullptr) noexcept {}
};

struct IEnterpriseEnrollmentManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseEnrollmentManager>
{
    IEnterpriseEnrollmentManager(std::nullptr_t = nullptr) noexcept {}
};

struct IEnterpriseEnrollmentResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseEnrollmentResult>
{
    IEnterpriseEnrollmentResult(std::nullptr_t = nullptr) noexcept {}
};

struct IInstallationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstallationManagerStatics>
{
    IInstallationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInstallationManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstallationManagerStatics2>
{
    IInstallationManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageInstallResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallResult>
{
    IPackageInstallResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageInstallResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallResult2>
{
    IPackageInstallResult2(std::nullptr_t = nullptr) noexcept {}
};

}

}
