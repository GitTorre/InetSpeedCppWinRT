// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Data.Json.0.h"

namespace winrt {

namespace Windows::Data::Json {

struct IJsonArray :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonArray>,
    impl::require<IJsonArray, Windows::Data::Json::IJsonValue>
{
    IJsonArray(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonArrayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonArrayStatics>
{
    IJsonArrayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonErrorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonErrorStatics2>
{
    IJsonErrorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObject>,
    impl::require<IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObject(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonObjectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObjectStatics>
{
    IJsonObjectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonObjectWithDefaultValues :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObjectWithDefaultValues>,
    impl::require<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObjectWithDefaultValues(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedArray;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedArray;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedBoolean;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedBoolean;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedNumber;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedNumber;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedObject;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedObject;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedString;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedString;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedValue;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedValue;
};

struct IJsonValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValue>
{
    IJsonValue(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValueStatics>
{
    IJsonValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IJsonValueStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValueStatics2>
{
    IJsonValueStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
