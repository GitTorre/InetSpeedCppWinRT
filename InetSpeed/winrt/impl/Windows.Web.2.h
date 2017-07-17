// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.1.h"

namespace winrt {

namespace Windows::Web {

struct WebError
{
    WebError() = delete;
    static Windows::Web::WebErrorStatus GetStatus(int32_t hresult);
};

}

namespace impl {

}

}
