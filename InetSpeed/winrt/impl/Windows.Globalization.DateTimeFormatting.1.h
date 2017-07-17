// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.DateTimeFormatting.0.h"

namespace winrt {

namespace Windows::Globalization::DateTimeFormatting {

struct IDateTimeFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatter>
{
    IDateTimeFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct IDateTimeFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatter2>
{
    IDateTimeFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct IDateTimeFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatterFactory>
{
    IDateTimeFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDateTimeFormatterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatterStatics>
{
    IDateTimeFormatterStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
