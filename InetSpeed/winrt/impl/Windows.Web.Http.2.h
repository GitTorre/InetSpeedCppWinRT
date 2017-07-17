// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.Http.Filters.1.h"
#include "Windows.Web.Http.Headers.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Web.Http.1.h"

namespace winrt {

namespace Windows::Web::Http {

struct HttpProgress
{
    Windows::Web::Http::HttpProgressStage Stage;
    uint64_t BytesSent;
    Windows::Foundation::IReference<uint64_t> TotalBytesToSend;
    uint64_t BytesReceived;
    Windows::Foundation::IReference<uint64_t> TotalBytesToReceive;
    uint32_t Retries;
};

struct HttpBufferContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpBufferContent, Windows::Foundation::IStringable>
{
    HttpBufferContent(std::nullptr_t) noexcept {}
    HttpBufferContent(Windows::Storage::Streams::IBuffer const& content);
    HttpBufferContent(Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count);
};

struct HttpClient :
    Windows::Web::Http::IHttpClient,
    impl::require<HttpClient, Windows::Foundation::IStringable>
{
    HttpClient(std::nullptr_t) noexcept {}
    HttpClient();
    HttpClient(Windows::Web::Http::Filters::IHttpFilter const& filter);
};

struct HttpCookie :
    Windows::Web::Http::IHttpCookie,
    impl::require<HttpCookie, Windows::Foundation::IStringable>
{
    HttpCookie(std::nullptr_t) noexcept {}
    HttpCookie(param::hstring const& name, param::hstring const& domain, param::hstring const& path);
};

struct HttpCookieCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie>
{
    HttpCookieCollection(std::nullptr_t) noexcept {}
};

struct HttpCookieManager :
    Windows::Web::Http::IHttpCookieManager
{
    HttpCookieManager(std::nullptr_t) noexcept {}
};

struct HttpFormUrlEncodedContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpFormUrlEncodedContent, Windows::Foundation::IStringable>
{
    HttpFormUrlEncodedContent(std::nullptr_t) noexcept {}
    HttpFormUrlEncodedContent(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content);
};

struct HttpMethod :
    Windows::Web::Http::IHttpMethod,
    impl::require<HttpMethod, Windows::Foundation::IStringable>
{
    HttpMethod(std::nullptr_t) noexcept {}
    HttpMethod(param::hstring const& method);
    static Windows::Web::Http::HttpMethod Delete();
    static Windows::Web::Http::HttpMethod Get();
    static Windows::Web::Http::HttpMethod Head();
    static Windows::Web::Http::HttpMethod Options();
    static Windows::Web::Http::HttpMethod Patch();
    static Windows::Web::Http::HttpMethod Post();
    static Windows::Web::Http::HttpMethod Put();
};

struct HttpMultipartContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpMultipartContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>, Windows::Foundation::IStringable, Windows::Web::Http::IHttpMultipartContent>
{
    HttpMultipartContent(std::nullptr_t) noexcept {}
    HttpMultipartContent();
    HttpMultipartContent(param::hstring const& subtype);
    HttpMultipartContent(param::hstring const& subtype, param::hstring const& boundary);
};

struct HttpMultipartFormDataContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpMultipartFormDataContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>, Windows::Foundation::IStringable, Windows::Web::Http::IHttpMultipartFormDataContent>
{
    HttpMultipartFormDataContent(std::nullptr_t) noexcept {}
    HttpMultipartFormDataContent();
    HttpMultipartFormDataContent(param::hstring const& boundary);
};

struct HttpRequestMessage :
    Windows::Web::Http::IHttpRequestMessage,
    impl::require<HttpRequestMessage, Windows::Foundation::IStringable>
{
    HttpRequestMessage(std::nullptr_t) noexcept {}
    HttpRequestMessage();
    HttpRequestMessage(Windows::Web::Http::HttpMethod const& method, Windows::Foundation::Uri const& uri);
};

struct HttpResponseMessage :
    Windows::Web::Http::IHttpResponseMessage,
    impl::require<HttpResponseMessage, Windows::Foundation::IStringable>
{
    HttpResponseMessage(std::nullptr_t) noexcept {}
    HttpResponseMessage();
    HttpResponseMessage(Windows::Web::Http::HttpStatusCode const& statusCode);
};

struct HttpStreamContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpStreamContent, Windows::Foundation::IStringable>
{
    HttpStreamContent(std::nullptr_t) noexcept {}
    HttpStreamContent(Windows::Storage::Streams::IInputStream const& content);
};

struct HttpStringContent :
    Windows::Web::Http::IHttpContent,
    impl::require<HttpStringContent, Windows::Foundation::IStringable>
{
    HttpStringContent(std::nullptr_t) noexcept {}
    HttpStringContent(param::hstring const& content);
    HttpStringContent(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    HttpStringContent(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType);
};

struct HttpTransportInformation :
    Windows::Web::Http::IHttpTransportInformation,
    impl::require<HttpTransportInformation, Windows::Foundation::IStringable>
{
    HttpTransportInformation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
