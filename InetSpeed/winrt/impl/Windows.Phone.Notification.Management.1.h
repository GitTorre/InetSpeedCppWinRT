// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.ApplicationModel.Email.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Phone.Notification.Management.0.h"

namespace winrt {

namespace Windows::Phone::Notification::Management {

struct IAccessoryManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager>
{
    IAccessoryManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessoryManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager2>
{
    IAccessoryManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessoryManager3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager3>
{
    IAccessoryManager3(std::nullptr_t = nullptr) noexcept {}
};

struct IAccessoryNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryNotificationTriggerDetails>
{
    IAccessoryNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAlarmNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmNotificationTriggerDetails>,
    impl::require<IAlarmNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IAlarmNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAlarmNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmNotificationTriggerDetails2>
{
    IAlarmNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppNotificationInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppNotificationInfo>
{
    IAppNotificationInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IBinaryId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinaryId>
{
    IBinaryId(std::nullptr_t = nullptr) noexcept {}
};

struct ICalendarChangedNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICalendarChangedNotificationTriggerDetails>,
    impl::require<ICalendarChangedNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    ICalendarChangedNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaTileNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaTileNotificationTriggerDetails>,
    impl::require<ICortanaTileNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    ICortanaTileNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailAccountInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAccountInfo>
{
    IEmailAccountInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailFolderInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailFolderInfo>
{
    IEmailFolderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailNotificationTriggerDetails>,
    impl::require<IEmailNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailNotificationTriggerDetails2>,
    impl::require<IEmailNotificationTriggerDetails2, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailReadNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailReadNotificationTriggerDetails>,
    impl::require<IEmailReadNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailReadNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaControlsTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaControlsTriggerDetails>,
    impl::require<IMediaControlsTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IMediaControlsTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMetadata>
{
    IMediaMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallDetails>
{
    IPhoneCallDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineDetails>
{
    IPhoneLineDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineDetails2>
{
    IPhoneLineDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNotificationTriggerDetails>,
    impl::require<IPhoneNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IPhoneNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IReminderNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReminderNotificationTriggerDetails>,
    impl::require<IReminderNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IReminderNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IReminderNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReminderNotificationTriggerDetails2>
{
    IReminderNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeedDialEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeedDialEntry>
{
    ISpeedDialEntry(std::nullptr_t = nullptr) noexcept {}
};

struct ITextResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextResponse>
{
    ITextResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationTriggerDetails>,
    impl::require<IToastNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IToastNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationTriggerDetails2>
{
    IToastNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IVolumeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVolumeInfo>
{
    IVolumeInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
