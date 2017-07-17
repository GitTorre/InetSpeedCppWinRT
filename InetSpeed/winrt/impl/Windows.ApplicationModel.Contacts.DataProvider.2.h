// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.Contacts.DataProvider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Contacts::DataProvider {

struct ContactDataProviderConnection :
    Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection
{
    ContactDataProviderConnection(std::nullptr_t) noexcept {}
};

struct ContactDataProviderTriggerDetails :
    Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails
{
    ContactDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct ContactListServerSearchReadBatchRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest
{
    ContactListServerSearchReadBatchRequest(std::nullptr_t) noexcept {}
};

struct ContactListServerSearchReadBatchRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs
{
    ContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t) noexcept {}
};

struct ContactListSyncManagerSyncRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest
{
    ContactListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct ContactListSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs
{
    ContactListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
