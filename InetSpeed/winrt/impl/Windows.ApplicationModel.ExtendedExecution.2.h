// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.ExtendedExecution.1.h"

namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution {

struct ExtendedExecutionRevokedEventArgs :
    Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs
{
    ExtendedExecutionRevokedEventArgs(std::nullptr_t) noexcept {}
};

struct ExtendedExecutionSession :
    Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession
{
    ExtendedExecutionSession(std::nullptr_t) noexcept {}
    ExtendedExecutionSession();
};

}

namespace impl {

}

}
