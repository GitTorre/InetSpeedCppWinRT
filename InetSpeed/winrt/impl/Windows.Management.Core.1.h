// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Management.Core.0.h"

namespace winrt {

namespace Windows::Management::Core {

struct IApplicationDataManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataManager>
{
    IApplicationDataManager(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationDataManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataManagerStatics>
{
    IApplicationDataManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
