﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.1.h"
#include "Windows.Graphics.Printing3D.1.h"

namespace winrt {

namespace Windows::Graphics::Printing3D {

struct Print3DTaskSourceRequestedHandler : Windows::Foundation::IUnknown
{
    Print3DTaskSourceRequestedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> Print3DTaskSourceRequestedHandler(L lambda);
    template <typename F> Print3DTaskSourceRequestedHandler(F* function);
    template <typename O, typename M> Print3DTaskSourceRequestedHandler(O* object, M method);
    void operator()(Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const& args) const;
};

struct Printing3DBufferDescription
{
    Windows::Graphics::Printing3D::Printing3DBufferFormat Format;
    uint32_t Stride;
};

struct Print3DManager :
    Windows::Graphics::Printing3D::IPrint3DManager
{
    Print3DManager(std::nullptr_t) noexcept {}
    static Windows::Graphics::Printing3D::Print3DManager GetForCurrentView();
    static Windows::Foundation::IAsyncOperation<bool> ShowPrintUIAsync();
};

struct Print3DTask :
    Windows::Graphics::Printing3D::IPrint3DTask
{
    Print3DTask(std::nullptr_t) noexcept {}
};

struct Print3DTaskCompletedEventArgs :
    Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs
{
    Print3DTaskCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct Print3DTaskRequest :
    Windows::Graphics::Printing3D::IPrint3DTaskRequest
{
    Print3DTaskRequest(std::nullptr_t) noexcept {}
};

struct Print3DTaskRequestedEventArgs :
    Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs
{
    Print3DTaskRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct Print3DTaskSourceChangedEventArgs :
    Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs
{
    Print3DTaskSourceChangedEventArgs(std::nullptr_t) noexcept {}
};

struct Print3DTaskSourceRequestedArgs :
    Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs
{
    Print3DTaskSourceRequestedArgs(std::nullptr_t) noexcept {}
};

struct Printing3D3MFPackage :
    Windows::Graphics::Printing3D::IPrinting3D3MFPackage
{
    Printing3D3MFPackage(std::nullptr_t) noexcept {}
    Printing3D3MFPackage();
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value);
};

struct Printing3DBaseMaterial :
    Windows::Graphics::Printing3D::IPrinting3DBaseMaterial
{
    Printing3DBaseMaterial(std::nullptr_t) noexcept {}
    Printing3DBaseMaterial();
    static hstring Abs();
    static hstring Pla();
};

struct Printing3DBaseMaterialGroup :
    Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup
{
    Printing3DBaseMaterialGroup(std::nullptr_t) noexcept {}
    Printing3DBaseMaterialGroup(uint32_t MaterialGroupId);
};

struct Printing3DColorMaterial :
    Windows::Graphics::Printing3D::IPrinting3DColorMaterial,
    impl::require<Printing3DColorMaterial, Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
{
    Printing3DColorMaterial(std::nullptr_t) noexcept {}
    Printing3DColorMaterial();
};

struct Printing3DColorMaterialGroup :
    Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup
{
    Printing3DColorMaterialGroup(std::nullptr_t) noexcept {}
    Printing3DColorMaterialGroup(uint32_t MaterialGroupId);
};

struct Printing3DComponent :
    Windows::Graphics::Printing3D::IPrinting3DComponent
{
    Printing3DComponent(std::nullptr_t) noexcept {}
    Printing3DComponent();
};

struct Printing3DComponentWithMatrix :
    Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix
{
    Printing3DComponentWithMatrix(std::nullptr_t) noexcept {}
    Printing3DComponentWithMatrix();
};

struct Printing3DCompositeMaterial :
    Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial
{
    Printing3DCompositeMaterial(std::nullptr_t) noexcept {}
    Printing3DCompositeMaterial();
};

struct Printing3DCompositeMaterialGroup :
    Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup,
    impl::require<Printing3DCompositeMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
{
    Printing3DCompositeMaterialGroup(std::nullptr_t) noexcept {}
    Printing3DCompositeMaterialGroup(uint32_t MaterialGroupId);
};

struct Printing3DFaceReductionOptions :
    Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions
{
    Printing3DFaceReductionOptions(std::nullptr_t) noexcept {}
    Printing3DFaceReductionOptions();
};

struct Printing3DMaterial :
    Windows::Graphics::Printing3D::IPrinting3DMaterial
{
    Printing3DMaterial(std::nullptr_t) noexcept {}
    Printing3DMaterial();
};

struct Printing3DMesh :
    Windows::Graphics::Printing3D::IPrinting3DMesh
{
    Printing3DMesh(std::nullptr_t) noexcept {}
    Printing3DMesh();
};

struct Printing3DMeshVerificationResult :
    Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult
{
    Printing3DMeshVerificationResult(std::nullptr_t) noexcept {}
};

struct Printing3DModel :
    Windows::Graphics::Printing3D::IPrinting3DModel,
    impl::require<Printing3DModel, Windows::Graphics::Printing3D::IPrinting3DModel2>
{
    Printing3DModel(std::nullptr_t) noexcept {}
    Printing3DModel();
};

struct Printing3DModelTexture :
    Windows::Graphics::Printing3D::IPrinting3DModelTexture
{
    Printing3DModelTexture(std::nullptr_t) noexcept {}
    Printing3DModelTexture();
};

struct Printing3DMultiplePropertyMaterial :
    Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial
{
    Printing3DMultiplePropertyMaterial(std::nullptr_t) noexcept {}
    Printing3DMultiplePropertyMaterial();
};

struct Printing3DMultiplePropertyMaterialGroup :
    Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup
{
    Printing3DMultiplePropertyMaterialGroup(std::nullptr_t) noexcept {}
    Printing3DMultiplePropertyMaterialGroup(uint32_t MaterialGroupId);
};

struct Printing3DTexture2CoordMaterial :
    Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial
{
    Printing3DTexture2CoordMaterial(std::nullptr_t) noexcept {}
    Printing3DTexture2CoordMaterial();
};

struct Printing3DTexture2CoordMaterialGroup :
    Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup,
    impl::require<Printing3DTexture2CoordMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
{
    Printing3DTexture2CoordMaterialGroup(std::nullptr_t) noexcept {}
    Printing3DTexture2CoordMaterialGroup(uint32_t MaterialGroupId);
};

struct Printing3DTextureResource :
    Windows::Graphics::Printing3D::IPrinting3DTextureResource
{
    Printing3DTextureResource(std::nullptr_t) noexcept {}
    Printing3DTextureResource();
};

}

namespace impl {

}

}
