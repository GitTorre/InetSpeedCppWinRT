// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Search.Core.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Search::Core {

struct IRequestingFocusOnKeyboardInputEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRequestingFocusOnKeyboardInputEventArgs>
{
    IRequestingFocusOnKeyboardInputEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestion>
{
    ISearchSuggestion(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionManager>
{
    ISearchSuggestionManager(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestionsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequestedEventArgs>
{
    ISearchSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
