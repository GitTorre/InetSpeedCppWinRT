// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.UI.Core.Preview.1.h"

namespace winrt {

namespace Windows::UI::Core::Preview {

struct SystemNavigationCloseRequestedPreviewEventArgs :
    Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs
{
    SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct SystemNavigationManagerPreview :
    Windows::UI::Core::Preview::ISystemNavigationManagerPreview
{
    SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
    static Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView();
};

}

namespace impl {

}

}
