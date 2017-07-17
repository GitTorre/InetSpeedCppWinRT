// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.NumberFormatting.0.h"

namespace winrt {

namespace Windows::Globalization::NumberFormatting {

struct ICurrencyFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatter>,
    impl::require<ICurrencyFormatter, Windows::Globalization::NumberFormatting::INumberFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser>
{
    ICurrencyFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrencyFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatter2>
{
    ICurrencyFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrencyFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatterFactory>
{
    ICurrencyFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDecimalFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecimalFormatterFactory>
{
    IDecimalFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IIncrementNumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIncrementNumberRounder>
{
    IIncrementNumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct INumberFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatter>
{
    INumberFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct INumberFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatter2>
{
    INumberFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct INumberFormatterOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatterOptions>
{
    INumberFormatterOptions(std::nullptr_t = nullptr) noexcept {}
};

struct INumberParser :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberParser>
{
    INumberParser(std::nullptr_t = nullptr) noexcept {}
};

struct INumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberRounder>
{
    INumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct INumberRounderOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberRounderOption>
{
    INumberRounderOption(std::nullptr_t = nullptr) noexcept {}
};

struct INumeralSystemTranslator :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumeralSystemTranslator>
{
    INumeralSystemTranslator(std::nullptr_t = nullptr) noexcept {}
};

struct INumeralSystemTranslatorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumeralSystemTranslatorFactory>
{
    INumeralSystemTranslatorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPercentFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPercentFormatterFactory>
{
    IPercentFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPermilleFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPermilleFormatterFactory>
{
    IPermilleFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISignedZeroOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignedZeroOption>
{
    ISignedZeroOption(std::nullptr_t = nullptr) noexcept {}
};

struct ISignificantDigitsNumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignificantDigitsNumberRounder>
{
    ISignificantDigitsNumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct ISignificantDigitsOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignificantDigitsOption>
{
    ISignificantDigitsOption(std::nullptr_t = nullptr) noexcept {}
};

}

}
