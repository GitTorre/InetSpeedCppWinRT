// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Payments.0.h"
#include "Windows.ApplicationModel.Payments.Provider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Payments::Provider {

struct IPaymentAppManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAppManager>
{
    IPaymentAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAppManagerStatics>
{
    IPaymentAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransaction>
{
    IPaymentTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransactionAcceptResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransactionAcceptResult>
{
    IPaymentTransactionAcceptResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransactionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransactionStatics>
{
    IPaymentTransactionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
