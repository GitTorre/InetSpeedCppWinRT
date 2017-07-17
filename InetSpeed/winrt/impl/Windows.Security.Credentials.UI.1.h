// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Credentials.UI.0.h"

namespace winrt {

namespace Windows::Security::Credentials::UI {

struct ICredentialPickerOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerOptions>
{
    ICredentialPickerOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ICredentialPickerResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerResults>
{
    ICredentialPickerResults(std::nullptr_t = nullptr) noexcept {}
};

struct ICredentialPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerStatics>
{
    ICredentialPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserConsentVerifierStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserConsentVerifierStatics>
{
    IUserConsentVerifierStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
