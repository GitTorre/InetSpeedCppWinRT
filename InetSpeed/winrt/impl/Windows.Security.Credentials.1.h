// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Security.Cryptography.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Security.Credentials.0.h"

namespace winrt {

namespace Windows::Security::Credentials {

struct ICredentialFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialFactory>
{
    ICredentialFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredential>
{
    IKeyCredential(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyCredentialAttestationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialAttestationResult>
{
    IKeyCredentialAttestationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyCredentialManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialManagerStatics>
{
    IKeyCredentialManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyCredentialOperationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialOperationResult>
{
    IKeyCredentialOperationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyCredentialRetrievalResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialRetrievalResult>
{
    IKeyCredentialRetrievalResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPasswordCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordCredential>
{
    IPasswordCredential(std::nullptr_t = nullptr) noexcept {}
};

struct IPasswordVault :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordVault>
{
    IPasswordVault(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccount>
{
    IWebAccount(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccount2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccount2>,
    impl::require<IWebAccount2, Windows::Security::Credentials::IWebAccount>
{
    IWebAccount2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountFactory>
{
    IWebAccountFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider>
{
    IWebAccountProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider2>,
    impl::require<IWebAccountProvider2, Windows::Security::Credentials::IWebAccountProvider>
{
    IWebAccountProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProvider3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider3>,
    impl::require<IWebAccountProvider3, Windows::Security::Credentials::IWebAccountProvider, Windows::Security::Credentials::IWebAccountProvider2>
{
    IWebAccountProvider3(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderFactory>
{
    IWebAccountProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
