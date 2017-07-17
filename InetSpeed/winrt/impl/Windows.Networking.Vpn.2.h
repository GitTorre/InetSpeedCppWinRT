// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Networking.Vpn.1.h"

namespace winrt {

namespace Windows::Networking::Vpn {

struct VpnAppId :
    Windows::Networking::Vpn::IVpnAppId
{
    VpnAppId(std::nullptr_t) noexcept {}
    VpnAppId(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value);
};

struct VpnChannel :
    Windows::Networking::Vpn::IVpnChannel,
    impl::require<VpnChannel, Windows::Networking::Vpn::IVpnChannel2>
{
    VpnChannel(std::nullptr_t) noexcept {}
    static void ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event);
};

struct VpnChannelActivityEventArgs :
    Windows::Networking::Vpn::IVpnChannelActivityEventArgs
{
    VpnChannelActivityEventArgs(std::nullptr_t) noexcept {}
};

struct VpnChannelActivityStateChangedArgs :
    Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs
{
    VpnChannelActivityStateChangedArgs(std::nullptr_t) noexcept {}
};

struct VpnChannelConfiguration :
    Windows::Networking::Vpn::IVpnChannelConfiguration,
    impl::require<VpnChannelConfiguration, Windows::Networking::Vpn::IVpnChannelConfiguration2>
{
    VpnChannelConfiguration(std::nullptr_t) noexcept {}
};

struct VpnCredential :
    Windows::Networking::Vpn::IVpnCredential
{
    VpnCredential(std::nullptr_t) noexcept {}
};

struct VpnCustomCheckBox :
    Windows::Networking::Vpn::IVpnCustomCheckBox
{
    VpnCustomCheckBox(std::nullptr_t) noexcept {}
    VpnCustomCheckBox();
};

struct VpnCustomComboBox :
    Windows::Networking::Vpn::IVpnCustomComboBox
{
    VpnCustomComboBox(std::nullptr_t) noexcept {}
    VpnCustomComboBox();
};

struct VpnCustomEditBox :
    Windows::Networking::Vpn::IVpnCustomEditBox
{
    VpnCustomEditBox(std::nullptr_t) noexcept {}
    VpnCustomEditBox();
};

struct VpnCustomErrorBox :
    Windows::Networking::Vpn::IVpnCustomErrorBox
{
    VpnCustomErrorBox(std::nullptr_t) noexcept {}
    VpnCustomErrorBox();
};

struct VpnCustomPromptBooleanInput :
    Windows::Networking::Vpn::IVpnCustomPromptBooleanInput
{
    VpnCustomPromptBooleanInput(std::nullptr_t) noexcept {}
    VpnCustomPromptBooleanInput();
};

struct VpnCustomPromptOptionSelector :
    Windows::Networking::Vpn::IVpnCustomPromptOptionSelector
{
    VpnCustomPromptOptionSelector(std::nullptr_t) noexcept {}
    VpnCustomPromptOptionSelector();
};

struct VpnCustomPromptText :
    Windows::Networking::Vpn::IVpnCustomPromptText
{
    VpnCustomPromptText(std::nullptr_t) noexcept {}
    VpnCustomPromptText();
};

struct VpnCustomPromptTextInput :
    Windows::Networking::Vpn::IVpnCustomPromptTextInput
{
    VpnCustomPromptTextInput(std::nullptr_t) noexcept {}
    VpnCustomPromptTextInput();
};

struct VpnCustomTextBox :
    Windows::Networking::Vpn::IVpnCustomTextBox
{
    VpnCustomTextBox(std::nullptr_t) noexcept {}
    VpnCustomTextBox();
};

struct VpnDomainNameAssignment :
    Windows::Networking::Vpn::IVpnDomainNameAssignment
{
    VpnDomainNameAssignment(std::nullptr_t) noexcept {}
    VpnDomainNameAssignment();
};

struct VpnDomainNameInfo :
    Windows::Networking::Vpn::IVpnDomainNameInfo,
    impl::require<VpnDomainNameInfo, Windows::Networking::Vpn::IVpnDomainNameInfo2>
{
    VpnDomainNameInfo(std::nullptr_t) noexcept {}
    VpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList);
};

struct VpnInterfaceId :
    Windows::Networking::Vpn::IVpnInterfaceId
{
    VpnInterfaceId(std::nullptr_t) noexcept {}
    VpnInterfaceId(array_view<uint8_t const> address);
};

struct VpnManagementAgent :
    Windows::Networking::Vpn::IVpnManagementAgent
{
    VpnManagementAgent(std::nullptr_t) noexcept {}
    VpnManagementAgent();
};

struct VpnNamespaceAssignment :
    Windows::Networking::Vpn::IVpnNamespaceAssignment
{
    VpnNamespaceAssignment(std::nullptr_t) noexcept {}
    VpnNamespaceAssignment();
};

struct VpnNamespaceInfo :
    Windows::Networking::Vpn::IVpnNamespaceInfo
{
    VpnNamespaceInfo(std::nullptr_t) noexcept {}
    VpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList);
};

struct VpnNativeProfile :
    Windows::Networking::Vpn::IVpnNativeProfile,
    impl::require<VpnNativeProfile, Windows::Networking::Vpn::IVpnNativeProfile2>
{
    VpnNativeProfile(std::nullptr_t) noexcept {}
    VpnNativeProfile();
};

struct VpnPacketBuffer :
    Windows::Networking::Vpn::IVpnPacketBuffer,
    impl::require<VpnPacketBuffer, Windows::Networking::Vpn::IVpnPacketBuffer2>
{
    VpnPacketBuffer(std::nullptr_t) noexcept {}
    VpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length);
};

struct VpnPacketBufferList :
    Windows::Networking::Vpn::IVpnPacketBufferList
{
    VpnPacketBufferList(std::nullptr_t) noexcept {}
};

struct VpnPickedCredential :
    Windows::Networking::Vpn::IVpnPickedCredential
{
    VpnPickedCredential(std::nullptr_t) noexcept {}
};

struct VpnPlugInProfile :
    Windows::Networking::Vpn::IVpnPlugInProfile,
    impl::require<VpnPlugInProfile, Windows::Networking::Vpn::IVpnPlugInProfile2>
{
    VpnPlugInProfile(std::nullptr_t) noexcept {}
    VpnPlugInProfile();
};

struct VpnRoute :
    Windows::Networking::Vpn::IVpnRoute
{
    VpnRoute(std::nullptr_t) noexcept {}
    VpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize);
};

struct VpnRouteAssignment :
    Windows::Networking::Vpn::IVpnRouteAssignment
{
    VpnRouteAssignment(std::nullptr_t) noexcept {}
    VpnRouteAssignment();
};

struct VpnSystemHealth :
    Windows::Networking::Vpn::IVpnSystemHealth
{
    VpnSystemHealth(std::nullptr_t) noexcept {}
};

struct VpnTrafficFilter :
    Windows::Networking::Vpn::IVpnTrafficFilter
{
    VpnTrafficFilter(std::nullptr_t) noexcept {}
    VpnTrafficFilter(Windows::Networking::Vpn::VpnAppId const& appId);
};

struct VpnTrafficFilterAssignment :
    Windows::Networking::Vpn::IVpnTrafficFilterAssignment
{
    VpnTrafficFilterAssignment(std::nullptr_t) noexcept {}
    VpnTrafficFilterAssignment();
};

}

namespace impl {

}

}
