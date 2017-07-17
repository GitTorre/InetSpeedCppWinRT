// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.1.h"
#include "Windows.ApplicationModel.Calls.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls {

struct CallAnswerEventArgs :
    Windows::ApplicationModel::Calls::ICallAnswerEventArgs
{
    CallAnswerEventArgs(std::nullptr_t) noexcept {}
};

struct CallRejectEventArgs :
    Windows::ApplicationModel::Calls::ICallRejectEventArgs
{
    CallRejectEventArgs(std::nullptr_t) noexcept {}
};

struct CallStateChangeEventArgs :
    Windows::ApplicationModel::Calls::ICallStateChangeEventArgs
{
    CallStateChangeEventArgs(std::nullptr_t) noexcept {}
};

struct LockScreenCallEndCallDeferral :
    Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral
{
    LockScreenCallEndCallDeferral(std::nullptr_t) noexcept {}
};

struct LockScreenCallEndRequestedEventArgs :
    Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs
{
    LockScreenCallEndRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct LockScreenCallUI :
    Windows::ApplicationModel::Calls::ILockScreenCallUI
{
    LockScreenCallUI(std::nullptr_t) noexcept {}
};

struct MuteChangeEventArgs :
    Windows::ApplicationModel::Calls::IMuteChangeEventArgs
{
    MuteChangeEventArgs(std::nullptr_t) noexcept {}
};

struct PhoneCallBlocking
{
    PhoneCallBlocking() = delete;
    static bool BlockUnknownNumbers();
    static void BlockUnknownNumbers(bool value);
    static bool BlockPrivateNumbers();
    static void BlockPrivateNumbers(bool value);
    static Windows::Foundation::IAsyncOperation<bool> SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList);
};

struct PhoneCallHistoryEntry :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry
{
    PhoneCallHistoryEntry(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntry();
};

struct PhoneCallHistoryEntryAddress :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress
{
    PhoneCallHistoryEntryAddress(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntryAddress();
    PhoneCallHistoryEntryAddress(param::hstring const& rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind);
};

struct PhoneCallHistoryEntryQueryOptions :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions
{
    PhoneCallHistoryEntryQueryOptions(std::nullptr_t) noexcept {}
    PhoneCallHistoryEntryQueryOptions();
};

struct PhoneCallHistoryEntryReader :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader
{
    PhoneCallHistoryEntryReader(std::nullptr_t) noexcept {}
};

struct PhoneCallHistoryManager
{
    PhoneCallHistoryManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType);
    static Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser GetForUser(Windows::System::User const& user);
};

struct PhoneCallHistoryManagerForUser :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser
{
    PhoneCallHistoryManagerForUser(std::nullptr_t) noexcept {}
};

struct PhoneCallHistoryStore :
    Windows::ApplicationModel::Calls::IPhoneCallHistoryStore
{
    PhoneCallHistoryStore(std::nullptr_t) noexcept {}
};

struct PhoneCallManager
{
    PhoneCallManager() = delete;
    static void ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName);
    static event_token CallStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using CallStateChanged_revoker = factory_event_revoker<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>;
    static CallStateChanged_revoker CallStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void CallStateChanged(event_token const& token);
    static bool IsCallActive();
    static bool IsCallIncoming();
    static void ShowPhoneCallSettingsUI();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallStore> RequestStoreAsync();
};

struct PhoneCallStore :
    Windows::ApplicationModel::Calls::IPhoneCallStore
{
    PhoneCallStore(std::nullptr_t) noexcept {}
};

struct PhoneCallVideoCapabilities :
    Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities
{
    PhoneCallVideoCapabilities(std::nullptr_t) noexcept {}
};

struct PhoneCallVideoCapabilitiesManager
{
    PhoneCallVideoCapabilitiesManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities> GetCapabilitiesAsync(param::hstring const& phoneNumber);
};

struct PhoneDialOptions :
    Windows::ApplicationModel::Calls::IPhoneDialOptions
{
    PhoneDialOptions(std::nullptr_t) noexcept {}
    PhoneDialOptions();
};

struct PhoneLine :
    Windows::ApplicationModel::Calls::IPhoneLine
{
    PhoneLine(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneLine> FromIdAsync(GUID const& lineId);
};

struct PhoneLineCellularDetails :
    Windows::ApplicationModel::Calls::IPhoneLineCellularDetails
{
    PhoneLineCellularDetails(std::nullptr_t) noexcept {}
};

struct PhoneLineConfiguration :
    Windows::ApplicationModel::Calls::IPhoneLineConfiguration
{
    PhoneLineConfiguration(std::nullptr_t) noexcept {}
};

struct PhoneLineWatcher :
    Windows::ApplicationModel::Calls::IPhoneLineWatcher
{
    PhoneLineWatcher(std::nullptr_t) noexcept {}
};

struct PhoneLineWatcherEventArgs :
    Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs
{
    PhoneLineWatcherEventArgs(std::nullptr_t) noexcept {}
};

struct PhoneVoicemail :
    Windows::ApplicationModel::Calls::IPhoneVoicemail
{
    PhoneVoicemail(std::nullptr_t) noexcept {}
};

struct VoipCallCoordinator :
    Windows::ApplicationModel::Calls::IVoipCallCoordinator
{
    VoipCallCoordinator(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Calls::VoipCallCoordinator GetDefault();
};

struct VoipPhoneCall :
    Windows::ApplicationModel::Calls::IVoipPhoneCall
{
    VoipPhoneCall(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
