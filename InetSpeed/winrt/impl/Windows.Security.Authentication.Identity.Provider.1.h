// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Authentication.Identity.Provider.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Identity::Provider {

struct ISecondaryAuthenticationFactorAuthentication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthentication>
{
    ISecondaryAuthenticationFactorAuthentication(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationResult>
{
    ISecondaryAuthenticationFactorAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>
{
    ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationStageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStageInfo>
{
    ISecondaryAuthenticationFactorAuthenticationStageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStatics>
{
    ISecondaryAuthenticationFactorAuthenticationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>
{
    ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorInfo>
{
    ISecondaryAuthenticationFactorInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorInfo2>,
    impl::require<ISecondaryAuthenticationFactorInfo2, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>
{
    ISecondaryAuthenticationFactorInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistration>
{
    ISecondaryAuthenticationFactorRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistrationResult>
{
    ISecondaryAuthenticationFactorRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistrationStatics>
{
    ISecondaryAuthenticationFactorRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
