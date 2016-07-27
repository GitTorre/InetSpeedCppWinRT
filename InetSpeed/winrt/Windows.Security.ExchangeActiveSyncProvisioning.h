// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Security.ExchangeActiveSyncProvisioning.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
{
    HRESULT __stdcall get_Id(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OperatingSystem(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().OperatingSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemManufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemProductName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemProductName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSku(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemSku());
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
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
{
    HRESULT __stdcall get_SystemHardwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemHardwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemFirmwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemFirmwareVersion());
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
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
{
    HRESULT __stdcall get_RequireEncryption(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequireEncryption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequireEncryption(bool value) noexcept override
    {
        try
        {
            shim().RequireEncryption(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPasswordLength(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinPasswordLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinPasswordLength(uint8_t value) noexcept override
    {
        try
        {
            shim().MinPasswordLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisallowConvenienceLogon(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DisallowConvenienceLogon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisallowConvenienceLogon(bool value) noexcept override
    {
        try
        {
            shim().DisallowConvenienceLogon(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPasswordComplexCharacters(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinPasswordComplexCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinPasswordComplexCharacters(uint8_t value) noexcept override
    {
        try
        {
            shim().MinPasswordComplexCharacters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordExpiration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().PasswordExpiration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PasswordExpiration(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            shim().PasswordExpiration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordHistory(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PasswordHistory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PasswordHistory(uint32_t value) noexcept override
    {
        try
        {
            shim().PasswordHistory(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPasswordFailedAttempts(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPasswordFailedAttempts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPasswordFailedAttempts(uint8_t value) noexcept override
    {
        try
        {
            shim().MaxPasswordFailedAttempts(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxInactivityTimeLock(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxInactivityTimeLock());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxInactivityTimeLock(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            shim().MaxInactivityTimeLock(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CheckCompliance(abi_arg_out<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults> result) noexcept override
    {
        try
        {
            *result = detach(shim().CheckCompliance());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ApplyAsync());
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
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
{
    HRESULT __stdcall get_Compliant(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Compliant());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequireEncryptionResult(Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequireEncryptionResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPasswordLengthResult(Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinPasswordLengthResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisallowConvenienceLogonResult(Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().DisallowConvenienceLogonResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPasswordComplexCharactersResult(Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinPasswordComplexCharactersResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordExpirationResult(Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().PasswordExpirationResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordHistoryResult(Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().PasswordHistoryResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPasswordFailedAttemptsResult(Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPasswordFailedAttemptsResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxInactivityTimeLockResult(Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxInactivityTimeLockResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
{
    HRESULT __stdcall get_EncryptionProviderType(Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType * value) noexcept override
    {
        try
        {
            *value = detach(shim().EncryptionProviderType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::ExchangeActiveSyncProvisioning {

template <typename D> GUID impl_IEasClientDeviceInformation<D>::Id() const
{
    GUID value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation<D>::OperatingSystem() const
{
    hstring value;
    check_hresult(shim()->get_OperatingSystem(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation<D>::FriendlyName() const
{
    hstring value;
    check_hresult(shim()->get_FriendlyName(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation<D>::SystemManufacturer() const
{
    hstring value;
    check_hresult(shim()->get_SystemManufacturer(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation<D>::SystemProductName() const
{
    hstring value;
    check_hresult(shim()->get_SystemProductName(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation<D>::SystemSku() const
{
    hstring value;
    check_hresult(shim()->get_SystemSku(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation2<D>::SystemHardwareVersion() const
{
    hstring value;
    check_hresult(shim()->get_SystemHardwareVersion(put(value)));
    return value;
}

template <typename D> hstring impl_IEasClientDeviceInformation2<D>::SystemFirmwareVersion() const
{
    hstring value;
    check_hresult(shim()->get_SystemFirmwareVersion(put(value)));
    return value;
}

template <typename D> bool impl_IEasClientSecurityPolicy<D>::RequireEncryption() const
{
    bool value {};
    check_hresult(shim()->get_RequireEncryption(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::RequireEncryption(bool value) const
{
    check_hresult(shim()->put_RequireEncryption(value));
}

template <typename D> uint8_t impl_IEasClientSecurityPolicy<D>::MinPasswordLength() const
{
    uint8_t value {};
    check_hresult(shim()->get_MinPasswordLength(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::MinPasswordLength(uint8_t value) const
{
    check_hresult(shim()->put_MinPasswordLength(value));
}

template <typename D> bool impl_IEasClientSecurityPolicy<D>::DisallowConvenienceLogon() const
{
    bool value {};
    check_hresult(shim()->get_DisallowConvenienceLogon(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::DisallowConvenienceLogon(bool value) const
{
    check_hresult(shim()->put_DisallowConvenienceLogon(value));
}

template <typename D> uint8_t impl_IEasClientSecurityPolicy<D>::MinPasswordComplexCharacters() const
{
    uint8_t value {};
    check_hresult(shim()->get_MinPasswordComplexCharacters(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::MinPasswordComplexCharacters(uint8_t value) const
{
    check_hresult(shim()->put_MinPasswordComplexCharacters(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IEasClientSecurityPolicy<D>::PasswordExpiration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_PasswordExpiration(put(value)));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::PasswordExpiration(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(shim()->put_PasswordExpiration(get(value)));
}

template <typename D> uint32_t impl_IEasClientSecurityPolicy<D>::PasswordHistory() const
{
    uint32_t value {};
    check_hresult(shim()->get_PasswordHistory(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::PasswordHistory(uint32_t value) const
{
    check_hresult(shim()->put_PasswordHistory(value));
}

template <typename D> uint8_t impl_IEasClientSecurityPolicy<D>::MaxPasswordFailedAttempts() const
{
    uint8_t value {};
    check_hresult(shim()->get_MaxPasswordFailedAttempts(&value));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::MaxPasswordFailedAttempts(uint8_t value) const
{
    check_hresult(shim()->put_MaxPasswordFailedAttempts(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IEasClientSecurityPolicy<D>::MaxInactivityTimeLock() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_MaxInactivityTimeLock(put(value)));
    return value;
}

template <typename D> void impl_IEasClientSecurityPolicy<D>::MaxInactivityTimeLock(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(shim()->put_MaxInactivityTimeLock(get(value)));
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults impl_IEasClientSecurityPolicy<D>::CheckCompliance() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults result { nullptr };
    check_hresult(shim()->abi_CheckCompliance(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> impl_IEasClientSecurityPolicy<D>::ApplyAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> operation;
    check_hresult(shim()->abi_ApplyAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_IEasComplianceResults<D>::Compliant() const
{
    bool value {};
    check_hresult(shim()->get_Compliant(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult impl_IEasComplianceResults<D>::RequireEncryptionResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult value {};
    check_hresult(shim()->get_RequireEncryptionResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult impl_IEasComplianceResults<D>::MinPasswordLengthResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult value {};
    check_hresult(shim()->get_MinPasswordLengthResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult impl_IEasComplianceResults<D>::DisallowConvenienceLogonResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult value {};
    check_hresult(shim()->get_DisallowConvenienceLogonResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult impl_IEasComplianceResults<D>::MinPasswordComplexCharactersResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult value {};
    check_hresult(shim()->get_MinPasswordComplexCharactersResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult impl_IEasComplianceResults<D>::PasswordExpirationResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult value {};
    check_hresult(shim()->get_PasswordExpirationResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult impl_IEasComplianceResults<D>::PasswordHistoryResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult value {};
    check_hresult(shim()->get_PasswordHistoryResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult impl_IEasComplianceResults<D>::MaxPasswordFailedAttemptsResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult value {};
    check_hresult(shim()->get_MaxPasswordFailedAttemptsResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult impl_IEasComplianceResults<D>::MaxInactivityTimeLockResult() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult value {};
    check_hresult(shim()->get_MaxInactivityTimeLockResult(&value));
    return value;
}

template <typename D> Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType impl_IEasComplianceResults2<D>::EncryptionProviderType() const
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType value {};
    check_hresult(shim()->get_EncryptionProviderType(&value));
    return value;
}

inline EasClientDeviceInformation::EasClientDeviceInformation() :
    EasClientDeviceInformation(activate_instance<EasClientDeviceInformation>())
{}

inline EasClientSecurityPolicy::EasClientSecurityPolicy() :
    EasClientSecurityPolicy(activate_instance<EasClientSecurityPolicy>())
{}

}

}
