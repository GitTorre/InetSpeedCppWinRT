// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Html.1.h"

namespace winrt {

namespace Windows::Data::Html {

struct HtmlUtilities
{
    HtmlUtilities() = delete;
    static hstring ConvertToText(param::hstring const& html);
};

}

namespace impl {

}

}
