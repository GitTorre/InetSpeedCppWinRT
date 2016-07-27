// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.Core.0.h"
#include "Windows.ApplicationModel.DataTransfer.0.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.ApplicationModel.DataTransfer.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core {

struct __declspec(uuid("7d56d344-8464-4faf-aa49-37ea6e2d7bd1")) __declspec(novtable) ICoreDragDropManager : Windows::IInspectable
{
    virtual HRESULT __stdcall add_TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> * value, event_token * returnValue) = 0;
    virtual HRESULT __stdcall remove_TargetRequested(event_token value) = 0;
    virtual HRESULT __stdcall get_AreConcurrentOperationsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_AreConcurrentOperationsEnabled(bool value) = 0;
};

struct __declspec(uuid("9542fdca-da12-4c1c-8d06-041db29733c3")) __declspec(novtable) ICoreDragDropManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager ** value) = 0;
};

struct __declspec(uuid("48353a8b-cb50-464e-9575-cd4e3a7ab028")) __declspec(novtable) ICoreDragInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Data(Windows::ApplicationModel::DataTransfer::IDataPackageView ** value) = 0;
    virtual HRESULT __stdcall get_Modifiers(winrt::Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
};

struct __declspec(uuid("c54691e5-e6fb-4d74-b4b1-8a3c17f25e9e")) __declspec(novtable) ICoreDragInfo2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
};

struct __declspec(uuid("cc06de4f-6db0-4e62-ab1b-a74a02dc6d85")) __declspec(novtable) ICoreDragOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Data(Windows::ApplicationModel::DataTransfer::IDataPackage ** value) = 0;
    virtual HRESULT __stdcall abi_SetPointerId(uint32_t pointerId) = 0;
    virtual HRESULT __stdcall abi_SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap) = 0;
    virtual HRESULT __stdcall abi_SetDragUIContentFromSoftwareBitmapWithAnchorPoint(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap, Windows::Foundation::Point anchorPoint) = 0;
    virtual HRESULT __stdcall get_DragUIContentMode(winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode * value) = 0;
    virtual HRESULT __stdcall put_DragUIContentMode(winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> ** value) = 0;
};

struct __declspec(uuid("824b1e2c-d99a-4fc3-8507-6c182f33b46a")) __declspec(novtable) ICoreDragOperation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
    virtual HRESULT __stdcall put_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation value) = 0;
};

struct __declspec(uuid("89a85064-3389-4f4f-8897-7e8a3ffb3c93")) __declspec(novtable) ICoreDragUIOverride : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap) = 0;
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap, Windows::Foundation::Point anchorPoint) = 0;
    virtual HRESULT __stdcall get_IsContentVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsContentVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Caption(hstring * value) = 0;
    virtual HRESULT __stdcall put_Caption(hstring value) = 0;
    virtual HRESULT __stdcall get_IsCaptionVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCaptionVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsGlyphVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsGlyphVisible(bool value) = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
};

struct __declspec(uuid("d9126196-4c5b-417d-bb37-76381def8db4")) __declspec(novtable) ICoreDropOperationTarget : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride * dragUIOverride, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> ** returnValue) = 0;
    virtual HRESULT __stdcall abi_OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride * dragUIOverride, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> ** returnValue) = 0;
    virtual HRESULT __stdcall abi_LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo, Windows::Foundation::IAsyncAction ** returnValue) = 0;
    virtual HRESULT __stdcall abi_DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> ** returnValue) = 0;
};

struct __declspec(uuid("2aca929a-5e28-4ea6-829e-29134e665d6d")) __declspec(novtable) ICoreDropOperationTargetRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget * target) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager> { using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager; };
template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo> { using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo; };
template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation> { using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation; };
template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride> { using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride; };
template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> { using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs; };

}

namespace Windows::ApplicationModel::DataTransfer::DragDrop::Core {

template <typename T> class impl_ICoreDragDropManager;
template <typename T> class impl_ICoreDragDropManagerStatics;
template <typename T> class impl_ICoreDragInfo;
template <typename T> class impl_ICoreDragInfo2;
template <typename T> class impl_ICoreDragOperation;
template <typename T> class impl_ICoreDragOperation2;
template <typename T> class impl_ICoreDragUIOverride;
template <typename T> class impl_ICoreDropOperationTarget;
template <typename T> class impl_ICoreDropOperationTargetRequestedEventArgs;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragDropManager<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragDropManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragInfo2<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragOperation<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragOperation2<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDragUIOverride<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDropOperationTarget<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::DataTransfer::DragDrop::Core::impl_ICoreDropOperationTargetRequestedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager;
    using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager"; }
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo;
    using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo"; }
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation;
    using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation"; }
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride;
    using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride"; }
};

template <> struct traits<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs;
    using default_interface = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs"; }
};

}

}