// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.ApplicationModel.Calls.Provider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls::Provider {

struct PhoneCallOrigin :
    Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin,
    impl::require<PhoneCallOrigin, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
{
    PhoneCallOrigin(std::nullptr_t) noexcept {}
    PhoneCallOrigin();
};

struct PhoneCallOriginManager
{
    PhoneCallOriginManager() = delete;
    static bool IsCurrentAppActiveCallOriginApp();
    static void ShowPhoneCallOriginSettingsUI();
    static void SetCallOrigin(GUID const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin);
    static Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveCallOriginAppAsync();
};

}

namespace impl {

}

}
