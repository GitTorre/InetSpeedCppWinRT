// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Devices.Sms.3.h"
#include "internal\Windows.Networking.Connectivity.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Data.Xml.Dom.3.h"
#include "internal\Windows.Networking.NetworkOperators.3.h"
#include "Windows.Networking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
{
    HRESULT __stdcall get_WirelessNetworkId(uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            std::tie(*__valueSize, *value) = detach(shim().WirelessNetworkId());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapter(abi_arg_out<Windows::Networking::Connectivity::INetworkAdapter> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedirectMessageUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().RedirectMessageUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedirectMessageXml(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(shim().RedirectMessageXml());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().AuthenticationUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IssueCredentials(abi_arg_in<hstring> userName, abi_arg_in<hstring> password, abi_arg_in<hstring> extraParameters, bool markAsManualConnectOnFailure) noexcept override
    {
        try
        {
            shim().IssueCredentials(*reinterpret_cast<const hstring *>(&userName), *reinterpret_cast<const hstring *>(&password), *reinterpret_cast<const hstring *>(&extraParameters), markAsManualConnectOnFailure);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AbortAuthentication(bool markAsManual) noexcept override
    {
        try
        {
            shim().AbortAuthentication(markAsManual);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SkipAuthentication() noexcept override
    {
        try
        {
            shim().SkipAuthentication();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TriggerAttentionRequired(abi_arg_in<hstring> packageRelativeApplicationId, abi_arg_in<hstring> applicationParameters) noexcept override
    {
        try
        {
            shim().TriggerAttentionRequired(*reinterpret_cast<const hstring *>(&packageRelativeApplicationId), *reinterpret_cast<const hstring *>(&applicationParameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
{
    HRESULT __stdcall abi_IssueCredentialsAsync(abi_arg_in<hstring> userName, abi_arg_in<hstring> password, abi_arg_in<hstring> extraParameters, bool markAsManualConnectOnFailure, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().IssueCredentialsAsync(*reinterpret_cast<const hstring *>(&userName), *reinterpret_cast<const hstring *>(&password), *reinterpret_cast<const hstring *>(&extraParameters), markAsManualConnectOnFailure));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
{
    HRESULT __stdcall abi_TryGetAuthenticationContext(abi_arg_in<hstring> evenToken, abi_arg_out<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> context, bool * isValid) noexcept override
    {
        try
        {
            *isValid = detach(shim().TryGetAuthenticationContext(*reinterpret_cast<const hstring *>(&evenToken), *context));
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
{
    HRESULT __stdcall get_EventToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EventToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
{
    HRESULT __stdcall get_HasNetworkErrorOccurred(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasNetworkErrorOccurred());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseCode(Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ResponseCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoffUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().LogoffUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationReplyXml(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(shim().AuthenticationReplyXml());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFSpn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid1(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid2(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFSpn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid1(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid2(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
{
    HRESULT __stdcall get_EFOns(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFOns());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EFSpn(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFSpn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid1(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid2(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFSpn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EFOpl(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFOpl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EFPnn(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EFPnn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid1(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gid2(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Gid2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
{
    HRESULT __stdcall get_NetworkAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ServiceProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentNetwork(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> network) noexcept override
    {
        try
        {
            *network = detach(shim().CurrentNetwork());
            return S_OK;
        }
        catch (...)
        {
            *network = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentDeviceInformation(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> deviceInformation) noexcept override
    {
        try
        {
            *deviceInformation = detach(shim().CurrentDeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *deviceInformation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
{
    HRESULT __stdcall abi_GetConnectionProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetConnectionProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
{
    HRESULT __stdcall get_NetworkAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
{
    HRESULT __stdcall get_AvailableNetworkAccountIds(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> ppAccountIds) noexcept override
    {
        try
        {
            *ppAccountIds = detach(shim().AvailableNetworkAccountIds());
            return S_OK;
        }
        catch (...)
        {
            *ppAccountIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNetworkAccountId(abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandAccount> ppAccount) noexcept override
    {
        try
        {
            *ppAccount = detach(shim().CreateFromNetworkAccountId(*reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ppAccount = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
{
    HRESULT __stdcall get_NetworkAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasDeviceInformationChanged(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasDeviceInformationChanged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNetworkChanged(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasNetworkChanged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
{
    HRESULT __stdcall add_AccountAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().AccountAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountAdded(event_token cookie) noexcept override
    {
        try
        {
            shim().AccountAdded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().AccountUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountUpdated(event_token cookie) noexcept override
    {
        try
        {
            shim().AccountUpdated(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().AccountRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountRemoved(event_token cookie) noexcept override
    {
        try
        {
            shim().AccountRemoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token cookie) noexcept override
    {
        try
        {
            shim().EnumerationCompleted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token cookie) noexcept override
    {
        try
        {
            shim().Stopped(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus * status) noexcept override
    {
        try
        {
            *status = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
{
    HRESULT __stdcall get_NetworkDeviceStatus(Windows::Networking::NetworkOperators::NetworkDeviceStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkDeviceStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Manufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Model(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Model());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirmwareInformation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FirmwareInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(Windows::Devices::Sms::CellularClass * value) noexcept override
    {
        try
        {
            *value = detach(shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataClasses(Windows::Networking::NetworkOperators::DataClasses * value) noexcept override
    {
        try
        {
            *value = detach(shim().DataClasses());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDataClass(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CustomDataClass());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MobileEquipmentId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().MobileEquipmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TelephoneNumbers(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().TelephoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriberId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SubscriberId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimIccId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SimIccId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceType(Windows::Networking::NetworkOperators::MobileBroadbandDeviceType * pDeviceType) noexcept override
    {
        try
        {
            *pDeviceType = detach(shim().DeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentRadioState(Windows::Networking::NetworkOperators::MobileBroadbandRadioState * pCurrentState) noexcept override
    {
        try
        {
            *pCurrentState = detach(shim().CurrentRadioState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
{
    HRESULT __stdcall get_PinManager(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> value) noexcept override
    {
        try
        {
            *value = detach(shim().PinManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Revision(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Revision());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
{
    HRESULT __stdcall get_DeviceServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCommands(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenDataSession(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().OpenDataSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenCommandSession(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().OpenCommandSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
{
    HRESULT __stdcall get_StatusCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().StatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().ResponseData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
{
    HRESULT __stdcall abi_SendQueryCommandAsync(uint32_t commandId, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SendQueryCommandAsync(commandId, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendSetCommandAsync(uint32_t commandId, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SendSetCommandAsync(commandId, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloseSession() noexcept override
    {
        try
        {
            shim().CloseSession();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
{
    HRESULT __stdcall get_ReceivedData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().ReceivedData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
{
    HRESULT __stdcall abi_WriteDataAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> value, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().WriteDataAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloseSession() noexcept override
    {
        try
        {
            shim().CloseSession();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(shim().DataReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataReceived(event_token eventCookie) noexcept override
    {
        try
        {
            shim().DataReceived(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
{
    HRESULT __stdcall get_DeviceServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataReadSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsDataReadSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataWriteSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsDataWriteSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReceivedData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().ReceivedData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem>
{
    HRESULT __stdcall get_CurrentAccount(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandAccount> value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentAccount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInformation(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxDeviceServiceCommandSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxDeviceServiceDataSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceServices(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceService(GUID deviceServiceId, abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeviceService(deviceServiceId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResetSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsResetSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ResetAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentConfigurationAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().GetCurrentConfigurationAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentNetwork(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentNetwork());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
{
    HRESULT __stdcall get_Uicc(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandUicc> value) noexcept override
    {
        try
        {
            *value = detach(shim().Uicc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeProviderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HomeProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeProviderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HomeProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandModem> value) noexcept override
    {
        try
        {
            *value = detach(shim().FromId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandModem> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
{
    HRESULT __stdcall get_NetworkAdapter(abi_arg_out<Windows::Networking::Connectivity::INetworkAdapter> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkRegistrationState(Windows::Networking::NetworkOperators::NetworkRegistrationState * registrationState) noexcept override
    {
        try
        {
            *registrationState = detach(shim().NetworkRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegistrationNetworkError(uint32_t * networkError) noexcept override
    {
        try
        {
            *networkError = detach(shim().RegistrationNetworkError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PacketAttachNetworkError(uint32_t * networkError) noexcept override
    {
        try
        {
            *networkError = detach(shim().PacketAttachNetworkError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivationNetworkError(uint32_t * networkError) noexcept override
    {
        try
        {
            *networkError = detach(shim().ActivationNetworkError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(abi_arg_out<hstring> apn) noexcept override
    {
        try
        {
            *apn = detach(shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            *apn = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegisteredDataClass(Windows::Networking::NetworkOperators::DataClasses * value) noexcept override
    {
        try
        {
            *value = detach(shim().RegisteredDataClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegisteredProviderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RegisteredProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegisteredProviderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RegisteredProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowConnectionUI() noexcept override
    {
        try
        {
            shim().ShowConnectionUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
{
    HRESULT __stdcall abi_GetVoiceCallSupportAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().GetVoiceCallSupportAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegistrationUiccApps(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>> value) noexcept override
    {
        try
        {
            *value = detach(shim().RegistrationUiccApps());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Network(abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> value) noexcept override
    {
        try
        {
            *value = detach(shim().Network());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
{
    HRESULT __stdcall get_NetworkRegistrationStateChanges(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkRegistrationStateChanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPin> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPin>
{
    HRESULT __stdcall get_Type(Windows::Networking::NetworkOperators::MobileBroadbandPinType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockState(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState * value) noexcept override
    {
        try
        {
            *value = detach(shim().LockState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Networking::NetworkOperators::MobileBroadbandPinFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttemptsRemaining(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AttemptsRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableAsync(abi_arg_in<hstring> currentPin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().EnableAsync(*reinterpret_cast<const hstring *>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableAsync(abi_arg_in<hstring> currentPin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().DisableAsync(*reinterpret_cast<const hstring *>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnterAsync(abi_arg_in<hstring> currentPin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().EnterAsync(*reinterpret_cast<const hstring *>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeAsync(abi_arg_in<hstring> currentPin, abi_arg_in<hstring> newPin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ChangeAsync(*reinterpret_cast<const hstring *>(&currentPin), *reinterpret_cast<const hstring *>(&newPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnblockAsync(abi_arg_in<hstring> pinUnblockKey, abi_arg_in<hstring> newPin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().UnblockAsync(*reinterpret_cast<const hstring *>(&pinUnblockKey), *reinterpret_cast<const hstring *>(&newPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinType(Windows::Networking::NetworkOperators::MobileBroadbandPinType * value) noexcept override
    {
        try
        {
            *value = detach(shim().PinType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinLockState(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState * value) noexcept override
    {
        try
        {
            *value = detach(shim().PinLockState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
{
    HRESULT __stdcall get_PinLockStateChanges(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>> value) noexcept override
    {
        try
        {
            *value = detach(shim().PinLockStateChanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
{
    HRESULT __stdcall get_SupportedPins(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedPins());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType pinType, abi_arg_out<Windows::Networking::NetworkOperators::IMobileBroadbandPin> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetPin(pinType));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
{
    HRESULT __stdcall get_IsSuccessful(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsSuccessful());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttemptsRemaining(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AttemptsRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadioState(Windows::Networking::NetworkOperators::MobileBroadbandRadioState * value) noexcept override
    {
        try
        {
            *value = detach(shim().RadioState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
{
    HRESULT __stdcall get_RadioStateChanges(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>> value) noexcept override
    {
        try
        {
            *value = detach(shim().RadioStateChanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUicc> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
{
    HRESULT __stdcall get_SimIccId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SimIccId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUiccAppsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().GetUiccAppsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
{
    HRESULT __stdcall get_Id(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Networking::NetworkOperators::UiccAppKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRecordDetailsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<uint32_t>> uiccFilePath, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().GetRecordDetailsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<uint32_t> *>(&uiccFilePath)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadRecordAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<uint32_t>> uiccFilePath, int32_t recordIndex, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ReadRecordAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<uint32_t> *>(&uiccFilePath), recordIndex));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Networking::NetworkOperators::UiccAppRecordKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RecordCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordSize(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RecordSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadAccessCondition(Windows::Networking::NetworkOperators::UiccAccessCondition * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReadAccessCondition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteAccessCondition(Windows::Networking::NetworkOperators::UiccAccessCondition * value) noexcept override
    {
        try
        {
            *value = detach(shim().WriteAccessCondition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UiccApps(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>> value) noexcept override
    {
        try
        {
            *value = detach(shim().UiccApps());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
{
    HRESULT __stdcall get_NotificationType(Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType * value) noexcept override
    {
        try
        {
            *value = detach(shim().NotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncodingType(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().EncodingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RuleId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RuleId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmsMessage(abi_arg_out<Windows::Devices::Sms::ISmsMessage> value) noexcept override
    {
        try
        {
            *value = detach(shim().SmsMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
{
    HRESULT __stdcall get_Ssid(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Ssid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ssid(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Ssid(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Passphrase(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Passphrase());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Passphrase(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Passphrase(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
{
    HRESULT __stdcall get_MacAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().MacAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HostNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(shim().HostNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
{
    HRESULT __stdcall abi_GetTetheringClients(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetTetheringClients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
{
    HRESULT __stdcall abi_AuthorizeTethering(bool allow, abi_arg_in<hstring> entitlementFailureReason) noexcept override
    {
        try
        {
            shim().AuthorizeTethering(allow, *reinterpret_cast<const hstring *>(&entitlementFailureReason));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
{
    HRESULT __stdcall get_MaxClientCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxClientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ClientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TetheringOperationalState(Windows::Networking::NetworkOperators::TetheringOperationalState * value) noexcept override
    {
        try
        {
            *value = detach(shim().TetheringOperationalState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentAccessPointConfiguration(abi_arg_out<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> configuration) noexcept override
    {
        try
        {
            *configuration = detach(shim().GetCurrentAccessPointConfiguration());
            return S_OK;
        }
        catch (...)
        {
            *configuration = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigureAccessPointAsync(abi_arg_in<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> configuration, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ConfigureAccessPointAsync(*reinterpret_cast<const Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration *>(&configuration)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartTetheringAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().StartTetheringAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopTetheringAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().StopTetheringAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
{
    HRESULT __stdcall abi_GetTetheringCapability(abi_arg_in<hstring> networkAccountId, Windows::Networking::NetworkOperators::TetheringCapability * value) noexcept override
    {
        try
        {
            *value = detach(shim().GetTetheringCapability(*reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNetworkAccountId(abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> ppManager) noexcept override
    {
        try
        {
            *ppManager = detach(shim().CreateFromNetworkAccountId(*reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
{
    HRESULT __stdcall abi_GetTetheringCapabilityFromConnectionProfile(abi_arg_in<Windows::Networking::Connectivity::IConnectionProfile> profile, Windows::Networking::NetworkOperators::TetheringCapability * result) noexcept override
    {
        try
        {
            *result = detach(shim().GetTetheringCapabilityFromConnectionProfile(*reinterpret_cast<const Windows::Networking::Connectivity::ConnectionProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromConnectionProfile(abi_arg_in<Windows::Networking::Connectivity::IConnectionProfile> profile, abi_arg_out<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> ppManager) noexcept override
    {
        try
        {
            *ppManager = detach(shim().CreateFromConnectionProfile(*reinterpret_cast<const Windows::Networking::Connectivity::ConnectionProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
{
    HRESULT __stdcall abi_CreateFromConnectionProfileWithTargetAdapter(abi_arg_in<Windows::Networking::Connectivity::IConnectionProfile> profile, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> ppManager) noexcept override
    {
        try
        {
            *ppManager = detach(shim().CreateFromConnectionProfile(*reinterpret_cast<const Windows::Networking::Connectivity::ConnectionProfile *>(&profile), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::TetheringOperationStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalErrorMessage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AdditionalErrorMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> : produce_base<D, Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
{
    HRESULT __stdcall get_AllElementsProvisioned(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AllElementsProvisioned());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProvisionResultsXml(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProvisionResultsXml());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisionedProfile> : produce_base<D, Windows::Networking::NetworkOperators::IProvisionedProfile>
{
    HRESULT __stdcall abi_UpdateCost(Windows::Networking::Connectivity::NetworkCostType value) noexcept override
    {
        try
        {
            shim().UpdateCost(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateUsage(abi_arg_in<Windows::Networking::NetworkOperators::ProfileUsage> value) noexcept override
    {
        try
        {
            shim().UpdateUsage(*reinterpret_cast<const Windows::Networking::NetworkOperators::ProfileUsage *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisioningAgent> : produce_base<D, Windows::Networking::NetworkOperators::IProvisioningAgent>
{
    HRESULT __stdcall abi_ProvisionFromXmlDocumentAsync(abi_arg_in<hstring> provisioningXmlDocument, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ProvisionFromXmlDocumentAsync(*reinterpret_cast<const hstring *>(&provisioningXmlDocument)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType mediaType, abi_arg_in<hstring> profileName, abi_arg_out<Windows::Networking::NetworkOperators::IProvisionedProfile> provisionedProfile) noexcept override
    {
        try
        {
            *provisionedProfile = detach(shim().GetProvisionedProfile(mediaType, *reinterpret_cast<const hstring *>(&profileName)));
            return S_OK;
        }
        catch (...)
        {
            *provisionedProfile = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> : produce_base<D, Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
{
    HRESULT __stdcall abi_CreateFromNetworkAccountId(abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Networking::NetworkOperators::IProvisioningAgent> provisioningAgent) noexcept override
    {
        try
        {
            *provisioningAgent = detach(shim().CreateFromNetworkAccountId(*reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *provisioningAgent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdMessage> : produce_base<D, Windows::Networking::NetworkOperators::IUssdMessage>
{
    HRESULT __stdcall get_DataCodingScheme(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DataCodingScheme());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataCodingScheme(uint8_t value) noexcept override
    {
        try
        {
            shim().DataCodingScheme(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPayload(uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            std::tie(*__valueSize, *value) = detach(shim().GetPayload());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPayload(uint32_t __valueSize, abi_arg_in<uint8_t> * value) noexcept override
    {
        try
        {
            shim().SetPayload(array_ref<const uint8_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PayloadAsText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PayloadAsText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PayloadAsText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().PayloadAsText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdMessageFactory> : produce_base<D, Windows::Networking::NetworkOperators::IUssdMessageFactory>
{
    HRESULT __stdcall abi_CreateMessage(abi_arg_in<hstring> messageText, abi_arg_out<Windows::Networking::NetworkOperators::IUssdMessage> ussdMessage) noexcept override
    {
        try
        {
            *ussdMessage = detach(shim().CreateMessage(*reinterpret_cast<const hstring *>(&messageText)));
            return S_OK;
        }
        catch (...)
        {
            *ussdMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdReply> : produce_base<D, Windows::Networking::NetworkOperators::IUssdReply>
{
    HRESULT __stdcall get_ResultCode(Windows::Networking::NetworkOperators::UssdResultCode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ResultCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::Networking::NetworkOperators::IUssdMessage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdSession> : produce_base<D, Windows::Networking::NetworkOperators::IUssdSession>
{
    HRESULT __stdcall abi_SendMessageAndGetReplyAsync(abi_arg_in<Windows::Networking::NetworkOperators::IUssdMessage> message, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SendMessageAndGetReplyAsync(*reinterpret_cast<const Windows::Networking::NetworkOperators::UssdMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdSessionStatics> : produce_base<D, Windows::Networking::NetworkOperators::IUssdSessionStatics>
{
    HRESULT __stdcall abi_CreateFromNetworkAccountId(abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Networking::NetworkOperators::IUssdSession> ussdSession) noexcept override
    {
        try
        {
            *ussdSession = detach(shim().CreateFromNetworkAccountId(*reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ussdSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNetworkInterfaceId(abi_arg_in<hstring> networkInterfaceId, abi_arg_out<Windows::Networking::NetworkOperators::IUssdSession> ussdSession) noexcept override
    {
        try
        {
            *ussdSession = detach(shim().CreateFromNetworkInterfaceId(*reinterpret_cast<const hstring *>(&networkInterfaceId)));
            return S_OK;
        }
        catch (...)
        {
            *ussdSession = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking::NetworkOperators {

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IMobileBroadbandAccountStatics<D>::AvailableNetworkAccountIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> ppAccountIds;
    check_hresult(shim()->get_AvailableNetworkAccountIds(put(ppAccountIds)));
    return ppAccountIds;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccount impl_IMobileBroadbandAccountStatics<D>::CreateFromNetworkAccountId(hstring_ref networkAccountId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccount ppAccount { nullptr };
    check_hresult(shim()->abi_CreateFromNetworkAccountId(get(networkAccountId), put(ppAccount)));
    return ppAccount;
}

template <typename D> hstring impl_IMobileBroadbandAccount<D>::NetworkAccountId() const
{
    hstring value;
    check_hresult(shim()->get_NetworkAccountId(put(value)));
    return value;
}

template <typename D> GUID impl_IMobileBroadbandAccount<D>::ServiceProviderGuid() const
{
    GUID value {};
    check_hresult(shim()->get_ServiceProviderGuid(&value));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandAccount<D>::ServiceProviderName() const
{
    hstring value;
    check_hresult(shim()->get_ServiceProviderName(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork impl_IMobileBroadbandAccount<D>::CurrentNetwork() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork network { nullptr };
    check_hresult(shim()->get_CurrentNetwork(put(network)));
    return network;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation impl_IMobileBroadbandAccount<D>::CurrentDeviceInformation() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation deviceInformation { nullptr };
    check_hresult(shim()->get_CurrentDeviceInformation(put(deviceInformation)));
    return deviceInformation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> impl_IMobileBroadbandAccount2<D>::GetConnectionProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> value;
    check_hresult(shim()->abi_GetConnectionProfiles(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkDeviceStatus impl_IMobileBroadbandDeviceInformation<D>::NetworkDeviceStatus() const
{
    Windows::Networking::NetworkOperators::NetworkDeviceStatus value {};
    check_hresult(shim()->get_NetworkDeviceStatus(&value));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::Manufacturer() const
{
    hstring value;
    check_hresult(shim()->get_Manufacturer(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::Model() const
{
    hstring value;
    check_hresult(shim()->get_Model(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::FirmwareInformation() const
{
    hstring value;
    check_hresult(shim()->get_FirmwareInformation(put(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass impl_IMobileBroadbandDeviceInformation<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value {};
    check_hresult(shim()->get_CellularClass(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::DataClasses impl_IMobileBroadbandDeviceInformation<D>::DataClasses() const
{
    Windows::Networking::NetworkOperators::DataClasses value {};
    check_hresult(shim()->get_DataClasses(&value));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::CustomDataClass() const
{
    hstring value;
    check_hresult(shim()->get_CustomDataClass(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::MobileEquipmentId() const
{
    hstring value;
    check_hresult(shim()->get_MobileEquipmentId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IMobileBroadbandDeviceInformation<D>::TelephoneNumbers() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_TelephoneNumbers(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::SubscriberId() const
{
    hstring value;
    check_hresult(shim()->get_SubscriberId(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::SimIccId() const
{
    hstring value;
    check_hresult(shim()->get_SimIccId(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceType impl_IMobileBroadbandDeviceInformation<D>::DeviceType() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceType pDeviceType {};
    check_hresult(shim()->get_DeviceType(&pDeviceType));
    return pDeviceType;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandRadioState impl_IMobileBroadbandDeviceInformation<D>::CurrentRadioState() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState pCurrentState {};
    check_hresult(shim()->get_CurrentRadioState(&pCurrentState));
    return pCurrentState;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinManager impl_IMobileBroadbandDeviceInformation2<D>::PinManager() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinManager value { nullptr };
    check_hresult(shim()->get_PinManager(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation2<D>::Revision() const
{
    hstring value;
    check_hresult(shim()->get_Revision(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceInformation2<D>::SerialNumber() const
{
    hstring value;
    check_hresult(shim()->get_SerialNumber(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter impl_IMobileBroadbandNetwork<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value { nullptr };
    check_hresult(shim()->get_NetworkAdapter(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkRegistrationState impl_IMobileBroadbandNetwork<D>::NetworkRegistrationState() const
{
    Windows::Networking::NetworkOperators::NetworkRegistrationState registrationState {};
    check_hresult(shim()->get_NetworkRegistrationState(&registrationState));
    return registrationState;
}

template <typename D> uint32_t impl_IMobileBroadbandNetwork<D>::RegistrationNetworkError() const
{
    uint32_t networkError {};
    check_hresult(shim()->get_RegistrationNetworkError(&networkError));
    return networkError;
}

template <typename D> uint32_t impl_IMobileBroadbandNetwork<D>::PacketAttachNetworkError() const
{
    uint32_t networkError {};
    check_hresult(shim()->get_PacketAttachNetworkError(&networkError));
    return networkError;
}

template <typename D> uint32_t impl_IMobileBroadbandNetwork<D>::ActivationNetworkError() const
{
    uint32_t networkError {};
    check_hresult(shim()->get_ActivationNetworkError(&networkError));
    return networkError;
}

template <typename D> hstring impl_IMobileBroadbandNetwork<D>::AccessPointName() const
{
    hstring apn;
    check_hresult(shim()->get_AccessPointName(put(apn)));
    return apn;
}

template <typename D> Windows::Networking::NetworkOperators::DataClasses impl_IMobileBroadbandNetwork<D>::RegisteredDataClass() const
{
    Windows::Networking::NetworkOperators::DataClasses value {};
    check_hresult(shim()->get_RegisteredDataClass(&value));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandNetwork<D>::RegisteredProviderId() const
{
    hstring value;
    check_hresult(shim()->get_RegisteredProviderId(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandNetwork<D>::RegisteredProviderName() const
{
    hstring value;
    check_hresult(shim()->get_RegisteredProviderName(put(value)));
    return value;
}

template <typename D> void impl_IMobileBroadbandNetwork<D>::ShowConnectionUI() const
{
    check_hresult(shim()->abi_ShowConnectionUI());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMobileBroadbandNetwork2<D>::GetVoiceCallSupportAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncInfo;
    check_hresult(shim()->abi_GetVoiceCallSupportAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> impl_IMobileBroadbandNetwork2<D>::RegistrationUiccApps() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> value;
    check_hresult(shim()->get_RegistrationUiccApps(put(value)));
    return value;
}

template <typename D> hstring impl_INetworkOperatorTetheringAccessPointConfiguration<D>::Ssid() const
{
    hstring value;
    check_hresult(shim()->get_Ssid(put(value)));
    return value;
}

template <typename D> void impl_INetworkOperatorTetheringAccessPointConfiguration<D>::Ssid(hstring_ref value) const
{
    check_hresult(shim()->put_Ssid(get(value)));
}

template <typename D> hstring impl_INetworkOperatorTetheringAccessPointConfiguration<D>::Passphrase() const
{
    hstring value;
    check_hresult(shim()->get_Passphrase(put(value)));
    return value;
}

template <typename D> void impl_INetworkOperatorTetheringAccessPointConfiguration<D>::Passphrase(hstring_ref value) const
{
    check_hresult(shim()->put_Passphrase(get(value)));
}

template <typename D> Windows::Networking::NetworkOperators::TetheringOperationStatus impl_INetworkOperatorTetheringOperationResult<D>::Status() const
{
    Windows::Networking::NetworkOperators::TetheringOperationStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> hstring impl_INetworkOperatorTetheringOperationResult<D>::AdditionalErrorMessage() const
{
    hstring value;
    check_hresult(shim()->get_AdditionalErrorMessage(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringCapability impl_INetworkOperatorTetheringManagerStatics<D>::GetTetheringCapability(hstring_ref networkAccountId) const
{
    Windows::Networking::NetworkOperators::TetheringCapability value {};
    check_hresult(shim()->abi_GetTetheringCapability(get(networkAccountId), &value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager impl_INetworkOperatorTetheringManagerStatics<D>::CreateFromNetworkAccountId(hstring_ref networkAccountId) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager { nullptr };
    check_hresult(shim()->abi_CreateFromNetworkAccountId(get(networkAccountId), put(ppManager)));
    return ppManager;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringCapability impl_INetworkOperatorTetheringManagerStatics2<D>::GetTetheringCapabilityFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile) const
{
    Windows::Networking::NetworkOperators::TetheringCapability result {};
    check_hresult(shim()->abi_GetTetheringCapabilityFromConnectionProfile(get(profile), &result));
    return result;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager impl_INetworkOperatorTetheringManagerStatics2<D>::CreateFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager { nullptr };
    check_hresult(shim()->abi_CreateFromConnectionProfile(get(profile), put(ppManager)));
    return ppManager;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager impl_INetworkOperatorTetheringManagerStatics3<D>::CreateFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager { nullptr };
    check_hresult(shim()->abi_CreateFromConnectionProfileWithTargetAdapter(get(profile), get(adapter), put(ppManager)));
    return ppManager;
}

template <typename D> uint32_t impl_INetworkOperatorTetheringManager<D>::MaxClientCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxClientCount(&value));
    return value;
}

template <typename D> uint32_t impl_INetworkOperatorTetheringManager<D>::ClientCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_ClientCount(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringOperationalState impl_INetworkOperatorTetheringManager<D>::TetheringOperationalState() const
{
    Windows::Networking::NetworkOperators::TetheringOperationalState value {};
    check_hresult(shim()->get_TetheringOperationalState(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration impl_INetworkOperatorTetheringManager<D>::GetCurrentAccessPointConfiguration() const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration configuration { nullptr };
    check_hresult(shim()->abi_GetCurrentAccessPointConfiguration(put(configuration)));
    return configuration;
}

template <typename D> Windows::Foundation::IAsyncAction impl_INetworkOperatorTetheringManager<D>::ConfigureAccessPointAsync(const Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration & configuration) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_ConfigureAccessPointAsync(get(configuration), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> impl_INetworkOperatorTetheringManager<D>::StartTetheringAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> asyncInfo;
    check_hresult(shim()->abi_StartTetheringAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> impl_INetworkOperatorTetheringManager<D>::StopTetheringAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> asyncInfo;
    check_hresult(shim()->abi_StopTetheringAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_INetworkOperatorTetheringClient<D>::MacAddress() const
{
    hstring value;
    check_hresult(shim()->get_MacAddress(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> impl_INetworkOperatorTetheringClient<D>::HostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value;
    check_hresult(shim()->get_HostNames(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> impl_INetworkOperatorTetheringClientManager<D>::GetTetheringClients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> value;
    check_hresult(shim()->abi_GetTetheringClients(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandAccountEventArgs<D>::NetworkAccountId() const
{
    hstring value;
    check_hresult(shim()->get_NetworkAccountId(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandAccountUpdatedEventArgs<D>::NetworkAccountId() const
{
    hstring value;
    check_hresult(shim()->get_NetworkAccountId(put(value)));
    return value;
}

template <typename D> bool impl_IMobileBroadbandAccountUpdatedEventArgs<D>::HasDeviceInformationChanged() const
{
    bool value {};
    check_hresult(shim()->get_HasDeviceInformationChanged(&value));
    return value;
}

template <typename D> bool impl_IMobileBroadbandAccountUpdatedEventArgs<D>::HasNetworkChanged() const
{
    bool value {};
    check_hresult(shim()->get_HasNetworkChanged(&value));
    return value;
}

template <typename D> event_token impl_IMobileBroadbandAccountWatcher<D>::AccountAdded(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_AccountAdded(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMobileBroadbandAccountWatcher> impl_IMobileBroadbandAccountWatcher<D>::AccountAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandAccountWatcher>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher::remove_AccountAdded, AccountAdded(handler));
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::AccountAdded(event_token cookie) const
{
    check_hresult(shim()->remove_AccountAdded(cookie));
}

template <typename D> event_token impl_IMobileBroadbandAccountWatcher<D>::AccountUpdated(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_AccountUpdated(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMobileBroadbandAccountWatcher> impl_IMobileBroadbandAccountWatcher<D>::AccountUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandAccountWatcher>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher::remove_AccountUpdated, AccountUpdated(handler));
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::AccountUpdated(event_token cookie) const
{
    check_hresult(shim()->remove_AccountUpdated(cookie));
}

template <typename D> event_token impl_IMobileBroadbandAccountWatcher<D>::AccountRemoved(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_AccountRemoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMobileBroadbandAccountWatcher> impl_IMobileBroadbandAccountWatcher<D>::AccountRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandAccountWatcher>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher::remove_AccountRemoved, AccountRemoved(handler));
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::AccountRemoved(event_token cookie) const
{
    check_hresult(shim()->remove_AccountRemoved(cookie));
}

template <typename D> event_token impl_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_EnumerationCompleted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMobileBroadbandAccountWatcher> impl_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandAccountWatcher>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(event_token cookie) const
{
    check_hresult(shim()->remove_EnumerationCompleted(cookie));
}

template <typename D> event_token impl_IMobileBroadbandAccountWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_Stopped(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMobileBroadbandAccountWatcher> impl_IMobileBroadbandAccountWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandAccountWatcher>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::Stopped(event_token cookie) const
{
    check_hresult(shim()->remove_Stopped(cookie));
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus impl_IMobileBroadbandAccountWatcher<D>::Status() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus status {};
    check_hresult(shim()->get_Status(&status));
    return status;
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::Start() const
{
    check_hresult(shim()->abi_Start());
}

template <typename D> void impl_IMobileBroadbandAccountWatcher<D>::Stop() const
{
    check_hresult(shim()->abi_Stop());
}

template <typename D> hstring impl_IMobileBroadbandModemStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(shim()->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandModem impl_IMobileBroadbandModemStatics<D>::FromId(hstring_ref deviceId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandModem value { nullptr };
    check_hresult(shim()->abi_FromId(get(deviceId), put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandModem impl_IMobileBroadbandModemStatics<D>::GetDefault() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandModem value { nullptr };
    check_hresult(shim()->abi_GetDefault(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUicc impl_IMobileBroadbandModemConfiguration<D>::Uicc() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandUicc value { nullptr };
    check_hresult(shim()->get_Uicc(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandModemConfiguration<D>::HomeProviderId() const
{
    hstring value;
    check_hresult(shim()->get_HomeProviderId(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandModemConfiguration<D>::HomeProviderName() const
{
    hstring value;
    check_hresult(shim()->get_HomeProviderName(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccount impl_IMobileBroadbandModem<D>::CurrentAccount() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccount value { nullptr };
    check_hresult(shim()->get_CurrentAccount(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation impl_IMobileBroadbandModem<D>::DeviceInformation() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation value { nullptr };
    check_hresult(shim()->get_DeviceInformation(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandModem<D>::MaxDeviceServiceCommandSizeInBytes() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxDeviceServiceCommandSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandModem<D>::MaxDeviceServiceDataSizeInBytes() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxDeviceServiceDataSizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> impl_IMobileBroadbandModem<D>::DeviceServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> value;
    check_hresult(shim()->get_DeviceServices(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceService impl_IMobileBroadbandModem<D>::GetDeviceService(GUID deviceServiceId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceService value { nullptr };
    check_hresult(shim()->abi_GetDeviceService(deviceServiceId, put(value)));
    return value;
}

template <typename D> bool impl_IMobileBroadbandModem<D>::IsResetSupported() const
{
    bool value {};
    check_hresult(shim()->get_IsResetSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMobileBroadbandModem<D>::ResetAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_ResetAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> impl_IMobileBroadbandModem<D>::GetCurrentConfigurationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> asyncInfo;
    check_hresult(shim()->abi_GetCurrentConfigurationAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork impl_IMobileBroadbandModem<D>::CurrentNetwork() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork value { nullptr };
    check_hresult(shim()->get_CurrentNetwork(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType> impl_IMobileBroadbandPinManager<D>::SupportedPins() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType> value;
    check_hresult(shim()->get_SupportedPins(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPin impl_IMobileBroadbandPinManager<D>::GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType pinType) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPin value { nullptr };
    check_hresult(shim()->abi_GetPin(pinType, put(value)));
    return value;
}

template <typename D> bool impl_IMobileBroadbandPinOperationResult<D>::IsSuccessful() const
{
    bool value {};
    check_hresult(shim()->get_IsSuccessful(&value));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandPinOperationResult<D>::AttemptsRemaining() const
{
    uint32_t value {};
    check_hresult(shim()->get_AttemptsRemaining(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinType impl_IMobileBroadbandPin<D>::Type() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinLockState impl_IMobileBroadbandPin<D>::LockState() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState value {};
    check_hresult(shim()->get_LockState(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinFormat impl_IMobileBroadbandPin<D>::Format() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinFormat value {};
    check_hresult(shim()->get_Format(&value));
    return value;
}

template <typename D> bool impl_IMobileBroadbandPin<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandPin<D>::MaxLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxLength(&value));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandPin<D>::MinLength() const
{
    uint32_t value {};
    check_hresult(shim()->get_MinLength(&value));
    return value;
}

template <typename D> uint32_t impl_IMobileBroadbandPin<D>::AttemptsRemaining() const
{
    uint32_t value {};
    check_hresult(shim()->get_AttemptsRemaining(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> impl_IMobileBroadbandPin<D>::EnableAsync(hstring_ref currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo;
    check_hresult(shim()->abi_EnableAsync(get(currentPin), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> impl_IMobileBroadbandPin<D>::DisableAsync(hstring_ref currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo;
    check_hresult(shim()->abi_DisableAsync(get(currentPin), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> impl_IMobileBroadbandPin<D>::EnterAsync(hstring_ref currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo;
    check_hresult(shim()->abi_EnterAsync(get(currentPin), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> impl_IMobileBroadbandPin<D>::ChangeAsync(hstring_ref currentPin, hstring_ref newPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo;
    check_hresult(shim()->abi_ChangeAsync(get(currentPin), get(newPin), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> impl_IMobileBroadbandPin<D>::UnblockAsync(hstring_ref pinUnblockKey, hstring_ref newPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo;
    check_hresult(shim()->abi_UnblockAsync(get(pinUnblockKey), get(newPin), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> GUID impl_IMobileBroadbandDeviceServiceInformation<D>::DeviceServiceId() const
{
    GUID value {};
    check_hresult(shim()->get_DeviceServiceId(&value));
    return value;
}

template <typename D> bool impl_IMobileBroadbandDeviceServiceInformation<D>::IsDataReadSupported() const
{
    bool value {};
    check_hresult(shim()->get_IsDataReadSupported(&value));
    return value;
}

template <typename D> bool impl_IMobileBroadbandDeviceServiceInformation<D>::IsDataWriteSupported() const
{
    bool value {};
    check_hresult(shim()->get_IsDataWriteSupported(&value));
    return value;
}

template <typename D> GUID impl_IMobileBroadbandDeviceService<D>::DeviceServiceId() const
{
    GUID value {};
    check_hresult(shim()->get_DeviceServiceId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IMobileBroadbandDeviceService<D>::SupportedCommands() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_SupportedCommands(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession impl_IMobileBroadbandDeviceService<D>::OpenDataSession() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession value { nullptr };
    check_hresult(shim()->abi_OpenDataSession(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession impl_IMobileBroadbandDeviceService<D>::OpenCommandSession() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession value { nullptr };
    check_hresult(shim()->abi_OpenCommandSession(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>::ReceivedData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_ReceivedData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMobileBroadbandDeviceServiceDataSession<D>::WriteDataAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_WriteDataAsync(get(value), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IMobileBroadbandDeviceServiceDataSession<D>::CloseSession() const
{
    check_hresult(shim()->abi_CloseSession());
}

template <typename D> event_token impl_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(shim()->add_DataReceived(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMobileBroadbandDeviceServiceDataSession> impl_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IMobileBroadbandDeviceServiceDataSession>(this, &ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession::remove_DataReceived, DataReceived(eventHandler));
}

template <typename D> void impl_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(event_token eventCookie) const
{
    check_hresult(shim()->remove_DataReceived(eventCookie));
}

template <typename D> uint32_t impl_IMobileBroadbandDeviceServiceCommandResult<D>::StatusCode() const
{
    uint32_t value {};
    check_hresult(shim()->get_StatusCode(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMobileBroadbandDeviceServiceCommandResult<D>::ResponseData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_ResponseData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> impl_IMobileBroadbandDeviceServiceCommandSession<D>::SendQueryCommandAsync(uint32_t commandId, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> asyncInfo;
    check_hresult(shim()->abi_SendQueryCommandAsync(commandId, get(data), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> impl_IMobileBroadbandDeviceServiceCommandSession<D>::SendSetCommandAsync(uint32_t commandId, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> asyncInfo;
    check_hresult(shim()->abi_SendSetCommandAsync(commandId, get(data), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IMobileBroadbandDeviceServiceCommandSession<D>::CloseSession() const
{
    check_hresult(shim()->abi_CloseSession());
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus impl_IMobileBroadbandUiccAppsResult<D>::Status() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> impl_IMobileBroadbandUiccAppsResult<D>::UiccApps() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> value;
    check_hresult(shim()->get_UiccApps(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandUicc<D>::SimIccId() const
{
    hstring value;
    check_hresult(shim()->get_SimIccId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> impl_IMobileBroadbandUicc<D>::GetUiccAppsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> asyncInfo;
    check_hresult(shim()->abi_GetUiccAppsAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::Status() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAppRecordKind impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::Kind() const
{
    Windows::Networking::NetworkOperators::UiccAppRecordKind value {};
    check_hresult(shim()->get_Kind(&value));
    return value;
}

template <typename D> int32_t impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::RecordCount() const
{
    int32_t value {};
    check_hresult(shim()->get_RecordCount(&value));
    return value;
}

template <typename D> int32_t impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::RecordSize() const
{
    int32_t value {};
    check_hresult(shim()->get_RecordSize(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAccessCondition impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::ReadAccessCondition() const
{
    Windows::Networking::NetworkOperators::UiccAccessCondition value {};
    check_hresult(shim()->get_ReadAccessCondition(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAccessCondition impl_IMobileBroadbandUiccAppRecordDetailsResult<D>::WriteAccessCondition() const
{
    Windows::Networking::NetworkOperators::UiccAccessCondition value {};
    check_hresult(shim()->get_WriteAccessCondition(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus impl_IMobileBroadbandUiccAppReadRecordResult<D>::Status() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMobileBroadbandUiccAppReadRecordResult<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Data(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMobileBroadbandUiccApp<D>::Id() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAppKind impl_IMobileBroadbandUiccApp<D>::Kind() const
{
    Windows::Networking::NetworkOperators::UiccAppKind value {};
    check_hresult(shim()->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> impl_IMobileBroadbandUiccApp<D>::GetRecordDetailsAsync(const Windows::Foundation::Collections::IIterable<uint32_t> & uiccFilePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> asyncInfo;
    check_hresult(shim()->abi_GetRecordDetailsAsync(get(uiccFilePath), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> impl_IMobileBroadbandUiccApp<D>::ReadRecordAsync(const Windows::Foundation::Collections::IIterable<uint32_t> & uiccFilePath, int32_t recordIndex) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> asyncInfo;
    check_hresult(shim()->abi_ReadRecordAsync(get(uiccFilePath), recordIndex, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IMobileBroadbandNetworkRegistrationStateChange<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork impl_IMobileBroadbandNetworkRegistrationStateChange<D>::Network() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork value { nullptr };
    check_hresult(shim()->get_Network(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> impl_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>::NetworkRegistrationStateChanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> value;
    check_hresult(shim()->get_NetworkRegistrationStateChanges(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandRadioStateChange<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandRadioState impl_IMobileBroadbandRadioStateChange<D>::RadioState() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState value {};
    check_hresult(shim()->get_RadioState(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> impl_IMobileBroadbandRadioStateChangeTriggerDetails<D>::RadioStateChanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> value;
    check_hresult(shim()->get_RadioStateChanges(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandPinLockStateChange<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinType impl_IMobileBroadbandPinLockStateChange<D>::PinType() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinType value {};
    check_hresult(shim()->get_PinType(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinLockState impl_IMobileBroadbandPinLockStateChange<D>::PinLockState() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState value {};
    check_hresult(shim()->get_PinLockState(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> impl_IMobileBroadbandPinLockStateChangeTriggerDetails<D>::PinLockStateChanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> value;
    check_hresult(shim()->get_PinLockStateChanges(put(value)));
    return value;
}

template <typename D> hstring impl_IMobileBroadbandDeviceServiceTriggerDetails<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> GUID impl_IMobileBroadbandDeviceServiceTriggerDetails<D>::DeviceServiceId() const
{
    GUID value {};
    check_hresult(shim()->get_DeviceServiceId(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMobileBroadbandDeviceServiceTriggerDetails<D>::ReceivedData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_ReceivedData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownCSimFilePathsStatics<D>::EFSpn() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFSpn(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownCSimFilePathsStatics<D>::Gid1() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownCSimFilePathsStatics<D>::Gid2() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid2(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownRuimFilePathsStatics<D>::EFSpn() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFSpn(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownRuimFilePathsStatics<D>::Gid1() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownRuimFilePathsStatics<D>::Gid2() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid2(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownSimFilePathsStatics<D>::EFOns() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFOns(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownSimFilePathsStatics<D>::EFSpn() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFSpn(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownSimFilePathsStatics<D>::Gid1() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownSimFilePathsStatics<D>::Gid2() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid2(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownUSimFilePathsStatics<D>::EFSpn() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFSpn(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownUSimFilePathsStatics<D>::EFOpl() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFOpl(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownUSimFilePathsStatics<D>::EFPnn() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_EFPnn(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownUSimFilePathsStatics<D>::Gid1() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IKnownUSimFilePathsStatics<D>::Gid2() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(shim()->get_Gid2(put(value)));
    return value;
}

template <typename D> hstring impl_IHotspotAuthenticationEventDetails<D>::EventToken() const
{
    hstring value;
    check_hresult(shim()->get_EventToken(put(value)));
    return value;
}

template <typename D> bool impl_IHotspotAuthenticationContextStatics<D>::TryGetAuthenticationContext(hstring_ref evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext & context) const
{
    bool isValid {};
    check_hresult(shim()->abi_TryGetAuthenticationContext(get(evenToken), put(context), &isValid));
    return isValid;
}

template <typename D> com_array<uint8_t> impl_IHotspotAuthenticationContext<D>::WirelessNetworkId() const
{
    com_array<uint8_t> value {};
    check_hresult(shim()->get_WirelessNetworkId(put_size(value), put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter impl_IHotspotAuthenticationContext<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value { nullptr };
    check_hresult(shim()->get_NetworkAdapter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IHotspotAuthenticationContext<D>::RedirectMessageUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_RedirectMessageUrl(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IHotspotAuthenticationContext<D>::RedirectMessageXml() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(shim()->get_RedirectMessageXml(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IHotspotAuthenticationContext<D>::AuthenticationUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_AuthenticationUrl(put(value)));
    return value;
}

template <typename D> void impl_IHotspotAuthenticationContext<D>::IssueCredentials(hstring_ref userName, hstring_ref password, hstring_ref extraParameters, bool markAsManualConnectOnFailure) const
{
    check_hresult(shim()->abi_IssueCredentials(get(userName), get(password), get(extraParameters), markAsManualConnectOnFailure));
}

template <typename D> void impl_IHotspotAuthenticationContext<D>::AbortAuthentication(bool markAsManual) const
{
    check_hresult(shim()->abi_AbortAuthentication(markAsManual));
}

template <typename D> void impl_IHotspotAuthenticationContext<D>::SkipAuthentication() const
{
    check_hresult(shim()->abi_SkipAuthentication());
}

template <typename D> void impl_IHotspotAuthenticationContext<D>::TriggerAttentionRequired(hstring_ref packageRelativeApplicationId, hstring_ref applicationParameters) const
{
    check_hresult(shim()->abi_TriggerAttentionRequired(get(packageRelativeApplicationId), get(applicationParameters)));
}

template <typename D> bool impl_IHotspotCredentialsAuthenticationResult<D>::HasNetworkErrorOccurred() const
{
    bool value {};
    check_hresult(shim()->get_HasNetworkErrorOccurred(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode impl_IHotspotCredentialsAuthenticationResult<D>::ResponseCode() const
{
    Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode value {};
    check_hresult(shim()->get_ResponseCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IHotspotCredentialsAuthenticationResult<D>::LogoffUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_LogoffUrl(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IHotspotCredentialsAuthenticationResult<D>::AuthenticationReplyXml() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(shim()->get_AuthenticationReplyXml(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> impl_IHotspotAuthenticationContext2<D>::IssueCredentialsAsync(hstring_ref userName, hstring_ref password, hstring_ref extraParameters, bool markAsManualConnectOnFailure) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> asyncInfo;
    check_hresult(shim()->abi_IssueCredentialsAsync(get(userName), get(password), get(extraParameters), markAsManualConnectOnFailure, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IProvisionFromXmlDocumentResults<D>::AllElementsProvisioned() const
{
    bool value {};
    check_hresult(shim()->get_AllElementsProvisioned(&value));
    return value;
}

template <typename D> hstring impl_IProvisionFromXmlDocumentResults<D>::ProvisionResultsXml() const
{
    hstring value;
    check_hresult(shim()->get_ProvisionResultsXml(put(value)));
    return value;
}

template <typename D> void impl_IProvisionedProfile<D>::UpdateCost(Windows::Networking::Connectivity::NetworkCostType value) const
{
    check_hresult(shim()->abi_UpdateCost(value));
}

template <typename D> void impl_IProvisionedProfile<D>::UpdateUsage(const Windows::Networking::NetworkOperators::ProfileUsage & value) const
{
    check_hresult(shim()->abi_UpdateUsage(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> impl_IProvisioningAgent<D>::ProvisionFromXmlDocumentAsync(hstring_ref provisioningXmlDocument) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> asyncInfo;
    check_hresult(shim()->abi_ProvisionFromXmlDocumentAsync(get(provisioningXmlDocument), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::ProvisionedProfile impl_IProvisioningAgent<D>::GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType mediaType, hstring_ref profileName) const
{
    Windows::Networking::NetworkOperators::ProvisionedProfile provisionedProfile { nullptr };
    check_hresult(shim()->abi_GetProvisionedProfile(mediaType, get(profileName), put(provisionedProfile)));
    return provisionedProfile;
}

template <typename D> Windows::Networking::NetworkOperators::ProvisioningAgent impl_IProvisioningAgentStaticMethods<D>::CreateFromNetworkAccountId(hstring_ref networkAccountId) const
{
    Windows::Networking::NetworkOperators::ProvisioningAgent provisioningAgent { nullptr };
    check_hresult(shim()->abi_CreateFromNetworkAccountId(get(networkAccountId), put(provisioningAgent)));
    return provisioningAgent;
}

template <typename D> uint8_t impl_IUssdMessage<D>::DataCodingScheme() const
{
    uint8_t value {};
    check_hresult(shim()->get_DataCodingScheme(&value));
    return value;
}

template <typename D> void impl_IUssdMessage<D>::DataCodingScheme(uint8_t value) const
{
    check_hresult(shim()->put_DataCodingScheme(value));
}

template <typename D> com_array<uint8_t> impl_IUssdMessage<D>::GetPayload() const
{
    com_array<uint8_t> value {};
    check_hresult(shim()->abi_GetPayload(put_size(value), put(value)));
    return value;
}

template <typename D> void impl_IUssdMessage<D>::SetPayload(array_ref<const uint8_t> value) const
{
    check_hresult(shim()->abi_SetPayload(value.size(), get(value)));
}

template <typename D> hstring impl_IUssdMessage<D>::PayloadAsText() const
{
    hstring value;
    check_hresult(shim()->get_PayloadAsText(put(value)));
    return value;
}

template <typename D> void impl_IUssdMessage<D>::PayloadAsText(hstring_ref value) const
{
    check_hresult(shim()->put_PayloadAsText(get(value)));
}

template <typename D> Windows::Networking::NetworkOperators::UssdMessage impl_IUssdMessageFactory<D>::CreateMessage(hstring_ref messageText) const
{
    Windows::Networking::NetworkOperators::UssdMessage ussdMessage { nullptr };
    check_hresult(shim()->abi_CreateMessage(get(messageText), put(ussdMessage)));
    return ussdMessage;
}

template <typename D> Windows::Networking::NetworkOperators::UssdResultCode impl_IUssdReply<D>::ResultCode() const
{
    Windows::Networking::NetworkOperators::UssdResultCode value {};
    check_hresult(shim()->get_ResultCode(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UssdMessage impl_IUssdReply<D>::Message() const
{
    Windows::Networking::NetworkOperators::UssdMessage value { nullptr };
    check_hresult(shim()->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> impl_IUssdSession<D>::SendMessageAndGetReplyAsync(const Windows::Networking::NetworkOperators::UssdMessage & message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> asyncInfo;
    check_hresult(shim()->abi_SendMessageAndGetReplyAsync(get(message), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IUssdSession<D>::Close() const
{
    check_hresult(shim()->abi_Close());
}

template <typename D> Windows::Networking::NetworkOperators::UssdSession impl_IUssdSessionStatics<D>::CreateFromNetworkAccountId(hstring_ref networkAccountId) const
{
    Windows::Networking::NetworkOperators::UssdSession ussdSession { nullptr };
    check_hresult(shim()->abi_CreateFromNetworkAccountId(get(networkAccountId), put(ussdSession)));
    return ussdSession;
}

template <typename D> Windows::Networking::NetworkOperators::UssdSession impl_IUssdSessionStatics<D>::CreateFromNetworkInterfaceId(hstring_ref networkInterfaceId) const
{
    Windows::Networking::NetworkOperators::UssdSession ussdSession { nullptr };
    check_hresult(shim()->abi_CreateFromNetworkInterfaceId(get(networkInterfaceId), put(ussdSession)));
    return ussdSession;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType impl_INetworkOperatorNotificationEventDetails<D>::NotificationType() const
{
    Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType value {};
    check_hresult(shim()->get_NotificationType(&value));
    return value;
}

template <typename D> hstring impl_INetworkOperatorNotificationEventDetails<D>::NetworkAccountId() const
{
    hstring value;
    check_hresult(shim()->get_NetworkAccountId(put(value)));
    return value;
}

template <typename D> uint8_t impl_INetworkOperatorNotificationEventDetails<D>::EncodingType() const
{
    uint8_t value {};
    check_hresult(shim()->get_EncodingType(&value));
    return value;
}

template <typename D> hstring impl_INetworkOperatorNotificationEventDetails<D>::Message() const
{
    hstring value;
    check_hresult(shim()->get_Message(put(value)));
    return value;
}

template <typename D> hstring impl_INetworkOperatorNotificationEventDetails<D>::RuleId() const
{
    hstring value;
    check_hresult(shim()->get_RuleId(put(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::ISmsMessage impl_INetworkOperatorNotificationEventDetails<D>::SmsMessage() const
{
    Windows::Devices::Sms::ISmsMessage value;
    check_hresult(shim()->get_SmsMessage(put(value)));
    return value;
}

template <typename D> void impl_INetworkOperatorTetheringEntitlementCheck<D>::AuthorizeTethering(bool allow, hstring_ref entitlementFailureReason) const
{
    check_hresult(shim()->abi_AuthorizeTethering(allow, get(entitlementFailureReason)));
}

inline bool HotspotAuthenticationContext::TryGetAuthenticationContext(hstring_ref evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext & context)
{
    return get_activation_factory<HotspotAuthenticationContext, IHotspotAuthenticationContextStatics>().TryGetAuthenticationContext(evenToken, context);
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownCSimFilePaths, IKnownCSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::Gid1()
{
    return get_activation_factory<KnownCSimFilePaths, IKnownCSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::Gid2()
{
    return get_activation_factory<KnownCSimFilePaths, IKnownCSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::EFSpn()
{
    return get_activation_factory<KnownRuimFilePaths, IKnownRuimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::Gid1()
{
    return get_activation_factory<KnownRuimFilePaths, IKnownRuimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::Gid2()
{
    return get_activation_factory<KnownRuimFilePaths, IKnownRuimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::EFOns()
{
    return get_activation_factory<KnownSimFilePaths, IKnownSimFilePathsStatics>().EFOns();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownSimFilePaths, IKnownSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::Gid1()
{
    return get_activation_factory<KnownSimFilePaths, IKnownSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::Gid2()
{
    return get_activation_factory<KnownSimFilePaths, IKnownSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownUSimFilePaths, IKnownUSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFOpl()
{
    return get_activation_factory<KnownUSimFilePaths, IKnownUSimFilePathsStatics>().EFOpl();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFPnn()
{
    return get_activation_factory<KnownUSimFilePaths, IKnownUSimFilePathsStatics>().EFPnn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::Gid1()
{
    return get_activation_factory<KnownUSimFilePaths, IKnownUSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::Gid2()
{
    return get_activation_factory<KnownUSimFilePaths, IKnownUSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<hstring> MobileBroadbandAccount::AvailableNetworkAccountIds()
{
    return get_activation_factory<MobileBroadbandAccount, IMobileBroadbandAccountStatics>().AvailableNetworkAccountIds();
}

inline Windows::Networking::NetworkOperators::MobileBroadbandAccount MobileBroadbandAccount::CreateFromNetworkAccountId(hstring_ref networkAccountId)
{
    return get_activation_factory<MobileBroadbandAccount, IMobileBroadbandAccountStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline MobileBroadbandAccountWatcher::MobileBroadbandAccountWatcher() :
    MobileBroadbandAccountWatcher(activate_instance<MobileBroadbandAccountWatcher>())
{}

inline hstring MobileBroadbandModem::GetDeviceSelector()
{
    return get_activation_factory<MobileBroadbandModem, IMobileBroadbandModemStatics>().GetDeviceSelector();
}

inline Windows::Networking::NetworkOperators::MobileBroadbandModem MobileBroadbandModem::FromId(hstring_ref deviceId)
{
    return get_activation_factory<MobileBroadbandModem, IMobileBroadbandModemStatics>().FromId(deviceId);
}

inline Windows::Networking::NetworkOperators::MobileBroadbandModem MobileBroadbandModem::GetDefault()
{
    return get_activation_factory<MobileBroadbandModem, IMobileBroadbandModemStatics>().GetDefault();
}

inline NetworkOperatorTetheringAccessPointConfiguration::NetworkOperatorTetheringAccessPointConfiguration() :
    NetworkOperatorTetheringAccessPointConfiguration(activate_instance<NetworkOperatorTetheringAccessPointConfiguration>())
{}

inline Windows::Networking::NetworkOperators::TetheringCapability NetworkOperatorTetheringManager::GetTetheringCapability(hstring_ref networkAccountId)
{
    return get_activation_factory<NetworkOperatorTetheringManager, INetworkOperatorTetheringManagerStatics>().GetTetheringCapability(networkAccountId);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromNetworkAccountId(hstring_ref networkAccountId)
{
    return get_activation_factory<NetworkOperatorTetheringManager, INetworkOperatorTetheringManagerStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline Windows::Networking::NetworkOperators::TetheringCapability NetworkOperatorTetheringManager::GetTetheringCapabilityFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile)
{
    return get_activation_factory<NetworkOperatorTetheringManager, INetworkOperatorTetheringManagerStatics2>().GetTetheringCapabilityFromConnectionProfile(profile);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile)
{
    return get_activation_factory<NetworkOperatorTetheringManager, INetworkOperatorTetheringManagerStatics2>().CreateFromConnectionProfile(profile);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromConnectionProfile(const Windows::Networking::Connectivity::ConnectionProfile & profile, const Windows::Networking::Connectivity::NetworkAdapter & adapter)
{
    return get_activation_factory<NetworkOperatorTetheringManager, INetworkOperatorTetheringManagerStatics3>().CreateFromConnectionProfile(profile, adapter);
}

inline ProvisioningAgent::ProvisioningAgent() :
    ProvisioningAgent(activate_instance<ProvisioningAgent>())
{}

inline Windows::Networking::NetworkOperators::ProvisioningAgent ProvisioningAgent::CreateFromNetworkAccountId(hstring_ref networkAccountId)
{
    return get_activation_factory<ProvisioningAgent, IProvisioningAgentStaticMethods>().CreateFromNetworkAccountId(networkAccountId);
}

inline UssdMessage::UssdMessage(hstring_ref messageText) :
    UssdMessage(get_activation_factory<UssdMessage, IUssdMessageFactory>().CreateMessage(messageText))
{}

inline Windows::Networking::NetworkOperators::UssdSession UssdSession::CreateFromNetworkAccountId(hstring_ref networkAccountId)
{
    return get_activation_factory<UssdSession, IUssdSessionStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline Windows::Networking::NetworkOperators::UssdSession UssdSession::CreateFromNetworkInterfaceId(hstring_ref networkInterfaceId)
{
    return get_activation_factory<UssdSession, IUssdSessionStatics>().CreateFromNetworkInterfaceId(networkInterfaceId);
}

}

}
