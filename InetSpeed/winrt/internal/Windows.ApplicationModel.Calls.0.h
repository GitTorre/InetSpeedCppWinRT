// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Calls {

struct ICallAnswerEventArgs;
struct ICallRejectEventArgs;
struct ICallStateChangeEventArgs;
struct ILockScreenCallEndCallDeferral;
struct ILockScreenCallEndRequestedEventArgs;
struct ILockScreenCallUI;
struct IMuteChangeEventArgs;
struct IPhoneCallHistoryEntry;
struct IPhoneCallHistoryEntryAddress;
struct IPhoneCallHistoryEntryAddressFactory;
struct IPhoneCallHistoryEntryQueryOptions;
struct IPhoneCallHistoryEntryReader;
struct IPhoneCallHistoryManagerForUser;
struct IPhoneCallHistoryManagerStatics;
struct IPhoneCallHistoryManagerStatics2;
struct IPhoneCallHistoryStore;
struct IVoipCallCoordinator;
struct IVoipCallCoordinatorStatics;
struct IVoipPhoneCall;
struct CallAnswerEventArgs;
struct CallRejectEventArgs;
struct CallStateChangeEventArgs;
struct LockScreenCallEndCallDeferral;
struct LockScreenCallEndRequestedEventArgs;
struct LockScreenCallUI;
struct MuteChangeEventArgs;
struct PhoneCallHistoryEntry;
struct PhoneCallHistoryEntryAddress;
struct PhoneCallHistoryEntryQueryOptions;
struct PhoneCallHistoryEntryReader;
struct PhoneCallHistoryManagerForUser;
struct PhoneCallHistoryStore;
struct VoipCallCoordinator;
struct VoipPhoneCall;

}

namespace Windows::ApplicationModel::Calls {

struct ICallAnswerEventArgs;
struct ICallRejectEventArgs;
struct ICallStateChangeEventArgs;
struct ILockScreenCallEndCallDeferral;
struct ILockScreenCallEndRequestedEventArgs;
struct ILockScreenCallUI;
struct IMuteChangeEventArgs;
struct IPhoneCallHistoryEntry;
struct IPhoneCallHistoryEntryAddress;
struct IPhoneCallHistoryEntryAddressFactory;
struct IPhoneCallHistoryEntryQueryOptions;
struct IPhoneCallHistoryEntryReader;
struct IPhoneCallHistoryManagerForUser;
struct IPhoneCallHistoryManagerStatics;
struct IPhoneCallHistoryManagerStatics2;
struct IPhoneCallHistoryStore;
struct IVoipCallCoordinator;
struct IVoipCallCoordinatorStatics;
struct IVoipPhoneCall;
struct CallAnswerEventArgs;
struct CallRejectEventArgs;
struct CallStateChangeEventArgs;
struct LockScreenCallEndCallDeferral;
struct LockScreenCallEndRequestedEventArgs;
struct LockScreenCallUI;
struct MuteChangeEventArgs;
struct PhoneCallHistoryEntry;
struct PhoneCallHistoryEntryAddress;
struct PhoneCallHistoryEntryQueryOptions;
struct PhoneCallHistoryEntryReader;
struct PhoneCallHistoryManager;
struct PhoneCallHistoryManagerForUser;
struct PhoneCallHistoryStore;
struct VoipCallCoordinator;
struct VoipPhoneCall;

}

namespace Windows::ApplicationModel::Calls {

enum class PhoneCallHistoryEntryMedia
{
    Audio = 0,
    Video = 1,
};

enum class PhoneCallHistoryEntryOtherAppReadAccess
{
    Full = 0,
    SystemOnly = 1,
};

enum class PhoneCallHistoryEntryQueryDesiredMedia : unsigned
{
    None = 0x0,
    Audio = 0x1,
    Video = 0x2,
    All = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(PhoneCallHistoryEntryQueryDesiredMedia)

enum class PhoneCallHistoryEntryRawAddressKind
{
    PhoneNumber = 0,
    Custom = 1,
};

enum class PhoneCallHistorySourceIdKind
{
    CellularPhoneLineId = 0,
    PackageFamilyName = 1,
};

enum class PhoneCallHistoryStoreAccessType
{
    AppEntriesReadWrite = 0,
    AllEntriesLimitedReadWrite = 1,
    AllEntriesReadWrite = 2,
};

enum class VoipPhoneCallMedia : unsigned
{
    None = 0x0,
    Audio = 0x1,
    Video = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(VoipPhoneCallMedia)

enum class VoipPhoneCallRejectReason
{
    UserIgnored = 0,
    TimedOut = 1,
    OtherIncomingCall = 2,
    EmergencyCallExists = 3,
    InvalidCallState = 4,
};

enum class VoipPhoneCallResourceReservationStatus
{
    Success = 0,
    ResourcesNotAvailable = 1,
};

enum class VoipPhoneCallState
{
    Ended = 0,
    Held = 1,
    Active = 2,
    Incoming = 3,
    Outgoing = 4,
};

}

}
