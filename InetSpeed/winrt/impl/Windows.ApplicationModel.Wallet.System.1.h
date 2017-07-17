// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Wallet.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Wallet.System.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Wallet::System {

struct IWalletItemSystemStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemSystemStore>
{
    IWalletItemSystemStore(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemSystemStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemSystemStore2>
{
    IWalletItemSystemStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletManagerSystemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletManagerSystemStatics>
{
    IWalletManagerSystemStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
