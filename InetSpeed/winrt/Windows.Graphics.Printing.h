// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.DataTransfer.3.h"
#include "internal\Windows.Graphics.Printing.3.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Printing {

template <typename L> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(L lambda) :
    PrintTaskSourceRequestedHandler(impl::make_delegate<impl_PrintTaskSourceRequestedHandler<L>, PrintTaskSourceRequestedHandler>(std::forward<L>(lambda)))
{}

template <typename F> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(F * function) :
    PrintTaskSourceRequestedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(O * object, M method) :
    PrintTaskSourceRequestedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PrintTaskSourceRequestedHandler::operator()(const Windows::Graphics::Printing::PrintTaskSourceRequestedArgs & args) const
{
    check_hresult((*this)->abi_Invoke(get(args)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintDocumentSource> : produce_base<D, Windows::Graphics::Printing::IPrintDocumentSource>
{};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManager> : produce_base<D, Windows::Graphics::Printing::IPrintManager>
{
    HRESULT __stdcall add_PrintTaskRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().PrintTaskRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintTaskRequested(event_token eventCookie) noexcept override
    {
        try
        {
            shim().PrintTaskRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Graphics::Printing::IPrintManager> printingManager) noexcept override
    {
        try
        {
            *printingManager = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *printingManager = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowPrintUIAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowPrintUIAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic2> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic2>
{
    HRESULT __stdcall abi_IsSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintPageInfo> : produce_base<D, Windows::Graphics::Printing::IPrintPageInfo>
{
    HRESULT __stdcall put_MediaSize(Windows::Graphics::Printing::PrintMediaSize value) noexcept override
    {
        try
        {
            shim().MediaSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSize(Windows::Graphics::Printing::PrintMediaSize * value) noexcept override
    {
        try
        {
            *value = detach(shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PageSize(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            shim().PageSize(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().PageSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiX(uint32_t value) noexcept override
    {
        try
        {
            shim().DpiX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiY(uint32_t value) noexcept override
    {
        try
        {
            shim().DpiY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::Graphics::Printing::PrintOrientation value) noexcept override
    {
        try
        {
            shim().Orientation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Graphics::Printing::PrintOrientation * value) noexcept override
    {
        try
        {
            *value = detach(shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTask> : produce_base<D, Windows::Graphics::Printing::IPrintTask>
{
    HRESULT __stdcall get_Properties(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Graphics::Printing::IPrintDocumentSource> value) noexcept override
    {
        try
        {
            *value = detach(shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(abi_arg_out<Windows::Graphics::Printing::IPrintTaskOptionsCore> value) noexcept override
    {
        try
        {
            *value = detach(shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Previewing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().Previewing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Previewing(event_token eventCookie) noexcept override
    {
        try
        {
            shim().Previewing(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Submitting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().Submitting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Submitting(event_token eventCookie) noexcept override
    {
        try
        {
            shim().Submitting(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Progressing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().Progressing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Progressing(event_token eventCookie) noexcept override
    {
        try
        {
            shim().Progressing(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token eventCookie) noexcept override
    {
        try
        {
            shim().Completed(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTask2> : produce_base<D, Windows::Graphics::Printing::IPrintTask2>
{
    HRESULT __stdcall put_IsPreviewEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsPreviewEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPreviewEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPreviewEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>
{
    HRESULT __stdcall get_Completion(Windows::Graphics::Printing::PrintTaskCompletion * value) noexcept override
    {
        try
        {
            *value = detach(shim().Completion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptions> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptions>
{
    HRESULT __stdcall put_Bordering(Windows::Graphics::Printing::PrintBordering value) noexcept override
    {
        try
        {
            shim().Bordering(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bordering(Windows::Graphics::Printing::PrintBordering * value) noexcept override
    {
        try
        {
            *value = detach(shim().Bordering());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPagePrintTicket(abi_arg_in<Windows::Graphics::Printing::IPrintPageInfo> printPageInfo, abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> printTicket) noexcept override
    {
        try
        {
            *printTicket = detach(shim().GetPagePrintTicket(*reinterpret_cast<const Windows::Graphics::Printing::PrintPageInfo *>(&printPageInfo)));
            return S_OK;
        }
        catch (...)
        {
            *printTicket = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCore> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCore>
{
    HRESULT __stdcall abi_GetPageDescription(uint32_t jobPageNumber, abi_arg_out<Windows::Graphics::Printing::PrintPageDescription> description) noexcept override
    {
        try
        {
            *description = detach(shim().GetPageDescription(jobPageNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>
{
    HRESULT __stdcall put_MediaSize(Windows::Graphics::Printing::PrintMediaSize value) noexcept override
    {
        try
        {
            shim().MediaSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSize(Windows::Graphics::Printing::PrintMediaSize * value) noexcept override
    {
        try
        {
            *value = detach(shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(Windows::Graphics::Printing::PrintMediaType value) noexcept override
    {
        try
        {
            shim().MediaType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(Windows::Graphics::Printing::PrintMediaType * value) noexcept override
    {
        try
        {
            *value = detach(shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::Graphics::Printing::PrintOrientation value) noexcept override
    {
        try
        {
            shim().Orientation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Graphics::Printing::PrintOrientation * value) noexcept override
    {
        try
        {
            *value = detach(shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrintQuality(Windows::Graphics::Printing::PrintQuality value) noexcept override
    {
        try
        {
            shim().PrintQuality(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintQuality(Windows::Graphics::Printing::PrintQuality * value) noexcept override
    {
        try
        {
            *value = detach(shim().PrintQuality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorMode(Windows::Graphics::Printing::PrintColorMode value) noexcept override
    {
        try
        {
            shim().ColorMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorMode(Windows::Graphics::Printing::PrintColorMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ColorMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duplex(Windows::Graphics::Printing::PrintDuplex value) noexcept override
    {
        try
        {
            shim().Duplex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duplex(Windows::Graphics::Printing::PrintDuplex * value) noexcept override
    {
        try
        {
            *value = detach(shim().Duplex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Collation(Windows::Graphics::Printing::PrintCollation value) noexcept override
    {
        try
        {
            shim().Collation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collation(Windows::Graphics::Printing::PrintCollation * value) noexcept override
    {
        try
        {
            *value = detach(shim().Collation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Staple(Windows::Graphics::Printing::PrintStaple value) noexcept override
    {
        try
        {
            shim().Staple(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Staple(Windows::Graphics::Printing::PrintStaple * value) noexcept override
    {
        try
        {
            *value = detach(shim().Staple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HolePunch(Windows::Graphics::Printing::PrintHolePunch value) noexcept override
    {
        try
        {
            shim().HolePunch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HolePunch(Windows::Graphics::Printing::PrintHolePunch * value) noexcept override
    {
        try
        {
            *value = detach(shim().HolePunch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Binding(Windows::Graphics::Printing::PrintBinding value) noexcept override
    {
        try
        {
            shim().Binding(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Binding(Windows::Graphics::Printing::PrintBinding * value) noexcept override
    {
        try
        {
            *value = detach(shim().Binding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinCopies(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinCopies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCopies(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxCopies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumberOfCopies(uint32_t value) noexcept override
    {
        try
        {
            shim().NumberOfCopies(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfCopies(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().NumberOfCopies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
{
    HRESULT __stdcall get_DisplayedOptions(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayedOptions());
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>
{
    HRESULT __stdcall get_DocumentPageCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DocumentPageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequest> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequest>
{
    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePrintTask(abi_arg_in<hstring> title, abi_arg_in<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler> handler, abi_arg_out<Windows::Graphics::Printing::IPrintTask> task) noexcept override
    {
        try
        {
            *task = detach(shim().CreatePrintTask(*reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const Windows::Graphics::Printing::PrintTaskSourceRequestedHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *task = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Graphics::Printing::IPrintTaskRequestedDeferral> deferral) noexcept override
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral>
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::Graphics::Printing::IPrintTaskRequest> value) noexcept override
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>
{
    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSource(abi_arg_in<Windows::Graphics::Printing::IPrintDocumentSource> source) noexcept override
    {
        try
        {
            shim().SetSource(*reinterpret_cast<const Windows::Graphics::Printing::IPrintDocumentSource *>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> deferral) noexcept override
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
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
struct produce<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> : produce_base<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
{
    HRESULT __stdcall put_IsPrinterTargetEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsPrinterTargetEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrinterTargetEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPrinterTargetEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Is3DManufacturingTargetEnabled(bool value) noexcept override
    {
        try
        {
            shim().Is3DManufacturingTargetEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DManufacturingTargetEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Is3DManufacturingTargetEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>
{
    HRESULT __stdcall get_MediaSize(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintQuality(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PrintQuality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorMode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ColorMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duplex(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Duplex());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Collation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Staple(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Staple());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HolePunch(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HolePunch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Binding(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Binding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Copies(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Copies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NUp(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NUp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputBin(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().InputBin());
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
struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
{
    HRESULT __stdcall get_Bordering(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Bordering());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Printing {

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize value) const
{
    check_hresult(shim()->put_MediaSize(value));
}

template <typename D> Windows::Graphics::Printing::PrintMediaSize impl_IPrintTaskOptionsCoreProperties<D>::MediaSize() const
{
    Windows::Graphics::Printing::PrintMediaSize value {};
    check_hresult(shim()->get_MediaSize(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::MediaType(Windows::Graphics::Printing::PrintMediaType value) const
{
    check_hresult(shim()->put_MediaType(value));
}

template <typename D> Windows::Graphics::Printing::PrintMediaType impl_IPrintTaskOptionsCoreProperties<D>::MediaType() const
{
    Windows::Graphics::Printing::PrintMediaType value {};
    check_hresult(shim()->get_MediaType(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::Orientation(Windows::Graphics::Printing::PrintOrientation value) const
{
    check_hresult(shim()->put_Orientation(value));
}

template <typename D> Windows::Graphics::Printing::PrintOrientation impl_IPrintTaskOptionsCoreProperties<D>::Orientation() const
{
    Windows::Graphics::Printing::PrintOrientation value {};
    check_hresult(shim()->get_Orientation(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::PrintQuality(Windows::Graphics::Printing::PrintQuality value) const
{
    check_hresult(shim()->put_PrintQuality(value));
}

template <typename D> Windows::Graphics::Printing::PrintQuality impl_IPrintTaskOptionsCoreProperties<D>::PrintQuality() const
{
    Windows::Graphics::Printing::PrintQuality value {};
    check_hresult(shim()->get_PrintQuality(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::ColorMode(Windows::Graphics::Printing::PrintColorMode value) const
{
    check_hresult(shim()->put_ColorMode(value));
}

template <typename D> Windows::Graphics::Printing::PrintColorMode impl_IPrintTaskOptionsCoreProperties<D>::ColorMode() const
{
    Windows::Graphics::Printing::PrintColorMode value {};
    check_hresult(shim()->get_ColorMode(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::Duplex(Windows::Graphics::Printing::PrintDuplex value) const
{
    check_hresult(shim()->put_Duplex(value));
}

template <typename D> Windows::Graphics::Printing::PrintDuplex impl_IPrintTaskOptionsCoreProperties<D>::Duplex() const
{
    Windows::Graphics::Printing::PrintDuplex value {};
    check_hresult(shim()->get_Duplex(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::Collation(Windows::Graphics::Printing::PrintCollation value) const
{
    check_hresult(shim()->put_Collation(value));
}

template <typename D> Windows::Graphics::Printing::PrintCollation impl_IPrintTaskOptionsCoreProperties<D>::Collation() const
{
    Windows::Graphics::Printing::PrintCollation value {};
    check_hresult(shim()->get_Collation(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::Staple(Windows::Graphics::Printing::PrintStaple value) const
{
    check_hresult(shim()->put_Staple(value));
}

template <typename D> Windows::Graphics::Printing::PrintStaple impl_IPrintTaskOptionsCoreProperties<D>::Staple() const
{
    Windows::Graphics::Printing::PrintStaple value {};
    check_hresult(shim()->get_Staple(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::HolePunch(Windows::Graphics::Printing::PrintHolePunch value) const
{
    check_hresult(shim()->put_HolePunch(value));
}

template <typename D> Windows::Graphics::Printing::PrintHolePunch impl_IPrintTaskOptionsCoreProperties<D>::HolePunch() const
{
    Windows::Graphics::Printing::PrintHolePunch value {};
    check_hresult(shim()->get_HolePunch(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::Binding(Windows::Graphics::Printing::PrintBinding value) const
{
    check_hresult(shim()->put_Binding(value));
}

template <typename D> Windows::Graphics::Printing::PrintBinding impl_IPrintTaskOptionsCoreProperties<D>::Binding() const
{
    Windows::Graphics::Printing::PrintBinding value {};
    check_hresult(shim()->get_Binding(&value));
    return value;
}

template <typename D> uint32_t impl_IPrintTaskOptionsCoreProperties<D>::MinCopies() const
{
    uint32_t value {};
    check_hresult(shim()->get_MinCopies(&value));
    return value;
}

template <typename D> uint32_t impl_IPrintTaskOptionsCoreProperties<D>::MaxCopies() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxCopies(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies(uint32_t value) const
{
    check_hresult(shim()->put_NumberOfCopies(value));
}

template <typename D> uint32_t impl_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies() const
{
    uint32_t value {};
    check_hresult(shim()->get_NumberOfCopies(&value));
    return value;
}

template <typename D> void impl_IPrintPageInfo<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize value) const
{
    check_hresult(shim()->put_MediaSize(value));
}

template <typename D> Windows::Graphics::Printing::PrintMediaSize impl_IPrintPageInfo<D>::MediaSize() const
{
    Windows::Graphics::Printing::PrintMediaSize value {};
    check_hresult(shim()->get_MediaSize(&value));
    return value;
}

template <typename D> void impl_IPrintPageInfo<D>::PageSize(const Windows::Foundation::Size & value) const
{
    check_hresult(shim()->put_PageSize(get(value)));
}

template <typename D> Windows::Foundation::Size impl_IPrintPageInfo<D>::PageSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_PageSize(put(value)));
    return value;
}

template <typename D> void impl_IPrintPageInfo<D>::DpiX(uint32_t value) const
{
    check_hresult(shim()->put_DpiX(value));
}

template <typename D> uint32_t impl_IPrintPageInfo<D>::DpiX() const
{
    uint32_t value {};
    check_hresult(shim()->get_DpiX(&value));
    return value;
}

template <typename D> void impl_IPrintPageInfo<D>::DpiY(uint32_t value) const
{
    check_hresult(shim()->put_DpiY(value));
}

template <typename D> uint32_t impl_IPrintPageInfo<D>::DpiY() const
{
    uint32_t value {};
    check_hresult(shim()->get_DpiY(&value));
    return value;
}

template <typename D> void impl_IPrintPageInfo<D>::Orientation(Windows::Graphics::Printing::PrintOrientation value) const
{
    check_hresult(shim()->put_Orientation(value));
}

template <typename D> Windows::Graphics::Printing::PrintOrientation impl_IPrintPageInfo<D>::Orientation() const
{
    Windows::Graphics::Printing::PrintOrientation value {};
    check_hresult(shim()->get_Orientation(&value));
    return value;
}

template <typename D> void impl_IPrintTaskOptions<D>::Bordering(Windows::Graphics::Printing::PrintBordering value) const
{
    check_hresult(shim()->put_Bordering(value));
}

template <typename D> Windows::Graphics::Printing::PrintBordering impl_IPrintTaskOptions<D>::Bordering() const
{
    Windows::Graphics::Printing::PrintBordering value {};
    check_hresult(shim()->get_Bordering(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_IPrintTaskOptions<D>::GetPagePrintTicket(const Windows::Graphics::Printing::PrintPageInfo & printPageInfo) const
{
    Windows::Storage::Streams::IRandomAccessStream printTicket;
    check_hresult(shim()->abi_GetPagePrintTicket(get(printPageInfo), put(printTicket)));
    return printTicket;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IPrintTaskOptionsCoreUIConfiguration<D>::DisplayedOptions() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_DisplayedOptions(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintPageDescription impl_IPrintTaskOptionsCore<D>::GetPageDescription(uint32_t jobPageNumber) const
{
    Windows::Graphics::Printing::PrintPageDescription description {};
    check_hresult(shim()->abi_GetPageDescription(jobPageNumber, put(description)));
    return description;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::MediaSize() const
{
    hstring value;
    check_hresult(shim()->get_MediaSize(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::MediaType() const
{
    hstring value;
    check_hresult(shim()->get_MediaType(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Orientation() const
{
    hstring value;
    check_hresult(shim()->get_Orientation(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::PrintQuality() const
{
    hstring value;
    check_hresult(shim()->get_PrintQuality(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::ColorMode() const
{
    hstring value;
    check_hresult(shim()->get_ColorMode(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Duplex() const
{
    hstring value;
    check_hresult(shim()->get_Duplex(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Collation() const
{
    hstring value;
    check_hresult(shim()->get_Collation(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Staple() const
{
    hstring value;
    check_hresult(shim()->get_Staple(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::HolePunch() const
{
    hstring value;
    check_hresult(shim()->get_HolePunch(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Binding() const
{
    hstring value;
    check_hresult(shim()->get_Binding(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::Copies() const
{
    hstring value;
    check_hresult(shim()->get_Copies(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::NUp() const
{
    hstring value;
    check_hresult(shim()->get_NUp(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic<D>::InputBin() const
{
    hstring value;
    check_hresult(shim()->get_InputBin(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardPrintTaskOptionsStatic2<D>::Bordering() const
{
    hstring value;
    check_hresult(shim()->get_Bordering(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPrintTaskProgressingEventArgs<D>::DocumentPageCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_DocumentPageCount(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskCompletion impl_IPrintTaskCompletedEventArgs<D>::Completion() const
{
    Windows::Graphics::Printing::PrintTaskCompletion value {};
    check_hresult(shim()->get_Completion(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySet impl_IPrintTask<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet value { nullptr };
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::IPrintDocumentSource impl_IPrintTask<D>::Source() const
{
    Windows::Graphics::Printing::IPrintDocumentSource value;
    check_hresult(shim()->get_Source(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions impl_IPrintTask<D>::Options() const
{
    Windows::Graphics::Printing::PrintTaskOptions value { nullptr };
    check_hresult(shim()->get_Options(put(value)));
    return value;
}

template <typename D> event_token impl_IPrintTask<D>::Previewing(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_Previewing(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTask> impl_IPrintTask<D>::Previewing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTask>(this, &ABI::Windows::Graphics::Printing::IPrintTask::remove_Previewing, Previewing(eventHandler));
}

template <typename D> void impl_IPrintTask<D>::Previewing(event_token eventCookie) const
{
    check_hresult(shim()->remove_Previewing(eventCookie));
}

template <typename D> event_token impl_IPrintTask<D>::Submitting(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_Submitting(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTask> impl_IPrintTask<D>::Submitting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTask>(this, &ABI::Windows::Graphics::Printing::IPrintTask::remove_Submitting, Submitting(eventHandler));
}

template <typename D> void impl_IPrintTask<D>::Submitting(event_token eventCookie) const
{
    check_hresult(shim()->remove_Submitting(eventCookie));
}

template <typename D> event_token impl_IPrintTask<D>::Progressing(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_Progressing(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTask> impl_IPrintTask<D>::Progressing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTask>(this, &ABI::Windows::Graphics::Printing::IPrintTask::remove_Progressing, Progressing(eventHandler));
}

template <typename D> void impl_IPrintTask<D>::Progressing(event_token eventCookie) const
{
    check_hresult(shim()->remove_Progressing(eventCookie));
}

template <typename D> event_token impl_IPrintTask<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_Completed(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTask> impl_IPrintTask<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTask>(this, &ABI::Windows::Graphics::Printing::IPrintTask::remove_Completed, Completed(eventHandler));
}

template <typename D> void impl_IPrintTask<D>::Completed(event_token eventCookie) const
{
    check_hresult(shim()->remove_Completed(eventCookie));
}

template <typename D> void impl_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled(bool value) const
{
    check_hresult(shim()->put_IsPrinterTargetEnabled(value));
}

template <typename D> bool impl_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsPrinterTargetEnabled(&value));
    return value;
}

template <typename D> void impl_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled(bool value) const
{
    check_hresult(shim()->put_Is3DManufacturingTargetEnabled(value));
}

template <typename D> bool impl_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled() const
{
    bool value {};
    check_hresult(shim()->get_Is3DManufacturingTargetEnabled(&value));
    return value;
}

template <typename D> void impl_IPrintTask2<D>::IsPreviewEnabled(bool value) const
{
    check_hresult(shim()->put_IsPreviewEnabled(value));
}

template <typename D> bool impl_IPrintTask2<D>::IsPreviewEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsPreviewEnabled(&value));
    return value;
}

template <typename D> void impl_IPrintTaskSourceRequestedDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> Windows::Foundation::DateTime impl_IPrintTaskSourceRequestedArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> void impl_IPrintTaskSourceRequestedArgs<D>::SetSource(const Windows::Graphics::Printing::IPrintDocumentSource & source) const
{
    check_hresult(shim()->abi_SetSource(get(source)));
}

template <typename D> Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral impl_IPrintTaskSourceRequestedArgs<D>::GetDeferral() const
{
    Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> void impl_IPrintTaskRequestedDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> Windows::Foundation::DateTime impl_IPrintTaskRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTask impl_IPrintTaskRequest<D>::CreatePrintTask(hstring_ref title, const Windows::Graphics::Printing::PrintTaskSourceRequestedHandler & handler) const
{
    Windows::Graphics::Printing::PrintTask task { nullptr };
    check_hresult(shim()->abi_CreatePrintTask(get(title), get(handler), put(task)));
    return task;
}

template <typename D> Windows::Graphics::Printing::PrintTaskRequestedDeferral impl_IPrintTaskRequest<D>::GetDeferral() const
{
    Windows::Graphics::Printing::PrintTaskRequestedDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::Graphics::Printing::PrintTaskRequest impl_IPrintTaskRequestedEventArgs<D>::Request() const
{
    Windows::Graphics::Printing::PrintTaskRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintManager impl_IPrintManagerStatic<D>::GetForCurrentView() const
{
    Windows::Graphics::Printing::PrintManager printingManager { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(printingManager)));
    return printingManager;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPrintManagerStatic<D>::ShowPrintUIAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowPrintUIAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_IPrintManagerStatic2<D>::IsSupported() const
{
    bool result {};
    check_hresult(shim()->abi_IsSupported(&result));
    return result;
}

template <typename D> event_token impl_IPrintManager<D>::PrintTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_PrintTaskRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintManager> impl_IPrintManager<D>::PrintTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintManager>(this, &ABI::Windows::Graphics::Printing::IPrintManager::remove_PrintTaskRequested, PrintTaskRequested(eventHandler));
}

template <typename D> void impl_IPrintManager<D>::PrintTaskRequested(event_token eventCookie) const
{
    check_hresult(shim()->remove_PrintTaskRequested(eventCookie));
}

inline Windows::Graphics::Printing::PrintManager PrintManager::GetForCurrentView()
{
    return get_activation_factory<PrintManager, IPrintManagerStatic>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> PrintManager::ShowPrintUIAsync()
{
    return get_activation_factory<PrintManager, IPrintManagerStatic>().ShowPrintUIAsync();
}

inline bool PrintManager::IsSupported()
{
    return get_activation_factory<PrintManager, IPrintManagerStatic2>().IsSupported();
}

inline PrintPageInfo::PrintPageInfo() :
    PrintPageInfo(activate_instance<PrintPageInfo>())
{}

inline hstring StandardPrintTaskOptions::MediaSize()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().MediaSize();
}

inline hstring StandardPrintTaskOptions::MediaType()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().MediaType();
}

inline hstring StandardPrintTaskOptions::Orientation()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Orientation();
}

inline hstring StandardPrintTaskOptions::PrintQuality()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().PrintQuality();
}

inline hstring StandardPrintTaskOptions::ColorMode()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().ColorMode();
}

inline hstring StandardPrintTaskOptions::Duplex()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Duplex();
}

inline hstring StandardPrintTaskOptions::Collation()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Collation();
}

inline hstring StandardPrintTaskOptions::Staple()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Staple();
}

inline hstring StandardPrintTaskOptions::HolePunch()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().HolePunch();
}

inline hstring StandardPrintTaskOptions::Binding()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Binding();
}

inline hstring StandardPrintTaskOptions::Copies()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().Copies();
}

inline hstring StandardPrintTaskOptions::NUp()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().NUp();
}

inline hstring StandardPrintTaskOptions::InputBin()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic>().InputBin();
}

inline hstring StandardPrintTaskOptions::Bordering()
{
    return get_activation_factory<StandardPrintTaskOptions, IStandardPrintTaskOptionsStatic2>().Bordering();
}

}

}
