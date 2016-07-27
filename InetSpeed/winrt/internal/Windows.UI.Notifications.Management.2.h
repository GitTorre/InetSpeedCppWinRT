// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.UI.Notifications.Management.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0fbad8c7_086f_5bf9_81e2_8d79e7184803
#define WINRT_GENERIC_0fbad8c7_086f_5bf9_81e2_8d79e7184803
template <> struct __declspec(uuid("0fbad8c7-086f-5bf9-81e2-8d79e7184803")) __declspec(novtable) IAsyncOperation<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : impl_IAsyncOperation<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_10242902_b897_5507_9922_2c0a7d34464d
#define WINRT_GENERIC_10242902_b897_5507_9922_2c0a7d34464d
template <> struct __declspec(uuid("10242902-b897-5507-9922-2c0a7d34464d")) __declspec(novtable) TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> : impl_TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_5a08f98c_8e45_5705_af54_f5418e598392
#define WINRT_GENERIC_5a08f98c_8e45_5705_af54_f5418e598392
template <> struct __declspec(uuid("5a08f98c-8e45-5705-af54-f5418e598392")) __declspec(novtable) IVectorView<Windows::UI::Notifications::UserNotification> : impl_IVectorView<Windows::UI::Notifications::UserNotification> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f09e843a_13cb_559b_a9fc_015722c2cd57
#define WINRT_GENERIC_f09e843a_13cb_559b_a9fc_015722c2cd57
template <> struct __declspec(uuid("f09e843a-13cb-559b-a9fc-015722c2cd57")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_bf7f3d3c_230f_54ea_ad74_0cf6c55cd8d1
#define WINRT_GENERIC_bf7f3d3c_230f_54ea_ad74_0cf6c55cd8d1
template <> struct __declspec(uuid("bf7f3d3c-230f-54ea-ad74-0cf6c55cd8d1")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> {};
#endif

#ifndef WINRT_GENERIC_9e42ed08_45b3_5643_b5c7_b216f5781594
#define WINRT_GENERIC_9e42ed08_45b3_5643_b5c7_b216f5781594
template <> struct __declspec(uuid("9e42ed08-45b3-5643-b5c7-b216f5781594")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> {};
#endif


}

namespace Windows::UI::Notifications::Management {

template <typename D>
class WINRT_EBO impl_IUserNotificationListener
{
    auto shim() const { return impl::shim<D, IUserNotificationListener>(this); }

public:

    Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> RequestAccessAsync() const;
    Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus GetAccessStatus() const;
    event_token NotificationChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> & handler) const;
    using NotificationChanged_revoker = event_revoker<IUserNotificationListener>;
    NotificationChanged_revoker NotificationChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> & handler) const;
    void NotificationChanged(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> GetNotificationsAsync(Windows::UI::Notifications::NotificationKinds kinds) const;
    Windows::UI::Notifications::UserNotification GetNotification(uint32_t notificationId) const;
    void ClearNotifications() const;
    void RemoveNotification(uint32_t notificationId) const;
};

template <typename D>
class WINRT_EBO impl_IUserNotificationListenerStatics
{
    auto shim() const { return impl::shim<D, IUserNotificationListenerStatics>(this); }

public:

    Windows::UI::Notifications::Management::UserNotificationListener Current() const;
};

struct IUserNotificationListener :
    Windows::IInspectable,
    impl::consume<IUserNotificationListener>
{
    IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserNotificationListener>(m_ptr); }
};

struct IUserNotificationListenerStatics :
    Windows::IInspectable,
    impl::consume<IUserNotificationListenerStatics>
{
    IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserNotificationListenerStatics>(m_ptr); }
};

}

}
