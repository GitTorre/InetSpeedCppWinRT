// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.UserProfile.0.h"

namespace winrt {

namespace Windows::System::UserProfile {

struct IAdvertisingManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerForUser>
{
    IAdvertisingManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvertisingManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerStatics>
{
    IAdvertisingManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdvertisingManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerStatics2>
{
    IAdvertisingManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IDiagnosticsSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticsSettings>
{
    IDiagnosticsSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IDiagnosticsSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticsSettingsStatics>
{
    IDiagnosticsSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFirstSignInSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFirstSignInSettings>,
    impl::require<IFirstSignInSettings, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
{
    IFirstSignInSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IFirstSignInSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFirstSignInSettingsStatics>
{
    IFirstSignInSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGlobalizationPreferencesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGlobalizationPreferencesStatics>
{
    IGlobalizationPreferencesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenImageFeedStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenImageFeedStatics>
{
    ILockScreenImageFeedStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenStatics>
{
    ILockScreenStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserInformationStatics>
{
    IUserInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserProfilePersonalizationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserProfilePersonalizationSettings>
{
    IUserProfilePersonalizationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IUserProfilePersonalizationSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserProfilePersonalizationSettingsStatics>
{
    IUserProfilePersonalizationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
