// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.UserDataTasks.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.UserDataTasks.DataProvider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataTasks::DataProvider {

struct IUserDataTaskDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskDataProviderConnection>
{
    IUserDataTaskDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskDataProviderTriggerDetails>
{
    IUserDataTaskDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCompleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCompleteTaskRequest>
{
    IUserDataTaskListCompleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCompleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCompleteTaskRequestEventArgs>
{
    IUserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCreateOrUpdateTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequest>
{
    IUserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCreateOrUpdateTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    IUserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListDeleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListDeleteTaskRequest>
{
    IUserDataTaskListDeleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListDeleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListDeleteTaskRequestEventArgs>
{
    IUserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSkipOccurrenceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSkipOccurrenceRequest>
{
    IUserDataTaskListSkipOccurrenceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSkipOccurrenceRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    IUserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManagerSyncRequest>
{
    IUserDataTaskListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    IUserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
