// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Printing.0.h"
#include "Windows.Graphics.Printing.OptionDetails.0.h"

namespace winrt {

namespace Windows::Graphics::Printing::OptionDetails {

struct IPrintCustomItemDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomItemDetails>
{
    IPrintCustomItemDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintCustomItemListOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomItemListOptionDetails>,
    impl::require<IPrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintCustomOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomOptionDetails>,
    impl::require<IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintCustomTextOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomTextOptionDetails>,
    impl::require<IPrintCustomTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintItemListOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintItemListOptionDetails>,
    impl::require<IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintNumberOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintNumberOptionDetails>,
    impl::require<IPrintNumberOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintNumberOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintOptionDetails>
{
    IPrintOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionChangedEventArgs>
{
    IPrintTaskOptionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionDetails>
{
    IPrintTaskOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionDetailsStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionDetailsStatic>
{
    IPrintTaskOptionDetailsStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTextOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTextOptionDetails>,
    impl::require<IPrintTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
