// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Management.Core.1.h"

namespace winrt {

namespace Windows::Management::Core {

struct ApplicationDataManager :
    Windows::Management::Core::IApplicationDataManager
{
    ApplicationDataManager(std::nullptr_t) noexcept {}
    static Windows::Storage::ApplicationData CreateForPackageFamily(param::hstring const& packageFamilyName);
};

}

namespace impl {

}

}
