// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Web.Http.Filters.0.h"

namespace winrt {

namespace Windows::Web::Http::Filters {

struct IHttpBaseProtocolFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter>,
    impl::require<IHttpBaseProtocolFilter, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpBaseProtocolFilter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter2>,
    impl::require<IHttpBaseProtocolFilter2, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter2(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpBaseProtocolFilter3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter3>,
    impl::require<IHttpBaseProtocolFilter3, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter3(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpBaseProtocolFilter4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter4>,
    impl::require<IHttpBaseProtocolFilter4, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter4(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCacheControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCacheControl>
{
    IHttpCacheControl(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpFilter>,
    impl::require<IHttpFilter, Windows::Foundation::IClosable>
{
    IHttpFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpServerCustomValidationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpServerCustomValidationRequestedEventArgs>
{
    IHttpServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
