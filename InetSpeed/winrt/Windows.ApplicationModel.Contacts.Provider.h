// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.ApplicationModel.Contacts.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.ApplicationModel.Contacts.Provider.3.h"
#include "Windows.ApplicationModel.Contacts.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
{
    HRESULT __stdcall abi_AddContact(abi_arg_in<hstring> id, abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, Windows::ApplicationModel::Contacts::Provider::AddContactResult * result) noexcept override
    {
        try
        {
            *result = detach(shim().AddContact(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveContact(abi_arg_in<hstring> id) noexcept override
    {
        try
        {
            shim().RemoveContact(*reinterpret_cast<const hstring *>(&id));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ContainsContact(abi_arg_in<hstring> id, bool * isContained) noexcept override
    {
        try
        {
            *isContained = detach(shim().ContainsContact(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFields(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContactRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ContactRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactRemoved(event_token token) noexcept override
    {
        try
        {
            shim().ContactRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
{
    HRESULT __stdcall abi_AddContact(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, Windows::ApplicationModel::Contacts::Provider::AddContactResult * result) noexcept override
    {
        try
        {
            *result = detach(shim().AddContact(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFieldsWithContactFieldType(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredFieldsWithContactFieldType());
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
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
{
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
};

}

namespace Windows::ApplicationModel::Contacts::Provider {

template <typename D> hstring impl_IContactRemovedEventArgs<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::AddContactResult impl_IContactPickerUI<D>::AddContact(hstring_ref id, const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::ApplicationModel::Contacts::Provider::AddContactResult result {};
    check_hresult(shim()->abi_AddContact(get(id), get(contact), &result));
    return result;
}

template <typename D> void impl_IContactPickerUI<D>::RemoveContact(hstring_ref id) const
{
    check_hresult(shim()->abi_RemoveContact(get(id)));
}

template <typename D> bool impl_IContactPickerUI<D>::ContainsContact(hstring_ref id) const
{
    bool isContained {};
    check_hresult(shim()->abi_ContainsContact(get(id), &isContained));
    return isContained;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IContactPickerUI<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_DesiredFields(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactSelectionMode impl_IContactPickerUI<D>::SelectionMode() const
{
    Windows::ApplicationModel::Contacts::ContactSelectionMode value {};
    check_hresult(shim()->get_SelectionMode(&value));
    return value;
}

template <typename D> event_token impl_IContactPickerUI<D>::ContactRemoved(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ContactRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IContactPickerUI> impl_IContactPickerUI<D>::ContactRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IContactPickerUI>(this, &ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI::remove_ContactRemoved, ContactRemoved(handler));
}

template <typename D> void impl_IContactPickerUI<D>::ContactRemoved(event_token token) const
{
    check_hresult(shim()->remove_ContactRemoved(token));
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::AddContactResult impl_IContactPickerUI2<D>::AddContact(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::ApplicationModel::Contacts::Provider::AddContactResult result {};
    check_hresult(shim()->abi_AddContact(get(contact), &result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType> impl_IContactPickerUI2<D>::DesiredFieldsWithContactFieldType() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType> value;
    check_hresult(shim()->get_DesiredFieldsWithContactFieldType(put(value)));
    return value;
}

}

}
