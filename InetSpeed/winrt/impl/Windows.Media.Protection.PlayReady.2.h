// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.Protection.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Media.Protection.PlayReady.1.h"

namespace winrt {

namespace Windows::Media::Protection::PlayReady {

struct [[deprecated("NDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDClient :
    Windows::Media::Protection::PlayReady::INDClient
{
    NDClient(std::nullptr_t) noexcept {}
    [[deprecated("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDClient(Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger);
};

struct [[deprecated("NDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDCustomData :
    Windows::Media::Protection::PlayReady::INDCustomData
{
    NDCustomData(std::nullptr_t) noexcept {}
    [[deprecated("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDCustomData(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes);
};

struct [[deprecated("NDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDDownloadEngineNotifier :
    Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier
{
    NDDownloadEngineNotifier(std::nullptr_t) noexcept {}
    NDDownloadEngineNotifier();
};

struct [[deprecated("NDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDLicenseFetchDescriptor :
    Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor
{
    NDLicenseFetchDescriptor(std::nullptr_t) noexcept {}
    [[deprecated("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDLicenseFetchDescriptor(Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData);
};

struct [[deprecated("NDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDStorageFileHelper :
    Windows::Media::Protection::PlayReady::INDStorageFileHelper
{
    NDStorageFileHelper(std::nullptr_t) noexcept {}
    NDStorageFileHelper();
};

struct [[deprecated("NDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDStreamParserNotifier :
    Windows::Media::Protection::PlayReady::INDStreamParserNotifier
{
    NDStreamParserNotifier(std::nullptr_t) noexcept {}
    NDStreamParserNotifier();
};

struct [[deprecated("NDTCPMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDTCPMessenger :
    Windows::Media::Protection::PlayReady::INDMessenger
{
    NDTCPMessenger(std::nullptr_t) noexcept {}
    [[deprecated("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDTCPMessenger(param::hstring const& remoteHostName, uint32_t remoteHostPort);
};

struct PlayReadyContentHeader :
    Windows::Media::Protection::PlayReady::IPlayReadyContentHeader,
    impl::require<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
{
    PlayReadyContentHeader(std::nullptr_t) noexcept {}
    PlayReadyContentHeader(array_view<uint8_t const> headerBytes, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId);
    PlayReadyContentHeader(GUID const& contentKeyId, param::hstring const& contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId);
    PlayReadyContentHeader(array_view<uint8_t const> headerBytes);
    PlayReadyContentHeader(uint32_t dwFlags, array_view<GUID const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId);
};

struct PlayReadyContentResolver
{
    PlayReadyContentResolver() = delete;
    static Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest ServiceRequest(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
};

struct PlayReadyDomain :
    Windows::Media::Protection::PlayReady::IPlayReadyDomain
{
    PlayReadyDomain(std::nullptr_t) noexcept {}
};

struct PlayReadyDomainIterable :
    Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>
{
    PlayReadyDomainIterable(std::nullptr_t) noexcept {}
    PlayReadyDomainIterable(GUID const& domainAccountId);
};

struct PlayReadyDomainIterator :
    Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyDomain>
{
    PlayReadyDomainIterator(std::nullptr_t) noexcept {}
};

struct PlayReadyDomainJoinServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest
{
    PlayReadyDomainJoinServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyDomainJoinServiceRequest();
};

struct PlayReadyDomainLeaveServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest
{
    PlayReadyDomainLeaveServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyDomainLeaveServiceRequest();
};

struct PlayReadyITADataGenerator :
    Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator
{
    PlayReadyITADataGenerator(std::nullptr_t) noexcept {}
    PlayReadyITADataGenerator();
};

struct PlayReadyIndividualizationServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest
{
    PlayReadyIndividualizationServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyIndividualizationServiceRequest();
};

struct PlayReadyLicense :
    Windows::Media::Protection::PlayReady::IPlayReadyLicense,
    impl::require<PlayReadyLicense, Windows::Media::Protection::PlayReady::IPlayReadyLicense2>
{
    PlayReadyLicense(std::nullptr_t) noexcept {}
};

struct PlayReadyLicenseAcquisitionServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest,
    impl::require<PlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>
{
    PlayReadyLicenseAcquisitionServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyLicenseAcquisitionServiceRequest();
};

struct PlayReadyLicenseIterable :
    Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    PlayReadyLicenseIterable(std::nullptr_t) noexcept {}
    PlayReadyLicenseIterable();
    PlayReadyLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated);
};

struct PlayReadyLicenseIterator :
    Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    PlayReadyLicenseIterator(std::nullptr_t) noexcept {}
};

struct PlayReadyLicenseManagement
{
    PlayReadyLicenseManagement() = delete;
    static Windows::Foundation::IAsyncAction DeleteLicenses(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
};

struct PlayReadyLicenseSession :
    Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession,
    impl::require<PlayReadyLicenseSession, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>
{
    PlayReadyLicenseSession(std::nullptr_t) noexcept {}
    PlayReadyLicenseSession(Windows::Foundation::Collections::IPropertySet const& configuration);
};

struct PlayReadyMeteringReportServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest
{
    PlayReadyMeteringReportServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyMeteringReportServiceRequest();
};

struct PlayReadyRevocationServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest
{
    PlayReadyRevocationServiceRequest(std::nullptr_t) noexcept {}
    PlayReadyRevocationServiceRequest();
};

struct PlayReadySecureStopIterable :
    Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
{
    PlayReadySecureStopIterable(std::nullptr_t) noexcept {}
    PlayReadySecureStopIterable(array_view<uint8_t const> publisherCertBytes);
};

struct PlayReadySecureStopIterator :
    Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
{
    PlayReadySecureStopIterator(std::nullptr_t) noexcept {}
};

struct PlayReadySecureStopServiceRequest :
    Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest
{
    PlayReadySecureStopServiceRequest(std::nullptr_t) noexcept {}
    PlayReadySecureStopServiceRequest(array_view<uint8_t const> publisherCertBytes);
    PlayReadySecureStopServiceRequest(GUID const& sessionID, array_view<uint8_t const> publisherCertBytes);
};

struct PlayReadySoapMessage :
    Windows::Media::Protection::PlayReady::IPlayReadySoapMessage
{
    PlayReadySoapMessage(std::nullptr_t) noexcept {}
};

struct PlayReadyStatics
{
    PlayReadyStatics() = delete;
    static GUID DomainJoinServiceRequestType();
    static GUID DomainLeaveServiceRequestType();
    static GUID IndividualizationServiceRequestType();
    static GUID LicenseAcquirerServiceRequestType();
    static GUID MeteringReportServiceRequestType();
    static GUID RevocationServiceRequestType();
    static GUID MediaProtectionSystemId();
    static uint32_t PlayReadySecurityVersion();
    static uint32_t PlayReadyCertificateSecurityLevel();
    static GUID SecureStopServiceRequestType();
    static bool CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature);
    static hstring InputTrustAuthorityToCreate();
    static GUID ProtectionSystemId();
};

}

namespace impl {

}

}
