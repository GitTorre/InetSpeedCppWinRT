// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.Http.Filters.0.h"
#include "Windows.Web.Http.Headers.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Web.Http.0.h"

namespace winrt {

namespace Windows::Web::Http {

struct IHttpBufferContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBufferContentFactory>
{
    IHttpBufferContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpClient>,
    impl::require<IHttpClient, Windows::Foundation::IClosable>
{
    IHttpClient(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpClientFactory>
{
    IHttpClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContent>,
    impl::require<IHttpContent, Windows::Foundation::IClosable>
{
    IHttpContent(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookie :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookie>
{
    IHttpCookie(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookieFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookieFactory>
{
    IHttpCookieFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookieManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookieManager>
{
    IHttpCookieManager(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpFormUrlEncodedContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpFormUrlEncodedContentFactory>
{
    IHttpFormUrlEncodedContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMethod :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethod>
{
    IHttpMethod(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMethodFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethodFactory>
{
    IHttpMethodFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMethodStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethodStatics>
{
    IHttpMethodStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMultipartContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartContent>,
    impl::require<IHttpMultipartContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>>
{
    IHttpMultipartContent(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMultipartContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartContentFactory>
{
    IHttpMultipartContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMultipartFormDataContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartFormDataContent>,
    impl::require<IHttpMultipartFormDataContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>>
{
    IHttpMultipartFormDataContent(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMultipartFormDataContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartFormDataContentFactory>
{
    IHttpMultipartFormDataContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpRequestMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpRequestMessage>,
    impl::require<IHttpRequestMessage, Windows::Foundation::IClosable>
{
    IHttpRequestMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpRequestMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpRequestMessageFactory>
{
    IHttpRequestMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpResponseMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpResponseMessage>,
    impl::require<IHttpResponseMessage, Windows::Foundation::IClosable>
{
    IHttpResponseMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpResponseMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpResponseMessageFactory>
{
    IHttpResponseMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpStreamContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpStreamContentFactory>
{
    IHttpStreamContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpStringContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpStringContentFactory>
{
    IHttpStringContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpTransportInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransportInformation>
{
    IHttpTransportInformation(std::nullptr_t = nullptr) noexcept {}
};

}

}
