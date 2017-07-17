// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.UI.Core.Preview.0.h"

namespace winrt {

namespace Windows::UI::Core::Preview {

struct ISystemNavigationCloseRequestedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationCloseRequestedPreviewEventArgs>
{
    ISystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManagerPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManagerPreview>
{
    ISystemNavigationManagerPreview(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManagerPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManagerPreviewStatics>
{
    ISystemNavigationManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
