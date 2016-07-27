// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Devices.SmartCards.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::SmartCards {

template <typename L> SmartCardPinResetHandler::SmartCardPinResetHandler(L lambda) :
    SmartCardPinResetHandler(impl::make_delegate<impl_SmartCardPinResetHandler<L>, SmartCardPinResetHandler>(std::forward<L>(lambda)))
{}

template <typename F> SmartCardPinResetHandler::SmartCardPinResetHandler(F * function) :
    SmartCardPinResetHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SmartCardPinResetHandler::SmartCardPinResetHandler(O * object, M method) :
    SmartCardPinResetHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SmartCardPinResetHandler::operator()(const Windows::Devices::SmartCards::SmartCardProvisioning & sender, const Windows::Devices::SmartCards::SmartCardPinResetRequest & request) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(request)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ICardAddedEventArgs> : produce_base<D, Windows::Devices::SmartCards::ICardAddedEventArgs>
{
    HRESULT __stdcall get_SmartCard(abi_arg_out<Windows::Devices::SmartCards::ISmartCard> value) noexcept override
    {
        try
        {
            *value = detach(shim().SmartCard());
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
struct produce<D, Windows::Devices::SmartCards::ICardRemovedEventArgs> : produce_base<D, Windows::Devices::SmartCards::ICardRemovedEventArgs>
{
    HRESULT __stdcall get_SmartCard(abi_arg_out<Windows::Devices::SmartCards::ISmartCard> value) noexcept override
    {
        try
        {
            *value = detach(shim().SmartCard());
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
struct produce<D, Windows::Devices::SmartCards::ISmartCard> : produce_base<D, Windows::Devices::SmartCards::ISmartCard>
{
    HRESULT __stdcall get_Reader(abi_arg_out<Windows::Devices::SmartCards::ISmartCardReader> value) noexcept override
    {
        try
        {
            *value = detach(shim().Reader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStatusAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetStatusAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnswerToResetAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAnswerToResetAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardChallengeContext> : produce_base<D, Windows::Devices::SmartCards::ISmartCardChallengeContext>
{
    HRESULT __stdcall get_Challenge(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Challenge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_VerifyResponseAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> response, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().VerifyResponseAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&response)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProvisionAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> response, bool formatCard, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ProvisionAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&response), formatCard));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProvisionAsyncWithNewCardId(abi_arg_in<Windows::Storage::Streams::IBuffer> response, bool formatCard, GUID newCardId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ProvisionAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&response), formatCard, newCardId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeAdministrativeKeyAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> response, abi_arg_in<Windows::Storage::Streams::IBuffer> newAdministrativeKey, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ChangeAdministrativeKeyAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&response), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&newAdministrativeKey)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardConnect> : produce_base<D, Windows::Devices::SmartCards::ISmartCardConnect>
{
    HRESULT __stdcall abi_ConnectAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ConnectAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardConnection> : produce_base<D, Windows::Devices::SmartCards::ISmartCardConnection>
{
    HRESULT __stdcall abi_TransmitAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> command, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TransmitAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&command)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardPinPolicy> : produce_base<D, Windows::Devices::SmartCards::ISmartCardPinPolicy>
{
    HRESULT __stdcall get_MinLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinLength(uint32_t value) noexcept override
    {
        try
        {
            shim().MinLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxLength(uint32_t value) noexcept override
    {
        try
        {
            shim().MaxLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UppercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().UppercaseLetters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UppercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) noexcept override
    {
        try
        {
            shim().UppercaseLetters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().LowercaseLetters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LowercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) noexcept override
    {
        try
        {
            shim().LowercaseLetters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Digits(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().Digits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Digits(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) noexcept override
    {
        try
        {
            shim().Digits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecialCharacters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) noexcept override
    {
        try
        {
            *value = detach(shim().SpecialCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecialCharacters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) noexcept override
    {
        try
        {
            shim().SpecialCharacters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardPinResetDeferral> : produce_base<D, Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
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
struct produce<D, Windows::Devices::SmartCards::ISmartCardPinResetRequest> : produce_base<D, Windows::Devices::SmartCards::ISmartCardPinResetRequest>
{
    HRESULT __stdcall get_Challenge(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Challenge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Devices::SmartCards::ISmartCardPinResetDeferral> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetResponse(abi_arg_in<Windows::Storage::Streams::IBuffer> response) noexcept override
    {
        try
        {
            shim().SetResponse(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&response));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardProvisioning> : produce_base<D, Windows::Devices::SmartCards::ISmartCardProvisioning>
{
    HRESULT __stdcall get_SmartCard(abi_arg_out<Windows::Devices::SmartCards::ISmartCard> value) noexcept override
    {
        try
        {
            *value = detach(shim().SmartCard());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIdAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<GUID>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetIdAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChallengeContextAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetChallengeContextAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPinChangeAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestPinChangeAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPinResetAsync(abi_arg_in<Windows::Devices::SmartCards::SmartCardPinResetHandler> handler, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestPinResetAsync(*reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinResetHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardProvisioning2> : produce_base<D, Windows::Devices::SmartCards::ISmartCardProvisioning2>
{
    HRESULT __stdcall abi_GetAuthorityKeyContainerNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAuthorityKeyContainerNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardProvisioningStatics> : produce_base<D, Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
{
    HRESULT __stdcall abi_FromSmartCardAsync(abi_arg_in<Windows::Devices::SmartCards::ISmartCard> card, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FromSmartCardAsync(*reinterpret_cast<const Windows::Devices::SmartCards::SmartCard *>(&card)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestVirtualSmartCardCreationAsync(abi_arg_in<hstring> friendlyName, abi_arg_in<Windows::Storage::Streams::IBuffer> administrativeKey, abi_arg_in<Windows::Devices::SmartCards::ISmartCardPinPolicy> pinPolicy, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestVirtualSmartCardCreationAsync(*reinterpret_cast<const hstring *>(&friendlyName), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&administrativeKey), *reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinPolicy *>(&pinPolicy)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestVirtualSmartCardCreationAsyncWithCardId(abi_arg_in<hstring> friendlyName, abi_arg_in<Windows::Storage::Streams::IBuffer> administrativeKey, abi_arg_in<Windows::Devices::SmartCards::ISmartCardPinPolicy> pinPolicy, GUID cardId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestVirtualSmartCardCreationAsync(*reinterpret_cast<const hstring *>(&friendlyName), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&administrativeKey), *reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinPolicy *>(&pinPolicy), cardId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestVirtualSmartCardDeletionAsync(abi_arg_in<Windows::Devices::SmartCards::ISmartCard> card, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestVirtualSmartCardDeletionAsync(*reinterpret_cast<const Windows::Devices::SmartCards::SmartCard *>(&card)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardProvisioningStatics2> : produce_base<D, Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
{
    HRESULT __stdcall abi_RequestAttestedVirtualSmartCardCreationAsync(abi_arg_in<hstring> friendlyName, abi_arg_in<Windows::Storage::Streams::IBuffer> administrativeKey, abi_arg_in<Windows::Devices::SmartCards::ISmartCardPinPolicy> pinPolicy, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestAttestedVirtualSmartCardCreationAsync(*reinterpret_cast<const hstring *>(&friendlyName), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&administrativeKey), *reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinPolicy *>(&pinPolicy)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAttestedVirtualSmartCardCreationAsyncWithCardId(abi_arg_in<hstring> friendlyName, abi_arg_in<Windows::Storage::Streams::IBuffer> administrativeKey, abi_arg_in<Windows::Devices::SmartCards::ISmartCardPinPolicy> pinPolicy, GUID cardId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestAttestedVirtualSmartCardCreationAsync(*reinterpret_cast<const hstring *>(&friendlyName), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&administrativeKey), *reinterpret_cast<const Windows::Devices::SmartCards::SmartCardPinPolicy *>(&pinPolicy), cardId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardReader> : produce_base<D, Windows::Devices::SmartCards::ISmartCardReader>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Devices::SmartCards::SmartCardReaderKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStatusAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetStatusAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllCardsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAllCardsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CardAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CardAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CardAdded(event_token token) noexcept override
    {
        try
        {
            shim().CardAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CardRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CardRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CardRemoved(event_token token) noexcept override
    {
        try
        {
            shim().CardRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SmartCards::ISmartCardReaderStatics> : produce_base<D, Windows::Devices::SmartCards::ISmartCardReaderStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorWithKind(Windows::Devices::SmartCards::SmartCardReaderKind kind, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector(kind));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
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

namespace Windows::Devices::SmartCards {

template <typename D> hstring impl_ISmartCardReaderStatics<D>::GetDeviceSelector() const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelector(put(selector)));
    return selector;
}

template <typename D> hstring impl_ISmartCardReaderStatics<D>::GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind kind) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorWithKind(kind, put(selector)));
    return selector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> impl_ISmartCardReaderStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> result;
    check_hresult(shim()->abi_FromIdAsync(get(deviceId), put(result)));
    return result;
}

template <typename D> hstring impl_ISmartCardReader<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_ISmartCardReader<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Devices::SmartCards::SmartCardReaderKind impl_ISmartCardReader<D>::Kind() const
{
    Windows::Devices::SmartCards::SmartCardReaderKind value {};
    check_hresult(shim()->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> impl_ISmartCardReader<D>::GetStatusAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> result;
    check_hresult(shim()->abi_GetStatusAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> impl_ISmartCardReader<D>::FindAllCardsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> result;
    check_hresult(shim()->abi_FindAllCardsAsync(put(result)));
    return result;
}

template <typename D> event_token impl_ISmartCardReader<D>::CardAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CardAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISmartCardReader> impl_ISmartCardReader<D>::CardAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISmartCardReader>(this, &ABI::Windows::Devices::SmartCards::ISmartCardReader::remove_CardAdded, CardAdded(handler));
}

template <typename D> void impl_ISmartCardReader<D>::CardAdded(event_token token) const
{
    check_hresult(shim()->remove_CardAdded(token));
}

template <typename D> event_token impl_ISmartCardReader<D>::CardRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CardRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISmartCardReader> impl_ISmartCardReader<D>::CardRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISmartCardReader>(this, &ABI::Windows::Devices::SmartCards::ISmartCardReader::remove_CardRemoved, CardRemoved(handler));
}

template <typename D> void impl_ISmartCardReader<D>::CardRemoved(event_token token) const
{
    check_hresult(shim()->remove_CardRemoved(token));
}

template <typename D> Windows::Devices::SmartCards::SmartCard impl_ICardAddedEventArgs<D>::SmartCard() const
{
    Windows::Devices::SmartCards::SmartCard value { nullptr };
    check_hresult(shim()->get_SmartCard(put(value)));
    return value;
}

template <typename D> Windows::Devices::SmartCards::SmartCard impl_ICardRemovedEventArgs<D>::SmartCard() const
{
    Windows::Devices::SmartCards::SmartCard value { nullptr };
    check_hresult(shim()->get_SmartCard(put(value)));
    return value;
}

template <typename D> Windows::Devices::SmartCards::SmartCardReader impl_ISmartCard<D>::Reader() const
{
    Windows::Devices::SmartCards::SmartCardReader value { nullptr };
    check_hresult(shim()->get_Reader(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> impl_ISmartCard<D>::GetStatusAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> result;
    check_hresult(shim()->abi_GetStatusAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_ISmartCard<D>::GetAnswerToResetAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> result;
    check_hresult(shim()->abi_GetAnswerToResetAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> impl_ISmartCardProvisioningStatics<D>::FromSmartCardAsync(const Windows::Devices::SmartCards::SmartCard & card) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> result;
    check_hresult(shim()->abi_FromSmartCardAsync(get(card), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> impl_ISmartCardProvisioningStatics<D>::RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> result;
    check_hresult(shim()->abi_RequestVirtualSmartCardCreationAsync(get(friendlyName), get(administrativeKey), get(pinPolicy), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> impl_ISmartCardProvisioningStatics<D>::RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> result;
    check_hresult(shim()->abi_RequestVirtualSmartCardCreationAsyncWithCardId(get(friendlyName), get(administrativeKey), get(pinPolicy), cardId, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISmartCardProvisioningStatics<D>::RequestVirtualSmartCardDeletionAsync(const Windows::Devices::SmartCards::SmartCard & card) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_RequestVirtualSmartCardDeletionAsync(get(card), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> impl_ISmartCardProvisioningStatics2<D>::RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> result;
    check_hresult(shim()->abi_RequestAttestedVirtualSmartCardCreationAsync(get(friendlyName), get(administrativeKey), get(pinPolicy), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> impl_ISmartCardProvisioningStatics2<D>::RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> result;
    check_hresult(shim()->abi_RequestAttestedVirtualSmartCardCreationAsyncWithCardId(get(friendlyName), get(administrativeKey), get(pinPolicy), cardId, put(result)));
    return result;
}

template <typename D> Windows::Devices::SmartCards::SmartCard impl_ISmartCardProvisioning<D>::SmartCard() const
{
    Windows::Devices::SmartCards::SmartCard value { nullptr };
    check_hresult(shim()->get_SmartCard(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<GUID> impl_ISmartCardProvisioning<D>::GetIdAsync() const
{
    Windows::Foundation::IAsyncOperation<GUID> result;
    check_hresult(shim()->abi_GetIdAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_ISmartCardProvisioning<D>::GetNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_GetNameAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> impl_ISmartCardProvisioning<D>::GetChallengeContextAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> result;
    check_hresult(shim()->abi_GetChallengeContextAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISmartCardProvisioning<D>::RequestPinChangeAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_RequestPinChangeAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISmartCardProvisioning<D>::RequestPinResetAsync(const Windows::Devices::SmartCards::SmartCardPinResetHandler & handler) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_RequestPinResetAsync(get(handler), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_ISmartCardProvisioning2<D>::GetAuthorityKeyContainerNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_GetAuthorityKeyContainerNameAsync(put(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISmartCardPinResetRequest<D>::Challenge() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Challenge(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISmartCardPinResetRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::Devices::SmartCards::SmartCardPinResetDeferral impl_ISmartCardPinResetRequest<D>::GetDeferral() const
{
    Windows::Devices::SmartCards::SmartCardPinResetDeferral result { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> void impl_ISmartCardPinResetRequest<D>::SetResponse(const Windows::Storage::Streams::IBuffer & response) const
{
    check_hresult(shim()->abi_SetResponse(get(response)));
}

template <typename D> void impl_ISmartCardPinResetDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> uint32_t impl_ISmartCardPinPolicy<D>::MinLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_MinLength(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::MinLength(uint32_t value) const
{
    check_hresult(shim()->put_MinLength(value));
}

template <typename D> uint32_t impl_ISmartCardPinPolicy<D>::MaxLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxLength(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::MaxLength(uint32_t value) const
{
    check_hresult(shim()->put_MaxLength(value));
}

template <typename D> Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption impl_ISmartCardPinPolicy<D>::UppercaseLetters() const
{
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value {};
    check_hresult(shim()->get_UppercaseLetters(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::UppercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const
{
    check_hresult(shim()->put_UppercaseLetters(value));
}

template <typename D> Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption impl_ISmartCardPinPolicy<D>::LowercaseLetters() const
{
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value {};
    check_hresult(shim()->get_LowercaseLetters(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::LowercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const
{
    check_hresult(shim()->put_LowercaseLetters(value));
}

template <typename D> Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption impl_ISmartCardPinPolicy<D>::Digits() const
{
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value {};
    check_hresult(shim()->get_Digits(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::Digits(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const
{
    check_hresult(shim()->put_Digits(value));
}

template <typename D> Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption impl_ISmartCardPinPolicy<D>::SpecialCharacters() const
{
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value {};
    check_hresult(shim()->get_SpecialCharacters(&value));
    return value;
}

template <typename D> void impl_ISmartCardPinPolicy<D>::SpecialCharacters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const
{
    check_hresult(shim()->put_SpecialCharacters(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> impl_ISmartCardConnect<D>::ConnectAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> result;
    check_hresult(shim()->abi_ConnectAsync(put(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISmartCardChallengeContext<D>::Challenge() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Challenge(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISmartCardChallengeContext<D>::VerifyResponseAsync(const Windows::Storage::Streams::IBuffer & response) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_VerifyResponseAsync(get(response), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISmartCardChallengeContext<D>::ProvisionAsync(const Windows::Storage::Streams::IBuffer & response, bool formatCard) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ProvisionAsync(get(response), formatCard, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISmartCardChallengeContext<D>::ProvisionAsync(const Windows::Storage::Streams::IBuffer & response, bool formatCard, GUID newCardId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ProvisionAsyncWithNewCardId(get(response), formatCard, newCardId, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISmartCardChallengeContext<D>::ChangeAdministrativeKeyAsync(const Windows::Storage::Streams::IBuffer & response, const Windows::Storage::Streams::IBuffer & newAdministrativeKey) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ChangeAdministrativeKeyAsync(get(response), get(newAdministrativeKey), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_ISmartCardConnection<D>::TransmitAsync(const Windows::Storage::Streams::IBuffer & command) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> result;
    check_hresult(shim()->abi_TransmitAsync(get(command), put(result)));
    return result;
}

inline SmartCardPinPolicy::SmartCardPinPolicy() :
    SmartCardPinPolicy(activate_instance<SmartCardPinPolicy>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> SmartCardProvisioning::FromSmartCardAsync(const Windows::Devices::SmartCards::SmartCard & card)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics>().FromSmartCardAsync(card);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> SmartCardProvisioning::RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics>().RequestVirtualSmartCardCreationAsync(friendlyName, administrativeKey, pinPolicy);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> SmartCardProvisioning::RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics>().RequestVirtualSmartCardCreationAsync(friendlyName, administrativeKey, pinPolicy, cardId);
}

inline Windows::Foundation::IAsyncOperation<bool> SmartCardProvisioning::RequestVirtualSmartCardDeletionAsync(const Windows::Devices::SmartCards::SmartCard & card)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics>().RequestVirtualSmartCardDeletionAsync(card);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> SmartCardProvisioning::RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics2>().RequestAttestedVirtualSmartCardCreationAsync(friendlyName, administrativeKey, pinPolicy);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> SmartCardProvisioning::RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId)
{
    return get_activation_factory<SmartCardProvisioning, ISmartCardProvisioningStatics2>().RequestAttestedVirtualSmartCardCreationAsync(friendlyName, administrativeKey, pinPolicy, cardId);
}

inline hstring SmartCardReader::GetDeviceSelector()
{
    return get_activation_factory<SmartCardReader, ISmartCardReaderStatics>().GetDeviceSelector();
}

inline hstring SmartCardReader::GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind kind)
{
    return get_activation_factory<SmartCardReader, ISmartCardReaderStatics>().GetDeviceSelector(kind);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> SmartCardReader::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<SmartCardReader, ISmartCardReaderStatics>().FromIdAsync(deviceId);
}

}

}
