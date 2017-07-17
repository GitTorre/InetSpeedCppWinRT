// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.1.h"
#include "Windows.Devices.Sms.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Networking.Connectivity.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Networking.NetworkOperators.1.h"

namespace winrt {

namespace Windows::Networking::NetworkOperators {

struct ProfileUsage
{
    uint32_t UsageInMegabytes;
    Windows::Foundation::DateTime LastSyncTime;
};

struct FdnAccessManager
{
    FdnAccessManager() = delete;
    static Windows::Foundation::IAsyncOperation<bool> RequestUnlockAsync(param::hstring const& contactListId);
};

struct HotspotAuthenticationContext :
    Windows::Networking::NetworkOperators::IHotspotAuthenticationContext,
    impl::require<HotspotAuthenticationContext, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
{
    HotspotAuthenticationContext(std::nullptr_t) noexcept {}
    static bool TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context);
};

struct HotspotAuthenticationEventDetails :
    Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails
{
    HotspotAuthenticationEventDetails(std::nullptr_t) noexcept {}
};

struct HotspotCredentialsAuthenticationResult :
    Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult
{
    HotspotCredentialsAuthenticationResult(std::nullptr_t) noexcept {}
};

struct KnownCSimFilePaths
{
    KnownCSimFilePaths() = delete;
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid1();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid2();
};

struct KnownRuimFilePaths
{
    KnownRuimFilePaths() = delete;
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid1();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid2();
};

struct KnownSimFilePaths
{
    KnownSimFilePaths() = delete;
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFOns();
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid1();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid2();
};

struct KnownUSimFilePaths
{
    KnownUSimFilePaths() = delete;
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn();
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFOpl();
    static Windows::Foundation::Collections::IVectorView<uint32_t> EFPnn();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid1();
    static Windows::Foundation::Collections::IVectorView<uint32_t> Gid2();
};

struct MobileBroadbandAccount :
    Windows::Networking::NetworkOperators::IMobileBroadbandAccount,
    impl::require<MobileBroadbandAccount, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2, Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
{
    MobileBroadbandAccount(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<hstring> AvailableNetworkAccountIds();
    static Windows::Networking::NetworkOperators::MobileBroadbandAccount CreateFromNetworkAccountId(param::hstring const& networkAccountId);
};

struct MobileBroadbandAccountEventArgs :
    Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs
{
    MobileBroadbandAccountEventArgs(std::nullptr_t) noexcept {}
};

struct MobileBroadbandAccountUpdatedEventArgs :
    Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs
{
    MobileBroadbandAccountUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct MobileBroadbandAccountWatcher :
    Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher
{
    MobileBroadbandAccountWatcher(std::nullptr_t) noexcept {}
    MobileBroadbandAccountWatcher();
};

struct MobileBroadbandDeviceInformation :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation,
    impl::require<MobileBroadbandDeviceInformation, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
{
    MobileBroadbandDeviceInformation(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceService :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService
{
    MobileBroadbandDeviceService(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceCommandResult :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult
{
    MobileBroadbandDeviceServiceCommandResult(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceCommandSession :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession
{
    MobileBroadbandDeviceServiceCommandSession(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceDataReceivedEventArgs :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs
{
    MobileBroadbandDeviceServiceDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceDataSession :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession
{
    MobileBroadbandDeviceServiceDataSession(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceInformation :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation
{
    MobileBroadbandDeviceServiceInformation(std::nullptr_t) noexcept {}
};

struct MobileBroadbandDeviceServiceTriggerDetails :
    Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails
{
    MobileBroadbandDeviceServiceTriggerDetails(std::nullptr_t) noexcept {}
};

struct MobileBroadbandModem :
    Windows::Networking::NetworkOperators::IMobileBroadbandModem
{
    MobileBroadbandModem(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Networking::NetworkOperators::MobileBroadbandModem FromId(param::hstring const& deviceId);
    static Windows::Networking::NetworkOperators::MobileBroadbandModem GetDefault();
};

struct MobileBroadbandModemConfiguration :
    Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration
{
    MobileBroadbandModemConfiguration(std::nullptr_t) noexcept {}
};

struct MobileBroadbandNetwork :
    Windows::Networking::NetworkOperators::IMobileBroadbandNetwork,
    impl::require<MobileBroadbandNetwork, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
{
    MobileBroadbandNetwork(std::nullptr_t) noexcept {}
};

struct MobileBroadbandNetworkRegistrationStateChange :
    Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange
{
    MobileBroadbandNetworkRegistrationStateChange(std::nullptr_t) noexcept {}
};

struct MobileBroadbandNetworkRegistrationStateChangeTriggerDetails :
    Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
{
    MobileBroadbandNetworkRegistrationStateChangeTriggerDetails(std::nullptr_t) noexcept {}
};

struct MobileBroadbandPin :
    Windows::Networking::NetworkOperators::IMobileBroadbandPin
{
    MobileBroadbandPin(std::nullptr_t) noexcept {}
};

struct MobileBroadbandPinLockStateChange :
    Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange
{
    MobileBroadbandPinLockStateChange(std::nullptr_t) noexcept {}
};

struct MobileBroadbandPinLockStateChangeTriggerDetails :
    Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails
{
    MobileBroadbandPinLockStateChangeTriggerDetails(std::nullptr_t) noexcept {}
};

struct MobileBroadbandPinManager :
    Windows::Networking::NetworkOperators::IMobileBroadbandPinManager
{
    MobileBroadbandPinManager(std::nullptr_t) noexcept {}
};

struct MobileBroadbandPinOperationResult :
    Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult
{
    MobileBroadbandPinOperationResult(std::nullptr_t) noexcept {}
};

struct MobileBroadbandRadioStateChange :
    Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange
{
    MobileBroadbandRadioStateChange(std::nullptr_t) noexcept {}
};

struct MobileBroadbandRadioStateChangeTriggerDetails :
    Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails
{
    MobileBroadbandRadioStateChangeTriggerDetails(std::nullptr_t) noexcept {}
};

struct MobileBroadbandUicc :
    Windows::Networking::NetworkOperators::IMobileBroadbandUicc
{
    MobileBroadbandUicc(std::nullptr_t) noexcept {}
};

struct MobileBroadbandUiccApp :
    Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp
{
    MobileBroadbandUiccApp(std::nullptr_t) noexcept {}
};

struct MobileBroadbandUiccAppReadRecordResult :
    Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult
{
    MobileBroadbandUiccAppReadRecordResult(std::nullptr_t) noexcept {}
};

struct MobileBroadbandUiccAppRecordDetailsResult :
    Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult
{
    MobileBroadbandUiccAppRecordDetailsResult(std::nullptr_t) noexcept {}
};

struct MobileBroadbandUiccAppsResult :
    Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult
{
    MobileBroadbandUiccAppsResult(std::nullptr_t) noexcept {}
};

struct NetworkOperatorNotificationEventDetails :
    Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails,
    impl::require<NetworkOperatorNotificationEventDetails, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
{
    NetworkOperatorNotificationEventDetails(std::nullptr_t) noexcept {}
};

struct NetworkOperatorTetheringAccessPointConfiguration :
    Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration
{
    NetworkOperatorTetheringAccessPointConfiguration(std::nullptr_t) noexcept {}
    NetworkOperatorTetheringAccessPointConfiguration();
};

struct NetworkOperatorTetheringClient :
    Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient
{
    NetworkOperatorTetheringClient(std::nullptr_t) noexcept {}
};

struct NetworkOperatorTetheringManager :
    Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager,
    impl::require<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
{
    NetworkOperatorTetheringManager(std::nullptr_t) noexcept {}
    static Windows::Networking::NetworkOperators::TetheringCapability GetTetheringCapability(param::hstring const& networkAccountId);
    static Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromNetworkAccountId(param::hstring const& networkAccountId);
    static Windows::Networking::NetworkOperators::TetheringCapability GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile);
    static Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile);
    static Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter);
};

struct NetworkOperatorTetheringOperationResult :
    Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult
{
    NetworkOperatorTetheringOperationResult(std::nullptr_t) noexcept {}
};

struct ProvisionFromXmlDocumentResults :
    Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults
{
    ProvisionFromXmlDocumentResults(std::nullptr_t) noexcept {}
};

struct ProvisionedProfile :
    Windows::Networking::NetworkOperators::IProvisionedProfile
{
    ProvisionedProfile(std::nullptr_t) noexcept {}
};

struct ProvisioningAgent :
    Windows::Networking::NetworkOperators::IProvisioningAgent
{
    ProvisioningAgent(std::nullptr_t) noexcept {}
    ProvisioningAgent();
    static Windows::Networking::NetworkOperators::ProvisioningAgent CreateFromNetworkAccountId(param::hstring const& networkAccountId);
};

struct UssdMessage :
    Windows::Networking::NetworkOperators::IUssdMessage
{
    UssdMessage(std::nullptr_t) noexcept {}
    UssdMessage(param::hstring const& messageText);
};

struct UssdReply :
    Windows::Networking::NetworkOperators::IUssdReply
{
    UssdReply(std::nullptr_t) noexcept {}
};

struct UssdSession :
    Windows::Networking::NetworkOperators::IUssdSession
{
    UssdSession(std::nullptr_t) noexcept {}
    static Windows::Networking::NetworkOperators::UssdSession CreateFromNetworkAccountId(param::hstring const& networkAccountId);
    static Windows::Networking::NetworkOperators::UssdSession CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId);
};

}

namespace impl {

}

}
