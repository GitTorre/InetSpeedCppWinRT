// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.0.h"
#include "Windows.ApplicationModel.UserDataTasks.0.h"

namespace winrt {

namespace Windows::ApplicationModel::UserDataTasks {

struct IUserDataTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTask>
{
    IUserDataTask(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskBatch>
{
    IUserDataTaskBatch(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskList>
{
    IUserDataTaskList(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListLimitedWriteOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListLimitedWriteOperations>
{
    IUserDataTaskListLimitedWriteOperations(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManager>
{
    IUserDataTaskListSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskManager>
{
    IUserDataTaskManager(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskManagerStatics>
{
    IUserDataTaskManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskQueryOptions>
{
    IUserDataTaskQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskReader>
{
    IUserDataTaskReader(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskRecurrenceProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskRecurrenceProperties>
{
    IUserDataTaskRecurrenceProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskRegenerationProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskRegenerationProperties>
{
    IUserDataTaskRegenerationProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskStore>
{
    IUserDataTaskStore(std::nullptr_t = nullptr) noexcept {}
};

}

}
