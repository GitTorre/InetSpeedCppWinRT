// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Cryptography.DataProtection.0.h"

namespace winrt {

namespace Windows::Security::Cryptography::DataProtection {

struct IDataProtectionProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionProvider>
{
    IDataProtectionProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IDataProtectionProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionProviderFactory>
{
    IDataProtectionProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
