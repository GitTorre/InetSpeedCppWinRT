// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.ExtendedExecution.0.h"

namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution {

struct IExtendedExecutionRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionRevokedEventArgs>
{
    IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IExtendedExecutionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionSession>,
    impl::require<IExtendedExecutionSession, Windows::Foundation::IClosable>
{
    IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
};

}

}
