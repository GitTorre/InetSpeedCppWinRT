// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Phone.PersonalInformation.0.h"

namespace winrt {

namespace Windows::Phone::PersonalInformation {

struct IContactAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAddress>
{
    IContactAddress(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChangeRecord :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeRecord>
{
    IContactChangeRecord(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation>
{
    IContactInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation2>
{
    IContactInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformationStatics>
{
    IContactInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContactQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptions>
{
    IContactQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IContactQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryResult>
{
    IContactQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore>
{
    IContactStore(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore2>
{
    IContactStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStoreStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreStatics>
{
    IContactStoreStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownContactPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownContactPropertiesStatics>
{
    IKnownContactPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStoredContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoredContact>,
    impl::require<IStoredContact, Windows::Phone::PersonalInformation::IContactInformation>
{
    IStoredContact(std::nullptr_t = nullptr) noexcept {}
};

struct IStoredContactFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoredContactFactory>
{
    IStoredContactFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
