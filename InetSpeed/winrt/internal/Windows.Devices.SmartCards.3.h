// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.SmartCards.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::SmartCards {

template <typename H> struct impl_SmartCardPinResetHandler : implements<impl_SmartCardPinResetHandler<H>, abi<SmartCardPinResetHandler>>, H
{
    impl_SmartCardPinResetHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Devices::SmartCards::ISmartCardProvisioning> sender, abi_arg_in<Windows::Devices::SmartCards::ISmartCardPinResetRequest> request) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Devices::SmartCards::SmartCardProvisioning *>(&sender), *reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinResetRequest *>(&request));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::SmartCards {

struct WINRT_EBO CardAddedEventArgs :
    Windows::Devices::SmartCards::ICardAddedEventArgs
{
    CardAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CardRemovedEventArgs :
    Windows::Devices::SmartCards::ICardRemovedEventArgs
{
    CardRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCard :
    Windows::Devices::SmartCards::ISmartCard,
    impl::require<SmartCard, Windows::Devices::SmartCards::ISmartCardConnect>
{
    SmartCard(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardChallengeContext :
    Windows::Devices::SmartCards::ISmartCardChallengeContext
{
    SmartCardChallengeContext(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardConnection :
    Windows::Devices::SmartCards::ISmartCardConnection
{
    SmartCardConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardPinPolicy :
    Windows::Devices::SmartCards::ISmartCardPinPolicy
{
    SmartCardPinPolicy(std::nullptr_t) noexcept {}
    SmartCardPinPolicy();
};

struct WINRT_EBO SmartCardPinResetDeferral :
    Windows::Devices::SmartCards::ISmartCardPinResetDeferral
{
    SmartCardPinResetDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardPinResetRequest :
    Windows::Devices::SmartCards::ISmartCardPinResetRequest
{
    SmartCardPinResetRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardProvisioning :
    Windows::Devices::SmartCards::ISmartCardProvisioning,
    impl::require<SmartCardProvisioning, Windows::Devices::SmartCards::ISmartCardProvisioning2>
{
    SmartCardProvisioning(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> FromSmartCardAsync(const Windows::Devices::SmartCards::SmartCard & card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId);
    static Windows::Foundation::IAsyncOperation<bool> RequestVirtualSmartCardDeletionAsync(const Windows::Devices::SmartCards::SmartCard & card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId);
};

struct WINRT_EBO SmartCardReader :
    Windows::Devices::SmartCards::ISmartCardReader
{
    SmartCardReader(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind kind);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> FromIdAsync(hstring_ref deviceId);
};

}

}
