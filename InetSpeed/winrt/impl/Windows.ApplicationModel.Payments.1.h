// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.ApplicationModel.Payments.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Payments {

struct IPaymentAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAddress>
{
    IPaymentAddress(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentCurrencyAmount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentCurrencyAmount>
{
    IPaymentCurrencyAmount(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentCurrencyAmountFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentCurrencyAmountFactory>
{
    IPaymentCurrencyAmountFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetails>
{
    IPaymentDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentDetailsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsFactory>
{
    IPaymentDetailsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentDetailsModifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsModifier>
{
    IPaymentDetailsModifier(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentDetailsModifierFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsModifierFactory>
{
    IPaymentDetailsModifierFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentItem>
{
    IPaymentItem(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentItemFactory>
{
    IPaymentItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentMediator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMediator>
{
    IPaymentMediator(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentMerchantInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMerchantInfo>
{
    IPaymentMerchantInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentMerchantInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMerchantInfoFactory>
{
    IPaymentMerchantInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentMethodData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMethodData>
{
    IPaymentMethodData(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentMethodDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMethodDataFactory>
{
    IPaymentMethodDataFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentOptions>
{
    IPaymentOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequest>
{
    IPaymentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequestChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedArgs>
{
    IPaymentRequestChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequestChangedResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedResult>
{
    IPaymentRequestChangedResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequestChangedResultFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedResultFactory>
{
    IPaymentRequestChangedResultFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestFactory>
{
    IPaymentRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentRequestSubmitResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestSubmitResult>
{
    IPaymentRequestSubmitResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentResponse>
{
    IPaymentResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentShippingOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentShippingOption>
{
    IPaymentShippingOption(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentShippingOptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentShippingOptionFactory>
{
    IPaymentShippingOptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentToken :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentToken>
{
    IPaymentToken(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTokenFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTokenFactory>
{
    IPaymentTokenFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
