// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Playback.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.Protection.0.h"

namespace winrt {

namespace Windows::Media::Protection {

struct IComponentLoadFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentLoadFailedEventArgs>
{
    IComponentLoadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IComponentRenewalStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentRenewalStatics>
{
    IComponentRenewalStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHdcpSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdcpSession>,
    impl::require<IHdcpSession, Windows::Foundation::IClosable>
{
    IHdcpSession(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProtectionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionManager>
{
    IMediaProtectionManager(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProtectionPMPServer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionPMPServer>
{
    IMediaProtectionPMPServer(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProtectionPMPServerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionPMPServerFactory>
{
    IMediaProtectionPMPServerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProtectionServiceCompletion :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionServiceCompletion>
{
    IMediaProtectionServiceCompletion(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProtectionServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionServiceRequest>
{
    IMediaProtectionServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IProtectionCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionCapabilities>
{
    IProtectionCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IRevocationAndRenewalInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRevocationAndRenewalInformation>
{
    IRevocationAndRenewalInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IRevocationAndRenewalItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRevocationAndRenewalItem>
{
    IRevocationAndRenewalItem(std::nullptr_t = nullptr) noexcept {}
};

struct IServiceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceRequestedEventArgs>
{
    IServiceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IServiceRequestedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceRequestedEventArgs2>
{
    IServiceRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

}

}
