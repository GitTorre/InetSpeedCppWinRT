// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Threading.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Threading::Core {

template <typename D>
class WINRT_EBO impl_IPreallocatedWorkItem
{
    auto shim() const { return impl::shim<D, IPreallocatedWorkItem>(this); }

public:

    Windows::Foundation::IAsyncAction RunAsync() const;
};

template <typename D>
class WINRT_EBO impl_IPreallocatedWorkItemFactory
{
    auto shim() const { return impl::shim<D, IPreallocatedWorkItemFactory>(this); }

public:

    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItem(const Windows::System::Threading::WorkItemHandler & handler) const;
    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriority(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority) const;
    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriorityAndOptions(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options) const;
};

template <typename D>
class WINRT_EBO impl_ISignalNotifier
{
    auto shim() const { return impl::shim<D, ISignalNotifier>(this); }

public:

    void Enable() const;
    void Terminate() const;
};

template <typename D>
class WINRT_EBO impl_ISignalNotifierStatics
{
    auto shim() const { return impl::shim<D, ISignalNotifierStatics>(this); }

public:

    Windows::System::Threading::Core::SignalNotifier AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler) const;
    Windows::System::Threading::Core::SignalNotifier AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout) const;
    Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler) const;
    Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout) const;
};

struct SignalHandler : Windows::IUnknown
{
    SignalHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<SignalHandler>(m_ptr); }
    template <typename L> SignalHandler(L lambda);
    template <typename F> SignalHandler (F * function);
    template <typename O, typename M> SignalHandler(O * object, M method);
    void operator()(const Windows::System::Threading::Core::SignalNotifier & signalNotifier, bool timedOut) const;
};

struct IPreallocatedWorkItem :
    Windows::IInspectable,
    impl::consume<IPreallocatedWorkItem>
{
    IPreallocatedWorkItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPreallocatedWorkItem>(m_ptr); }
};

struct IPreallocatedWorkItemFactory :
    Windows::IInspectable,
    impl::consume<IPreallocatedWorkItemFactory>
{
    IPreallocatedWorkItemFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPreallocatedWorkItemFactory>(m_ptr); }
};

struct ISignalNotifier :
    Windows::IInspectable,
    impl::consume<ISignalNotifier>
{
    ISignalNotifier(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISignalNotifier>(m_ptr); }
};

struct ISignalNotifierStatics :
    Windows::IInspectable,
    impl::consume<ISignalNotifierStatics>
{
    ISignalNotifierStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISignalNotifierStatics>(m_ptr); }
};

}

}
