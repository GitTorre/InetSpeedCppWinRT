// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Devices.SmartCards.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::SmartCards {

struct __declspec(uuid("18bbef98-f18b-4dd3-b118-dfb2c8e23cc6")) __declspec(novtable) ICardAddedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SmartCard(Windows::Devices::SmartCards::ISmartCard ** value) = 0;
};

struct __declspec(uuid("15331aaf-22d7-4945-afc9-03b46f42a6cd")) __declspec(novtable) ICardRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SmartCard(Windows::Devices::SmartCards::ISmartCard ** value) = 0;
};

struct __declspec(uuid("1b718871-6434-43f4-b55a-6a29623870aa")) __declspec(novtable) ISmartCard : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reader(Windows::Devices::SmartCards::ISmartCardReader ** value) = 0;
    virtual HRESULT __stdcall abi_GetStatusAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> ** result) = 0;
    virtual HRESULT __stdcall abi_GetAnswerToResetAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** result) = 0;
};

struct __declspec(uuid("192a5319-c9c4-4947-81cc-44794a61ef91")) __declspec(novtable) ISmartCardChallengeContext : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Challenge(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_VerifyResponseAsync(Windows::Storage::Streams::IBuffer * response, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ProvisionAsync(Windows::Storage::Streams::IBuffer * response, bool formatCard, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ProvisionAsyncWithNewCardId(Windows::Storage::Streams::IBuffer * response, bool formatCard, GUID newCardId, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ChangeAdministrativeKeyAsync(Windows::Storage::Streams::IBuffer * response, Windows::Storage::Streams::IBuffer * newAdministrativeKey, Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("2fdf87e5-028d-491e-a058-3382c3986f40")) __declspec(novtable) ISmartCardConnect : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ConnectAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> ** result) = 0;
};

struct __declspec(uuid("7edb991a-a81a-47bc-a649-156be6b7f231")) __declspec(novtable) ISmartCardConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TransmitAsync(Windows::Storage::Streams::IBuffer * command, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** result) = 0;
};

struct __declspec(uuid("183ce184-4db6-4841-ac9e-2ac1f39b7304")) __declspec(novtable) ISmartCardPinPolicy : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MinLength(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxLength(uint32_t value) = 0;
    virtual HRESULT __stdcall get_UppercaseLetters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) = 0;
    virtual HRESULT __stdcall put_UppercaseLetters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) = 0;
    virtual HRESULT __stdcall get_LowercaseLetters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) = 0;
    virtual HRESULT __stdcall put_LowercaseLetters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) = 0;
    virtual HRESULT __stdcall get_Digits(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) = 0;
    virtual HRESULT __stdcall put_Digits(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) = 0;
    virtual HRESULT __stdcall get_SpecialCharacters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption * value) = 0;
    virtual HRESULT __stdcall put_SpecialCharacters(winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) = 0;
};

struct __declspec(uuid("18c94aac-7805-4004-85e4-bbefac8f6884")) __declspec(novtable) ISmartCardPinResetDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("12fe3c4d-5fb9-4e8e-9ff6-61f475124fef")) __declspec(novtable) ISmartCardPinResetRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Challenge(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Devices::SmartCards::ISmartCardPinResetDeferral ** result) = 0;
    virtual HRESULT __stdcall abi_SetResponse(Windows::Storage::Streams::IBuffer * response) = 0;
};

struct __declspec(uuid("19eeedbd-1fab-477c-b712-1a2c5af1fd6e")) __declspec(novtable) ISmartCardProvisioning : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SmartCard(Windows::Devices::SmartCards::ISmartCard ** value) = 0;
    virtual HRESULT __stdcall abi_GetIdAsync(Windows::Foundation::IAsyncOperation<GUID> ** result) = 0;
    virtual HRESULT __stdcall abi_GetNameAsync(Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_GetChallengeContextAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestPinChangeAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestPinResetAsync(Windows::Devices::SmartCards::SmartCardPinResetHandler * handler, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("10fd28eb-3f79-4b66-9b7c-11c149b7d0bc")) __declspec(novtable) ISmartCardProvisioning2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAuthorityKeyContainerNameAsync(Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
};

struct __declspec(uuid("13882848-0d13-4e70-9735-51daeca5254f")) __declspec(novtable) ISmartCardProvisioningStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromSmartCardAsync(Windows::Devices::SmartCards::ISmartCard * card, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestVirtualSmartCardCreationAsync(hstring friendlyName, Windows::Storage::Streams::IBuffer * administrativeKey, Windows::Devices::SmartCards::ISmartCardPinPolicy * pinPolicy, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestVirtualSmartCardCreationAsyncWithCardId(hstring friendlyName, Windows::Storage::Streams::IBuffer * administrativeKey, Windows::Devices::SmartCards::ISmartCardPinPolicy * pinPolicy, GUID cardId, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::ISmartCard * card, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("3447c6a8-c9a0-4bd6-b50d-251f4e8d3a62")) __declspec(novtable) ISmartCardProvisioningStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestAttestedVirtualSmartCardCreationAsync(hstring friendlyName, Windows::Storage::Streams::IBuffer * administrativeKey, Windows::Devices::SmartCards::ISmartCardPinPolicy * pinPolicy, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAttestedVirtualSmartCardCreationAsyncWithCardId(hstring friendlyName, Windows::Storage::Streams::IBuffer * administrativeKey, Windows::Devices::SmartCards::ISmartCardPinPolicy * pinPolicy, GUID cardId, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> ** result) = 0;
};

struct __declspec(uuid("1074b4e0-54c2-4df0-817a-14c14378f06c")) __declspec(novtable) ISmartCardReader : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Devices::SmartCards::SmartCardReaderKind * value) = 0;
    virtual HRESULT __stdcall abi_GetStatusAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAllCardsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> ** result) = 0;
    virtual HRESULT __stdcall add_CardAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CardAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_CardRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CardRemoved(event_token token) = 0;
};

struct __declspec(uuid("103c04e1-a1ca-48f2-a281-5b6f669af107")) __declspec(novtable) ISmartCardReaderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * selector) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorWithKind(winrt::Windows::Devices::SmartCards::SmartCardReaderKind kind, hstring * selector) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> ** result) = 0;
};

struct __declspec(uuid("138d5e40-f3bc-4a5c-b41d-4b4ef684e237")) __declspec(novtable) SmartCardPinResetHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Devices::SmartCards::ISmartCardProvisioning * sender, Windows::Devices::SmartCards::ISmartCardPinResetRequest * request) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::SmartCards::CardAddedEventArgs> { using default_interface = Windows::Devices::SmartCards::ICardAddedEventArgs; };
template <> struct traits<Windows::Devices::SmartCards::CardRemovedEventArgs> { using default_interface = Windows::Devices::SmartCards::ICardRemovedEventArgs; };
template <> struct traits<Windows::Devices::SmartCards::SmartCard> { using default_interface = Windows::Devices::SmartCards::ISmartCard; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardChallengeContext> { using default_interface = Windows::Devices::SmartCards::ISmartCardChallengeContext; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardConnection> { using default_interface = Windows::Devices::SmartCards::ISmartCardConnection; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardPinPolicy> { using default_interface = Windows::Devices::SmartCards::ISmartCardPinPolicy; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardPinResetDeferral> { using default_interface = Windows::Devices::SmartCards::ISmartCardPinResetDeferral; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardPinResetRequest> { using default_interface = Windows::Devices::SmartCards::ISmartCardPinResetRequest; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardProvisioning> { using default_interface = Windows::Devices::SmartCards::ISmartCardProvisioning; };
template <> struct traits<Windows::Devices::SmartCards::SmartCardReader> { using default_interface = Windows::Devices::SmartCards::ISmartCardReader; };

}

namespace Windows::Devices::SmartCards {

template <typename T> class impl_ICardAddedEventArgs;
template <typename T> class impl_ICardRemovedEventArgs;
template <typename T> class impl_ISmartCard;
template <typename T> class impl_ISmartCardChallengeContext;
template <typename T> class impl_ISmartCardConnect;
template <typename T> class impl_ISmartCardConnection;
template <typename T> class impl_ISmartCardPinPolicy;
template <typename T> class impl_ISmartCardPinResetDeferral;
template <typename T> class impl_ISmartCardPinResetRequest;
template <typename T> class impl_ISmartCardProvisioning;
template <typename T> class impl_ISmartCardProvisioning2;
template <typename T> class impl_ISmartCardProvisioningStatics;
template <typename T> class impl_ISmartCardProvisioningStatics2;
template <typename T> class impl_ISmartCardReader;
template <typename T> class impl_ISmartCardReaderStatics;
template <typename T> struct impl_SmartCardPinResetHandler;

}

namespace impl {

template <> struct traits<Windows::Devices::SmartCards::ICardAddedEventArgs>
{
    using abi = ABI::Windows::Devices::SmartCards::ICardAddedEventArgs;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ICardAddedEventArgs<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ICardRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::SmartCards::ICardRemovedEventArgs;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ICardRemovedEventArgs<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCard>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCard;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCard<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardChallengeContext>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardChallengeContext;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardChallengeContext<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardConnect>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardConnect;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardConnect<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardConnection>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardConnection;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardConnection<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardPinPolicy>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardPinPolicy;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardPinPolicy<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardPinResetDeferral;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardPinResetDeferral<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardPinResetRequest;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardPinResetRequest<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardProvisioning>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardProvisioning;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardProvisioning<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardProvisioning2>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardProvisioning2;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardProvisioning2<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardProvisioningStatics;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardProvisioningStatics<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardProvisioningStatics2;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardProvisioningStatics2<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardReader>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardReader;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardReader<D>;
};

template <> struct traits<Windows::Devices::SmartCards::ISmartCardReaderStatics>
{
    using abi = ABI::Windows::Devices::SmartCards::ISmartCardReaderStatics;
    template <typename D> using consume = Windows::Devices::SmartCards::impl_ISmartCardReaderStatics<D>;
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardPinResetHandler>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardPinResetHandler;
};

template <> struct traits<Windows::Devices::SmartCards::CardAddedEventArgs>
{
    using abi = ABI::Windows::Devices::SmartCards::CardAddedEventArgs;
    using default_interface = Windows::Devices::SmartCards::ICardAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.CardAddedEventArgs"; }
};

template <> struct traits<Windows::Devices::SmartCards::CardRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::SmartCards::CardRemovedEventArgs;
    using default_interface = Windows::Devices::SmartCards::ICardRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.CardRemovedEventArgs"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCard>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCard;
    using default_interface = Windows::Devices::SmartCards::ISmartCard;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCard"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardChallengeContext>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardChallengeContext;
    using default_interface = Windows::Devices::SmartCards::ISmartCardChallengeContext;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardChallengeContext"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardConnection>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardConnection;
    using default_interface = Windows::Devices::SmartCards::ISmartCardConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardConnection"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardPinPolicy>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardPinPolicy;
    using default_interface = Windows::Devices::SmartCards::ISmartCardPinPolicy;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardPinPolicy"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardPinResetDeferral>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardPinResetDeferral;
    using default_interface = Windows::Devices::SmartCards::ISmartCardPinResetDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardPinResetDeferral"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardPinResetRequest>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardPinResetRequest;
    using default_interface = Windows::Devices::SmartCards::ISmartCardPinResetRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardPinResetRequest"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardProvisioning>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardProvisioning;
    using default_interface = Windows::Devices::SmartCards::ISmartCardProvisioning;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardProvisioning"; }
};

template <> struct traits<Windows::Devices::SmartCards::SmartCardReader>
{
    using abi = ABI::Windows::Devices::SmartCards::SmartCardReader;
    using default_interface = Windows::Devices::SmartCards::ISmartCardReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.SmartCards.SmartCardReader"; }
};

}

}
