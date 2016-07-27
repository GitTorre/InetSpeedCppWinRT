// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Security.Credentials.UI.3.h"
#include "Windows.Security.Credentials.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerOptions> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerOptions>
{
    HRESULT __stdcall put_Caption(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Caption(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Message(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Message(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ErrorCode(uint32_t value) noexcept override
    {
        try
        {
            shim().ErrorCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol value) noexcept override
    {
        try
        {
            shim().AuthenticationProtocol(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol * value) noexcept override
    {
        try
        {
            *value = detach(shim().AuthenticationProtocol());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomAuthenticationProtocol(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().CustomAuthenticationProtocol(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomAuthenticationProtocol(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CustomAuthenticationProtocol());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreviousCredential(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            shim().PreviousCredential(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousCredential(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().PreviousCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysDisplayDialog(bool value) noexcept override
    {
        try
        {
            shim().AlwaysDisplayDialog(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysDisplayDialog(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AlwaysDisplayDialog());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CallerSavesCredential(bool value) noexcept override
    {
        try
        {
            shim().CallerSavesCredential(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallerSavesCredential(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CallerSavesCredential());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption value) noexcept override
    {
        try
        {
            shim().CredentialSaveOption(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialSaveOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerResults> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerResults>
{
    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialSaveOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaved(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialSaved());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Credential(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Credential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialDomainName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialDomainName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialUserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialUserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialPassword(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CredentialPassword());
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
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerStatics> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerStatics>
{
    HRESULT __stdcall abi_PickWithOptionsAsync(abi_arg_in<Windows::Security::Credentials::UI::ICredentialPickerOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().PickAsync(*reinterpret_cast<const Windows::Security::Credentials::UI::CredentialPickerOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickWithMessageAsync(abi_arg_in<hstring> targetName, abi_arg_in<hstring> message, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().PickAsync(*reinterpret_cast<const hstring *>(&targetName), *reinterpret_cast<const hstring *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickWithCaptionAsync(abi_arg_in<hstring> targetName, abi_arg_in<hstring> message, abi_arg_in<hstring> caption, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().PickAsync(*reinterpret_cast<const hstring *>(&targetName), *reinterpret_cast<const hstring *>(&message), *reinterpret_cast<const hstring *>(&caption)));
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
struct produce<D, Windows::Security::Credentials::UI::IUserConsentVerifierStatics> : produce_base<D, Windows::Security::Credentials::UI::IUserConsentVerifierStatics>
{
    HRESULT __stdcall abi_CheckAvailabilityAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability>> result) noexcept override
    {
        try
        {
            *result = detach(shim().CheckAvailabilityAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestVerificationAsync(abi_arg_in<hstring> message, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestVerificationAsync(*reinterpret_cast<const hstring *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Credentials::UI {

template <typename D> void impl_ICredentialPickerOptions<D>::Caption(hstring_ref value) const
{
    check_hresult(shim()->put_Caption(get(value)));
}

template <typename D> hstring impl_ICredentialPickerOptions<D>::Caption() const
{
    hstring value;
    check_hresult(shim()->get_Caption(put(value)));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::Message(hstring_ref value) const
{
    check_hresult(shim()->put_Message(get(value)));
}

template <typename D> hstring impl_ICredentialPickerOptions<D>::Message() const
{
    hstring value;
    check_hresult(shim()->get_Message(put(value)));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::ErrorCode(uint32_t value) const
{
    check_hresult(shim()->put_ErrorCode(value));
}

template <typename D> uint32_t impl_ICredentialPickerOptions<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::TargetName(hstring_ref value) const
{
    check_hresult(shim()->put_TargetName(get(value)));
}

template <typename D> hstring impl_ICredentialPickerOptions<D>::TargetName() const
{
    hstring value;
    check_hresult(shim()->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol value) const
{
    check_hresult(shim()->put_AuthenticationProtocol(value));
}

template <typename D> Windows::Security::Credentials::UI::AuthenticationProtocol impl_ICredentialPickerOptions<D>::AuthenticationProtocol() const
{
    Windows::Security::Credentials::UI::AuthenticationProtocol value {};
    check_hresult(shim()->get_AuthenticationProtocol(&value));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::CustomAuthenticationProtocol(hstring_ref value) const
{
    check_hresult(shim()->put_CustomAuthenticationProtocol(get(value)));
}

template <typename D> hstring impl_ICredentialPickerOptions<D>::CustomAuthenticationProtocol() const
{
    hstring value;
    check_hresult(shim()->get_CustomAuthenticationProtocol(put(value)));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::PreviousCredential(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(shim()->put_PreviousCredential(get(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICredentialPickerOptions<D>::PreviousCredential() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_PreviousCredential(put(value)));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::AlwaysDisplayDialog(bool value) const
{
    check_hresult(shim()->put_AlwaysDisplayDialog(value));
}

template <typename D> bool impl_ICredentialPickerOptions<D>::AlwaysDisplayDialog() const
{
    bool value {};
    check_hresult(shim()->get_AlwaysDisplayDialog(&value));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::CallerSavesCredential(bool value) const
{
    check_hresult(shim()->put_CallerSavesCredential(value));
}

template <typename D> bool impl_ICredentialPickerOptions<D>::CallerSavesCredential() const
{
    bool value {};
    check_hresult(shim()->get_CallerSavesCredential(&value));
    return value;
}

template <typename D> void impl_ICredentialPickerOptions<D>::CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption value) const
{
    check_hresult(shim()->put_CredentialSaveOption(value));
}

template <typename D> Windows::Security::Credentials::UI::CredentialSaveOption impl_ICredentialPickerOptions<D>::CredentialSaveOption() const
{
    Windows::Security::Credentials::UI::CredentialSaveOption value {};
    check_hresult(shim()->get_CredentialSaveOption(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> impl_ICredentialPickerStatics<D>::PickAsync(const Windows::Security::Credentials::UI::CredentialPickerOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation;
    check_hresult(shim()->abi_PickWithOptionsAsync(get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> impl_ICredentialPickerStatics<D>::PickAsync(hstring_ref targetName, hstring_ref message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation;
    check_hresult(shim()->abi_PickWithMessageAsync(get(targetName), get(message), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> impl_ICredentialPickerStatics<D>::PickAsync(hstring_ref targetName, hstring_ref message, hstring_ref caption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation;
    check_hresult(shim()->abi_PickWithCaptionAsync(get(targetName), get(message), get(caption), put(operation)));
    return operation;
}

template <typename D> uint32_t impl_ICredentialPickerResults<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Security::Credentials::UI::CredentialSaveOption impl_ICredentialPickerResults<D>::CredentialSaveOption() const
{
    Windows::Security::Credentials::UI::CredentialSaveOption value {};
    check_hresult(shim()->get_CredentialSaveOption(&value));
    return value;
}

template <typename D> bool impl_ICredentialPickerResults<D>::CredentialSaved() const
{
    bool value {};
    check_hresult(shim()->get_CredentialSaved(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICredentialPickerResults<D>::Credential() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Credential(put(value)));
    return value;
}

template <typename D> hstring impl_ICredentialPickerResults<D>::CredentialDomainName() const
{
    hstring value;
    check_hresult(shim()->get_CredentialDomainName(put(value)));
    return value;
}

template <typename D> hstring impl_ICredentialPickerResults<D>::CredentialUserName() const
{
    hstring value;
    check_hresult(shim()->get_CredentialUserName(put(value)));
    return value;
}

template <typename D> hstring impl_ICredentialPickerResults<D>::CredentialPassword() const
{
    hstring value;
    check_hresult(shim()->get_CredentialPassword(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> impl_IUserConsentVerifierStatics<D>::CheckAvailabilityAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> result;
    check_hresult(shim()->abi_CheckAvailabilityAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> impl_IUserConsentVerifierStatics<D>::RequestVerificationAsync(hstring_ref message) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> result;
    check_hresult(shim()->abi_RequestVerificationAsync(get(message), put(result)));
    return result;
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(const Windows::Security::Credentials::UI::CredentialPickerOptions & options)
{
    return get_activation_factory<CredentialPicker, ICredentialPickerStatics>().PickAsync(options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(hstring_ref targetName, hstring_ref message)
{
    return get_activation_factory<CredentialPicker, ICredentialPickerStatics>().PickAsync(targetName, message);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(hstring_ref targetName, hstring_ref message, hstring_ref caption)
{
    return get_activation_factory<CredentialPicker, ICredentialPickerStatics>().PickAsync(targetName, message, caption);
}

inline CredentialPickerOptions::CredentialPickerOptions() :
    CredentialPickerOptions(activate_instance<CredentialPickerOptions>())
{}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> UserConsentVerifier::CheckAvailabilityAsync()
{
    return get_activation_factory<UserConsentVerifier, IUserConsentVerifierStatics>().CheckAvailabilityAsync();
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> UserConsentVerifier::RequestVerificationAsync(hstring_ref message)
{
    return get_activation_factory<UserConsentVerifier, IUserConsentVerifierStatics>().RequestVerificationAsync(message);
}

}

}
