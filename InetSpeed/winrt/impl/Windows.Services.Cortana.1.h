// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Services.Cortana.0.h"

namespace winrt {

namespace Windows::Services::Cortana {

struct ICortanaPermissionsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaPermissionsManager>
{
    ICortanaPermissionsManager(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaPermissionsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaPermissionsManagerStatics>
{
    ICortanaPermissionsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaSettings>
{
    ICortanaSettings(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaSettingsStatics>
{
    ICortanaSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
