// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.ApplicationModel.Search.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> : produce_base<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locations(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AqsFilter(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().AqsFilter(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AqsFilter(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AqsFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PropertiesToMatch(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().PropertiesToMatch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPane> : produce_base<D, Windows::ApplicationModel::Search::ISearchPane>
{
    HRESULT __stdcall put_SearchHistoryEnabled(bool value) noexcept override
    {
        try
        {
            shim().SearchHistoryEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchHistoryEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SearchHistoryEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchHistoryContext(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SearchHistoryContext(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchHistoryContext(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SearchHistoryContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().PlaceholderText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PlaceholderText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().VisibilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token token) noexcept override
    {
        try
        {
            shim().VisibilityChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QueryChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().QueryChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QueryChanged(event_token token) noexcept override
    {
        try
        {
            shim().QueryChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SuggestionsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SuggestionsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SuggestionsRequested(event_token token) noexcept override
    {
        try
        {
            shim().SuggestionsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QuerySubmitted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().QuerySubmitted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QuerySubmitted(event_token token) noexcept override
    {
        try
        {
            shim().QuerySubmitted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResultSuggestionChosen(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ResultSuggestionChosen(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResultSuggestionChosen(event_token token) noexcept override
    {
        try
        {
            shim().ResultSuggestionChosen(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLocalContentSuggestionSettings(abi_arg_in<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> settings) noexcept override
    {
        try
        {
            shim().SetLocalContentSuggestionSettings(*reinterpret_cast<const Windows::ApplicationModel::Search::LocalContentSuggestionSettings *>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowOverloadDefault() noexcept override
    {
        try
        {
            shim().Show();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowOverloadWithQuery(abi_arg_in<hstring> query) noexcept override
    {
        try
        {
            shim().Show(*reinterpret_cast<const hstring *>(&query));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowOnKeyboardInput(bool value) noexcept override
    {
        try
        {
            shim().ShowOnKeyboardInput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowOnKeyboardInput(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ShowOnKeyboardInput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetQueryText(abi_arg_in<hstring> query, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TrySetQueryText(*reinterpret_cast<const hstring *>(&query)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
{
    HRESULT __stdcall get_QueryText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinguisticDetails(abi_arg_out<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> value) noexcept override
    {
        try
        {
            *value = detach(shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
{
    HRESULT __stdcall get_QueryText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    HRESULT __stdcall get_LinguisticDetails(abi_arg_out<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> value) noexcept override
    {
        try
        {
            *value = detach(shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
{
    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneStatics> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::Search::ISearchPane> searchPane) noexcept override
    {
        try
        {
            *searchPane = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *searchPane = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
{
    HRESULT __stdcall abi_HideThisApplication() noexcept override
    {
        try
        {
            shim().HideThisApplication();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
{
    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchSuggestionCollection(abi_arg_out<Windows::ApplicationModel::Search::ISearchSuggestionCollection> collection) noexcept override
    {
        try
        {
            *collection = detach(shim().SearchSuggestionCollection());
            return S_OK;
        }
        catch (...)
        {
            *collection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
{
    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, abi_arg_out<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateInstance(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection>
{
    HRESULT __stdcall get_Size(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendQuerySuggestion(abi_arg_in<hstring> text) noexcept override
    {
        try
        {
            shim().AppendQuerySuggestion(*reinterpret_cast<const hstring *>(&text));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendQuerySuggestions(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> suggestions) noexcept override
    {
        try
        {
            shim().AppendQuerySuggestions(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&suggestions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendResultSuggestion(abi_arg_in<hstring> text, abi_arg_in<hstring> detailText, abi_arg_in<hstring> tag, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> image, abi_arg_in<hstring> imageAlternateText) noexcept override
    {
        try
        {
            shim().AppendResultSuggestion(*reinterpret_cast<const hstring *>(&text), *reinterpret_cast<const hstring *>(&detailText), *reinterpret_cast<const hstring *>(&tag), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&image), *reinterpret_cast<const hstring *>(&imageAlternateText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendSearchSeparator(abi_arg_in<hstring> label) noexcept override
    {
        try
        {
            shim().AppendSearchSeparator(*reinterpret_cast<const hstring *>(&label));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
{
    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchSuggestionCollection(abi_arg_out<Windows::ApplicationModel::Search::ISearchSuggestionCollection> collection) noexcept override
    {
        try
        {
            *collection = detach(shim().SearchSuggestionCollection());
            return S_OK;
        }
        catch (...)
        {
            *collection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Search {

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ISearchPaneQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_QueryTextAlternatives(put(value)));
    return value;
}

template <typename D> uint32_t impl_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value {};
    check_hresult(shim()->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t impl_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> uint32_t impl_ISearchSuggestionCollection<D>::Size() const
{
    uint32_t value {};
    check_hresult(shim()->get_Size(&value));
    return value;
}

template <typename D> void impl_ISearchSuggestionCollection<D>::AppendQuerySuggestion(hstring_ref text) const
{
    check_hresult(shim()->abi_AppendQuerySuggestion(get(text)));
}

template <typename D> void impl_ISearchSuggestionCollection<D>::AppendQuerySuggestions(const Windows::Foundation::Collections::IIterable<hstring> & suggestions) const
{
    check_hresult(shim()->abi_AppendQuerySuggestions(get(suggestions)));
}

template <typename D> void impl_ISearchSuggestionCollection<D>::AppendResultSuggestion(hstring_ref text, hstring_ref detailText, hstring_ref tag, const Windows::Storage::Streams::IRandomAccessStreamReference & image, hstring_ref imageAlternateText) const
{
    check_hresult(shim()->abi_AppendResultSuggestion(get(text), get(detailText), get(tag), get(image), get(imageAlternateText)));
}

template <typename D> void impl_ISearchSuggestionCollection<D>::AppendSearchSeparator(hstring_ref label) const
{
    check_hresult(shim()->abi_AppendSearchSeparator(get(label)));
}

template <typename D> void impl_ILocalContentSuggestionSettings<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> bool impl_ILocalContentSuggestionSettings<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> impl_ILocalContentSuggestionSettings<D>::Locations() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> value;
    check_hresult(shim()->get_Locations(put(value)));
    return value;
}

template <typename D> void impl_ILocalContentSuggestionSettings<D>::AqsFilter(hstring_ref value) const
{
    check_hresult(shim()->put_AqsFilter(get(value)));
}

template <typename D> hstring impl_ILocalContentSuggestionSettings<D>::AqsFilter() const
{
    hstring value;
    check_hresult(shim()->get_AqsFilter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_ILocalContentSuggestionSettings<D>::PropertiesToMatch() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_PropertiesToMatch(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchQueryLinguisticDetails impl_ISearchQueryLinguisticDetailsFactory<D>::CreateInstance(const Windows::Foundation::Collections::IIterable<hstring> & queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails value { nullptr };
    check_hresult(shim()->abi_CreateInstance(get(queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength, put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ISearchQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_QueryTextAlternatives(put(value)));
    return value;
}

template <typename D> uint32_t impl_ISearchQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value {};
    check_hresult(shim()->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t impl_ISearchQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> void impl_ISearchSuggestionsRequestDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> bool impl_ISearchSuggestionsRequest<D>::IsCanceled() const
{
    bool value {};
    check_hresult(shim()->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionCollection impl_ISearchSuggestionsRequest<D>::SearchSuggestionCollection() const
{
    Windows::ApplicationModel::Search::SearchSuggestionCollection collection { nullptr };
    check_hresult(shim()->get_SearchSuggestionCollection(put(collection)));
    return collection;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral impl_ISearchSuggestionsRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> bool impl_ISearchPaneVisibilityChangedEventArgs<D>::Visible() const
{
    bool value {};
    check_hresult(shim()->get_Visible(&value));
    return value;
}

template <typename D> hstring impl_ISearchPaneQueryChangedEventArgs<D>::QueryText() const
{
    hstring value;
    check_hresult(shim()->get_QueryText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPaneQueryChangedEventArgs<D>::Language() const
{
    hstring value;
    check_hresult(shim()->get_Language(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails impl_ISearchPaneQueryChangedEventArgs<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value { nullptr };
    check_hresult(shim()->get_LinguisticDetails(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPaneQuerySubmittedEventArgs<D>::QueryText() const
{
    hstring value;
    check_hresult(shim()->get_QueryText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPaneQuerySubmittedEventArgs<D>::Language() const
{
    hstring value;
    check_hresult(shim()->get_Language(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails impl_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value { nullptr };
    check_hresult(shim()->get_LinguisticDetails(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPaneResultSuggestionChosenEventArgs<D>::Tag() const
{
    hstring value;
    check_hresult(shim()->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_ISearchPaneSuggestionsRequestDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> bool impl_ISearchPaneSuggestionsRequest<D>::IsCanceled() const
{
    bool value {};
    check_hresult(shim()->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionCollection impl_ISearchPaneSuggestionsRequest<D>::SearchSuggestionCollection() const
{
    Windows::ApplicationModel::Search::SearchSuggestionCollection collection { nullptr };
    check_hresult(shim()->get_SearchSuggestionCollection(put(collection)));
    return collection;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral impl_ISearchPaneSuggestionsRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest impl_ISearchPaneSuggestionsRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPane impl_ISearchPaneStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::Search::SearchPane searchPane { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(searchPane)));
    return searchPane;
}

template <typename D> void impl_ISearchPaneStaticsWithHideThisApplication<D>::HideThisApplication() const
{
    check_hresult(shim()->abi_HideThisApplication());
}

template <typename D> void impl_ISearchPane<D>::SearchHistoryEnabled(bool value) const
{
    check_hresult(shim()->put_SearchHistoryEnabled(value));
}

template <typename D> bool impl_ISearchPane<D>::SearchHistoryEnabled() const
{
    bool value {};
    check_hresult(shim()->get_SearchHistoryEnabled(&value));
    return value;
}

template <typename D> void impl_ISearchPane<D>::SearchHistoryContext(hstring_ref value) const
{
    check_hresult(shim()->put_SearchHistoryContext(get(value)));
}

template <typename D> hstring impl_ISearchPane<D>::SearchHistoryContext() const
{
    hstring value;
    check_hresult(shim()->get_SearchHistoryContext(put(value)));
    return value;
}

template <typename D> void impl_ISearchPane<D>::PlaceholderText(hstring_ref value) const
{
    check_hresult(shim()->put_PlaceholderText(get(value)));
}

template <typename D> hstring impl_ISearchPane<D>::PlaceholderText() const
{
    hstring value;
    check_hresult(shim()->get_PlaceholderText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPane<D>::QueryText() const
{
    hstring value;
    check_hresult(shim()->get_QueryText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchPane<D>::Language() const
{
    hstring value;
    check_hresult(shim()->get_Language(put(value)));
    return value;
}

template <typename D> bool impl_ISearchPane<D>::Visible() const
{
    bool value {};
    check_hresult(shim()->get_Visible(&value));
    return value;
}

template <typename D> event_token impl_ISearchPane<D>::VisibilityChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_VisibilityChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchPane> impl_ISearchPane<D>::VisibilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchPane>(this, &ABI::Windows::ApplicationModel::Search::ISearchPane::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void impl_ISearchPane<D>::VisibilityChanged(event_token token) const
{
    check_hresult(shim()->remove_VisibilityChanged(token));
}

template <typename D> event_token impl_ISearchPane<D>::QueryChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_QueryChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchPane> impl_ISearchPane<D>::QueryChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchPane>(this, &ABI::Windows::ApplicationModel::Search::ISearchPane::remove_QueryChanged, QueryChanged(handler));
}

template <typename D> void impl_ISearchPane<D>::QueryChanged(event_token token) const
{
    check_hresult(shim()->remove_QueryChanged(token));
}

template <typename D> event_token impl_ISearchPane<D>::SuggestionsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SuggestionsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchPane> impl_ISearchPane<D>::SuggestionsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchPane>(this, &ABI::Windows::ApplicationModel::Search::ISearchPane::remove_SuggestionsRequested, SuggestionsRequested(handler));
}

template <typename D> void impl_ISearchPane<D>::SuggestionsRequested(event_token token) const
{
    check_hresult(shim()->remove_SuggestionsRequested(token));
}

template <typename D> event_token impl_ISearchPane<D>::QuerySubmitted(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_QuerySubmitted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchPane> impl_ISearchPane<D>::QuerySubmitted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchPane>(this, &ABI::Windows::ApplicationModel::Search::ISearchPane::remove_QuerySubmitted, QuerySubmitted(handler));
}

template <typename D> void impl_ISearchPane<D>::QuerySubmitted(event_token token) const
{
    check_hresult(shim()->remove_QuerySubmitted(token));
}

template <typename D> event_token impl_ISearchPane<D>::ResultSuggestionChosen(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ResultSuggestionChosen(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchPane> impl_ISearchPane<D>::ResultSuggestionChosen(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchPane>(this, &ABI::Windows::ApplicationModel::Search::ISearchPane::remove_ResultSuggestionChosen, ResultSuggestionChosen(handler));
}

template <typename D> void impl_ISearchPane<D>::ResultSuggestionChosen(event_token token) const
{
    check_hresult(shim()->remove_ResultSuggestionChosen(token));
}

template <typename D> void impl_ISearchPane<D>::SetLocalContentSuggestionSettings(const Windows::ApplicationModel::Search::LocalContentSuggestionSettings & settings) const
{
    check_hresult(shim()->abi_SetLocalContentSuggestionSettings(get(settings)));
}

template <typename D> void impl_ISearchPane<D>::Show() const
{
    check_hresult(shim()->abi_ShowOverloadDefault());
}

template <typename D> void impl_ISearchPane<D>::Show(hstring_ref query) const
{
    check_hresult(shim()->abi_ShowOverloadWithQuery(get(query)));
}

template <typename D> void impl_ISearchPane<D>::ShowOnKeyboardInput(bool value) const
{
    check_hresult(shim()->put_ShowOnKeyboardInput(value));
}

template <typename D> bool impl_ISearchPane<D>::ShowOnKeyboardInput() const
{
    bool value {};
    check_hresult(shim()->get_ShowOnKeyboardInput(&value));
    return value;
}

template <typename D> bool impl_ISearchPane<D>::TrySetQueryText(hstring_ref query) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TrySetQueryText(get(query), &succeeded));
    return succeeded;
}

inline LocalContentSuggestionSettings::LocalContentSuggestionSettings() :
    LocalContentSuggestionSettings(activate_instance<LocalContentSuggestionSettings>())
{}

inline Windows::ApplicationModel::Search::SearchPane SearchPane::GetForCurrentView()
{
    return get_activation_factory<SearchPane, ISearchPaneStatics>().GetForCurrentView();
}

inline void SearchPane::HideThisApplication()
{
    get_activation_factory<SearchPane, ISearchPaneStaticsWithHideThisApplication>().HideThisApplication();
}

inline SearchQueryLinguisticDetails::SearchQueryLinguisticDetails(const Windows::Foundation::Collections::IIterable<hstring> & queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) :
    SearchQueryLinguisticDetails(get_activation_factory<SearchQueryLinguisticDetails, ISearchQueryLinguisticDetailsFactory>().CreateInstance(queryTextAlternatives, queryTextCompositionStart, queryTextCompositionLength))
{}

}

}
