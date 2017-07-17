// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.ApplicationModel.UserDataAccounts.SystemAccess.1.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct DeviceAccountConfiguration :
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration,
    impl::require<DeviceAccountConfiguration, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
{
    DeviceAccountConfiguration(std::nullptr_t) noexcept {}
    DeviceAccountConfiguration();
};

struct UserDataAccountSystemAccessManager
{
    UserDataAccountSystemAccessManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts);
    static Windows::Foundation::IAsyncAction SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId);
    static Windows::Foundation::IAsyncOperation<hstring> CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account);
    static Windows::Foundation::IAsyncAction DeleteDeviceAccountAsync(param::hstring const& accountId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> GetDeviceAccountConfigurationAsync(param::hstring const& accountId);
};

}

namespace impl {

}

}
