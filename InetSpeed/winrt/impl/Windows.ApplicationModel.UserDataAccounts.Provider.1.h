// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.UserDataAccounts.0.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts::Provider {

struct IUserDataAccountPartnerAccountInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountPartnerAccountInfo>
{
    IUserDataAccountPartnerAccountInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountProviderAddAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderAddAccountOperation>,
    impl::require<IUserDataAccountProviderAddAccountOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountProviderResolveErrorsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderResolveErrorsOperation>,
    impl::require<IUserDataAccountProviderResolveErrorsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderResolveErrorsOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountProviderSettingsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderSettingsOperation>,
    impl::require<IUserDataAccountProviderSettingsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderSettingsOperation(std::nullptr_t = nullptr) noexcept {}
};

}

}
