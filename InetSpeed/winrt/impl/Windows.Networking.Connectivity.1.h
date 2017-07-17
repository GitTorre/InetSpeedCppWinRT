// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Networking.Connectivity.0.h"

namespace winrt {

namespace Windows::Networking::Connectivity {

struct IAttributedNetworkUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAttributedNetworkUsage>
{
    IAttributedNetworkUsage(std::nullptr_t = nullptr) noexcept {}
};

struct ICellularApnContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICellularApnContext>
{
    ICellularApnContext(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionCost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionCost>
{
    IConnectionCost(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionCost2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionCost2>
{
    IConnectionCost2(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile>
{
    IConnectionProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile2>
{
    IConnectionProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionProfile3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile3>
{
    IConnectionProfile3(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionProfileFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfileFilter>
{
    IConnectionProfileFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionProfileFilter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfileFilter2>
{
    IConnectionProfileFilter2(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionSession>,
    impl::require<IConnectionSession, Windows::Foundation::IClosable>
{
    IConnectionSession(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectivityInterval :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectivityInterval>
{
    IConnectivityInterval(std::nullptr_t = nullptr) noexcept {}
};

struct IConnectivityManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectivityManagerStatics>
{
    IConnectivityManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPlanStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPlanStatus>
{
    IDataPlanStatus(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPlanUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPlanUsage>
{
    IDataPlanUsage(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")]] IDataUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataUsage>
{
    IDataUsage(std::nullptr_t = nullptr) noexcept {}
};

struct IIPInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIPInformation>
{
    IIPInformation(std::nullptr_t = nullptr) noexcept {}
};

struct ILanIdentifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanIdentifier>
{
    ILanIdentifier(std::nullptr_t = nullptr) noexcept {}
};

struct ILanIdentifierData :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanIdentifierData>
{
    ILanIdentifierData(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkAdapter>
{
    INetworkAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkInformationStatics>
{
    INetworkInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkInformationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkInformationStatics2>
{
    INetworkInformationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkItem>
{
    INetworkItem(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkSecuritySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkSecuritySettings>
{
    INetworkSecuritySettings(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkStateChangeEventDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkStateChangeEventDetails>
{
    INetworkStateChangeEventDetails(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkStateChangeEventDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkStateChangeEventDetails2>
{
    INetworkStateChangeEventDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkUsage>
{
    INetworkUsage(std::nullptr_t = nullptr) noexcept {}
};

struct IProxyConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProxyConfiguration>
{
    IProxyConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IRoutePolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRoutePolicy>
{
    IRoutePolicy(std::nullptr_t = nullptr) noexcept {}
};

struct IRoutePolicyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRoutePolicyFactory>
{
    IRoutePolicyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWlanConnectionProfileDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWlanConnectionProfileDetails>
{
    IWlanConnectionProfileDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IWwanConnectionProfileDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwanConnectionProfileDetails>
{
    IWwanConnectionProfileDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
