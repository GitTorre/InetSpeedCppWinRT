// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.RemoteDesktop.0.h"

namespace winrt {

namespace Windows::System::RemoteDesktop {

struct IInteractiveSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
