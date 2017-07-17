// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Cryptography.Core.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.SmartCards.1.h"

namespace winrt {

namespace Windows::Devices::SmartCards {

struct SmartCardPinResetHandler : Windows::Foundation::IUnknown
{
    SmartCardPinResetHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SmartCardPinResetHandler(L lambda);
    template <typename F> SmartCardPinResetHandler(F* function);
    template <typename O, typename M> SmartCardPinResetHandler(O* object, M method);
    void operator()(Windows::Devices::SmartCards::SmartCardProvisioning const& sender, Windows::Devices::SmartCards::SmartCardPinResetRequest const& request) const;
};

struct CardAddedEventArgs :
    Windows::Devices::SmartCards::ICardAddedEventArgs
{
    CardAddedEventArgs(std::nullptr_t) noexcept {}
};

struct CardRemovedEventArgs :
    Windows::Devices::SmartCards::ICardRemovedEventArgs
{
    CardRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct SmartCard :
    Windows::Devices::SmartCards::ISmartCard,
    impl::require<SmartCard, Windows::Devices::SmartCards::ISmartCardConnect>
{
    SmartCard(std::nullptr_t) noexcept {}
};

struct SmartCardAppletIdGroup :
    Windows::Devices::SmartCards::ISmartCardAppletIdGroup
{
    SmartCardAppletIdGroup(std::nullptr_t) noexcept {}
    SmartCardAppletIdGroup();
    SmartCardAppletIdGroup(param::hstring const& displayName, param::vector<Windows::Storage::Streams::IBuffer> const& appletIds, Windows::Devices::SmartCards::SmartCardEmulationCategory const& emulationCategory, Windows::Devices::SmartCards::SmartCardEmulationType const& emulationType);
    static uint16_t MaxAppletIds();
};

struct SmartCardAppletIdGroupRegistration :
    Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration
{
    SmartCardAppletIdGroupRegistration(std::nullptr_t) noexcept {}
};

struct SmartCardAutomaticResponseApdu :
    Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu,
    impl::require<SmartCardAutomaticResponseApdu, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
{
    SmartCardAutomaticResponseApdu(std::nullptr_t) noexcept {}
    SmartCardAutomaticResponseApdu(Windows::Storage::Streams::IBuffer const& commandApdu, Windows::Storage::Streams::IBuffer const& responseApdu);
};

struct SmartCardChallengeContext :
    Windows::Devices::SmartCards::ISmartCardChallengeContext
{
    SmartCardChallengeContext(std::nullptr_t) noexcept {}
};

struct SmartCardConnection :
    Windows::Devices::SmartCards::ISmartCardConnection
{
    SmartCardConnection(std::nullptr_t) noexcept {}
};

struct SmartCardCryptogramGenerator :
    Windows::Devices::SmartCards::ISmartCardCryptogramGenerator,
    impl::require<SmartCardCryptogramGenerator, Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
{
    SmartCardCryptogramGenerator(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardCryptogramGenerator> GetSmartCardCryptogramGeneratorAsync();
};

struct SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult();
};

struct SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult();
};

struct SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult();
};

struct SmartCardCryptogramMaterialCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics
{
    SmartCardCryptogramMaterialCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramMaterialCharacteristics();
};

struct SmartCardCryptogramMaterialPackageCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics
{
    SmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramMaterialPackageCharacteristics();
};

struct SmartCardCryptogramMaterialPossessionProof :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof
{
    SmartCardCryptogramMaterialPossessionProof(std::nullptr_t) noexcept {}
};

struct SmartCardCryptogramPlacementStep :
    Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep
{
    SmartCardCryptogramPlacementStep(std::nullptr_t) noexcept {}
    SmartCardCryptogramPlacementStep();
};

struct SmartCardCryptogramStorageKeyCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics
{
    SmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramStorageKeyCharacteristics();
};

struct SmartCardCryptogramStorageKeyInfo :
    Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo,
    impl::require<SmartCardCryptogramStorageKeyInfo, Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
{
    SmartCardCryptogramStorageKeyInfo(std::nullptr_t) noexcept {}
};

struct SmartCardEmulator :
    Windows::Devices::SmartCards::ISmartCardEmulator,
    impl::require<SmartCardEmulator, Windows::Devices::SmartCards::ISmartCardEmulator2>
{
    SmartCardEmulator(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardEmulator> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>> GetAppletIdGroupRegistrationsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration> RegisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroup const& appletIdGroup);
    static Windows::Foundation::IAsyncAction UnregisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration const& registration);
    static uint16_t MaxAppletIdGroupRegistrations();
};

struct SmartCardEmulatorApduReceivedEventArgs :
    Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs,
    impl::require<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
{
    SmartCardEmulatorApduReceivedEventArgs(std::nullptr_t) noexcept {}
    using impl::consume_t<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>::TryRespondAsync;
    using Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs::TryRespondAsync;
};

struct SmartCardEmulatorConnectionDeactivatedEventArgs :
    Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs
{
    SmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t) noexcept {}
};

struct SmartCardEmulatorConnectionProperties :
    Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties
{
    SmartCardEmulatorConnectionProperties(std::nullptr_t) noexcept {}
};

struct SmartCardPinPolicy :
    Windows::Devices::SmartCards::ISmartCardPinPolicy
{
    SmartCardPinPolicy(std::nullptr_t) noexcept {}
    SmartCardPinPolicy();
};

struct SmartCardPinResetDeferral :
    Windows::Devices::SmartCards::ISmartCardPinResetDeferral
{
    SmartCardPinResetDeferral(std::nullptr_t) noexcept {}
};

struct SmartCardPinResetRequest :
    Windows::Devices::SmartCards::ISmartCardPinResetRequest
{
    SmartCardPinResetRequest(std::nullptr_t) noexcept {}
};

struct SmartCardProvisioning :
    Windows::Devices::SmartCards::ISmartCardProvisioning,
    impl::require<SmartCardProvisioning, Windows::Devices::SmartCards::ISmartCardProvisioning2>
{
    SmartCardProvisioning(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> FromSmartCardAsync(Windows::Devices::SmartCards::SmartCard const& card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, GUID const& cardId);
    static Windows::Foundation::IAsyncOperation<bool> RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::SmartCard const& card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, GUID const& cardId);
};

struct SmartCardReader :
    Windows::Devices::SmartCards::ISmartCardReader
{
    SmartCardReader(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind const& kind);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> FromIdAsync(param::hstring const& deviceId);
};

struct SmartCardTriggerDetails :
    Windows::Devices::SmartCards::ISmartCardTriggerDetails,
    impl::require<SmartCardTriggerDetails, Windows::Devices::SmartCards::ISmartCardTriggerDetails2, Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
{
    SmartCardTriggerDetails(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
