// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Input.Inking.0.h"
#include "Windows.UI.Input.Inking.Analysis.0.h"

namespace winrt {

namespace Windows::UI::Input::Inking::Analysis {

struct IInkAnalysisInkBullet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisInkBullet>,
    impl::require<IInkAnalysisInkBullet, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisInkBullet(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisInkDrawing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisInkDrawing>,
    impl::require<IInkAnalysisInkDrawing, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisInkDrawing(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisInkWord :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisInkWord>,
    impl::require<IInkAnalysisInkWord, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisInkWord(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisLine>,
    impl::require<IInkAnalysisLine, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisLine(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisListItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisListItem>,
    impl::require<IInkAnalysisListItem, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisListItem(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisNode>
{
    IInkAnalysisNode(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisParagraph :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisParagraph>,
    impl::require<IInkAnalysisParagraph, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisParagraph(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisResult>
{
    IInkAnalysisResult(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisRoot :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisRoot>,
    impl::require<IInkAnalysisRoot, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisRoot(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalysisWritingRegion :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalysisWritingRegion>,
    impl::require<IInkAnalysisWritingRegion, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    IInkAnalysisWritingRegion(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalyzer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalyzer>
{
    IInkAnalyzer(std::nullptr_t = nullptr) noexcept {}
};

struct IInkAnalyzerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkAnalyzerFactory>
{
    IInkAnalyzerFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
