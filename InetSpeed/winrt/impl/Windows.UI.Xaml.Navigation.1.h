// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Interop.0.h"
#include "Windows.UI.Xaml.Media.Animation.0.h"
#include "Windows.UI.Xaml.Navigation.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Navigation {

struct INavigatingCancelEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigatingCancelEventArgs>
{
    INavigatingCancelEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INavigatingCancelEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigatingCancelEventArgs2>
{
    INavigatingCancelEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct INavigationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationEventArgs>
{
    INavigationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INavigationEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationEventArgs2>
{
    INavigationEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct INavigationFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationFailedEventArgs>
{
    INavigationFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPageStackEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntry>
{
    IPageStackEntry(std::nullptr_t = nullptr) noexcept {}
};

struct IPageStackEntryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntryFactory>
{
    IPageStackEntryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPageStackEntryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntryStatics>
{
    IPageStackEntryStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
