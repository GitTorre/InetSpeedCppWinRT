// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.0.h"
#include "Windows.ApplicationModel.Calls.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls {

struct ICallAnswerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallAnswerEventArgs>
{
    ICallAnswerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICallRejectEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallRejectEventArgs>
{
    ICallRejectEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICallStateChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallStateChangeEventArgs>
{
    ICallStateChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenCallEndCallDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallEndCallDeferral>
{
    ILockScreenCallEndCallDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenCallEndRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallEndRequestedEventArgs>
{
    ILockScreenCallEndRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenCallUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallUI>
{
    ILockScreenCallUI(std::nullptr_t = nullptr) noexcept {}
};

struct IMuteChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMuteChangeEventArgs>
{
    IMuteChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallBlockingStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallBlockingStatics>
{
    IPhoneCallBlockingStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntry>
{
    IPhoneCallHistoryEntry(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryEntryAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddress>
{
    IPhoneCallHistoryEntryAddress(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryEntryAddressFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddressFactory>
{
    IPhoneCallHistoryEntryAddressFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryEntryQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryQueryOptions>
{
    IPhoneCallHistoryEntryQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryEntryReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryReader>
{
    IPhoneCallHistoryEntryReader(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerForUser>
{
    IPhoneCallHistoryManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics>
{
    IPhoneCallHistoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics2>
{
    IPhoneCallHistoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallHistoryStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryStore>
{
    IPhoneCallHistoryStore(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallManagerStatics>
{
    IPhoneCallManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallManagerStatics2>
{
    IPhoneCallManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallStore>
{
    IPhoneCallStore(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallVideoCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallVideoCapabilities>
{
    IPhoneCallVideoCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallVideoCapabilitiesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallVideoCapabilitiesManagerStatics>
{
    IPhoneCallVideoCapabilitiesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneDialOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneDialOptions>
{
    IPhoneDialOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLine>
{
    IPhoneLine(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineCellularDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineCellularDetails>
{
    IPhoneLineCellularDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineConfiguration>
{
    IPhoneLineConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineStatics>
{
    IPhoneLineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineWatcher>
{
    IPhoneLineWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineWatcherEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineWatcherEventArgs>
{
    IPhoneLineWatcherEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneVoicemail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneVoicemail>
{
    IPhoneVoicemail(std::nullptr_t = nullptr) noexcept {}
};

struct IVoipCallCoordinator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinator>
{
    IVoipCallCoordinator(std::nullptr_t = nullptr) noexcept {}
};

struct IVoipCallCoordinatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinatorStatics>
{
    IVoipCallCoordinatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVoipPhoneCall :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipPhoneCall>
{
    IVoipPhoneCall(std::nullptr_t = nullptr) noexcept {}
};

}

}
