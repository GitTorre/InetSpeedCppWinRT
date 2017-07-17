﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Printing.1.h"
#include "Windows.Graphics.Printing.OptionDetails.1.h"

namespace winrt {

namespace Windows::Graphics::Printing::OptionDetails {

struct PrintBindingOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintBindingOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintBindingOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintBorderingOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintBorderingOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintBorderingOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintCollationOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintCollationOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintCollationOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintColorModeOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintColorModeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintColorModeOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintCopiesOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintCopiesOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
{
    PrintCopiesOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintCustomItemDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails
{
    PrintCustomItemDetails(std::nullptr_t) noexcept {}
};

struct PrintCustomItemListOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintCustomItemListOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintCustomTextOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintCustomTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
{
    PrintCustomTextOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintDuplexOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintDuplexOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintDuplexOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintHolePunchOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintHolePunchOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintHolePunchOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintMediaSizeOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintMediaSizeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintMediaSizeOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintMediaTypeOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintMediaTypeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintMediaTypeOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintOrientationOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintOrientationOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintOrientationOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintQualityOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintQualityOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintQualityOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintStapleOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
    impl::require<PrintStapleOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    PrintStapleOptionDetails(std::nullptr_t) noexcept {}
};

struct PrintTaskOptionChangedEventArgs :
    Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs
{
    PrintTaskOptionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct PrintTaskOptionDetails :
    Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails,
    impl::require<PrintTaskOptionDetails, Windows::Graphics::Printing::IPrintTaskOptionsCore, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
{
    PrintTaskOptionDetails(std::nullptr_t) noexcept {}
    static Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions);
};

}

namespace impl {

}

}
