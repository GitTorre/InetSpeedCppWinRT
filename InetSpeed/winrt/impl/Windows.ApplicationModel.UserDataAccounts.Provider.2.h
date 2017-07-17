// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.UserDataAccounts.1.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts::Provider {

struct UserDataAccountPartnerAccountInfo :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo
{
    UserDataAccountPartnerAccountInfo(std::nullptr_t) noexcept {}
};

struct UserDataAccountProviderAddAccountOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation
{
    UserDataAccountProviderAddAccountOperation(std::nullptr_t) noexcept {}
};

struct UserDataAccountProviderResolveErrorsOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation
{
    UserDataAccountProviderResolveErrorsOperation(std::nullptr_t) noexcept {}
};

struct UserDataAccountProviderSettingsOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation
{
    UserDataAccountProviderSettingsOperation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
