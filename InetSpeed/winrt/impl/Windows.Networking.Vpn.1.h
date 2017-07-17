// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Networking.Vpn.0.h"

namespace winrt {

namespace Windows::Networking::Vpn {

struct IVpnAppId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnAppId>
{
    IVpnAppId(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnAppIdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnAppIdFactory>
{
    IVpnAppIdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannel>
{
    IVpnChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannel2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannel2>
{
    IVpnChannel2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannelActivityEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelActivityEventArgs>
{
    IVpnChannelActivityEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannelActivityStateChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelActivityStateChangedArgs>
{
    IVpnChannelActivityStateChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannelConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelConfiguration>
{
    IVpnChannelConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannelConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelConfiguration2>
{
    IVpnChannelConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnChannelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelStatics>
{
    IVpnChannelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCredential>
{
    IVpnCredential(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomCheckBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomCheckBox>,
    impl::require<IVpnCustomCheckBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomCheckBox(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomComboBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomComboBox>,
    impl::require<IVpnCustomComboBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomComboBox(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomEditBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomEditBox>,
    impl::require<IVpnCustomEditBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomEditBox(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomErrorBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomErrorBox>,
    impl::require<IVpnCustomErrorBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomErrorBox(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPrompt :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPrompt>
{
    IVpnCustomPrompt(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPromptBooleanInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptBooleanInput>,
    impl::require<IVpnCustomPromptBooleanInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptBooleanInput(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPromptElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptElement>
{
    IVpnCustomPromptElement(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPromptOptionSelector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptOptionSelector>,
    impl::require<IVpnCustomPromptOptionSelector, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptOptionSelector(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPromptText :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptText>,
    impl::require<IVpnCustomPromptText, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptText(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomPromptTextInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptTextInput>,
    impl::require<IVpnCustomPromptTextInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptTextInput(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnCustomTextBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomTextBox>,
    impl::require<IVpnCustomTextBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomTextBox(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnDomainNameAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameAssignment>
{
    IVpnDomainNameAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnDomainNameInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfo>
{
    IVpnDomainNameInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnDomainNameInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfo2>
{
    IVpnDomainNameInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnDomainNameInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfoFactory>
{
    IVpnDomainNameInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnInterfaceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnInterfaceId>
{
    IVpnInterfaceId(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnInterfaceIdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnInterfaceIdFactory>
{
    IVpnInterfaceIdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnManagementAgent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnManagementAgent>
{
    IVpnManagementAgent(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnNamespaceAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceAssignment>
{
    IVpnNamespaceAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnNamespaceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceInfo>
{
    IVpnNamespaceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnNamespaceInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceInfoFactory>
{
    IVpnNamespaceInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnNativeProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNativeProfile>,
    impl::require<IVpnNativeProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnNativeProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnNativeProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNativeProfile2>
{
    IVpnNativeProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPacketBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBuffer>
{
    IVpnPacketBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPacketBuffer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBuffer2>
{
    IVpnPacketBuffer2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPacketBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferFactory>
{
    IVpnPacketBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPacketBufferList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferList>,
    impl::require<IVpnPacketBufferList, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPacketBufferList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferList2>,
    impl::require<IVpnPacketBufferList2, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPickedCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPickedCredential>
{
    IVpnPickedCredential(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPlugIn :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugIn>
{
    IVpnPlugIn(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPlugInProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugInProfile>,
    impl::require<IVpnPlugInProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnPlugInProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugInProfile2>,
    impl::require<IVpnPlugInProfile2, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnProfile>
{
    IVpnProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnRoute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRoute>
{
    IVpnRoute(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnRouteAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRouteAssignment>
{
    IVpnRouteAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnRouteFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRouteFactory>
{
    IVpnRouteFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnSystemHealth :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnSystemHealth>
{
    IVpnSystemHealth(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnTrafficFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilter>
{
    IVpnTrafficFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnTrafficFilterAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilterAssignment>
{
    IVpnTrafficFilterAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct IVpnTrafficFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilterFactory>
{
    IVpnTrafficFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
