// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Phone.System.UserProfile.GameServices.Core.1.h"

namespace winrt {

namespace Windows::Phone::System::UserProfile::GameServices::Core {

struct GameService
{
    GameService() = delete;
    static Windows::Foundation::Uri ServiceUri();
    static Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetGamerProfileAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetInstalledGameItemsAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri);
    static Windows::Foundation::IAsyncOperation<hstring> GetPrivilegesAsync();
    static void GrantAchievement(uint32_t achievementId);
    static void GrantAvatarAward(uint32_t avatarAwardId);
    static void PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer);
    static void NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri);
    static uint32_t GetAuthenticationStatus();
};

struct GameServicePropertyCollection :
    Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection
{
    GameServicePropertyCollection(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
