// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.ApplicationModel.Email.0.h"
#include "Windows.ApplicationModel.UserDataTasks.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.ApplicationModel.UserDataAccounts.0.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts {

struct IUserDataAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount>
{
    IUserDataAccount(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccount2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount2>,
    impl::require<IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
{
    IUserDataAccount2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccount3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount3>
{
    IUserDataAccount3(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccount4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount4>
{
    IUserDataAccount4(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerForUser>
{
    IUserDataAccountManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerStatics>
{
    IUserDataAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerStatics2>
{
    IUserDataAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore>
{
    IUserDataAccountStore(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore2>,
    impl::require<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    IUserDataAccountStore2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::CreateAccountAsync;
};

struct IUserDataAccountStore3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore3>,
    impl::require<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    IUserDataAccountStore3(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>::CreateAccountAsync;
};

struct IUserDataAccountStoreChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStoreChangedEventArgs>
{
    IUserDataAccountStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
