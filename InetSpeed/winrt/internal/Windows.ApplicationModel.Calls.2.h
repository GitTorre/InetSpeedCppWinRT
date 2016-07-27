// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.ApplicationModel.Calls.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_1e00c6cc_e14c_51ce_93f3_0a0a9a3f3eec
#define WINRT_GENERIC_1e00c6cc_e14c_51ce_93f3_0a0a9a3f3eec
template <> struct __declspec(uuid("1e00c6cc-e14c-51ce-93f3-0a0a9a3f3eec")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d47be4da_c00c_5faa_bfa5_1b11e0c3ccc1
#define WINRT_GENERIC_d47be4da_c00c_5faa_bfa5_1b11e0c3ccc1
template <> struct __declspec(uuid("d47be4da-c00c-5faa-bfa5-1b11e0c3ccc1")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d06255ce_0967_5441_8fe6_ed2e7008197e
#define WINRT_GENERIC_d06255ce_0967_5441_8fe6_ed2e7008197e
template <> struct __declspec(uuid("d06255ce-0967-5441-8fe6-ed2e7008197e")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> {};
#endif

#ifndef WINRT_GENERIC_8528be80_7ce9_5668_8e48_469ae5ba9ead
#define WINRT_GENERIC_8528be80_7ce9_5668_8e48_469ae5ba9ead
template <> struct __declspec(uuid("8528be80-7ce9-5668-8e48-469ae5ba9ead")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> {};
#endif

#ifndef WINRT_GENERIC_ecafec77_4bf6_57b7_86c6_e2feca5b5aee
#define WINRT_GENERIC_ecafec77_4bf6_57b7_86c6_e2feca5b5aee
template <> struct __declspec(uuid("ecafec77-4bf6-57b7-86c6-e2feca5b5aee")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_452ce6ed_a06d_58fb_be06_cb4330b7f5c7
#define WINRT_GENERIC_452ce6ed_a06d_58fb_be06_cb4330b7f5c7
template <> struct __declspec(uuid("452ce6ed-a06d-58fb-be06-cb4330b7f5c7")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> : impl_IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_785e7cca_90e2_5d03_8f23_b3358d09c951
#define WINRT_GENERIC_785e7cca_90e2_5d03_8f23_b3358d09c951
template <> struct __declspec(uuid("785e7cca-90e2-5d03-8f23-b3358d09c951")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> : impl_IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a3f93eea_c846_52c7_aa5a_3306707f6369
#define WINRT_GENERIC_a3f93eea_c846_52c7_aa5a_3306707f6369
template <> struct __declspec(uuid("a3f93eea-c846-52c7-aa5a-3306707f6369")) __declspec(novtable) IIterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> : impl_IIterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
#define WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
template <> struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de")) __declspec(novtable) IAsyncOperation<uint32_t> : impl_IAsyncOperation<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_0d9a97b0_8796_52bf_80da_b1435fe64a26
#define WINRT_GENERIC_0d9a97b0_8796_52bf_80da_b1435fe64a26
template <> struct __declspec(uuid("0d9a97b0-8796-52bf-80da-b1435fe64a26")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> : impl_IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> {};
#endif

#ifndef WINRT_GENERIC_92f7c40e_e7b9_5f68_98f0_56fb89015806
#define WINRT_GENERIC_92f7c40e_e7b9_5f68_98f0_56fb89015806
template <> struct __declspec(uuid("92f7c40e-e7b9-5f68-98f0-56fb89015806")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_addada2a_e5a7_5921_b7e0_17323adf7382
#define WINRT_GENERIC_addada2a_e5a7_5921_b7e0_17323adf7382
template <> struct __declspec(uuid("addada2a-e5a7-5921-b7e0-17323adf7382")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_7a27b20f_647a_53fc_80f0_a79d083ce531
#define WINRT_GENERIC_7a27b20f_647a_53fc_80f0_a79d083ce531
template <> struct __declspec(uuid("7a27b20f-647a-53fc-80f0-a79d083ce531")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_c1cf3870_064a_54d5_afab_d1dc4ee26ccb
#define WINRT_GENERIC_c1cf3870_064a_54d5_afab_d1dc4ee26ccb
template <> struct __declspec(uuid("c1cf3870-064a-54d5-afab-d1dc4ee26ccb")) __declspec(novtable) IIterator<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> : impl_IIterator<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3234244b_abee_561d_b247_79b832822055
#define WINRT_GENERIC_3234244b_abee_561d_b247_79b832822055
template <> struct __declspec(uuid("3234244b-abee-561d-b247-79b832822055")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> {};
#endif

#ifndef WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
#define WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
template <> struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4")) __declspec(novtable) AsyncOperationCompletedHandler<uint32_t> : impl_AsyncOperationCompletedHandler<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_226a138b_79ea_56d3_adc2_a40db8d8c9b0
#define WINRT_GENERIC_226a138b_79ea_56d3_adc2_a40db8d8c9b0
template <> struct __declspec(uuid("226a138b-79ea-56d3-adc2-a40db8d8c9b0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> {};
#endif

#ifndef WINRT_GENERIC_2258b912_eb70_5361_b20a_731e15bb9097
#define WINRT_GENERIC_2258b912_eb70_5361_b20a_731e15bb9097
template <> struct __declspec(uuid("2258b912-eb70-5361-b20a-731e15bb9097")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> {};
#endif

#ifndef WINRT_GENERIC_1ef6a805_fd84_5756_a180_353dd72db275
#define WINRT_GENERIC_1ef6a805_fd84_5756_a180_353dd72db275
template <> struct __declspec(uuid("1ef6a805-fd84-5756-a180-353dd72db275")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> {};
#endif


}

namespace Windows::ApplicationModel::Calls {

template <typename D>
class WINRT_EBO impl_ICallAnswerEventArgs
{
    auto shim() const { return impl::shim<D, ICallAnswerEventArgs>(this); }

public:

    Windows::ApplicationModel::Calls::VoipPhoneCallMedia AcceptedMedia() const;
};

template <typename D>
class WINRT_EBO impl_ICallRejectEventArgs
{
    auto shim() const { return impl::shim<D, ICallRejectEventArgs>(this); }

public:

    Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason RejectReason() const;
};

template <typename D>
class WINRT_EBO impl_ICallStateChangeEventArgs
{
    auto shim() const { return impl::shim<D, ICallStateChangeEventArgs>(this); }

public:

    Windows::ApplicationModel::Calls::VoipPhoneCallState State() const;
};

template <typename D>
class WINRT_EBO impl_ILockScreenCallEndCallDeferral
{
    auto shim() const { return impl::shim<D, ILockScreenCallEndCallDeferral>(this); }

public:

    void Complete() const;
};

template <typename D>
class WINRT_EBO impl_ILockScreenCallEndRequestedEventArgs
{
    auto shim() const { return impl::shim<D, ILockScreenCallEndRequestedEventArgs>(this); }

public:

    Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};

template <typename D>
class WINRT_EBO impl_ILockScreenCallUI
{
    auto shim() const { return impl::shim<D, ILockScreenCallUI>(this); }

public:

    void Dismiss() const;
    event_token EndRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> & handler) const;
    using EndRequested_revoker = event_revoker<ILockScreenCallUI>;
    EndRequested_revoker EndRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> & handler) const;
    void EndRequested(event_token token) const;
    event_token Closed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::IInspectable> & handler) const;
    using Closed_revoker = event_revoker<ILockScreenCallUI>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::IInspectable> & handler) const;
    void Closed(event_token token) const;
    hstring CallTitle() const;
    void CallTitle(hstring_ref value) const;
};

template <typename D>
class WINRT_EBO impl_IMuteChangeEventArgs
{
    auto shim() const { return impl::shim<D, IMuteChangeEventArgs>(this); }

public:

    bool Muted() const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryEntry
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryEntry>(this); }

public:

    hstring Id() const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress Address() const;
    void Address(const Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress & value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void Duration(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    bool IsCallerIdBlocked() const;
    void IsCallerIdBlocked(bool value) const;
    bool IsEmergency() const;
    void IsEmergency(bool value) const;
    bool IsIncoming() const;
    void IsIncoming(bool value) const;
    bool IsMissed() const;
    void IsMissed(bool value) const;
    bool IsRinging() const;
    void IsRinging(bool value) const;
    bool IsSeen() const;
    void IsSeen(bool value) const;
    bool IsSuppressed() const;
    void IsSuppressed(bool value) const;
    bool IsVoicemail() const;
    void IsVoicemail(bool value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia Media() const;
    void Media(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess value) const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
    hstring SourceDisplayName() const;
    hstring SourceId() const;
    void SourceId(hstring_ref value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind SourceIdKind() const;
    void SourceIdKind(Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind value) const;
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(const Windows::Foundation::DateTime & value) const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryEntryAddress
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryEntryAddress>(this); }

public:

    hstring ContactId() const;
    void ContactId(hstring_ref value) const;
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    hstring RawAddress() const;
    void RawAddress(hstring_ref value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind RawAddressKind() const;
    void RawAddressKind(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind value) const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryEntryAddressFactory
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryEntryAddressFactory>(this); }

public:

    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress Create(hstring_ref rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind rawAddressKind) const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryEntryQueryOptions
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryEntryQueryOptions>(this); }

public:

    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia DesiredMedia() const;
    void DesiredMedia(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia value) const;
    Windows::Foundation::Collections::IVector<hstring> SourceIds() const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryEntryReader
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryEntryReader>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> ReadBatchAsync() const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryManagerForUser
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryManagerForUser>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType accessType) const;
    Windows::System::User User() const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryManagerStatics
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryManagerStatics>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType accessType) const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryManagerStatics2
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryManagerStatics2>(this); }

public:

    Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser GetForUser(const Windows::System::User & user) const;
};

template <typename D>
class WINRT_EBO impl_IPhoneCallHistoryStore
{
    auto shim() const { return impl::shim<D, IPhoneCallHistoryStore>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> GetEntryAsync(hstring_ref callHistoryEntryId) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader GetEntryReader() const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader GetEntryReader(const Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions & queryOptions) const;
    Windows::Foundation::IAsyncAction SaveEntryAsync(const Windows::ApplicationModel::Calls::PhoneCallHistoryEntry & callHistoryEntry) const;
    Windows::Foundation::IAsyncAction DeleteEntryAsync(const Windows::ApplicationModel::Calls::PhoneCallHistoryEntry & callHistoryEntry) const;
    Windows::Foundation::IAsyncAction DeleteEntriesAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> & callHistoryEntries) const;
    Windows::Foundation::IAsyncAction MarkEntryAsSeenAsync(const Windows::ApplicationModel::Calls::PhoneCallHistoryEntry & callHistoryEntry) const;
    Windows::Foundation::IAsyncAction MarkEntriesAsSeenAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> & callHistoryEntries) const;
    Windows::Foundation::IAsyncOperation<uint32_t> GetUnseenCountAsync() const;
    Windows::Foundation::IAsyncAction MarkAllAsSeenAsync() const;
    Windows::Foundation::IAsyncOperation<uint32_t> GetSourcesUnseenCountAsync(const Windows::Foundation::Collections::IIterable<hstring> & sourceIds) const;
    Windows::Foundation::IAsyncAction MarkSourcesAsSeenAsync(const Windows::Foundation::Collections::IIterable<hstring> & sourceIds) const;
};

template <typename D>
class WINRT_EBO impl_IVoipCallCoordinator
{
    auto shim() const { return impl::shim<D, IVoipCallCoordinator>(this); }

public:

    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> ReserveCallResourcesAsync(hstring_ref taskEntryPoint) const;
    event_token MuteStateChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> & muteChangeHandler) const;
    using MuteStateChanged_revoker = event_revoker<IVoipCallCoordinator>;
    MuteStateChanged_revoker MuteStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> & muteChangeHandler) const;
    void MuteStateChanged(event_token token) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewIncomingCall(hstring_ref context, hstring_ref contactName, hstring_ref contactNumber, const Windows::Foundation::Uri & contactImage, hstring_ref serviceName, const Windows::Foundation::Uri & brandingImage, hstring_ref callDetails, const Windows::Foundation::Uri & ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, const Windows::Foundation::TimeSpan & ringTimeout) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewOutgoingCall(hstring_ref context, hstring_ref contactName, hstring_ref serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media) const;
    void NotifyMuted() const;
    void NotifyUnmuted() const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestOutgoingUpgradeToVideoCall(GUID callUpgradeGuid, hstring_ref context, hstring_ref contactName, hstring_ref serviceName) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestIncomingUpgradeToVideoCall(hstring_ref context, hstring_ref contactName, hstring_ref contactNumber, const Windows::Foundation::Uri & contactImage, hstring_ref serviceName, const Windows::Foundation::Uri & brandingImage, hstring_ref callDetails, const Windows::Foundation::Uri & ringtone, const Windows::Foundation::TimeSpan & ringTimeout) const;
    void TerminateCellularCall(GUID callUpgradeGuid) const;
    void CancelUpgrade(GUID callUpgradeGuid) const;
};

template <typename D>
class WINRT_EBO impl_IVoipCallCoordinatorStatics
{
    auto shim() const { return impl::shim<D, IVoipCallCoordinatorStatics>(this); }

public:

    Windows::ApplicationModel::Calls::VoipCallCoordinator GetDefault() const;
};

template <typename D>
class WINRT_EBO impl_IVoipPhoneCall
{
    auto shim() const { return impl::shim<D, IVoipPhoneCall>(this); }

public:

    event_token EndRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    using EndRequested_revoker = event_revoker<IVoipPhoneCall>;
    EndRequested_revoker EndRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    void EndRequested(event_token token) const;
    event_token HoldRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    using HoldRequested_revoker = event_revoker<IVoipPhoneCall>;
    HoldRequested_revoker HoldRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    void HoldRequested(event_token token) const;
    event_token ResumeRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    using ResumeRequested_revoker = event_revoker<IVoipPhoneCall>;
    ResumeRequested_revoker ResumeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> & handler) const;
    void ResumeRequested(event_token token) const;
    event_token AnswerRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> & acceptHandler) const;
    using AnswerRequested_revoker = event_revoker<IVoipPhoneCall>;
    AnswerRequested_revoker AnswerRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> & acceptHandler) const;
    void AnswerRequested(event_token token) const;
    event_token RejectRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> & rejectHandler) const;
    using RejectRequested_revoker = event_revoker<IVoipPhoneCall>;
    RejectRequested_revoker RejectRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> & rejectHandler) const;
    void RejectRequested(event_token token) const;
    void NotifyCallHeld() const;
    void NotifyCallActive() const;
    void NotifyCallEnded() const;
    hstring ContactName() const;
    void ContactName(hstring_ref value) const;
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(const Windows::Foundation::DateTime & value) const;
    Windows::ApplicationModel::Calls::VoipPhoneCallMedia CallMedia() const;
    void CallMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia value) const;
    void NotifyCallReady() const;
};

struct ICallAnswerEventArgs :
    Windows::IInspectable,
    impl::consume<ICallAnswerEventArgs>
{
    ICallAnswerEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICallAnswerEventArgs>(m_ptr); }
};

struct ICallRejectEventArgs :
    Windows::IInspectable,
    impl::consume<ICallRejectEventArgs>
{
    ICallRejectEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICallRejectEventArgs>(m_ptr); }
};

struct ICallStateChangeEventArgs :
    Windows::IInspectable,
    impl::consume<ICallStateChangeEventArgs>
{
    ICallStateChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICallStateChangeEventArgs>(m_ptr); }
};

struct ILockScreenCallEndCallDeferral :
    Windows::IInspectable,
    impl::consume<ILockScreenCallEndCallDeferral>
{
    ILockScreenCallEndCallDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenCallEndCallDeferral>(m_ptr); }
};

struct ILockScreenCallEndRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ILockScreenCallEndRequestedEventArgs>
{
    ILockScreenCallEndRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenCallEndRequestedEventArgs>(m_ptr); }
};

struct ILockScreenCallUI :
    Windows::IInspectable,
    impl::consume<ILockScreenCallUI>
{
    ILockScreenCallUI(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenCallUI>(m_ptr); }
};

struct IMuteChangeEventArgs :
    Windows::IInspectable,
    impl::consume<IMuteChangeEventArgs>
{
    IMuteChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMuteChangeEventArgs>(m_ptr); }
};

struct IPhoneCallHistoryEntry :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryEntry>
{
    IPhoneCallHistoryEntry(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryEntry>(m_ptr); }
};

struct IPhoneCallHistoryEntryAddress :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryEntryAddress>
{
    IPhoneCallHistoryEntryAddress(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryEntryAddress>(m_ptr); }
};

struct IPhoneCallHistoryEntryAddressFactory :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryEntryAddressFactory>
{
    IPhoneCallHistoryEntryAddressFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryEntryAddressFactory>(m_ptr); }
};

struct IPhoneCallHistoryEntryQueryOptions :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryEntryQueryOptions>
{
    IPhoneCallHistoryEntryQueryOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryEntryQueryOptions>(m_ptr); }
};

struct IPhoneCallHistoryEntryReader :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryEntryReader>
{
    IPhoneCallHistoryEntryReader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryEntryReader>(m_ptr); }
};

struct IPhoneCallHistoryManagerForUser :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryManagerForUser>
{
    IPhoneCallHistoryManagerForUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryManagerForUser>(m_ptr); }
};

struct IPhoneCallHistoryManagerStatics :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryManagerStatics>
{
    IPhoneCallHistoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryManagerStatics>(m_ptr); }
};

struct IPhoneCallHistoryManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryManagerStatics2>
{
    IPhoneCallHistoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryManagerStatics2>(m_ptr); }
};

struct IPhoneCallHistoryStore :
    Windows::IInspectable,
    impl::consume<IPhoneCallHistoryStore>
{
    IPhoneCallHistoryStore(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallHistoryStore>(m_ptr); }
};

struct IVoipCallCoordinator :
    Windows::IInspectable,
    impl::consume<IVoipCallCoordinator>
{
    IVoipCallCoordinator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVoipCallCoordinator>(m_ptr); }
};

struct IVoipCallCoordinatorStatics :
    Windows::IInspectable,
    impl::consume<IVoipCallCoordinatorStatics>
{
    IVoipCallCoordinatorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVoipCallCoordinatorStatics>(m_ptr); }
};

struct IVoipPhoneCall :
    Windows::IInspectable,
    impl::consume<IVoipPhoneCall>
{
    IVoipPhoneCall(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVoipPhoneCall>(m_ptr); }
};

}

}
