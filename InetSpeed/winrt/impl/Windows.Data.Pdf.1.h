// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Data.Pdf.0.h"

namespace winrt {

namespace Windows::Data::Pdf {

struct IPdfDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfDocument>
{
    IPdfDocument(std::nullptr_t = nullptr) noexcept {}
};

struct IPdfDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfDocumentStatics>
{
    IPdfDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPdfPage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPage>
{
    IPdfPage(std::nullptr_t = nullptr) noexcept {}
};

struct IPdfPageDimensions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPageDimensions>
{
    IPdfPageDimensions(std::nullptr_t = nullptr) noexcept {}
};

struct IPdfPageRenderOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPageRenderOptions>
{
    IPdfPageRenderOptions(std::nullptr_t = nullptr) noexcept {}
};

}

}
