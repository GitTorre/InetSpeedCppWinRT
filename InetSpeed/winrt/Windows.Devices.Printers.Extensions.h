// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Devices.Printers.Extensions.3.h"
#include "Windows.Devices.Printers.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
{
    HRESULT __stdcall get_DeviceID(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceID());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPrintModelPackage(abi_arg_out<Windows::IInspectable> printModelPackage) noexcept override
    {
        try
        {
            *printModelPackage = detach(shim().GetPrintModelPackage());
            return S_OK;
        }
        catch (...)
        {
            *printModelPackage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrintReady(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPrintReady());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPrintReady(bool value) noexcept override
    {
        try
        {
            shim().IsPrintReady(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PrintRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().PrintRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintRequested(event_token eventCookie) noexcept override
    {
        try
        {
            shim().PrintRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
{
    HRESULT __stdcall add_PrinterChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().PrinterChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrinterChanged(event_token eventCookie) noexcept override
    {
        try
        {
            shim().PrinterChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::Printers::Extensions::Print3DWorkflowStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail value) noexcept override
    {
        try
        {
            shim().SetExtendedStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSource(abi_arg_in<Windows::IInspectable> source) noexcept override
    {
        try
        {
            shim().SetSource(*reinterpret_cast<const Windows::IInspectable *>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSourceChanged(bool value) noexcept override
    {
        try
        {
            shim().SetSourceChanged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
{
    HRESULT __stdcall get_NewDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NewDeviceId());
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
struct produce<D, Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
{
    HRESULT __stdcall abi_FromDeviceId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::IInspectable> context) noexcept override
    {
        try
        {
            *context = detach(shim().FromDeviceId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
{
    HRESULT __stdcall get_PrinterName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PrinterName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EventData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EventData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EventData(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().EventData(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
{
    HRESULT __stdcall get_PrinterExtensionContext(abi_arg_out<Windows::IInspectable> context) noexcept override
    {
        try
        {
            *context = detach(shim().PrinterExtensionContext());
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SaveRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().SaveRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SaveRequested(event_token eventCookie) noexcept override
    {
        try
        {
            shim().SaveRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
{
    HRESULT __stdcall abi_Cancel() noexcept override
    {
        try
        {
            shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Save(abi_arg_in<Windows::IInspectable> printerExtensionContext) noexcept override
    {
        try
        {
            shim().Save(*reinterpret_cast<const Windows::IInspectable *>(&printerExtensionContext));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> deferral) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
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
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> context) noexcept override
    {
        try
        {
            *context = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Printers::Extensions {

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflowStatus impl_IPrint3DWorkflowPrintRequestedEventArgs<D>::Status() const
{
    Windows::Devices::Printers::Extensions::Print3DWorkflowStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> void impl_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail value) const
{
    check_hresult(shim()->abi_SetExtendedStatus(value));
}

template <typename D> void impl_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSource(const Windows::IInspectable & source) const
{
    check_hresult(shim()->abi_SetSource(get(source)));
}

template <typename D> void impl_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSourceChanged(bool value) const
{
    check_hresult(shim()->abi_SetSourceChanged(value));
}

template <typename D> hstring impl_IPrint3DWorkflowPrinterChangedEventArgs<D>::NewDeviceId() const
{
    hstring value;
    check_hresult(shim()->get_NewDeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IPrint3DWorkflow<D>::DeviceID() const
{
    hstring value;
    check_hresult(shim()->get_DeviceID(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IPrint3DWorkflow<D>::GetPrintModelPackage() const
{
    Windows::IInspectable printModelPackage;
    check_hresult(shim()->abi_GetPrintModelPackage(put(printModelPackage)));
    return printModelPackage;
}

template <typename D> bool impl_IPrint3DWorkflow<D>::IsPrintReady() const
{
    bool value {};
    check_hresult(shim()->get_IsPrintReady(&value));
    return value;
}

template <typename D> void impl_IPrint3DWorkflow<D>::IsPrintReady(bool value) const
{
    check_hresult(shim()->put_IsPrintReady(value));
}

template <typename D> event_token impl_IPrint3DWorkflow<D>::PrintRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_PrintRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrint3DWorkflow> impl_IPrint3DWorkflow<D>::PrintRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrint3DWorkflow>(this, &ABI::Windows::Devices::Printers::Extensions::IPrint3DWorkflow::remove_PrintRequested, PrintRequested(eventHandler));
}

template <typename D> void impl_IPrint3DWorkflow<D>::PrintRequested(event_token eventCookie) const
{
    check_hresult(shim()->remove_PrintRequested(eventCookie));
}

template <typename D> event_token impl_IPrint3DWorkflow2<D>::PrinterChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_PrinterChanged(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrint3DWorkflow2> impl_IPrint3DWorkflow2<D>::PrinterChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrint3DWorkflow2>(this, &ABI::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2::remove_PrinterChanged, PrinterChanged(eventHandler));
}

template <typename D> void impl_IPrint3DWorkflow2<D>::PrinterChanged(event_token eventCookie) const
{
    check_hresult(shim()->remove_PrinterChanged(eventCookie));
}

template <typename D> void impl_IPrintTaskConfigurationSaveRequestedDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> void impl_IPrintTaskConfigurationSaveRequest<D>::Cancel() const
{
    check_hresult(shim()->abi_Cancel());
}

template <typename D> void impl_IPrintTaskConfigurationSaveRequest<D>::Save(const Windows::IInspectable & printerExtensionContext) const
{
    check_hresult(shim()->abi_Save(get(printerExtensionContext)));
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral impl_IPrintTaskConfigurationSaveRequest<D>::GetDeferral() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime impl_IPrintTaskConfigurationSaveRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest impl_IPrintTaskConfigurationSaveRequestedEventArgs<D>::Request() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest context { nullptr };
    check_hresult(shim()->get_Request(put(context)));
    return context;
}

template <typename D> Windows::IInspectable impl_IPrintTaskConfiguration<D>::PrinterExtensionContext() const
{
    Windows::IInspectable context;
    check_hresult(shim()->get_PrinterExtensionContext(put(context)));
    return context;
}

template <typename D> event_token impl_IPrintTaskConfiguration<D>::SaveRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_SaveRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTaskConfiguration> impl_IPrintTaskConfiguration<D>::SaveRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTaskConfiguration>(this, &ABI::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration::remove_SaveRequested, SaveRequested(eventHandler));
}

template <typename D> void impl_IPrintTaskConfiguration<D>::SaveRequested(event_token eventCookie) const
{
    check_hresult(shim()->remove_SaveRequested(eventCookie));
}

template <typename D> hstring impl_IPrintNotificationEventDetails<D>::PrinterName() const
{
    hstring value;
    check_hresult(shim()->get_PrinterName(put(value)));
    return value;
}

template <typename D> hstring impl_IPrintNotificationEventDetails<D>::EventData() const
{
    hstring value;
    check_hresult(shim()->get_EventData(put(value)));
    return value;
}

template <typename D> void impl_IPrintNotificationEventDetails<D>::EventData(hstring_ref value) const
{
    check_hresult(shim()->put_EventData(get(value)));
}

template <typename D> Windows::IInspectable impl_IPrintExtensionContextStatic<D>::FromDeviceId(hstring_ref deviceId) const
{
    Windows::IInspectable context;
    check_hresult(shim()->abi_FromDeviceId(get(deviceId), put(context)));
    return context;
}

inline Windows::IInspectable PrintExtensionContext::FromDeviceId(hstring_ref deviceId)
{
    return get_activation_factory<PrintExtensionContext, IPrintExtensionContextStatic>().FromDeviceId(deviceId);
}

}

}
