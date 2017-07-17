// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.Contacts.DataProvider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Contacts::DataProvider {

struct IContactDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDataProviderConnection>
{
    IContactDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IContactDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDataProviderTriggerDetails>
{
    IContactDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListServerSearchReadBatchRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListServerSearchReadBatchRequest>
{
    IContactListServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListServerSearchReadBatchRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListServerSearchReadBatchRequestEventArgs>
{
    IContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManagerSyncRequest>
{
    IContactListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManagerSyncRequestEventArgs>
{
    IContactListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
