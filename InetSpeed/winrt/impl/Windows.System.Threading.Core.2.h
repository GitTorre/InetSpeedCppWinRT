// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Threading.1.h"
#include "Windows.System.Threading.Core.1.h"

namespace winrt {

namespace Windows::System::Threading::Core {

struct SignalHandler : Windows::Foundation::IUnknown
{
    SignalHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SignalHandler(L lambda);
    template <typename F> SignalHandler(F* function);
    template <typename O, typename M> SignalHandler(O* object, M method);
    void operator()(Windows::System::Threading::Core::SignalNotifier const& signalNotifier, bool timedOut) const;
};

struct PreallocatedWorkItem :
    Windows::System::Threading::Core::IPreallocatedWorkItem
{
    PreallocatedWorkItem(std::nullptr_t) noexcept {}
    PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler);
    PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority);
    PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options);
};

struct SignalNotifier :
    Windows::System::Threading::Core::ISignalNotifier
{
    SignalNotifier(std::nullptr_t) noexcept {}
    static Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler);
    static Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout);
    static Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler);
    static Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout);
};

}

namespace impl {

}

}
