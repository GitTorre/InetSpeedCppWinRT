// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.ApplicationModel.UserDataAccounts.SystemAccess.0.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct IDeviceAccountConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccountConfiguration>
{
    IDeviceAccountConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceAccountConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccountConfiguration2>
{
    IDeviceAccountConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountSystemAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountSystemAccessManagerStatics>
{
    IUserDataAccountSystemAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountSystemAccessManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountSystemAccessManagerStatics2>
{
    IUserDataAccountSystemAccessManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
