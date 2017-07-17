// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.DataTransfer.1.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.Core.1.h"

namespace winrt {

namespace Windows::ApplicationModel::DataTransfer::DragDrop::Core {

struct CoreDragDropManager :
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager
{
    CoreDragDropManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager GetForCurrentView();
};

struct CoreDragInfo :
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo,
    impl::require<CoreDragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
{
    CoreDragInfo(std::nullptr_t) noexcept {}
};

struct CoreDragOperation :
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation,
    impl::require<CoreDragOperation, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
{
    CoreDragOperation(std::nullptr_t) noexcept {}
    CoreDragOperation();
};

struct CoreDragUIOverride :
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride
{
    CoreDragUIOverride(std::nullptr_t) noexcept {}
};

struct CoreDropOperationTargetRequestedEventArgs :
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs
{
    CoreDropOperationTargetRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
