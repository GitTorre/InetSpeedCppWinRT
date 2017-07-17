// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.ExtendedExecution.Foreground.0.h"

namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution::Foreground {

struct IExtendedExecutionForegroundRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionForegroundRevokedEventArgs>
{
    IExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IExtendedExecutionForegroundSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionForegroundSession>,
    impl::require<IExtendedExecutionForegroundSession, Windows::Foundation::IClosable>
{
    IExtendedExecutionForegroundSession(std::nullptr_t = nullptr) noexcept {}
};

}

}
