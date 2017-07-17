// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.ApplicationModel.Payments.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Payments {

struct PaymentRequestChangedHandler : Windows::Foundation::IUnknown
{
    PaymentRequestChangedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PaymentRequestChangedHandler(L lambda);
    template <typename F> PaymentRequestChangedHandler(F* function);
    template <typename O, typename M> PaymentRequestChangedHandler(O* object, M method);
    void operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const;
};

struct PaymentAddress :
    Windows::ApplicationModel::Payments::IPaymentAddress
{
    PaymentAddress(std::nullptr_t) noexcept {}
    PaymentAddress();
};

struct PaymentCurrencyAmount :
    Windows::ApplicationModel::Payments::IPaymentCurrencyAmount
{
    PaymentCurrencyAmount(std::nullptr_t) noexcept {}
    PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency);
    PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem);
};

struct PaymentDetails :
    Windows::ApplicationModel::Payments::IPaymentDetails
{
    PaymentDetails(std::nullptr_t) noexcept {}
    PaymentDetails();
    PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems);
};

struct PaymentDetailsModifier :
    Windows::ApplicationModel::Payments::IPaymentDetailsModifier
{
    PaymentDetailsModifier(std::nullptr_t) noexcept {}
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems);
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData);
};

struct PaymentItem :
    Windows::ApplicationModel::Payments::IPaymentItem
{
    PaymentItem(std::nullptr_t) noexcept {}
    PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
};

struct PaymentMediator :
    Windows::ApplicationModel::Payments::IPaymentMediator
{
    PaymentMediator(std::nullptr_t) noexcept {}
    PaymentMediator();
};

struct PaymentMerchantInfo :
    Windows::ApplicationModel::Payments::IPaymentMerchantInfo
{
    PaymentMerchantInfo(std::nullptr_t) noexcept {}
    PaymentMerchantInfo();
    PaymentMerchantInfo(Windows::Foundation::Uri const& uri);
};

struct PaymentMethodData :
    Windows::ApplicationModel::Payments::IPaymentMethodData
{
    PaymentMethodData(std::nullptr_t) noexcept {}
    PaymentMethodData(param::iterable<hstring> const& supportedMethodIds);
    PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData);
};

struct PaymentOptions :
    Windows::ApplicationModel::Payments::IPaymentOptions
{
    PaymentOptions(std::nullptr_t) noexcept {}
    PaymentOptions();
};

struct PaymentRequest :
    Windows::ApplicationModel::Payments::IPaymentRequest
{
    PaymentRequest(std::nullptr_t) noexcept {}
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData);
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo);
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options);
};

struct PaymentRequestChangedArgs :
    Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs
{
    PaymentRequestChangedArgs(std::nullptr_t) noexcept {}
};

struct PaymentRequestChangedResult :
    Windows::ApplicationModel::Payments::IPaymentRequestChangedResult
{
    PaymentRequestChangedResult(std::nullptr_t) noexcept {}
    PaymentRequestChangedResult(bool changeAcceptedByMerchant);
    PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails);
};

struct PaymentRequestSubmitResult :
    Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult
{
    PaymentRequestSubmitResult(std::nullptr_t) noexcept {}
};

struct PaymentResponse :
    Windows::ApplicationModel::Payments::IPaymentResponse
{
    PaymentResponse(std::nullptr_t) noexcept {}
};

struct PaymentShippingOption :
    Windows::ApplicationModel::Payments::IPaymentShippingOption
{
    PaymentShippingOption(std::nullptr_t) noexcept {}
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected);
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag);
};

struct PaymentToken :
    Windows::ApplicationModel::Payments::IPaymentToken
{
    PaymentToken(std::nullptr_t) noexcept {}
    PaymentToken(param::hstring const& paymentMethodId);
    PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails);
};

}

namespace impl {

}

}
