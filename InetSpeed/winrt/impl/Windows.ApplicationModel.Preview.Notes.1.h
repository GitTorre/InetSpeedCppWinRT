// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Preview.Notes.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Preview::Notes {

struct INotePlacementChangedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotePlacementChangedPreviewEventArgs>
{
    INotePlacementChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INoteVisibilityChangedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INoteVisibilityChangedPreviewEventArgs>
{
    INoteVisibilityChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct INotesWindowManagerPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreview>
{
    INotesWindowManagerPreview(std::nullptr_t = nullptr) noexcept {}
};

struct INotesWindowManagerPreview2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreview2>
{
    INotesWindowManagerPreview2(std::nullptr_t = nullptr) noexcept {}
};

struct INotesWindowManagerPreviewShowNoteOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreviewShowNoteOptions>
{
    INotesWindowManagerPreviewShowNoteOptions(std::nullptr_t = nullptr) noexcept {}
};

struct INotesWindowManagerPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreviewStatics>
{
    INotesWindowManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
