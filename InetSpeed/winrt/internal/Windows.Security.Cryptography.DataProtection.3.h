// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Security.Cryptography.DataProtection.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::Cryptography::DataProtection {

struct WINRT_EBO DataProtectionProvider :
    Windows::Security::Cryptography::DataProtection::IDataProtectionProvider
{
    DataProtectionProvider(std::nullptr_t) noexcept {}
    DataProtectionProvider();
    DataProtectionProvider(hstring_ref protectionDescriptor);
};

}

}
