// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.DataTransfer.0.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.Core.0.h"

namespace winrt {

namespace Windows::ApplicationModel::DataTransfer::DragDrop::Core {

struct ICoreDragDropManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragDropManager>
{
    ICoreDragDropManager(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragDropManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragDropManagerStatics>
{
    ICoreDragDropManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragInfo>
{
    ICoreDragInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragInfo2>,
    impl::require<ICoreDragInfo2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
{
    ICoreDragInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragOperation>
{
    ICoreDragOperation(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragOperation2>,
    impl::require<ICoreDragOperation2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
{
    ICoreDragOperation2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDragUIOverride :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragUIOverride>
{
    ICoreDragUIOverride(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDropOperationTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDropOperationTarget>
{
    ICoreDropOperationTarget(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDropOperationTargetRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDropOperationTargetRequestedEventArgs>
{
    ICoreDropOperationTargetRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
