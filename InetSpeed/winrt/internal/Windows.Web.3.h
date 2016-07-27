// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Web.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Web {

struct WebError
{
    WebError() = delete;
    static Windows::Web::WebErrorStatus GetStatus(int32_t hresult);
};

}

}
