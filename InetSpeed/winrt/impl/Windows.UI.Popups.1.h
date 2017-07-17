// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Popups.0.h"

namespace winrt {

namespace Windows::UI::Popups {

struct IMessageDialog :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageDialog>
{
    IMessageDialog(std::nullptr_t = nullptr) noexcept {}
};

struct IMessageDialogFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageDialogFactory>
{
    IMessageDialogFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPopupMenu :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPopupMenu>
{
    IPopupMenu(std::nullptr_t = nullptr) noexcept {}
};

struct IUICommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUICommand>
{
    IUICommand(std::nullptr_t = nullptr) noexcept {}
};

struct IUICommandFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUICommandFactory>
{
    IUICommandFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
