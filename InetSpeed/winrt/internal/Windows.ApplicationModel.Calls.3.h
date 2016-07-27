// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.ApplicationModel.Calls.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Calls {

struct WINRT_EBO CallAnswerEventArgs :
    Windows::ApplicationModel::Calls::ICallAnswerEventArgs
{
    CallAnswerEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CallRejectEventArgs :
    Windows::ApplicationModel::Calls::ICallRejectEventArgs
{
    CallRejectEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CallStateChangeEventArgs :
    Windows::ApplicationModel::Calls::ICallStateChangeEventArgs
{
    CallStateChangeEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenCallEndCallDeferral :
    Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral
{
    LockScreenCallEndCallDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenCallEndRequestedEventArgs :
    Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs
{
    LockScreenCallEndRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenCallUI :
    Windows::ApplicationModel::Calls::ILockScreenCallUI
{
    LockScreenCallUI(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MuteChangeEventArgs :
    Windows::ApplicationModel::Calls::IMuteChangeEventArgs
{
    MuteChangeEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhoneCallHistoryEntry :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry
{
    PhoneCallHistoryEntry(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntry();
};

struct WINRT_EBO PhoneCallHistoryEntryAddress :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress
{
    PhoneCallHistoryEntryAddress(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntryAddress();
    PhoneCallHistoryEntryAddress(hstring_ref rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind rawAddressKind);
};

struct WINRT_EBO PhoneCallHistoryEntryQueryOptions :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions
{
    PhoneCallHistoryEntryQueryOptions(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntryQueryOptions();
};

struct WINRT_EBO PhoneCallHistoryEntryReader :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader
{
    PhoneCallHistoryEntryReader(std::nullptr_t) noexcept {}
};

struct PhoneCallHistoryManager
{
    PhoneCallHistoryManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType accessType);
    static Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser GetForUser(const Windows::System::User & user);
};

struct WINRT_EBO PhoneCallHistoryManagerForUser :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser
{
    PhoneCallHistoryManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhoneCallHistoryStore :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryStore
{
    PhoneCallHistoryStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoipCallCoordinator :
    Windows::ApplicationModel::Calls::IVoipCallCoordinator
{
    VoipCallCoordinator(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Calls::VoipCallCoordinator GetDefault();
};

struct WINRT_EBO VoipPhoneCall :
    Windows::ApplicationModel::Calls::IVoipPhoneCall
{
    VoipPhoneCall(std::nullptr_t) noexcept {}
};

}

}
