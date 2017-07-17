// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Search.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Search {

struct ILocalContentSuggestionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalContentSuggestionSettings>
{
    ILocalContentSuggestionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] ISearchPane :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPane>
{
    ISearchPane(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] ISearchPaneQueryChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneQueryChangedEventArgs>
{
    ISearchPaneQueryChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchPaneQueryLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneQueryLinguisticDetails>
{
    ISearchPaneQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")]] ISearchPaneQuerySubmittedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneQuerySubmittedEventArgs>
{
    ISearchPaneQuerySubmittedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails may be altered or unavailable for releases after Windows 10.")]] ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")]] ISearchPaneResultSuggestionChosenEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneResultSuggestionChosenEventArgs>
{
    ISearchPaneResultSuggestionChosenEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")]] ISearchPaneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneStatics>
{
    ISearchPaneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")]] ISearchPaneStaticsWithHideThisApplication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneStaticsWithHideThisApplication>
{
    ISearchPaneStaticsWithHideThisApplication(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")]] ISearchPaneSuggestionsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneSuggestionsRequest>
{
    ISearchPaneSuggestionsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")]] ISearchPaneSuggestionsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneSuggestionsRequestDeferral>
{
    ISearchPaneSuggestionsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] ISearchPaneSuggestionsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneSuggestionsRequestedEventArgs>,
    impl::require<ISearchPaneSuggestionsRequestedEventArgs, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
{
    ISearchPaneSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] ISearchPaneVisibilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneVisibilityChangedEventArgs>
{
    ISearchPaneVisibilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchQueryLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchQueryLinguisticDetails>
{
    ISearchQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchQueryLinguisticDetailsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchQueryLinguisticDetailsFactory>
{
    ISearchQueryLinguisticDetailsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestionCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionCollection>
{
    ISearchSuggestionCollection(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestionsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequest>
{
    ISearchSuggestionsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchSuggestionsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequestDeferral>
{
    ISearchSuggestionsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

}

}
