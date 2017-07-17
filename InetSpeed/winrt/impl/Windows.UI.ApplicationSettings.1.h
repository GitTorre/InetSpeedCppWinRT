// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Credentials.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.ApplicationSettings.0.h"

namespace winrt {

namespace Windows::UI::ApplicationSettings {

struct IAccountsSettingsPane :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccountsSettingsPane>
{
    IAccountsSettingsPane(std::nullptr_t = nullptr) noexcept {}
};

struct IAccountsSettingsPaneCommandsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccountsSettingsPaneCommandsRequestedEventArgs>
{
    IAccountsSettingsPaneCommandsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAccountsSettingsPaneEventDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccountsSettingsPaneEventDeferral>
{
    IAccountsSettingsPaneEventDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IAccountsSettingsPaneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccountsSettingsPaneStatics>
{
    IAccountsSettingsPaneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAccountsSettingsPaneStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccountsSettingsPaneStatics2>,
    impl::require<IAccountsSettingsPaneStatics2, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
{
    IAccountsSettingsPaneStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICredentialCommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialCommand>
{
    ICredentialCommand(std::nullptr_t = nullptr) noexcept {}
};

struct ICredentialCommandFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialCommandFactory>
{
    ICredentialCommandFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISettingsCommandFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsCommandFactory>
{
    ISettingsCommandFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISettingsCommandStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsCommandStatics>
{
    ISettingsCommandStatics(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISettingsPane :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsPane>
{
    ISettingsPane(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISettingsPaneCommandsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsPaneCommandsRequest>
{
    ISettingsPaneCommandsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISettingsPaneCommandsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsPaneCommandsRequestedEventArgs>
{
    ISettingsPaneCommandsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISettingsPaneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsPaneStatics>
{
    ISettingsPaneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountCommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountCommand>
{
    IWebAccountCommand(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountCommandFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountCommandFactory>
{
    IWebAccountCommandFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountInvokedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountInvokedArgs>
{
    IWebAccountInvokedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderCommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderCommand>
{
    IWebAccountProviderCommand(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderCommandFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderCommandFactory>
{
    IWebAccountProviderCommandFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
