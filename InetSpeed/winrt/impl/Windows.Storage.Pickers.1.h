// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Pickers.0.h"

namespace winrt {

namespace Windows::Storage::Pickers {

struct IFileOpenPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPicker>
{
    IFileOpenPicker(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPicker2>,
    impl::require<IFileOpenPicker2, Windows::Storage::Pickers::IFileOpenPicker>
{
    IFileOpenPicker2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerStatics>
{
    IFileOpenPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPickerWithOperationId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerWithOperationId>
{
    IFileOpenPickerWithOperationId(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker>
{
    IFileSavePicker(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker2>,
    impl::require<IFileSavePicker2, Windows::Storage::Pickers::IFileSavePicker>
{
    IFileSavePicker2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePicker3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker3>,
    impl::require<IFileSavePicker3, Windows::Storage::Pickers::IFileSavePicker>
{
    IFileSavePicker3(std::nullptr_t = nullptr) noexcept {}
};

struct IFolderPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderPicker>
{
    IFolderPicker(std::nullptr_t = nullptr) noexcept {}
};

struct IFolderPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderPicker2>,
    impl::require<IFolderPicker2, Windows::Storage::Pickers::IFolderPicker>
{
    IFolderPicker2(std::nullptr_t = nullptr) noexcept {}
};

}

}
