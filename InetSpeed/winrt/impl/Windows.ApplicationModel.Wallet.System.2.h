// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Wallet.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.Wallet.System.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Wallet::System {

struct WalletItemSystemStore :
    Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore,
    impl::require<WalletItemSystemStore, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
{
    WalletItemSystemStore(std::nullptr_t) noexcept {}
};

struct WalletManagerSystem
{
    WalletManagerSystem() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> RequestStoreAsync();
};

}

namespace impl {

}

}
