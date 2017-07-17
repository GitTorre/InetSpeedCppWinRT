// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.ApplicationModel.Contacts.Provider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Contacts::Provider {

struct IContactPickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerUI>
{
    IContactPickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPickerUI2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerUI2>
{
    IContactPickerUI2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactRemovedEventArgs>
{
    IContactRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
