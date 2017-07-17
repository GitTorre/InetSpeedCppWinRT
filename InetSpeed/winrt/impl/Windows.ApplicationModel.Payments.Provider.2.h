// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Payments.1.h"
#include "Windows.ApplicationModel.Payments.Provider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Payments::Provider {

struct PaymentAppManager :
    Windows::ApplicationModel::Payments::Provider::IPaymentAppManager
{
    PaymentAppManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Payments::Provider::PaymentAppManager Current();
};

struct PaymentTransaction :
    Windows::ApplicationModel::Payments::Provider::IPaymentTransaction
{
    PaymentTransaction(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> FromIdAsync(param::hstring const& id);
};

struct PaymentTransactionAcceptResult :
    Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult
{
    PaymentTransactionAcceptResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
