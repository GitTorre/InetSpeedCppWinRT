// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Protection.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Media.Protection.PlayReady.0.h"

namespace winrt {

namespace Windows::Media::Protection::PlayReady {

struct [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDClient>
{
    INDClient(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDClientFactory>
{
    INDClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDClosedCaptionDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDClosedCaptionDataReceivedEventArgs>
{
    INDClosedCaptionDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDCustomData :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDCustomData>
{
    INDCustomData(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDCustomDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDCustomDataFactory>
{
    INDCustomDataFactory(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDDownloadEngine :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDDownloadEngine>
{
    INDDownloadEngine(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDDownloadEngineNotifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDDownloadEngineNotifier>
{
    INDDownloadEngineNotifier(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDLicenseFetchCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDLicenseFetchCompletedEventArgs>
{
    INDLicenseFetchCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDLicenseFetchDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDLicenseFetchDescriptor>
{
    INDLicenseFetchDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDLicenseFetchDescriptorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDLicenseFetchDescriptorFactory>
{
    INDLicenseFetchDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDLicenseFetchResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDLicenseFetchResult>
{
    INDLicenseFetchResult(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDMessenger :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDMessenger>
{
    INDMessenger(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDProximityDetectionCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDProximityDetectionCompletedEventArgs>
{
    INDProximityDetectionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDRegistrationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDRegistrationCompletedEventArgs>
{
    INDRegistrationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDSendResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDSendResult>
{
    INDSendResult(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDStartResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDStartResult>
{
    INDStartResult(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDStorageFileHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDStorageFileHelper>
{
    INDStorageFileHelper(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDStreamParser :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDStreamParser>
{
    INDStreamParser(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDStreamParserNotifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDStreamParserNotifier>
{
    INDStreamParserNotifier(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDTCPMessengerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDTCPMessengerFactory>
{
    INDTCPMessengerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] INDTransmitterProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<INDTransmitterProperties>
{
    INDTransmitterProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyContentHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyContentHeader>
{
    IPlayReadyContentHeader(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyContentHeader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyContentHeader2>,
    impl::require<IPlayReadyContentHeader2, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>
{
    IPlayReadyContentHeader2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyContentHeaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyContentHeaderFactory>
{
    IPlayReadyContentHeaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyContentHeaderFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyContentHeaderFactory2>
{
    IPlayReadyContentHeaderFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyContentResolver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyContentResolver>
{
    IPlayReadyContentResolver(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyDomain :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyDomain>
{
    IPlayReadyDomain(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyDomainIterableFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyDomainIterableFactory>
{
    IPlayReadyDomainIterableFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyDomainJoinServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyDomainJoinServiceRequest>,
    impl::require<IPlayReadyDomainJoinServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyDomainJoinServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyDomainLeaveServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyDomainLeaveServiceRequest>,
    impl::require<IPlayReadyDomainLeaveServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyDomainLeaveServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyITADataGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyITADataGenerator>
{
    IPlayReadyITADataGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyIndividualizationServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyIndividualizationServiceRequest>,
    impl::require<IPlayReadyIndividualizationServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyIndividualizationServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicense>
{
    IPlayReadyLicense(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicense2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicense2>,
    impl::require<IPlayReadyLicense2, Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    IPlayReadyLicense2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseAcquisitionServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest>,
    impl::require<IPlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyLicenseAcquisitionServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseAcquisitionServiceRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest2>,
    impl::require<IPlayReadyLicenseAcquisitionServiceRequest2, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyLicenseAcquisitionServiceRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseAcquisitionServiceRequest3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest3>,
    impl::require<IPlayReadyLicenseAcquisitionServiceRequest3, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyLicenseAcquisitionServiceRequest3(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseIterableFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseIterableFactory>
{
    IPlayReadyLicenseIterableFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseManagement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseManagement>
{
    IPlayReadyLicenseManagement(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseSession>
{
    IPlayReadyLicenseSession(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseSession2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseSession2>,
    impl::require<IPlayReadyLicenseSession2, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>
{
    IPlayReadyLicenseSession2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyLicenseSessionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyLicenseSessionFactory>
{
    IPlayReadyLicenseSessionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyMeteringReportServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyMeteringReportServiceRequest>,
    impl::require<IPlayReadyMeteringReportServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyMeteringReportServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyRevocationServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyRevocationServiceRequest>,
    impl::require<IPlayReadyRevocationServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadyRevocationServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadySecureStopIterableFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadySecureStopIterableFactory>
{
    IPlayReadySecureStopIterableFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadySecureStopServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadySecureStopServiceRequest>,
    impl::require<IPlayReadySecureStopServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    IPlayReadySecureStopServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadySecureStopServiceRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadySecureStopServiceRequestFactory>
{
    IPlayReadySecureStopServiceRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyServiceRequest>,
    impl::require<IPlayReadyServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest>
{
    IPlayReadyServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadySoapMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadySoapMessage>
{
    IPlayReadySoapMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyStatics>
{
    IPlayReadyStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyStatics2>,
    impl::require<IPlayReadyStatics2, Windows::Media::Protection::PlayReady::IPlayReadyStatics>
{
    IPlayReadyStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyStatics3>,
    impl::require<IPlayReadyStatics3, Windows::Media::Protection::PlayReady::IPlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2>
{
    IPlayReadyStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPlayReadyStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayReadyStatics4>,
    impl::require<IPlayReadyStatics4, Windows::Media::Protection::PlayReady::IPlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>
{
    IPlayReadyStatics4(std::nullptr_t = nullptr) noexcept {}
};

}

}
