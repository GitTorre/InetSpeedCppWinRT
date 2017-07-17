// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Security.Cryptography.Core.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.1.h"
#include "Windows.Security.Credentials.1.h"

namespace winrt {

namespace Windows::Security::Credentials {

struct KeyCredential :
    Windows::Security::Credentials::IKeyCredential
{
    KeyCredential(std::nullptr_t) noexcept {}
};

struct KeyCredentialAttestationResult :
    Windows::Security::Credentials::IKeyCredentialAttestationResult
{
    KeyCredentialAttestationResult(std::nullptr_t) noexcept {}
};

struct KeyCredentialManager
{
    KeyCredentialManager() = delete;
    static Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync();
    static Windows::Foundation::IAsyncAction RenewAttestationAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> OpenAsync(param::hstring const& name);
    static Windows::Foundation::IAsyncAction DeleteAsync(param::hstring const& name);
};

struct KeyCredentialOperationResult :
    Windows::Security::Credentials::IKeyCredentialOperationResult
{
    KeyCredentialOperationResult(std::nullptr_t) noexcept {}
};

struct KeyCredentialRetrievalResult :
    Windows::Security::Credentials::IKeyCredentialRetrievalResult
{
    KeyCredentialRetrievalResult(std::nullptr_t) noexcept {}
};

struct PasswordCredential :
    Windows::Security::Credentials::IPasswordCredential
{
    PasswordCredential(std::nullptr_t) noexcept {}
    PasswordCredential();
    PasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password);
};

struct PasswordCredentialPropertyStore :
    Windows::Foundation::Collections::IPropertySet
{
    PasswordCredentialPropertyStore(std::nullptr_t) noexcept {}
    PasswordCredentialPropertyStore();
};

struct PasswordVault :
    Windows::Security::Credentials::IPasswordVault
{
    PasswordVault(std::nullptr_t) noexcept {}
    PasswordVault();
};

struct WebAccount :
    Windows::Security::Credentials::IWebAccount,
    impl::require<WebAccount, Windows::Security::Credentials::IWebAccount2>
{
    WebAccount(std::nullptr_t) noexcept {}
    WebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state);
};

struct WebAccountProvider :
    Windows::Security::Credentials::IWebAccountProvider,
    impl::require<WebAccountProvider, Windows::Security::Credentials::IWebAccountProvider2, Windows::Security::Credentials::IWebAccountProvider3>
{
    WebAccountProvider(std::nullptr_t) noexcept {}
    WebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri);
};

}

namespace impl {

}

}
