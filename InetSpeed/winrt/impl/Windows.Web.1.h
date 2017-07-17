// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.0.h"

namespace winrt {

namespace Windows::Web {

struct IUriToStreamResolver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriToStreamResolver>
{
    IUriToStreamResolver(std::nullptr_t = nullptr) noexcept {}
};

struct IWebErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebErrorStatics>
{
    IWebErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
