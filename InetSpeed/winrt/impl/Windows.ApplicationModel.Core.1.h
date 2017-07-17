// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.ApplicationModel.Activation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.ApplicationModel.Core.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Core {

struct IAppListEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppListEntry>
{
    IAppListEntry(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplication>
{
    ICoreApplication(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplication2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplication2>
{
    ICoreApplication2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationExit :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationExit>
{
    ICoreApplicationExit(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationUnhandledError :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationUnhandledError>
{
    ICoreApplicationUnhandledError(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationUseCount :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationUseCount>
{
    ICoreApplicationUseCount(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationView :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView>
{
    ICoreApplicationView(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView2>
{
    ICoreApplicationView2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView3>
{
    ICoreApplicationView3(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationView5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView5>
{
    ICoreApplicationView5(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreApplicationViewTitleBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationViewTitleBar>
{
    ICoreApplicationViewTitleBar(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreImmersiveApplication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication>
{
    ICoreImmersiveApplication(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreImmersiveApplication2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication2>
{
    ICoreImmersiveApplication2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreImmersiveApplication3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication3>
{
    ICoreImmersiveApplication3(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameworkView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkView>
{
    IFrameworkView(std::nullptr_t = nullptr) noexcept {}
};

struct IFrameworkViewSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkViewSource>
{
    IFrameworkViewSource(std::nullptr_t = nullptr) noexcept {}
};

struct IHostedViewClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostedViewClosingEventArgs>
{
    IHostedViewClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUnhandledError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnhandledError>
{
    IUnhandledError(std::nullptr_t = nullptr) noexcept {}
};

struct IUnhandledErrorDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnhandledErrorDetectedEventArgs>
{
    IUnhandledErrorDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
