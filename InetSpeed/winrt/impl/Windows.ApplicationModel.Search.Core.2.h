// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Search.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.Search.Core.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Search::Core {

struct RequestingFocusOnKeyboardInputEventArgs :
    Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs
{
    RequestingFocusOnKeyboardInputEventArgs(std::nullptr_t) noexcept {}
};

struct SearchSuggestion :
    Windows::ApplicationModel::Search::Core::ISearchSuggestion
{
    SearchSuggestion(std::nullptr_t) noexcept {}
};

struct SearchSuggestionManager :
    Windows::ApplicationModel::Search::Core::ISearchSuggestionManager
{
    SearchSuggestionManager(std::nullptr_t) noexcept {}
    SearchSuggestionManager();
};

struct SearchSuggestionsRequestedEventArgs :
    Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs
{
    SearchSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
