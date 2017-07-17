// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.1.h"
#include "Windows.ApplicationModel.Contacts.Provider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Contacts::Provider {

struct ContactPickerUI :
    Windows::ApplicationModel::Contacts::Provider::IContactPickerUI,
    impl::require<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
{
    ContactPickerUI(std::nullptr_t) noexcept {}
    using impl::consume_t<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>::AddContact;
    using Windows::ApplicationModel::Contacts::Provider::IContactPickerUI::AddContact;
};

struct ContactRemovedEventArgs :
    Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs
{
    ContactRemovedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
