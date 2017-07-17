// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Threading.0.h"

namespace winrt {

namespace Windows::System::Threading {

struct IThreadPoolStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolStatics>
{
    IThreadPoolStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IThreadPoolTimer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolTimer>
{
    IThreadPoolTimer(std::nullptr_t = nullptr) noexcept {}
};

struct IThreadPoolTimerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolTimerStatics>
{
    IThreadPoolTimerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
