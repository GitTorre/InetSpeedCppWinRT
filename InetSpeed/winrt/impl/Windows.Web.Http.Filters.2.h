// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.Web.Http.Filters.1.h"

namespace winrt {

namespace Windows::Web::Http::Filters {

struct HttpBaseProtocolFilter :
    Windows::Web::Http::Filters::IHttpBaseProtocolFilter,
    impl::require<HttpBaseProtocolFilter, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
{
    HttpBaseProtocolFilter(std::nullptr_t) noexcept {}
    HttpBaseProtocolFilter();
};

struct HttpCacheControl :
    Windows::Web::Http::Filters::IHttpCacheControl
{
    HttpCacheControl(std::nullptr_t) noexcept {}
};

struct HttpServerCustomValidationRequestedEventArgs :
    Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs
{
    HttpServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
