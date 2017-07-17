// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.1.h"
#include "Windows.ApplicationModel.Wallet.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Wallet {

struct WalletBarcode :
    Windows::ApplicationModel::Wallet::IWalletBarcode
{
    WalletBarcode(std::nullptr_t) noexcept {}
    WalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value);
    WalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage);
};

struct WalletItem :
    Windows::ApplicationModel::Wallet::IWalletItem
{
    WalletItem(std::nullptr_t) noexcept {}
    WalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName);
};

struct WalletItemCustomProperty :
    Windows::ApplicationModel::Wallet::IWalletItemCustomProperty
{
    WalletItemCustomProperty(std::nullptr_t) noexcept {}
    WalletItemCustomProperty(param::hstring const& name, param::hstring const& value);
};

struct WalletItemStore :
    Windows::ApplicationModel::Wallet::IWalletItemStore
{
    WalletItemStore(std::nullptr_t) noexcept {}
};

struct WalletManager
{
    WalletManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItemStore> RequestStoreAsync();
};

struct WalletRelevantLocation :
    Windows::ApplicationModel::Wallet::IWalletRelevantLocation
{
    WalletRelevantLocation(std::nullptr_t) noexcept {}
    WalletRelevantLocation();
};

struct WalletTransaction :
    Windows::ApplicationModel::Wallet::IWalletTransaction
{
    WalletTransaction(std::nullptr_t) noexcept {}
    WalletTransaction();
};

struct WalletVerb :
    Windows::ApplicationModel::Wallet::IWalletVerb
{
    WalletVerb(std::nullptr_t) noexcept {}
    WalletVerb(param::hstring const& name);
};

}

namespace impl {

}

}
