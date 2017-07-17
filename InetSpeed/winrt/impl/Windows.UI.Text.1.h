// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Text.0.h"

namespace winrt {

namespace Windows::UI::Text {

struct IFontWeights :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontWeights>
{
    IFontWeights(std::nullptr_t = nullptr) noexcept {}
};

struct IFontWeightsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontWeightsStatics>
{
    IFontWeightsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITextCharacterFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextCharacterFormat>
{
    ITextCharacterFormat(std::nullptr_t = nullptr) noexcept {}
};

struct ITextConstantsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConstantsStatics>
{
    ITextConstantsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITextDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextDocument>
{
    ITextDocument(std::nullptr_t = nullptr) noexcept {}
};

struct ITextDocument2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextDocument2>,
    impl::require<ITextDocument2, Windows::UI::Text::ITextDocument>
{
    ITextDocument2(std::nullptr_t = nullptr) noexcept {}
};

struct ITextParagraphFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextParagraphFormat>
{
    ITextParagraphFormat(std::nullptr_t = nullptr) noexcept {}
};

struct ITextRange :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRange>
{
    ITextRange(std::nullptr_t = nullptr) noexcept {}
};

struct ITextSelection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextSelection>,
    impl::require<ITextSelection, Windows::UI::Text::ITextRange>
{
    ITextSelection(std::nullptr_t = nullptr) noexcept {}
};

}

}
