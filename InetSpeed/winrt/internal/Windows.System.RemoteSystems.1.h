// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::RemoteSystems {

struct __declspec(uuid("ed5838cd-1e10-4a8c-b4a6-4e5fd6f97721")) __declspec(novtable) IRemoteSystem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(hstring * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemStatus * value) = 0;
    virtual HRESULT __stdcall get_IsAvailableByProximity(bool * value) = 0;
};

struct __declspec(uuid("8f39560f-e534-4697-8836-7abea151516e")) __declspec(novtable) IRemoteSystemAddedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("84ed4104-8d5e-4d72-8238-7621576c7a67")) __declspec(novtable) IRemoteSystemConnectionRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("aa0a0a20-baeb-4575-b530-810bb9786334")) __declspec(novtable) IRemoteSystemConnectionRequestFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::IRemoteSystem * remoteSystem, Windows::System::RemoteSystems::IRemoteSystemConnectionRequest ** result) = 0;
};

struct __declspec(uuid("42d9041f-ee5a-43da-ac6a-6fee25460741")) __declspec(novtable) IRemoteSystemDiscoveryTypeFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemDiscoveryType(winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType * value) = 0;
};

struct __declspec(uuid("9f9eb993-c260-4161-92f2-9c021f23fe5d")) __declspec(novtable) IRemoteSystemDiscoveryTypeFilterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter ** result) = 0;
};

struct __declspec(uuid("4a3ba9e4-99eb-45eb-ba16-0367728ff374")) __declspec(novtable) IRemoteSystemFilter : Windows::IInspectable
{
};

struct __declspec(uuid("38e1c9ec-22c3-4ef6-901a-bbb1c7aad4ed")) __declspec(novtable) IRemoteSystemKindFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemKinds(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("a1fb18ee-99ea-40bc-9a39-c670aa804a28")) __declspec(novtable) IRemoteSystemKindFilterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::Collections::IIterable<hstring> * remoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindFilter ** result) = 0;
};

struct __declspec(uuid("f6317633-ab14-41d0-9553-796aadb882db")) __declspec(novtable) IRemoteSystemKindStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Phone(hstring * value) = 0;
    virtual HRESULT __stdcall get_Hub(hstring * value) = 0;
    virtual HRESULT __stdcall get_Holographic(hstring * value) = 0;
    virtual HRESULT __stdcall get_Desktop(hstring * value) = 0;
    virtual HRESULT __stdcall get_Xbox(hstring * value) = 0;
};

struct __declspec(uuid("8b3d16bb-7306-49ea-b7df-67d5714cb013")) __declspec(novtable) IRemoteSystemRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemId(hstring * value) = 0;
};

struct __declspec(uuid("a485b392-ff2b-4b47-be62-743f2f140f30")) __declspec(novtable) IRemoteSystemStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindByHostNameAsync(Windows::Networking::IHostName * hostName, Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::System::RemoteSystems::IRemoteSystemWatcher ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherWithFilters(Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> * filters, Windows::System::RemoteSystems::IRemoteSystemWatcher ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> ** operation) = 0;
};

struct __declspec(uuid("0c39514e-cbb6-4777-8534-2e0c521affa2")) __declspec(novtable) IRemoteSystemStatusTypeFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemStatusType(winrt::Windows::System::RemoteSystems::RemoteSystemStatusType * value) = 0;
};

struct __declspec(uuid("33cf78fa-d724-4125-ac7a-8d281e44c949")) __declspec(novtable) IRemoteSystemStatusTypeFilterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter ** result) = 0;
};

struct __declspec(uuid("7502ff0e-dbcb-4155-b4ca-b30a04f27627")) __declspec(novtable) IRemoteSystemUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("5d600c7e-2c07-48c5-889c-455d2b099771")) __declspec(novtable) IRemoteSystemWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall add_RemoteSystemAdded(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemUpdated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemRemoved(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemRemoved(event_token token) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::RemoteSystems::RemoteSystem> { using default_interface = Windows::System::RemoteSystems::IRemoteSystem; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemConnectionRequest> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemConnectionRequest; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKindFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemKindFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemWatcher> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemWatcher; };

}

namespace Windows::System::RemoteSystems {

template <typename T> class impl_IRemoteSystem;
template <typename T> class impl_IRemoteSystemAddedEventArgs;
template <typename T> class impl_IRemoteSystemConnectionRequest;
template <typename T> class impl_IRemoteSystemConnectionRequestFactory;
template <typename T> class impl_IRemoteSystemDiscoveryTypeFilter;
template <typename T> class impl_IRemoteSystemDiscoveryTypeFilterFactory;
template <typename T> class impl_IRemoteSystemFilter;
template <typename T> class impl_IRemoteSystemKindFilter;
template <typename T> class impl_IRemoteSystemKindFilterFactory;
template <typename T> class impl_IRemoteSystemKindStatics;
template <typename T> class impl_IRemoteSystemRemovedEventArgs;
template <typename T> class impl_IRemoteSystemStatics;
template <typename T> class impl_IRemoteSystemStatusTypeFilter;
template <typename T> class impl_IRemoteSystemStatusTypeFilterFactory;
template <typename T> class impl_IRemoteSystemUpdatedEventArgs;
template <typename T> class impl_IRemoteSystemWatcher;

}

namespace impl {

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystem>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystem;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystem<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemAddedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemConnectionRequest<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemConnectionRequestFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemDiscoveryTypeFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemDiscoveryTypeFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemRemovedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatusTypeFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatusTypeFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemUpdatedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemWatcher<D>;
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystem>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystem;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystem"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemConnectionRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemConnectionRequest;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemConnectionRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemKindFilter;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemKindFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemKindFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKinds>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemKinds"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemWatcher;
    using default_interface = Windows::System::RemoteSystems::IRemoteSystemWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemWatcher"; }
};

}

}