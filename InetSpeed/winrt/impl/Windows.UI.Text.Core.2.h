// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Globalization.1.h"
#include "Windows.UI.Text.1.h"
#include "Windows.UI.ViewManagement.1.h"
#include "Windows.UI.Text.Core.1.h"

namespace winrt {

namespace Windows::UI::Text::Core {

struct CoreTextRange
{
    int32_t StartCaretPosition;
    int32_t EndCaretPosition;
};

struct CoreTextCompositionCompletedEventArgs :
    Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs
{
    CoreTextCompositionCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextCompositionSegment :
    Windows::UI::Text::Core::ICoreTextCompositionSegment
{
    CoreTextCompositionSegment(std::nullptr_t) noexcept {}
};

struct CoreTextCompositionStartedEventArgs :
    Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs
{
    CoreTextCompositionStartedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextEditContext :
    Windows::UI::Text::Core::ICoreTextEditContext,
    impl::require<CoreTextEditContext, Windows::UI::Text::Core::ICoreTextEditContext2>
{
    CoreTextEditContext(std::nullptr_t) noexcept {}
};

struct CoreTextFormatUpdatingEventArgs :
    Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs
{
    CoreTextFormatUpdatingEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextLayoutBounds :
    Windows::UI::Text::Core::ICoreTextLayoutBounds
{
    CoreTextLayoutBounds(std::nullptr_t) noexcept {}
};

struct CoreTextLayoutRequest :
    Windows::UI::Text::Core::ICoreTextLayoutRequest
{
    CoreTextLayoutRequest(std::nullptr_t) noexcept {}
};

struct CoreTextLayoutRequestedEventArgs :
    Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs
{
    CoreTextLayoutRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextSelectionRequest :
    Windows::UI::Text::Core::ICoreTextSelectionRequest
{
    CoreTextSelectionRequest(std::nullptr_t) noexcept {}
};

struct CoreTextSelectionRequestedEventArgs :
    Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs
{
    CoreTextSelectionRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextSelectionUpdatingEventArgs :
    Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs
{
    CoreTextSelectionUpdatingEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextServicesConstants
{
    CoreTextServicesConstants() = delete;
    static wchar_t HiddenCharacter();
};

struct CoreTextServicesManager :
    Windows::UI::Text::Core::ICoreTextServicesManager
{
    CoreTextServicesManager(std::nullptr_t) noexcept {}
    static Windows::UI::Text::Core::CoreTextServicesManager GetForCurrentView();
};

struct CoreTextTextRequest :
    Windows::UI::Text::Core::ICoreTextTextRequest
{
    CoreTextTextRequest(std::nullptr_t) noexcept {}
};

struct CoreTextTextRequestedEventArgs :
    Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs
{
    CoreTextTextRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreTextTextUpdatingEventArgs :
    Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs
{
    CoreTextTextUpdatingEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
