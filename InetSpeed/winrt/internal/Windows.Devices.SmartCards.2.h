// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.SmartCards.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
#define WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
template <> struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79")) __declspec(novtable) IAsyncOperation<hstring> : impl_IAsyncOperation<hstring> {};
#endif

#ifndef WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
#define WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
template <> struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IBuffer> : impl_IAsyncOperation<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_036a830d_bbca_5cb9_977f_b29ea3042149
#define WINRT_GENERIC_036a830d_bbca_5cb9_977f_b29ea3042149
template <> struct __declspec(uuid("036a830d-bbca-5cb9-977f-b29ea3042149")) __declspec(novtable) IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> : impl_IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> {};
#endif

#ifndef WINRT_GENERIC_5ae402fa_1f22_5570_a0c8_b2320adedb81
#define WINRT_GENERIC_5ae402fa_1f22_5570_a0c8_b2320adedb81
template <> struct __declspec(uuid("5ae402fa-1f22-5570-a0c8-b2320adedb81")) __declspec(novtable) IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> : impl_IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_4bee6991_3508_5f03_a2f4_90a5ddb26bd8
#define WINRT_GENERIC_4bee6991_3508_5f03_a2f4_90a5ddb26bd8
template <> struct __declspec(uuid("4bee6991-3508-5f03-a2f4-90a5ddb26bd8")) __declspec(novtable) IVectorView<Windows::Devices::SmartCards::SmartCard> : impl_IVectorView<Windows::Devices::SmartCards::SmartCard> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d36f2db9_5674_5f74_9f69_3cdc4559999f
#define WINRT_GENERIC_d36f2db9_5674_5f74_9f69_3cdc4559999f
template <> struct __declspec(uuid("d36f2db9-5674-5f74-9f69-3cdc4559999f")) __declspec(novtable) TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> : impl_TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_69da07c6_b266_5a1c_937c_d82b4a8232c6
#define WINRT_GENERIC_69da07c6_b266_5a1c_937c_d82b4a8232c6
template <> struct __declspec(uuid("69da07c6-b266-5a1c-937c-d82b4a8232c6")) __declspec(novtable) TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> : impl_TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e2223376_8cf6_51bd_9907_1344aa665e5d
#define WINRT_GENERIC_e2223376_8cf6_51bd_9907_1344aa665e5d
template <> struct __declspec(uuid("e2223376-8cf6-51bd-9907-1344aa665e5d")) __declspec(novtable) IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> : impl_IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> {};
#endif

#ifndef WINRT_GENERIC_6184fc80_b752_5ce8_a136_f57174bb9309
#define WINRT_GENERIC_6184fc80_b752_5ce8_a136_f57174bb9309
template <> struct __declspec(uuid("6184fc80-b752-5ce8-a136-f57174bb9309")) __declspec(novtable) IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> : impl_IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> {};
#endif

#ifndef WINRT_GENERIC_6607bc41_294b_5975_9c3f_4b49836d0916
#define WINRT_GENERIC_6607bc41_294b_5975_9c3f_4b49836d0916
template <> struct __declspec(uuid("6607bc41-294b-5975-9c3f-4b49836d0916")) __declspec(novtable) IAsyncOperation<GUID> : impl_IAsyncOperation<GUID> {};
#endif

#ifndef WINRT_GENERIC_1c650663_3f68_599b_b9d4_c350f13ee4e4
#define WINRT_GENERIC_1c650663_3f68_599b_b9d4_c350f13ee4e4
template <> struct __declspec(uuid("1c650663-3f68-599b-b9d4-c350f13ee4e4")) __declspec(novtable) IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> : impl_IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> {};
#endif

#ifndef WINRT_GENERIC_779bbc5b_a75c_5988_978f_34dbc629d576
#define WINRT_GENERIC_779bbc5b_a75c_5988_978f_34dbc629d576
template <> struct __declspec(uuid("779bbc5b-a75c-5988-978f-34dbc629d576")) __declspec(novtable) IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> : impl_IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
#define WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
template <> struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41")) __declspec(novtable) AsyncOperationCompletedHandler<hstring> : impl_AsyncOperationCompletedHandler<hstring> {};
#endif

#ifndef WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
#define WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
template <> struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_20d3244d_375a_5f7d_8944_164fdfed4239
#define WINRT_GENERIC_20d3244d_375a_5f7d_8944_164fdfed4239
template <> struct __declspec(uuid("20d3244d-375a-5f7d-8944-164fdfed4239")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardReader> : impl_AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardReader> {};
#endif

#ifndef WINRT_GENERIC_3d7e6ea9_e739_555c_9c02_07396c5321f5
#define WINRT_GENERIC_3d7e6ea9_e739_555c_9c02_07396c5321f5
template <> struct __declspec(uuid("3d7e6ea9-e739-555c-9c02-07396c5321f5")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> {};
#endif

#ifndef WINRT_GENERIC_bdaf4a41_3b4a_56b0_aeec_fee71cc7f328
#define WINRT_GENERIC_bdaf4a41_3b4a_56b0_aeec_fee71cc7f328
template <> struct __declspec(uuid("bdaf4a41-3b4a-56b0-aeec-fee71cc7f328")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Devices::SmartCards::SmartCardStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Devices::SmartCards::SmartCardStatus> {};
#endif

#ifndef WINRT_GENERIC_7a2e58dc_22ee_5cb8_83cc_a7a61b9dcd2c
#define WINRT_GENERIC_7a2e58dc_22ee_5cb8_83cc_a7a61b9dcd2c
template <> struct __declspec(uuid("7a2e58dc-22ee-5cb8-83cc-a7a61b9dcd2c")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardProvisioning> : impl_AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardProvisioning> {};
#endif

#ifndef WINRT_GENERIC_5233899b_ba7e_504f_bb83_ceebac62decf
#define WINRT_GENERIC_5233899b_ba7e_504f_bb83_ceebac62decf
template <> struct __declspec(uuid("5233899b-ba7e-504f-bb83-ceebac62decf")) __declspec(novtable) AsyncOperationCompletedHandler<GUID> : impl_AsyncOperationCompletedHandler<GUID> {};
#endif

#ifndef WINRT_GENERIC_96b172f6_dedb_5f3e_af90_7b0f10219352
#define WINRT_GENERIC_96b172f6_dedb_5f3e_af90_7b0f10219352
template <> struct __declspec(uuid("96b172f6-dedb-5f3e-af90-7b0f10219352")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardChallengeContext> : impl_AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardChallengeContext> {};
#endif

#ifndef WINRT_GENERIC_c71f00e6_af26_5e5c_913d_0efeb7d08ef7
#define WINRT_GENERIC_c71f00e6_af26_5e5c_913d_0efeb7d08ef7
template <> struct __declspec(uuid("c71f00e6-af26-5e5c-913d-0efeb7d08ef7")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardConnection> : impl_AsyncOperationCompletedHandler<Windows::Devices::SmartCards::SmartCardConnection> {};
#endif

#ifndef WINRT_GENERIC_3b2691b2_fc5e_59ff_8c6f_e6dd29a967fc
#define WINRT_GENERIC_3b2691b2_fc5e_59ff_8c6f_e6dd29a967fc
template <> struct __declspec(uuid("3b2691b2-fc5e-59ff-8c6f-e6dd29a967fc")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> {};
#endif

#ifndef WINRT_GENERIC_bfea3fad_411e_5721_88f5_92c9b9fbbe14
#define WINRT_GENERIC_bfea3fad_411e_5721_88f5_92c9b9fbbe14
template <> struct __declspec(uuid("bfea3fad-411e-5721-88f5-92c9b9fbbe14")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> {};
#endif


}

namespace Windows::Devices::SmartCards {

template <typename D>
class WINRT_EBO impl_ICardAddedEventArgs
{
    auto shim() const { return impl::shim<D, ICardAddedEventArgs>(this); }

public:

    Windows::Devices::SmartCards::SmartCard SmartCard() const;
};

template <typename D>
class WINRT_EBO impl_ICardRemovedEventArgs
{
    auto shim() const { return impl::shim<D, ICardRemovedEventArgs>(this); }

public:

    Windows::Devices::SmartCards::SmartCard SmartCard() const;
};

template <typename D>
class WINRT_EBO impl_ISmartCard
{
    auto shim() const { return impl::shim<D, ISmartCard>(this); }

public:

    Windows::Devices::SmartCards::SmartCardReader Reader() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardStatus> GetStatusAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GetAnswerToResetAsync() const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardChallengeContext
{
    auto shim() const { return impl::shim<D, ISmartCardChallengeContext>(this); }

public:

    Windows::Storage::Streams::IBuffer Challenge() const;
    Windows::Foundation::IAsyncOperation<bool> VerifyResponseAsync(const Windows::Storage::Streams::IBuffer & response) const;
    Windows::Foundation::IAsyncAction ProvisionAsync(const Windows::Storage::Streams::IBuffer & response, bool formatCard) const;
    Windows::Foundation::IAsyncAction ProvisionAsync(const Windows::Storage::Streams::IBuffer & response, bool formatCard, GUID newCardId) const;
    Windows::Foundation::IAsyncAction ChangeAdministrativeKeyAsync(const Windows::Storage::Streams::IBuffer & response, const Windows::Storage::Streams::IBuffer & newAdministrativeKey) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardConnect
{
    auto shim() const { return impl::shim<D, ISmartCardConnect>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardConnection> ConnectAsync() const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardConnection
{
    auto shim() const { return impl::shim<D, ISmartCardConnection>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> TransmitAsync(const Windows::Storage::Streams::IBuffer & command) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardPinPolicy
{
    auto shim() const { return impl::shim<D, ISmartCardPinPolicy>(this); }

public:

    uint32_t MinLength() const;
    void MinLength(uint32_t value) const;
    uint32_t MaxLength() const;
    void MaxLength(uint32_t value) const;
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption UppercaseLetters() const;
    void UppercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const;
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption LowercaseLetters() const;
    void LowercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const;
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption Digits() const;
    void Digits(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const;
    Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption SpecialCharacters() const;
    void SpecialCharacters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption value) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardPinResetDeferral
{
    auto shim() const { return impl::shim<D, ISmartCardPinResetDeferral>(this); }

public:

    void Complete() const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardPinResetRequest
{
    auto shim() const { return impl::shim<D, ISmartCardPinResetRequest>(this); }

public:

    Windows::Storage::Streams::IBuffer Challenge() const;
    Windows::Foundation::DateTime Deadline() const;
    Windows::Devices::SmartCards::SmartCardPinResetDeferral GetDeferral() const;
    void SetResponse(const Windows::Storage::Streams::IBuffer & response) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardProvisioning
{
    auto shim() const { return impl::shim<D, ISmartCardProvisioning>(this); }

public:

    Windows::Devices::SmartCards::SmartCard SmartCard() const;
    Windows::Foundation::IAsyncOperation<GUID> GetIdAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetNameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardChallengeContext> GetChallengeContextAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinChangeAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinResetAsync(const Windows::Devices::SmartCards::SmartCardPinResetHandler & handler) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardProvisioning2
{
    auto shim() const { return impl::shim<D, ISmartCardProvisioning2>(this); }

public:

    Windows::Foundation::IAsyncOperation<hstring> GetAuthorityKeyContainerNameAsync() const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardProvisioningStatics
{
    auto shim() const { return impl::shim<D, ISmartCardProvisioningStatics>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> FromSmartCardAsync(const Windows::Devices::SmartCards::SmartCard & card) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId) const;
    Windows::Foundation::IAsyncOperation<bool> RequestVirtualSmartCardDeletionAsync(const Windows::Devices::SmartCards::SmartCard & card) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardProvisioningStatics2
{
    auto shim() const { return impl::shim<D, ISmartCardProvisioningStatics2>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(hstring_ref friendlyName, const Windows::Storage::Streams::IBuffer & administrativeKey, const Windows::Devices::SmartCards::SmartCardPinPolicy & pinPolicy, GUID cardId) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardReader
{
    auto shim() const { return impl::shim<D, ISmartCardReader>(this); }

public:

    hstring DeviceId() const;
    hstring Name() const;
    Windows::Devices::SmartCards::SmartCardReaderKind Kind() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> GetStatusAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCard>> FindAllCardsAsync() const;
    event_token CardAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> & handler) const;
    using CardAdded_revoker = event_revoker<ISmartCardReader>;
    CardAdded_revoker CardAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> & handler) const;
    void CardAdded(event_token token) const;
    event_token CardRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> & handler) const;
    using CardRemoved_revoker = event_revoker<ISmartCardReader>;
    CardRemoved_revoker CardRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> & handler) const;
    void CardRemoved(event_token token) const;
};

template <typename D>
class WINRT_EBO impl_ISmartCardReaderStatics
{
    auto shim() const { return impl::shim<D, ISmartCardReaderStatics>(this); }

public:

    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind kind) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> FromIdAsync(hstring_ref deviceId) const;
};

struct SmartCardPinResetHandler : Windows::IUnknown
{
    SmartCardPinResetHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<SmartCardPinResetHandler>(m_ptr); }
    template <typename L> SmartCardPinResetHandler(L lambda);
    template <typename F> SmartCardPinResetHandler (F * function);
    template <typename O, typename M> SmartCardPinResetHandler(O * object, M method);
    void operator()(const Windows::Devices::SmartCards::SmartCardProvisioning & sender, const Windows::Devices::SmartCards::SmartCardPinResetRequest & request) const;
};

struct ICardAddedEventArgs :
    Windows::IInspectable,
    impl::consume<ICardAddedEventArgs>
{
    ICardAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICardAddedEventArgs>(m_ptr); }
};

struct ICardRemovedEventArgs :
    Windows::IInspectable,
    impl::consume<ICardRemovedEventArgs>
{
    ICardRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICardRemovedEventArgs>(m_ptr); }
};

struct ISmartCard :
    Windows::IInspectable,
    impl::consume<ISmartCard>
{
    ISmartCard(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCard>(m_ptr); }
};

struct ISmartCardChallengeContext :
    Windows::IInspectable,
    impl::consume<ISmartCardChallengeContext>,
    impl::require<ISmartCardChallengeContext, Windows::Foundation::IClosable>
{
    ISmartCardChallengeContext(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardChallengeContext>(m_ptr); }
};

struct ISmartCardConnect :
    Windows::IInspectable,
    impl::consume<ISmartCardConnect>
{
    ISmartCardConnect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardConnect>(m_ptr); }
};

struct ISmartCardConnection :
    Windows::IInspectable,
    impl::consume<ISmartCardConnection>,
    impl::require<ISmartCardConnection, Windows::Foundation::IClosable>
{
    ISmartCardConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardConnection>(m_ptr); }
};

struct ISmartCardPinPolicy :
    Windows::IInspectable,
    impl::consume<ISmartCardPinPolicy>
{
    ISmartCardPinPolicy(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardPinPolicy>(m_ptr); }
};

struct ISmartCardPinResetDeferral :
    Windows::IInspectable,
    impl::consume<ISmartCardPinResetDeferral>
{
    ISmartCardPinResetDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardPinResetDeferral>(m_ptr); }
};

struct ISmartCardPinResetRequest :
    Windows::IInspectable,
    impl::consume<ISmartCardPinResetRequest>
{
    ISmartCardPinResetRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardPinResetRequest>(m_ptr); }
};

struct ISmartCardProvisioning :
    Windows::IInspectable,
    impl::consume<ISmartCardProvisioning>
{
    ISmartCardProvisioning(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardProvisioning>(m_ptr); }
};

struct ISmartCardProvisioning2 :
    Windows::IInspectable,
    impl::consume<ISmartCardProvisioning2>
{
    ISmartCardProvisioning2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardProvisioning2>(m_ptr); }
};

struct ISmartCardProvisioningStatics :
    Windows::IInspectable,
    impl::consume<ISmartCardProvisioningStatics>
{
    ISmartCardProvisioningStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardProvisioningStatics>(m_ptr); }
};

struct ISmartCardProvisioningStatics2 :
    Windows::IInspectable,
    impl::consume<ISmartCardProvisioningStatics2>
{
    ISmartCardProvisioningStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardProvisioningStatics2>(m_ptr); }
};

struct ISmartCardReader :
    Windows::IInspectable,
    impl::consume<ISmartCardReader>
{
    ISmartCardReader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardReader>(m_ptr); }
};

struct ISmartCardReaderStatics :
    Windows::IInspectable,
    impl::consume<ISmartCardReaderStatics>
{
    ISmartCardReaderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardReaderStatics>(m_ptr); }
};

}

}
