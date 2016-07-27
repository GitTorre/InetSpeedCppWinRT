// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Contacts::Provider {

struct IContactPickerUI;
struct IContactPickerUI2;
struct IContactRemovedEventArgs;
struct ContactPickerUI;
struct ContactRemovedEventArgs;

}

namespace Windows::ApplicationModel::Contacts::Provider {

struct IContactPickerUI;
struct IContactPickerUI2;
struct IContactRemovedEventArgs;
struct ContactPickerUI;
struct ContactRemovedEventArgs;

}

namespace Windows::ApplicationModel::Contacts::Provider {

enum class AddContactResult
{
    Added = 0,
    AlreadyAdded = 1,
    Unavailable = 2,
};

}

}
