// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Globalization.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Web.Http.Headers.1.h"

namespace winrt {

namespace Windows::Web::Http::Headers {

struct HttpCacheDirectiveHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection,
    impl::require<HttpCacheDirectiveHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpCacheDirectiveHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpChallengeHeaderValue :
    Windows::Web::Http::Headers::IHttpChallengeHeaderValue,
    impl::require<HttpChallengeHeaderValue, Windows::Foundation::IStringable>
{
    HttpChallengeHeaderValue(std::nullptr_t) noexcept {}
    HttpChallengeHeaderValue(param::hstring const& scheme);
    HttpChallengeHeaderValue(param::hstring const& scheme, param::hstring const& token);
    static Windows::Web::Http::Headers::HttpChallengeHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue);
};

struct HttpChallengeHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection,
    impl::require<HttpChallengeHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpChallengeHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpConnectionOptionHeaderValue :
    Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue,
    impl::require<HttpConnectionOptionHeaderValue, Windows::Foundation::IStringable>
{
    HttpConnectionOptionHeaderValue(std::nullptr_t) noexcept {}
    HttpConnectionOptionHeaderValue(param::hstring const& token);
    static Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue);
};

struct HttpConnectionOptionHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection,
    impl::require<HttpConnectionOptionHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpConnectionOptionHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpContentCodingHeaderValue :
    Windows::Web::Http::Headers::IHttpContentCodingHeaderValue,
    impl::require<HttpContentCodingHeaderValue, Windows::Foundation::IStringable>
{
    HttpContentCodingHeaderValue(std::nullptr_t) noexcept {}
    HttpContentCodingHeaderValue(param::hstring const& contentCoding);
    static Windows::Web::Http::Headers::HttpContentCodingHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue);
};

struct HttpContentCodingHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection,
    impl::require<HttpContentCodingHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpContentCodingHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpContentCodingWithQualityHeaderValue :
    Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue,
    impl::require<HttpContentCodingWithQualityHeaderValue, Windows::Foundation::IStringable>
{
    HttpContentCodingWithQualityHeaderValue(std::nullptr_t) noexcept {}
    HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding);
    HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding, double quality);
    static Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue);
};

struct HttpContentCodingWithQualityHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection,
    impl::require<HttpContentCodingWithQualityHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpContentCodingWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpContentDispositionHeaderValue :
    Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue,
    impl::require<HttpContentDispositionHeaderValue, Windows::Foundation::IStringable>
{
    HttpContentDispositionHeaderValue(std::nullptr_t) noexcept {}
    HttpContentDispositionHeaderValue(param::hstring const& dispositionType);
    static Windows::Web::Http::Headers::HttpContentDispositionHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue);
};

struct HttpContentHeaderCollection :
    Windows::Web::Http::Headers::IHttpContentHeaderCollection,
    impl::require<HttpContentHeaderCollection, Windows::Foundation::IStringable>
{
    HttpContentHeaderCollection(std::nullptr_t) noexcept {}
    HttpContentHeaderCollection();
};

struct HttpContentRangeHeaderValue :
    Windows::Web::Http::Headers::IHttpContentRangeHeaderValue,
    impl::require<HttpContentRangeHeaderValue, Windows::Foundation::IStringable>
{
    HttpContentRangeHeaderValue(std::nullptr_t) noexcept {}
    HttpContentRangeHeaderValue(uint64_t length);
    HttpContentRangeHeaderValue(uint64_t from, uint64_t to);
    HttpContentRangeHeaderValue(uint64_t from, uint64_t to, uint64_t length);
    static Windows::Web::Http::Headers::HttpContentRangeHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue);
};

struct HttpCookiePairHeaderValue :
    Windows::Web::Http::Headers::IHttpCookiePairHeaderValue,
    impl::require<HttpCookiePairHeaderValue, Windows::Foundation::IStringable>
{
    HttpCookiePairHeaderValue(std::nullptr_t) noexcept {}
    HttpCookiePairHeaderValue(param::hstring const& name);
    HttpCookiePairHeaderValue(param::hstring const& name, param::hstring const& value);
    static Windows::Web::Http::Headers::HttpCookiePairHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue);
};

struct HttpCookiePairHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection,
    impl::require<HttpCookiePairHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpCookiePairHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpCredentialsHeaderValue :
    Windows::Web::Http::Headers::IHttpCredentialsHeaderValue,
    impl::require<HttpCredentialsHeaderValue, Windows::Foundation::IStringable>
{
    HttpCredentialsHeaderValue(std::nullptr_t) noexcept {}
    HttpCredentialsHeaderValue(param::hstring const& scheme);
    HttpCredentialsHeaderValue(param::hstring const& scheme, param::hstring const& token);
    static Windows::Web::Http::Headers::HttpCredentialsHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue);
};

struct HttpDateOrDeltaHeaderValue :
    Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue,
    impl::require<HttpDateOrDeltaHeaderValue, Windows::Foundation::IStringable>
{
    HttpDateOrDeltaHeaderValue(std::nullptr_t) noexcept {}
    static Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue);
};

struct HttpExpectationHeaderValue :
    Windows::Web::Http::Headers::IHttpExpectationHeaderValue,
    impl::require<HttpExpectationHeaderValue, Windows::Foundation::IStringable>
{
    HttpExpectationHeaderValue(std::nullptr_t) noexcept {}
    HttpExpectationHeaderValue(param::hstring const& name);
    HttpExpectationHeaderValue(param::hstring const& name, param::hstring const& value);
    static Windows::Web::Http::Headers::HttpExpectationHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue);
};

struct HttpExpectationHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection,
    impl::require<HttpExpectationHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpExpectationHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpLanguageHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection,
    impl::require<HttpLanguageHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpLanguageHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpLanguageRangeWithQualityHeaderValue :
    Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue,
    impl::require<HttpLanguageRangeWithQualityHeaderValue, Windows::Foundation::IStringable>
{
    HttpLanguageRangeWithQualityHeaderValue(std::nullptr_t) noexcept {}
    HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange);
    HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange, double quality);
    static Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue);
};

struct HttpLanguageRangeWithQualityHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection,
    impl::require<HttpLanguageRangeWithQualityHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpLanguageRangeWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpMediaTypeHeaderValue :
    Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue,
    impl::require<HttpMediaTypeHeaderValue, Windows::Foundation::IStringable>
{
    HttpMediaTypeHeaderValue(std::nullptr_t) noexcept {}
    HttpMediaTypeHeaderValue(param::hstring const& mediaType);
    static Windows::Web::Http::Headers::HttpMediaTypeHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue);
};

struct HttpMediaTypeWithQualityHeaderValue :
    Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue,
    impl::require<HttpMediaTypeWithQualityHeaderValue, Windows::Foundation::IStringable>
{
    HttpMediaTypeWithQualityHeaderValue(std::nullptr_t) noexcept {}
    HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType);
    HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType, double quality);
    static Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue);
};

struct HttpMediaTypeWithQualityHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection,
    impl::require<HttpMediaTypeWithQualityHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpMediaTypeWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpMethodHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection,
    impl::require<HttpMethodHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpMethodHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpNameValueHeaderValue :
    Windows::Web::Http::Headers::IHttpNameValueHeaderValue,
    impl::require<HttpNameValueHeaderValue, Windows::Foundation::IStringable>
{
    HttpNameValueHeaderValue(std::nullptr_t) noexcept {}
    HttpNameValueHeaderValue(param::hstring const& name);
    HttpNameValueHeaderValue(param::hstring const& name, param::hstring const& value);
    static Windows::Web::Http::Headers::HttpNameValueHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue);
};

struct HttpProductHeaderValue :
    Windows::Web::Http::Headers::IHttpProductHeaderValue,
    impl::require<HttpProductHeaderValue, Windows::Foundation::IStringable>
{
    HttpProductHeaderValue(std::nullptr_t) noexcept {}
    HttpProductHeaderValue(param::hstring const& productName);
    HttpProductHeaderValue(param::hstring const& productName, param::hstring const& productVersion);
    static Windows::Web::Http::Headers::HttpProductHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue);
};

struct HttpProductInfoHeaderValue :
    Windows::Web::Http::Headers::IHttpProductInfoHeaderValue,
    impl::require<HttpProductInfoHeaderValue, Windows::Foundation::IStringable>
{
    HttpProductInfoHeaderValue(std::nullptr_t) noexcept {}
    HttpProductInfoHeaderValue(param::hstring const& productComment);
    HttpProductInfoHeaderValue(param::hstring const& productName, param::hstring const& productVersion);
    static Windows::Web::Http::Headers::HttpProductInfoHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue);
};

struct HttpProductInfoHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection,
    impl::require<HttpProductInfoHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpProductInfoHeaderValueCollection(std::nullptr_t) noexcept {}
};

struct HttpRequestHeaderCollection :
    Windows::Web::Http::Headers::IHttpRequestHeaderCollection,
    impl::require<HttpRequestHeaderCollection, Windows::Foundation::IStringable>
{
    HttpRequestHeaderCollection(std::nullptr_t) noexcept {}
};

struct HttpResponseHeaderCollection :
    Windows::Web::Http::Headers::IHttpResponseHeaderCollection,
    impl::require<HttpResponseHeaderCollection, Windows::Foundation::IStringable>
{
    HttpResponseHeaderCollection(std::nullptr_t) noexcept {}
};

struct HttpTransferCodingHeaderValue :
    Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue,
    impl::require<HttpTransferCodingHeaderValue, Windows::Foundation::IStringable>
{
    HttpTransferCodingHeaderValue(std::nullptr_t) noexcept {}
    HttpTransferCodingHeaderValue(param::hstring const& input);
    static Windows::Web::Http::Headers::HttpTransferCodingHeaderValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue);
};

struct HttpTransferCodingHeaderValueCollection :
    Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection,
    impl::require<HttpTransferCodingHeaderValueCollection, Windows::Foundation::IStringable>
{
    HttpTransferCodingHeaderValueCollection(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
