// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Threading.0.h"
#include "Windows.System.Threading.Core.0.h"

namespace winrt {

namespace Windows::System::Threading::Core {

struct IPreallocatedWorkItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPreallocatedWorkItem>
{
    IPreallocatedWorkItem(std::nullptr_t = nullptr) noexcept {}
};

struct IPreallocatedWorkItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPreallocatedWorkItemFactory>
{
    IPreallocatedWorkItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISignalNotifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignalNotifier>
{
    ISignalNotifier(std::nullptr_t = nullptr) noexcept {}
};

struct ISignalNotifierStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignalNotifierStatics>
{
    ISignalNotifierStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
