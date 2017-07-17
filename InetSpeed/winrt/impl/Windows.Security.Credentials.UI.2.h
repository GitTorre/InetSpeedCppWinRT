﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Security.Credentials.UI.1.h"

namespace winrt {

namespace Windows::Security::Credentials::UI {

struct CredentialPicker
{
    CredentialPicker() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(Windows::Security::Credentials::UI::CredentialPickerOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(param::hstring const& targetName, param::hstring const& message);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(param::hstring const& targetName, param::hstring const& message, param::hstring const& caption);
};

struct CredentialPickerOptions :
    Windows::Security::Credentials::UI::ICredentialPickerOptions
{
    CredentialPickerOptions(std::nullptr_t) noexcept {}
    CredentialPickerOptions();
};

struct CredentialPickerResults :
    Windows::Security::Credentials::UI::ICredentialPickerResults
{
    CredentialPickerResults(std::nullptr_t) noexcept {}
};

struct UserConsentVerifier
{
    UserConsentVerifier() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerifierAvailability> CheckAvailabilityAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerificationResult> RequestVerificationAsync(param::hstring const& message);
};

}

namespace impl {

}

}
