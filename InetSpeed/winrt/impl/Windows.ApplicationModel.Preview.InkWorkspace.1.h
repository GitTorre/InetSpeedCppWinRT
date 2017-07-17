// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.ApplicationModel.Preview.InkWorkspace.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Preview::InkWorkspace {

struct IInkWorkspaceHostedAppManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkWorkspaceHostedAppManager>
{
    IInkWorkspaceHostedAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct IInkWorkspaceHostedAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkWorkspaceHostedAppManagerStatics>
{
    IInkWorkspaceHostedAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
