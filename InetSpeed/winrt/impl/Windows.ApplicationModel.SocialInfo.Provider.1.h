// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.SocialInfo.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.SocialInfo.Provider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::SocialInfo::Provider {

struct [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialDashboardItemUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialDashboardItemUpdater>
{
    ISocialDashboardItemUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedUpdater>
{
    ISocialFeedUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialInfoProviderManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialInfoProviderManagerStatics>
{
    ISocialInfoProviderManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
