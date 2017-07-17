// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.PhoneNumberFormatting.0.h"

namespace winrt {

namespace Windows::Globalization::PhoneNumberFormatting {

struct IPhoneNumberFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberFormatter>
{
    IPhoneNumberFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNumberFormatterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberFormatterStatics>
{
    IPhoneNumberFormatterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNumberInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfo>
{
    IPhoneNumberInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNumberInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfoFactory>
{
    IPhoneNumberInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNumberInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfoStatics>
{
    IPhoneNumberInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
