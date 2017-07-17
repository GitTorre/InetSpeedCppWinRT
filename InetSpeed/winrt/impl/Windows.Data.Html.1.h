// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Html.0.h"

namespace winrt {

namespace Windows::Data::Html {

struct IHtmlUtilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlUtilities>
{
    IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
};

}

}
