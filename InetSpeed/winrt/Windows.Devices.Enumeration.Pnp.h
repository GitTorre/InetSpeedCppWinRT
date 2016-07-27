// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Devices.Enumeration.3.h"
#include "internal\Windows.Devices.Enumeration.Pnp.3.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObject> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObject>
{
    HRESULT __stdcall get_Type(Windows::Devices::Enumeration::Pnp::PnpObjectType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
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

    HRESULT __stdcall abi_Update(abi_arg_in<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> updateInfo) noexcept override
    {
        try
        {
            shim().Update(*reinterpret_cast<const Windows::Devices::Enumeration::Pnp::PnpObjectUpdate *>(&updateInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
{
    HRESULT __stdcall abi_CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, abi_arg_in<hstring> id, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requestedProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().CreateFromIdAsync(type, *reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requestedProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().FindAllAsync(type, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsyncAqsFilter(Windows::Devices::Enumeration::Pnp::PnpObjectType type, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requestedProperties, abi_arg_in<hstring> aqsFilter, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().FindAllAsync(type, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requestedProperties), *reinterpret_cast<const hstring *>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requestedProperties, abi_arg_out<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(shim().CreateWatcher(type, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWatcherAqsFilter(Windows::Devices::Enumeration::Pnp::PnpObjectType type, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requestedProperties, abi_arg_in<hstring> aqsFilter, abi_arg_out<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(shim().CreateWatcher(type, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requestedProperties), *reinterpret_cast<const hstring *>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
{
    HRESULT __stdcall get_Type(Windows::Devices::Enumeration::Pnp::PnpObjectType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
{
    HRESULT __stdcall add_Added(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept override
    {
        try
        {
            shim().Added(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Updated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept override
    {
        try
        {
            shim().Updated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            shim().Removed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus * status) noexcept override
    {
        try
        {
            *status = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Enumeration::Pnp {

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType impl_IPnpObjectUpdate<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> hstring impl_IPnpObjectUpdate<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IPnpObjectUpdate<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> event_token impl_IPnpObjectWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Added(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPnpObjectWatcher> impl_IPnpObjectWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> & handler) const
{
    return impl::make_event_revoker<D, IPnpObjectWatcher>(this, &ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IPnpObjectWatcher<D>::Added(event_token token) const
{
    check_hresult(shim()->remove_Added(token));
}

template <typename D> event_token impl_IPnpObjectWatcher<D>::Updated(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Updated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPnpObjectWatcher> impl_IPnpObjectWatcher<D>::Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> & handler) const
{
    return impl::make_event_revoker<D, IPnpObjectWatcher>(this, &ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher::remove_Updated, Updated(handler));
}

template <typename D> void impl_IPnpObjectWatcher<D>::Updated(event_token token) const
{
    check_hresult(shim()->remove_Updated(token));
}

template <typename D> event_token impl_IPnpObjectWatcher<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Removed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPnpObjectWatcher> impl_IPnpObjectWatcher<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> & handler) const
{
    return impl::make_event_revoker<D, IPnpObjectWatcher>(this, &ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher::remove_Removed, Removed(handler));
}

template <typename D> void impl_IPnpObjectWatcher<D>::Removed(event_token token) const
{
    check_hresult(shim()->remove_Removed(token));
}

template <typename D> event_token impl_IPnpObjectWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPnpObjectWatcher> impl_IPnpObjectWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPnpObjectWatcher>(this, &ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IPnpObjectWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(shim()->remove_EnumerationCompleted(token));
}

template <typename D> event_token impl_IPnpObjectWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPnpObjectWatcher> impl_IPnpObjectWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPnpObjectWatcher>(this, &ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IPnpObjectWatcher<D>::Stopped(event_token token) const
{
    check_hresult(shim()->remove_Stopped(token));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus impl_IPnpObjectWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus status {};
    check_hresult(shim()->get_Status(&status));
    return status;
}

template <typename D> void impl_IPnpObjectWatcher<D>::Start() const
{
    check_hresult(shim()->abi_Start());
}

template <typename D> void impl_IPnpObjectWatcher<D>::Stop() const
{
    check_hresult(shim()->abi_Stop());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> impl_IPnpObjectStatics<D>::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, hstring_ref id, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> asyncOp;
    check_hresult(shim()->abi_CreateFromIdAsync(type, get(id), get(requestedProperties), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> impl_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp;
    check_hresult(shim()->abi_FindAllAsync(type, get(requestedProperties), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> impl_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp;
    check_hresult(shim()->abi_FindAllAsyncAqsFilter(type, get(requestedProperties), get(aqsFilter), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher impl_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher { nullptr };
    check_hresult(shim()->abi_CreateWatcher(type, get(requestedProperties), put(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher impl_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher { nullptr };
    check_hresult(shim()->abi_CreateWatcherAqsFilter(type, get(requestedProperties), get(aqsFilter), put(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType impl_IPnpObject<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> hstring impl_IPnpObject<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IPnpObject<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> void impl_IPnpObject<D>::Update(const Windows::Devices::Enumeration::Pnp::PnpObjectUpdate & updateInfo) const
{
    check_hresult(shim()->abi_Update(get(updateInfo)));
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> PnpObject::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, hstring_ref id, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties)
{
    return get_activation_factory<PnpObject, IPnpObjectStatics>().CreateFromIdAsync(type, id, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties)
{
    return get_activation_factory<PnpObject, IPnpObjectStatics>().FindAllAsync(type, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter)
{
    return get_activation_factory<PnpObject, IPnpObjectStatics>().FindAllAsync(type, requestedProperties, aqsFilter);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties)
{
    return get_activation_factory<PnpObject, IPnpObjectStatics>().CreateWatcher(type, requestedProperties);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter)
{
    return get_activation_factory<PnpObject, IPnpObjectStatics>().CreateWatcher(type, requestedProperties, aqsFilter);
}

}

}
