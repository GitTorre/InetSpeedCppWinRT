// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.UI.Xaml.Interop.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Interop {

template <typename D>
class WINRT_EBO impl_IBindableIterable
{
    auto shim() const { return impl::shim<D, IBindableIterable>(this); }

public:

    Windows::UI::Xaml::Interop::IBindableIterator First() const;
};

template <typename D>
class WINRT_EBO impl_IBindableIterator
{
    auto shim() const { return impl::shim<D, IBindableIterator>(this); }

public:

    Windows::IInspectable Current() const;
    bool HasCurrent() const;
    bool MoveNext() const;
};

template <typename D>
class WINRT_EBO impl_IBindableObservableVector
{
    auto shim() const { return impl::shim<D, IBindableObservableVector>(this); }

public:

    event_token VectorChanged(const Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler & value) const;
    using VectorChanged_revoker = event_revoker<IBindableObservableVector>;
    VectorChanged_revoker VectorChanged(auto_revoke_t, const Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler & value) const;
    void VectorChanged(event_token token) const;
};

template <typename D>
class WINRT_EBO impl_IBindableVector
{
    auto shim() const { return impl::shim<D, IBindableVector>(this); }

public:

    Windows::IInspectable GetAt(uint32_t index) const;
    uint32_t Size() const;
    Windows::UI::Xaml::Interop::IBindableVectorView GetView() const;
    bool IndexOf(const Windows::IInspectable & value, uint32_t & index) const;
    void SetAt(uint32_t index, const Windows::IInspectable & value) const;
    void InsertAt(uint32_t index, const Windows::IInspectable & value) const;
    void RemoveAt(uint32_t index) const;
    void Append(const Windows::IInspectable & value) const;
    void RemoveAtEnd() const;
    void Clear() const;
};

template <typename D>
class WINRT_EBO impl_IBindableVectorView
{
    auto shim() const { return impl::shim<D, IBindableVectorView>(this); }

public:

    Windows::IInspectable GetAt(uint32_t index) const;
    uint32_t Size() const;
    bool IndexOf(const Windows::IInspectable & value, uint32_t & index) const;
};

template <typename D>
class WINRT_EBO impl_INotifyCollectionChanged
{
    auto shim() const { return impl::shim<D, INotifyCollectionChanged>(this); }

public:

    event_token CollectionChanged(const Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler & value) const;
    using CollectionChanged_revoker = event_revoker<INotifyCollectionChanged>;
    CollectionChanged_revoker CollectionChanged(auto_revoke_t, const Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler & value) const;
    void CollectionChanged(event_token token) const;
};

template <typename D>
class WINRT_EBO impl_INotifyCollectionChangedEventArgs
{
    auto shim() const { return impl::shim<D, INotifyCollectionChangedEventArgs>(this); }

public:

    Windows::UI::Xaml::Interop::NotifyCollectionChangedAction Action() const;
    Windows::UI::Xaml::Interop::IBindableVector NewItems() const;
    Windows::UI::Xaml::Interop::IBindableVector OldItems() const;
    int32_t NewStartingIndex() const;
    int32_t OldStartingIndex() const;
};

template <typename D>
class WINRT_EBO impl_INotifyCollectionChangedEventArgsFactory
{
    auto shim() const { return impl::shim<D, INotifyCollectionChangedEventArgsFactory>(this); }

public:

    Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction action, const Windows::UI::Xaml::Interop::IBindableVector & newItems, const Windows::UI::Xaml::Interop::IBindableVector & oldItems, int32_t newIndex, int32_t oldIndex, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

struct BindableVectorChangedEventHandler : Windows::IUnknown
{
    BindableVectorChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<BindableVectorChangedEventHandler>(m_ptr); }
    template <typename L> BindableVectorChangedEventHandler(L lambda);
    template <typename F> BindableVectorChangedEventHandler (F * function);
    template <typename O, typename M> BindableVectorChangedEventHandler(O * object, M method);
    void operator()(const Windows::UI::Xaml::Interop::IBindableObservableVector & vector, const Windows::IInspectable & e) const;
};

struct NotifyCollectionChangedEventHandler : Windows::IUnknown
{
    NotifyCollectionChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<NotifyCollectionChangedEventHandler>(m_ptr); }
    template <typename L> NotifyCollectionChangedEventHandler(L lambda);
    template <typename F> NotifyCollectionChangedEventHandler (F * function);
    template <typename O, typename M> NotifyCollectionChangedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & e) const;
};

struct IBindableIterable :
    Windows::IInspectable,
    impl::consume<IBindableIterable>
{
    IBindableIterable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindableIterable>(m_ptr); }
};

struct IBindableIterator :
    Windows::IInspectable,
    impl::consume<IBindableIterator>
{
    IBindableIterator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindableIterator>(m_ptr); }
};

struct IBindableObservableVector :
    Windows::IInspectable,
    impl::consume<IBindableObservableVector>,
    impl::require<IBindableObservableVector, Windows::UI::Xaml::Interop::IBindableIterable, Windows::UI::Xaml::Interop::IBindableVector>
{
    IBindableObservableVector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindableObservableVector>(m_ptr); }
};

struct IBindableVector :
    Windows::IInspectable,
    impl::consume<IBindableVector>,
    impl::require<IBindableVector, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindableVector>(m_ptr); }
};

struct IBindableVectorView :
    Windows::IInspectable,
    impl::consume<IBindableVectorView>,
    impl::require<IBindableVectorView, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVectorView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindableVectorView>(m_ptr); }
};

struct INotifyCollectionChanged :
    Windows::IInspectable,
    impl::consume<INotifyCollectionChanged>
{
    INotifyCollectionChanged(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotifyCollectionChanged>(m_ptr); }
};

struct INotifyCollectionChangedEventArgs :
    Windows::IInspectable,
    impl::consume<INotifyCollectionChangedEventArgs>
{
    INotifyCollectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotifyCollectionChangedEventArgs>(m_ptr); }
};

struct INotifyCollectionChangedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<INotifyCollectionChangedEventArgsFactory>
{
    INotifyCollectionChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotifyCollectionChangedEventArgsFactory>(m_ptr); }
};

}

}
