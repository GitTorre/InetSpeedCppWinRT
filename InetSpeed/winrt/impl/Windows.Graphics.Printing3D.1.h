// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Graphics.Printing3D.0.h"

namespace winrt {

namespace Windows::Graphics::Printing3D {

struct IPrint3DManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DManager>
{
    IPrint3DManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DManagerStatics>
{
    IPrint3DManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTask>
{
    IPrint3DTask(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTaskCompletedEventArgs>
{
    IPrint3DTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTaskRequest>
{
    IPrint3DTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTaskRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTaskRequestedEventArgs>
{
    IPrint3DTaskRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTaskSourceChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTaskSourceChangedEventArgs>
{
    IPrint3DTaskSourceChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DTaskSourceRequestedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DTaskSourceRequestedArgs>
{
    IPrint3DTaskSourceRequestedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3D3MFPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3D3MFPackage>
{
    IPrinting3D3MFPackage(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3D3MFPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3D3MFPackageStatics>
{
    IPrinting3D3MFPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DBaseMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DBaseMaterial>
{
    IPrinting3DBaseMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DBaseMaterialGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DBaseMaterialGroup>
{
    IPrinting3DBaseMaterialGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DBaseMaterialGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DBaseMaterialGroupFactory>
{
    IPrinting3DBaseMaterialGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DBaseMaterialStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DBaseMaterialStatics>
{
    IPrinting3DBaseMaterialStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DColorMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DColorMaterial>
{
    IPrinting3DColorMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DColorMaterial2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DColorMaterial2>
{
    IPrinting3DColorMaterial2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DColorMaterialGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DColorMaterialGroup>
{
    IPrinting3DColorMaterialGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DColorMaterialGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DColorMaterialGroupFactory>
{
    IPrinting3DColorMaterialGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DComponent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DComponent>
{
    IPrinting3DComponent(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DComponentWithMatrix :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DComponentWithMatrix>
{
    IPrinting3DComponentWithMatrix(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DCompositeMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DCompositeMaterial>
{
    IPrinting3DCompositeMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DCompositeMaterialGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DCompositeMaterialGroup>
{
    IPrinting3DCompositeMaterialGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DCompositeMaterialGroup2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DCompositeMaterialGroup2>
{
    IPrinting3DCompositeMaterialGroup2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DCompositeMaterialGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DCompositeMaterialGroupFactory>
{
    IPrinting3DCompositeMaterialGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DFaceReductionOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DFaceReductionOptions>
{
    IPrinting3DFaceReductionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMaterial>
{
    IPrinting3DMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMesh :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMesh>
{
    IPrinting3DMesh(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMeshVerificationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMeshVerificationResult>
{
    IPrinting3DMeshVerificationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DModel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DModel>
{
    IPrinting3DModel(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DModel2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DModel2>
{
    IPrinting3DModel2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DModelTexture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DModelTexture>
{
    IPrinting3DModelTexture(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMultiplePropertyMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMultiplePropertyMaterial>
{
    IPrinting3DMultiplePropertyMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMultiplePropertyMaterialGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMultiplePropertyMaterialGroup>
{
    IPrinting3DMultiplePropertyMaterialGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DMultiplePropertyMaterialGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DMultiplePropertyMaterialGroupFactory>
{
    IPrinting3DMultiplePropertyMaterialGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DTexture2CoordMaterial :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DTexture2CoordMaterial>
{
    IPrinting3DTexture2CoordMaterial(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DTexture2CoordMaterialGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DTexture2CoordMaterialGroup>
{
    IPrinting3DTexture2CoordMaterialGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DTexture2CoordMaterialGroup2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DTexture2CoordMaterialGroup2>
{
    IPrinting3DTexture2CoordMaterialGroup2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DTexture2CoordMaterialGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DTexture2CoordMaterialGroupFactory>
{
    IPrinting3DTexture2CoordMaterialGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrinting3DTextureResource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrinting3DTextureResource>
{
    IPrinting3DTextureResource(std::nullptr_t = nullptr) noexcept {}
};

}

}
