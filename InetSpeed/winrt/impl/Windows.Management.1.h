// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.0.h"

namespace winrt {

namespace Windows::Management {

struct IMdmAlert :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmAlert>
{
    IMdmAlert(std::nullptr_t = nullptr) noexcept {}
};

struct IMdmSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmSession>
{
    IMdmSession(std::nullptr_t = nullptr) noexcept {}
};

struct IMdmSessionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmSessionManagerStatics>
{
    IMdmSessionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
