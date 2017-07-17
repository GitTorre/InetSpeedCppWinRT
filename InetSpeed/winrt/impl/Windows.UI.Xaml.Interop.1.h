// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.Interop.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Interop {

struct IBindableIterable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableIterable>
{
    IBindableIterable(std::nullptr_t = nullptr) noexcept {}
};

struct IBindableIterator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableIterator>
{
    IBindableIterator(std::nullptr_t = nullptr) noexcept {}
};

struct IBindableObservableVector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableObservableVector>,
    impl::require<IBindableObservableVector, Windows::UI::Xaml::Interop::IBindableIterable, Windows::UI::Xaml::Interop::IBindableVector>
{
    IBindableObservableVector(std::nullptr_t = nullptr) noexcept {}
};

struct IBindableVector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableVector>,
    impl::require<IBindableVector, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVector(std::nullptr_t = nullptr) noexcept {}
};

struct IBindableVectorView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableVectorView>,
    impl::require<IBindableVectorView, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVectorView(std::nullptr_t = nullptr) noexcept {}
};

struct INotifyCollectionChanged :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChanged>
{
    INotifyCollectionChanged(std::nullptr_t = nullptr) noexcept {}
};

struct INotifyCollectionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChangedEventArgs>
{
    INotifyCollectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INotifyCollectionChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChangedEventArgsFactory>
{
    INotifyCollectionChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
