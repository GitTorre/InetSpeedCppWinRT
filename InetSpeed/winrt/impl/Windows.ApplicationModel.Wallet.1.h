// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.ApplicationModel.Wallet.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Wallet {

struct IWalletBarcode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletBarcode>
{
    IWalletBarcode(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletBarcodeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletBarcodeFactory>
{
    IWalletBarcodeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItem>
{
    IWalletItem(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemCustomProperty :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemCustomProperty>
{
    IWalletItemCustomProperty(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemCustomPropertyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemCustomPropertyFactory>
{
    IWalletItemCustomPropertyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemFactory>
{
    IWalletItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemStore>
{
    IWalletItemStore(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletItemStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemStore2>
{
    IWalletItemStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletManagerStatics>
{
    IWalletManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletRelevantLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletRelevantLocation>
{
    IWalletRelevantLocation(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletTransaction>
{
    IWalletTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletVerb :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletVerb>
{
    IWalletVerb(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletVerbFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletVerbFactory>
{
    IWalletVerbFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
