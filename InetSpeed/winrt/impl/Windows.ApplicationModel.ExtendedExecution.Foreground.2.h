// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.ExtendedExecution.Foreground.1.h"

namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution::Foreground {

struct ExtendedExecutionForegroundRevokedEventArgs :
    Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs
{
    ExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t) noexcept {}
};

struct ExtendedExecutionForegroundSession :
    Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession
{
    ExtendedExecutionForegroundSession(std::nullptr_t) noexcept {}
    ExtendedExecutionForegroundSession();
};

}

namespace impl {

}

}
