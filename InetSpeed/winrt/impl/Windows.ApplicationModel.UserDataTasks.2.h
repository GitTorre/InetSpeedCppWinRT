// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.1.h"
#include "Windows.ApplicationModel.UserDataTasks.1.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataTasks {

struct UserDataTask :
    Windows::ApplicationModel::UserDataTasks::IUserDataTask
{
    UserDataTask(std::nullptr_t) noexcept {}
    UserDataTask();
};

struct UserDataTaskBatch :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch
{
    UserDataTaskBatch(std::nullptr_t) noexcept {}
};

struct UserDataTaskList :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskList
{
    UserDataTaskList(std::nullptr_t) noexcept {}
};

struct UserDataTaskListLimitedWriteOperations :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations
{
    UserDataTaskListLimitedWriteOperations(std::nullptr_t) noexcept {}
};

struct UserDataTaskListSyncManager :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager
{
    UserDataTaskListSyncManager(std::nullptr_t) noexcept {}
};

struct UserDataTaskManager :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager
{
    UserDataTaskManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetDefault();
    static Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetForUser(Windows::System::User const& user);
};

struct UserDataTaskQueryOptions :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions
{
    UserDataTaskQueryOptions(std::nullptr_t) noexcept {}
    UserDataTaskQueryOptions();
};

struct UserDataTaskReader :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader
{
    UserDataTaskReader(std::nullptr_t) noexcept {}
};

struct UserDataTaskRecurrenceProperties :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties
{
    UserDataTaskRecurrenceProperties(std::nullptr_t) noexcept {}
    UserDataTaskRecurrenceProperties();
};

struct UserDataTaskRegenerationProperties :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties
{
    UserDataTaskRegenerationProperties(std::nullptr_t) noexcept {}
    UserDataTaskRegenerationProperties();
};

struct UserDataTaskStore :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore
{
    UserDataTaskStore(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
