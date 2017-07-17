// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Input.Inking.1.h"
#include "Windows.UI.Input.Inking.Analysis.1.h"

namespace winrt {

namespace Windows::UI::Input::Inking::Analysis {

struct InkAnalysisInkBullet :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet
{
    InkAnalysisInkBullet(std::nullptr_t) noexcept {}
};

struct InkAnalysisInkDrawing :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing
{
    InkAnalysisInkDrawing(std::nullptr_t) noexcept {}
};

struct InkAnalysisInkWord :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord
{
    InkAnalysisInkWord(std::nullptr_t) noexcept {}
};

struct InkAnalysisLine :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisLine
{
    InkAnalysisLine(std::nullptr_t) noexcept {}
};

struct InkAnalysisListItem :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem
{
    InkAnalysisListItem(std::nullptr_t) noexcept {}
};

struct InkAnalysisNode :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisNode
{
    InkAnalysisNode(std::nullptr_t) noexcept {}
};

struct InkAnalysisParagraph :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph
{
    InkAnalysisParagraph(std::nullptr_t) noexcept {}
};

struct InkAnalysisResult :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisResult
{
    InkAnalysisResult(std::nullptr_t) noexcept {}
};

struct InkAnalysisRoot :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot
{
    InkAnalysisRoot(std::nullptr_t) noexcept {}
};

struct InkAnalysisWritingRegion :
    Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion
{
    InkAnalysisWritingRegion(std::nullptr_t) noexcept {}
};

struct InkAnalyzer :
    Windows::UI::Input::Inking::Analysis::IInkAnalyzer
{
    InkAnalyzer(std::nullptr_t) noexcept {}
    InkAnalyzer();
};

}

namespace impl {

}

}
