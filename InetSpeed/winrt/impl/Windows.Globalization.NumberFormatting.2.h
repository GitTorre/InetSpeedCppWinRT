// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.NumberFormatting.1.h"

namespace winrt {

namespace Windows::Globalization::NumberFormatting {

struct CurrencyFormatter :
    Windows::Globalization::NumberFormatting::ICurrencyFormatter,
    impl::require<CurrencyFormatter, Windows::Globalization::NumberFormatting::ICurrencyFormatter2, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    CurrencyFormatter(std::nullptr_t) noexcept {}
    CurrencyFormatter(param::hstring const& currencyCode);
    CurrencyFormatter(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
};

struct DecimalFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<DecimalFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    DecimalFormatter(std::nullptr_t) noexcept {}
    DecimalFormatter();
    DecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
};

struct IncrementNumberRounder :
    Windows::Globalization::NumberFormatting::INumberRounder,
    impl::require<IncrementNumberRounder, Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
{
    IncrementNumberRounder(std::nullptr_t) noexcept {}
    IncrementNumberRounder();
};

struct NumeralSystemTranslator :
    Windows::Globalization::NumberFormatting::INumeralSystemTranslator
{
    NumeralSystemTranslator(std::nullptr_t) noexcept {}
    NumeralSystemTranslator();
    NumeralSystemTranslator(param::iterable<hstring> const& languages);
};

struct PercentFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<PercentFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    PercentFormatter(std::nullptr_t) noexcept {}
    PercentFormatter();
    PercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
};

struct PermilleFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<PermilleFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    PermilleFormatter(std::nullptr_t) noexcept {}
    PermilleFormatter();
    PermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
};

struct SignificantDigitsNumberRounder :
    Windows::Globalization::NumberFormatting::INumberRounder,
    impl::require<SignificantDigitsNumberRounder, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
{
    SignificantDigitsNumberRounder(std::nullptr_t) noexcept {}
    SignificantDigitsNumberRounder();
};

}

namespace impl {

}

}
