// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.UserDataTasks.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.UserDataTasks.DataProvider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataTasks::DataProvider {

struct UserDataTaskDataProviderConnection :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection
{
    UserDataTaskDataProviderConnection(std::nullptr_t) noexcept {}
};

struct UserDataTaskDataProviderTriggerDetails :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails
{
    UserDataTaskDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct UserDataTaskListCompleteTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest
{
    UserDataTaskListCompleteTaskRequest(std::nullptr_t) noexcept {}
};

struct UserDataTaskListCompleteTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs
{
    UserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct UserDataTaskListCreateOrUpdateTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest
{
    UserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t) noexcept {}
};

struct UserDataTaskListCreateOrUpdateTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    UserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct UserDataTaskListDeleteTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest
{
    UserDataTaskListDeleteTaskRequest(std::nullptr_t) noexcept {}
};

struct UserDataTaskListDeleteTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs
{
    UserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct UserDataTaskListSkipOccurrenceRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest
{
    UserDataTaskListSkipOccurrenceRequest(std::nullptr_t) noexcept {}
};

struct UserDataTaskListSkipOccurrenceRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs
{
    UserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t) noexcept {}
};

struct UserDataTaskListSyncManagerSyncRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest
{
    UserDataTaskListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct UserDataTaskListSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs
{
    UserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
