// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.SocialInfo.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.SocialInfo.Provider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::SocialInfo::Provider {

struct [[deprecated("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialDashboardItemUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater
{
    SocialDashboardItemUpdater(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater
{
    SocialFeedUpdater(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialInfoProviderManager
{
    SocialInfoProviderManager() = delete;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<bool> ProvisionAsync();
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncAction DeprovisionAsync();
};

}

namespace impl {

}

}
