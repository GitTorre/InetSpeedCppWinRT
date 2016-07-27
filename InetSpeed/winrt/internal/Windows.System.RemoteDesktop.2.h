// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.RemoteDesktop.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::RemoteDesktop {

template <typename D>
class WINRT_EBO impl_IInteractiveSessionStatics
{
    auto shim() const { return impl::shim<D, IInteractiveSessionStatics>(this); }

public:

    bool IsRemote() const;
};

struct IInteractiveSessionStatics :
    Windows::IInspectable,
    impl::consume<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractiveSessionStatics>(m_ptr); }
};

}

}
