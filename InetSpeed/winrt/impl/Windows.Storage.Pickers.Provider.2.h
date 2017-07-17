// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.Pickers.Provider.1.h"

namespace winrt {

namespace Windows::Storage::Pickers::Provider {

struct FileOpenPickerUI :
    Windows::Storage::Pickers::Provider::IFileOpenPickerUI
{
    FileOpenPickerUI(std::nullptr_t) noexcept {}
};

struct [[deprecated("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")]] FileRemovedEventArgs :
    Windows::Storage::Pickers::Provider::IFileRemovedEventArgs
{
    FileRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct FileSavePickerUI :
    Windows::Storage::Pickers::Provider::IFileSavePickerUI
{
    FileSavePickerUI(std::nullptr_t) noexcept {}
};

struct PickerClosingDeferral :
    Windows::Storage::Pickers::Provider::IPickerClosingDeferral
{
    PickerClosingDeferral(std::nullptr_t) noexcept {}
};

struct PickerClosingEventArgs :
    Windows::Storage::Pickers::Provider::IPickerClosingEventArgs
{
    PickerClosingEventArgs(std::nullptr_t) noexcept {}
};

struct PickerClosingOperation :
    Windows::Storage::Pickers::Provider::IPickerClosingOperation
{
    PickerClosingOperation(std::nullptr_t) noexcept {}
};

struct TargetFileRequest :
    Windows::Storage::Pickers::Provider::ITargetFileRequest
{
    TargetFileRequest(std::nullptr_t) noexcept {}
};

struct TargetFileRequestDeferral :
    Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral
{
    TargetFileRequestDeferral(std::nullptr_t) noexcept {}
};

struct TargetFileRequestedEventArgs :
    Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs
{
    TargetFileRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
