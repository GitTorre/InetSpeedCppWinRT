// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Cryptography.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.SmartCards.0.h"

namespace winrt {

namespace Windows::Devices::SmartCards {

struct ICardAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICardAddedEventArgs>
{
    ICardAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICardRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICardRemovedEventArgs>
{
    ICardRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCard :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCard>
{
    ISmartCard(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAppletIdGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroup>
{
    ISmartCardAppletIdGroup(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAppletIdGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupFactory>
{
    ISmartCardAppletIdGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAppletIdGroupRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupRegistration>
{
    ISmartCardAppletIdGroupRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAppletIdGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupStatics>
{
    ISmartCardAppletIdGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAutomaticResponseApdu :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu>
{
    ISmartCardAutomaticResponseApdu(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAutomaticResponseApdu2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu2>
{
    ISmartCardAutomaticResponseApdu2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAutomaticResponseApdu3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu3>
{
    ISmartCardAutomaticResponseApdu3(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardAutomaticResponseApduFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApduFactory>
{
    ISmartCardAutomaticResponseApduFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardChallengeContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardChallengeContext>,
    impl::require<ISmartCardChallengeContext, Windows::Foundation::IClosable>
{
    ISmartCardChallengeContext(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardConnect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardConnect>
{
    ISmartCardConnect(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardConnection>,
    impl::require<ISmartCardConnection, Windows::Foundation::IClosable>
{
    ISmartCardConnection(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGenerator>
{
    ISmartCardCryptogramGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGenerator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGenerator2>
{
    ISmartCardCryptogramGenerator2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGeneratorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGeneratorStatics>
{
    ISmartCardCryptogramGeneratorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramMaterialCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialCharacteristics>
{
    ISmartCardCryptogramMaterialCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramMaterialPackageCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialPackageCharacteristics>
{
    ISmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramMaterialPossessionProof :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialPossessionProof>
{
    ISmartCardCryptogramMaterialPossessionProof(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramPlacementStep :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramPlacementStep>
{
    ISmartCardCryptogramPlacementStep(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramStorageKeyCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyCharacteristics>
{
    ISmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramStorageKeyInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyInfo>
{
    ISmartCardCryptogramStorageKeyInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardCryptogramStorageKeyInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyInfo2>
{
    ISmartCardCryptogramStorageKeyInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulator>
{
    ISmartCardEmulator(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulator2>
{
    ISmartCardEmulator2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorApduReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgs>
{
    ISmartCardEmulatorApduReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorApduReceivedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgs2>
{
    ISmartCardEmulatorApduReceivedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorApduReceivedEventArgsWithCryptograms :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
{
    ISmartCardEmulatorApduReceivedEventArgsWithCryptograms(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorConnectionDeactivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorConnectionDeactivatedEventArgs>
{
    ISmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorConnectionProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorConnectionProperties>
{
    ISmartCardEmulatorConnectionProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorStatics>
{
    ISmartCardEmulatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardEmulatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorStatics2>
{
    ISmartCardEmulatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardPinPolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinPolicy>
{
    ISmartCardPinPolicy(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardPinResetDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinResetDeferral>
{
    ISmartCardPinResetDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardPinResetRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinResetRequest>
{
    ISmartCardPinResetRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardProvisioning :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioning>
{
    ISmartCardProvisioning(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardProvisioning2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioning2>
{
    ISmartCardProvisioning2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardProvisioningStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioningStatics>
{
    ISmartCardProvisioningStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardProvisioningStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioningStatics2>
{
    ISmartCardProvisioningStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardReader>
{
    ISmartCardReader(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardReaderStatics>
{
    ISmartCardReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails>
{
    ISmartCardTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails2>
{
    ISmartCardTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTriggerDetails3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails3>
{
    ISmartCardTriggerDetails3(std::nullptr_t = nullptr) noexcept {}
};

}

}
