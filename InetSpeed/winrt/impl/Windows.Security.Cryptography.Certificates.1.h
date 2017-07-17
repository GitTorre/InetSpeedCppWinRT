// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"

namespace winrt {

namespace Windows::Security::Cryptography::Certificates {

struct ICertificate :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate>
{
    ICertificate(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate2>
{
    ICertificate2(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificate3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate3>
{
    ICertificate3(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateChain :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateChain>
{
    ICertificateChain(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateEnrollmentManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics>
{
    ICertificateEnrollmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateEnrollmentManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics2>
{
    ICertificateEnrollmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateEnrollmentManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics3>
{
    ICertificateEnrollmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateExtension>
{
    ICertificateExtension(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateFactory>
{
    ICertificateFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateKeyUsages :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateKeyUsages>
{
    ICertificateKeyUsages(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateQuery>
{
    ICertificateQuery(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateQuery2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateQuery2>
{
    ICertificateQuery2(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateRequestProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties>
{
    ICertificateRequestProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateRequestProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties2>
{
    ICertificateRequestProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateRequestProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties3>
{
    ICertificateRequestProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateRequestProperties4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties4>
{
    ICertificateRequestProperties4(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStore>
{
    ICertificateStore(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStore2>
{
    ICertificateStore2(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateStoresStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStoresStatics>
{
    ICertificateStoresStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICertificateStoresStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStoresStatics2>
{
    ICertificateStoresStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IChainBuildingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChainBuildingParameters>
{
    IChainBuildingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IChainValidationParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChainValidationParameters>
{
    IChainValidationParameters(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsAttachedSignature :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignature>
{
    ICmsAttachedSignature(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsAttachedSignatureFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignatureFactory>
{
    ICmsAttachedSignatureFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsAttachedSignatureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignatureStatics>
{
    ICmsAttachedSignatureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsDetachedSignature :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignature>
{
    ICmsDetachedSignature(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsDetachedSignatureFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignatureFactory>
{
    ICmsDetachedSignatureFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsDetachedSignatureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignatureStatics>
{
    ICmsDetachedSignatureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsSignerInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsSignerInfo>
{
    ICmsSignerInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ICmsTimestampInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsTimestampInfo>
{
    ICmsTimestampInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyAlgorithmNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAlgorithmNamesStatics>
{
    IKeyAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyAlgorithmNamesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAlgorithmNamesStatics2>
{
    IKeyAlgorithmNamesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyAttestationHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAttestationHelperStatics>
{
    IKeyAttestationHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyAttestationHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAttestationHelperStatics2>
{
    IKeyAttestationHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyStorageProviderNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyStorageProviderNamesStatics>
{
    IKeyStorageProviderNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyStorageProviderNamesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyStorageProviderNamesStatics2>
{
    IKeyStorageProviderNamesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPfxImportParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPfxImportParameters>
{
    IPfxImportParameters(std::nullptr_t = nullptr) noexcept {}
};

struct IStandardCertificateStoreNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardCertificateStoreNamesStatics>
{
    IStandardCertificateStoreNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISubjectAlternativeNameInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISubjectAlternativeNameInfo>
{
    ISubjectAlternativeNameInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISubjectAlternativeNameInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISubjectAlternativeNameInfo2>
{
    ISubjectAlternativeNameInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserCertificateEnrollmentManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateEnrollmentManager>
{
    IUserCertificateEnrollmentManager(std::nullptr_t = nullptr) noexcept {}
};

struct IUserCertificateEnrollmentManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateEnrollmentManager2>
{
    IUserCertificateEnrollmentManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserCertificateStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateStore>
{
    IUserCertificateStore(std::nullptr_t = nullptr) noexcept {}
};

}

}
