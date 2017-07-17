// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Web.Http.Headers.0.h"

namespace winrt {

namespace Windows::Web::Http::Headers {

struct IHttpCacheDirectiveHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCacheDirectiveHeaderValueCollection>,
    impl::require<IHttpCacheDirectiveHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpNameValueHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>>
{
    IHttpCacheDirectiveHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpChallengeHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpChallengeHeaderValue>
{
    IHttpChallengeHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpChallengeHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpChallengeHeaderValueCollection>,
    impl::require<IHttpChallengeHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpChallengeHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpChallengeHeaderValue>>
{
    IHttpChallengeHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpChallengeHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpChallengeHeaderValueFactory>
{
    IHttpChallengeHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpChallengeHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpChallengeHeaderValueStatics>
{
    IHttpChallengeHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpConnectionOptionHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpConnectionOptionHeaderValue>
{
    IHttpConnectionOptionHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpConnectionOptionHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpConnectionOptionHeaderValueCollection>,
    impl::require<IHttpConnectionOptionHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>>
{
    IHttpConnectionOptionHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpConnectionOptionHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpConnectionOptionHeaderValueFactory>
{
    IHttpConnectionOptionHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpConnectionOptionHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpConnectionOptionHeaderValueStatics>
{
    IHttpConnectionOptionHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingHeaderValue>
{
    IHttpContentCodingHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingHeaderValueCollection>,
    impl::require<IHttpContentCodingHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>>
{
    IHttpContentCodingHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingHeaderValueFactory>
{
    IHttpContentCodingHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingHeaderValueStatics>
{
    IHttpContentCodingHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingWithQualityHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingWithQualityHeaderValue>
{
    IHttpContentCodingWithQualityHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingWithQualityHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingWithQualityHeaderValueCollection>,
    impl::require<IHttpContentCodingWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>>
{
    IHttpContentCodingWithQualityHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingWithQualityHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingWithQualityHeaderValueFactory>
{
    IHttpContentCodingWithQualityHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentCodingWithQualityHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentCodingWithQualityHeaderValueStatics>
{
    IHttpContentCodingWithQualityHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentDispositionHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentDispositionHeaderValue>
{
    IHttpContentDispositionHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentDispositionHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentDispositionHeaderValueFactory>
{
    IHttpContentDispositionHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentDispositionHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentDispositionHeaderValueStatics>
{
    IHttpContentDispositionHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentHeaderCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentHeaderCollection>,
    impl::require<IHttpContentHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>>
{
    IHttpContentHeaderCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentRangeHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentRangeHeaderValue>
{
    IHttpContentRangeHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentRangeHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentRangeHeaderValueFactory>
{
    IHttpContentRangeHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpContentRangeHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContentRangeHeaderValueStatics>
{
    IHttpContentRangeHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookiePairHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookiePairHeaderValue>
{
    IHttpCookiePairHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookiePairHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookiePairHeaderValueCollection>,
    impl::require<IHttpCookiePairHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>>
{
    IHttpCookiePairHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookiePairHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookiePairHeaderValueFactory>
{
    IHttpCookiePairHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCookiePairHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookiePairHeaderValueStatics>
{
    IHttpCookiePairHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCredentialsHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCredentialsHeaderValue>
{
    IHttpCredentialsHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCredentialsHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCredentialsHeaderValueFactory>
{
    IHttpCredentialsHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpCredentialsHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCredentialsHeaderValueStatics>
{
    IHttpCredentialsHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDateOrDeltaHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDateOrDeltaHeaderValue>
{
    IHttpDateOrDeltaHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDateOrDeltaHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDateOrDeltaHeaderValueStatics>
{
    IHttpDateOrDeltaHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpExpectationHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpExpectationHeaderValue>
{
    IHttpExpectationHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpExpectationHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpExpectationHeaderValueCollection>,
    impl::require<IHttpExpectationHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpExpectationHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpExpectationHeaderValue>>
{
    IHttpExpectationHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpExpectationHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpExpectationHeaderValueFactory>
{
    IHttpExpectationHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpExpectationHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpExpectationHeaderValueStatics>
{
    IHttpExpectationHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpLanguageHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpLanguageHeaderValueCollection>,
    impl::require<IHttpLanguageHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Globalization::Language>, Windows::Foundation::Collections::IVector<Windows::Globalization::Language>>
{
    IHttpLanguageHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpLanguageRangeWithQualityHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpLanguageRangeWithQualityHeaderValue>
{
    IHttpLanguageRangeWithQualityHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpLanguageRangeWithQualityHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpLanguageRangeWithQualityHeaderValueCollection>,
    impl::require<IHttpLanguageRangeWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>>
{
    IHttpLanguageRangeWithQualityHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpLanguageRangeWithQualityHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpLanguageRangeWithQualityHeaderValueFactory>
{
    IHttpLanguageRangeWithQualityHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpLanguageRangeWithQualityHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpLanguageRangeWithQualityHeaderValueStatics>
{
    IHttpLanguageRangeWithQualityHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeHeaderValue>
{
    IHttpMediaTypeHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeHeaderValueFactory>
{
    IHttpMediaTypeHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeHeaderValueStatics>
{
    IHttpMediaTypeHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeWithQualityHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeWithQualityHeaderValue>
{
    IHttpMediaTypeWithQualityHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeWithQualityHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeWithQualityHeaderValueCollection>,
    impl::require<IHttpMediaTypeWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>>
{
    IHttpMediaTypeWithQualityHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeWithQualityHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeWithQualityHeaderValueFactory>
{
    IHttpMediaTypeWithQualityHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMediaTypeWithQualityHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMediaTypeWithQualityHeaderValueStatics>
{
    IHttpMediaTypeWithQualityHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMethodHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethodHeaderValueCollection>,
    impl::require<IHttpMethodHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::HttpMethod>, Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpMethod>>
{
    IHttpMethodHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpNameValueHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpNameValueHeaderValue>
{
    IHttpNameValueHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpNameValueHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpNameValueHeaderValueFactory>
{
    IHttpNameValueHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpNameValueHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpNameValueHeaderValueStatics>
{
    IHttpNameValueHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductHeaderValue>
{
    IHttpProductHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductHeaderValueFactory>
{
    IHttpProductHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductHeaderValueStatics>
{
    IHttpProductHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductInfoHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductInfoHeaderValue>
{
    IHttpProductInfoHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductInfoHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductInfoHeaderValueCollection>,
    impl::require<IHttpProductInfoHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>>
{
    IHttpProductInfoHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductInfoHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductInfoHeaderValueFactory>
{
    IHttpProductInfoHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpProductInfoHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpProductInfoHeaderValueStatics>
{
    IHttpProductInfoHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpRequestHeaderCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpRequestHeaderCollection>,
    impl::require<IHttpRequestHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>>
{
    IHttpRequestHeaderCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpResponseHeaderCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpResponseHeaderCollection>,
    impl::require<IHttpResponseHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>>
{
    IHttpResponseHeaderCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpTransferCodingHeaderValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransferCodingHeaderValue>
{
    IHttpTransferCodingHeaderValue(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpTransferCodingHeaderValueCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransferCodingHeaderValueCollection>,
    impl::require<IHttpTransferCodingHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>>
{
    IHttpTransferCodingHeaderValueCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpTransferCodingHeaderValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransferCodingHeaderValueFactory>
{
    IHttpTransferCodingHeaderValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpTransferCodingHeaderValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransferCodingHeaderValueStatics>
{
    IHttpTransferCodingHeaderValueStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
