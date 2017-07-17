// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.ApplicationModel.Preview.InkWorkspace.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Preview::InkWorkspace {

struct InkWorkspaceHostedAppManager :
    Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
{
    InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp();
};

}

namespace impl {

}

}
