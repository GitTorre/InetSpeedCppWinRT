// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.EnterpriseData.0.h"

namespace winrt {

namespace Windows::Security::EnterpriseData {

struct IBufferProtectUnprotectResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferProtectUnprotectResult>
{
    IBufferProtectUnprotectResult(std::nullptr_t = nullptr) noexcept {}
};

struct IDataProtectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionInfo>
{
    IDataProtectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IDataProtectionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionManagerStatics>
{
    IDataProtectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFileProtectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionInfo>
{
    IFileProtectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IFileProtectionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics>
{
    IFileProtectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFileProtectionManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics2>
{
    IFileProtectionManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileProtectionManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics3>
{
    IFileProtectionManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] IFileRevocationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileRevocationManagerStatics>
{
    IFileRevocationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUnprotectOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUnprotectOptions>
{
    IFileUnprotectOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUnprotectOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUnprotectOptionsFactory>
{
    IFileUnprotectOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedAccessResumedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedAccessResumedEventArgs>
{
    IProtectedAccessResumedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedAccessSuspendingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedAccessSuspendingEventArgs>
{
    IProtectedAccessSuspendingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedContainerExportResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContainerExportResult>
{
    IProtectedContainerExportResult(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedContainerImportResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContainerImportResult>
{
    IProtectedContainerImportResult(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedContentRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContentRevokedEventArgs>
{
    IProtectedContentRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectedFileCreateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedFileCreateResult>
{
    IProtectedFileCreateResult(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyAuditInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyAuditInfo>
{
    IProtectionPolicyAuditInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyAuditInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyAuditInfoFactory>
{
    IProtectionPolicyAuditInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManager>
{
    IProtectionPolicyManager(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManager2>
{
    IProtectionPolicyManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics>
{
    IProtectionPolicyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics2>
{
    IProtectionPolicyManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics3>
{
    IProtectionPolicyManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionPolicyManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics4>
{
    IProtectionPolicyManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct IThreadNetworkContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadNetworkContext>
{
    IThreadNetworkContext(std::nullptr_t = nullptr) noexcept {}
};

}

}
