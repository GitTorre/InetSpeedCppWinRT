// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Text.0.h"

namespace winrt {

namespace Windows::Data::Text {

struct IAlternateWordForm :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlternateWordForm>
{
    IAlternateWordForm(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectableWordSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordSegment>
{
    ISelectableWordSegment(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectableWordsSegmenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordsSegmenter>
{
    ISelectableWordsSegmenter(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectableWordsSegmenterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordsSegmenterFactory>
{
    ISelectableWordsSegmenterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISemanticTextQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticTextQuery>
{
    ISemanticTextQuery(std::nullptr_t = nullptr) noexcept {}
};

struct ISemanticTextQueryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticTextQueryFactory>
{
    ISemanticTextQueryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITextConversionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConversionGenerator>
{
    ITextConversionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct ITextConversionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConversionGeneratorFactory>
{
    ITextConversionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITextPhoneme :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPhoneme>
{
    ITextPhoneme(std::nullptr_t = nullptr) noexcept {}
};

struct ITextPredictionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPredictionGenerator>
{
    ITextPredictionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct ITextPredictionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPredictionGeneratorFactory>
{
    ITextPredictionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITextReverseConversionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGenerator>
{
    ITextReverseConversionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct ITextReverseConversionGenerator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGenerator2>
{
    ITextReverseConversionGenerator2(std::nullptr_t = nullptr) noexcept {}
};

struct ITextReverseConversionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGeneratorFactory>
{
    ITextReverseConversionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IUnicodeCharactersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnicodeCharactersStatics>
{
    IUnicodeCharactersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWordSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordSegment>
{
    IWordSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IWordsSegmenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordsSegmenter>
{
    IWordsSegmenter(std::nullptr_t = nullptr) noexcept {}
};

struct IWordsSegmenterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordsSegmenterFactory>
{
    IWordsSegmenterFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
