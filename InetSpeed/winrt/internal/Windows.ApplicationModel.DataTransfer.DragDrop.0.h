// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::DataTransfer::DragDrop {

enum class DragDropModifiers : unsigned
{
    None = 0x0,
    Shift = 0x1,
    Control = 0x2,
    Alt = 0x4,
    LeftButton = 0x8,
    MiddleButton = 0x10,
    RightButton = 0x20,
};

DEFINE_ENUM_FLAG_OPERATORS(DragDropModifiers)

}

}
