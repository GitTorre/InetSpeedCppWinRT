// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Pickers.Provider.0.h"

namespace winrt {

namespace Windows::Storage::Pickers::Provider {

struct IFileOpenPickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerUI>
{
    IFileOpenPickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")]] IFileRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileRemovedEventArgs>
{
    IFileRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePickerUI>
{
    IFileSavePickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct IPickerClosingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingDeferral>
{
    IPickerClosingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IPickerClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingEventArgs>
{
    IPickerClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPickerClosingOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingOperation>
{
    IPickerClosingOperation(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetFileRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequest>
{
    ITargetFileRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetFileRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequestDeferral>
{
    ITargetFileRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetFileRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequestedEventArgs>
{
    ITargetFileRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
