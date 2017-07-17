// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Management.Deployment.0.h"

namespace winrt {

namespace Windows::Management::Deployment {

struct IDeploymentResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeploymentResult>
{
    IDeploymentResult(std::nullptr_t = nullptr) noexcept {}
};

struct IDeploymentResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeploymentResult2>
{
    IDeploymentResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager>
{
    IPackageManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager2>
{
    IPackageManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManager3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager3>
{
    IPackageManager3(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManager4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager4>
{
    IPackageManager4(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManager5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager5>
{
    IPackageManager5(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageManagerDebugSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManagerDebugSettings>
{
    IPackageManagerDebugSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageUserInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUserInformation>
{
    IPackageUserInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageVolume :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageVolume>
{
    IPackageVolume(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageVolume2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageVolume2>
{
    IPackageVolume2(std::nullptr_t = nullptr) noexcept {}
};

}

}
