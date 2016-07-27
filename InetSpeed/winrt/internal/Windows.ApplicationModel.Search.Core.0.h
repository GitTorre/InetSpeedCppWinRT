// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Search::Core {

struct IRequestingFocusOnKeyboardInputEventArgs;
struct ISearchSuggestion;
struct ISearchSuggestionManager;
struct ISearchSuggestionsRequestedEventArgs;
struct RequestingFocusOnKeyboardInputEventArgs;
struct SearchSuggestion;
struct SearchSuggestionManager;
struct SearchSuggestionsRequestedEventArgs;

}

namespace Windows::ApplicationModel::Search::Core {

struct IRequestingFocusOnKeyboardInputEventArgs;
struct ISearchSuggestion;
struct ISearchSuggestionManager;
struct ISearchSuggestionsRequestedEventArgs;
struct RequestingFocusOnKeyboardInputEventArgs;
struct SearchSuggestion;
struct SearchSuggestionManager;
struct SearchSuggestionsRequestedEventArgs;

}

namespace Windows::ApplicationModel::Search::Core {

enum class SearchSuggestionKind
{
    Query = 0,
    Result = 1,
    Separator = 2,
};

}

}
