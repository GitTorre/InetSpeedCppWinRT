// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.UI.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Data.Pdf.1.h"

namespace winrt {

namespace Windows::Data::Pdf {

struct PdfDocument :
    Windows::Data::Pdf::IPdfDocument
{
    PdfDocument(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password);
};

struct PdfPage :
    Windows::Data::Pdf::IPdfPage,
    impl::require<PdfPage, Windows::Foundation::IClosable>
{
    PdfPage(std::nullptr_t) noexcept {}
};

struct PdfPageDimensions :
    Windows::Data::Pdf::IPdfPageDimensions
{
    PdfPageDimensions(std::nullptr_t) noexcept {}
};

struct PdfPageRenderOptions :
    Windows::Data::Pdf::IPdfPageRenderOptions
{
    PdfPageRenderOptions(std::nullptr_t) noexcept {}
    PdfPageRenderOptions();
};

}

namespace impl {

}

}
