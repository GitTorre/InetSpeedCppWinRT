// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Security.Cryptography.DataProtection.1.h"

namespace winrt {

namespace Windows::Security::Cryptography::DataProtection {

struct DataProtectionProvider :
    Windows::Security::Cryptography::DataProtection::IDataProtectionProvider
{
    DataProtectionProvider(std::nullptr_t) noexcept {}
    DataProtectionProvider();
    DataProtectionProvider(param::hstring const& protectionDescriptor);
};

}

namespace impl {

}

}
