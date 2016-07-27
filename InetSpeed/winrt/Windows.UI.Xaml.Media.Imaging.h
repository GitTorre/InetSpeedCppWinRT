// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.UI.Xaml.3.h"
#include "internal\Windows.ApplicationModel.Background.3.h"
#include "internal\Windows.Graphics.Imaging.3.h"
#include "internal\Windows.UI.Xaml.Media.Imaging.3.h"
#include "Windows.UI.Xaml.Media.h"
#include "Windows.Foundation.h"
#include "internal\Windows.UI.Xaml.Media.Imaging.4.h"
#include "internal\Windows.UI.Xaml.Media.Imaging.5.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Media::Imaging {

template <typename L> DownloadProgressEventHandler::DownloadProgressEventHandler(L lambda) :
    DownloadProgressEventHandler(impl::make_delegate<impl_DownloadProgressEventHandler<L>, DownloadProgressEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DownloadProgressEventHandler::DownloadProgressEventHandler(F * function) :
    DownloadProgressEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DownloadProgressEventHandler::DownloadProgressEventHandler(O * object, M method) :
    DownloadProgressEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DownloadProgressEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage>
{
    HRESULT __stdcall get_CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions * value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value) noexcept override
    {
        try
        {
            shim().CreateOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UriSource(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().UriSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriSource(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().UriSource(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelWidth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelWidth(int32_t value) noexcept override
    {
        try
        {
            shim().DecodePixelWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelHeight(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelHeight(int32_t value) noexcept override
    {
        try
        {
            shim().DecodePixelHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadProgress(abi_arg_in<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DownloadProgress(*reinterpret_cast<const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadProgress(event_token token) noexcept override
    {
        try
        {
            shim().DownloadProgress(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ImageOpened(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ImageOpened(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageOpened(event_token token) noexcept override
    {
        try
        {
            shim().ImageOpened(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ImageFailed(abi_arg_in<Windows::UI::Xaml::ExceptionRoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ImageFailed(*reinterpret_cast<const Windows::UI::Xaml::ExceptionRoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageFailed(event_token token) noexcept override
    {
        try
        {
            shim().ImageFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage2> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage2>
{
    HRESULT __stdcall get_DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType * value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType value) noexcept override
    {
        try
        {
            shim().DecodePixelType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage3> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage3>
{
    HRESULT __stdcall get_IsAnimatedBitmap(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsAnimatedBitmap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlaying(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPlaying());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoPlay(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoPlay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoPlay(bool value) noexcept override
    {
        try
        {
            shim().AutoPlay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Play() noexcept override
    {
        try
        {
            shim().Play();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithUriSource(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uriSource, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IBitmapImage> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithUriSource(*reinterpret_cast<const Windows::Foundation::Uri *>(&uriSource)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>
{
    HRESULT __stdcall get_CreateOptionsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateOptionsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UriSourceProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().UriSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>
{
    HRESULT __stdcall get_DecodePixelTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().DecodePixelTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>
{
    HRESULT __stdcall get_IsAnimatedBitmapProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsAnimatedBitmapProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPlayingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoPlayProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoPlayProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSource>
{
    HRESULT __stdcall get_PixelWidth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSource(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> streamSource) noexcept override
    {
        try
        {
            shim().SetSource(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&streamSource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSourceAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> streamSource, abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(shim().SetSourceAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&streamSource)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IBitmapSource> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>
{
    HRESULT __stdcall get_PixelWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>
{
    HRESULT __stdcall get_Progress(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Progress(int32_t value) noexcept override
    {
        try
        {
            shim().Progress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>
{
    HRESULT __stdcall get_PixelWidth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RenderAsync(abi_arg_in<Windows::UI::Xaml::IUIElement> element, abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(shim().RenderAsync(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RenderToSizeAsync(abi_arg_in<Windows::UI::Xaml::IUIElement> element, int32_t scaledWidth, int32_t scaledHeight, abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(shim().RenderAsync(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element), scaledWidth, scaledHeight));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPixelsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(shim().GetPixelsAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>
{
    HRESULT __stdcall get_PixelWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>
{
    HRESULT __stdcall abi_SetBitmapAsync(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap, abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(shim().SetBitmapAsync(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>
{
    HRESULT __stdcall get_PixelBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().PixelBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Invalidate() noexcept override
    {
        try
        {
            shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> instance) noexcept override
    {
        try
        {
            *instance = detach(shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
{
    HRESULT __stdcall abi_OnRun(abi_arg_in<Windows::ApplicationModel::Background::IBackgroundTaskInstance> taskInstance) noexcept override
    {
        try
        {
            shim().OnRun(*reinterpret_cast<const Windows::ApplicationModel::Background::IBackgroundTaskInstance *>(&taskInstance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Media::Imaging {

template <typename D> int32_t impl_IDownloadProgressEventArgs<D>::Progress() const
{
    int32_t value {};
    check_hresult(shim()->get_Progress(&value));
    return value;
}

template <typename D> void impl_IDownloadProgressEventArgs<D>::Progress(int32_t value) const
{
    check_hresult(shim()->put_Progress(value));
}

template <typename D> int32_t impl_IBitmapSource<D>::PixelWidth() const
{
    int32_t value {};
    check_hresult(shim()->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t impl_IBitmapSource<D>::PixelHeight() const
{
    int32_t value {};
    check_hresult(shim()->get_PixelHeight(&value));
    return value;
}

template <typename D> void impl_IBitmapSource<D>::SetSource(const Windows::Storage::Streams::IRandomAccessStream & streamSource) const
{
    check_hresult(shim()->abi_SetSource(get(streamSource)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IBitmapSource<D>::SetSourceAsync(const Windows::Storage::Streams::IRandomAccessStream & streamSource) const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(shim()->abi_SetSourceAsync(get(streamSource), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapSourceStatics<D>::PixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_PixelWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapSourceStatics<D>::PixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_PixelHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapSource impl_IBitmapSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Imaging::BitmapSource instance { nullptr };
    check_hresult(shim()->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int32_t impl_IRenderTargetBitmap<D>::PixelWidth() const
{
    int32_t value {};
    check_hresult(shim()->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t impl_IRenderTargetBitmap<D>::PixelHeight() const
{
    int32_t value {};
    check_hresult(shim()->get_PixelHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRenderTargetBitmap<D>::RenderAsync(const Windows::UI::Xaml::UIElement & element) const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(shim()->abi_RenderAsync(get(element), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRenderTargetBitmap<D>::RenderAsync(const Windows::UI::Xaml::UIElement & element, int32_t scaledWidth, int32_t scaledHeight) const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(shim()->abi_RenderToSizeAsync(get(element), scaledWidth, scaledHeight, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IRenderTargetBitmap<D>::GetPixelsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> returnValue;
    check_hresult(shim()->abi_GetPixelsAsync(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRenderTargetBitmapStatics<D>::PixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_PixelWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRenderTargetBitmapStatics<D>::PixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_PixelHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SurfaceImageSource impl_ISurfaceImageSourceFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithDimensions(pixelWidth, pixelHeight, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SurfaceImageSource impl_ISurfaceImageSourceFactory<D>::CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions impl_IBitmapImage<D>::CreateOptions() const
{
    Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value {};
    check_hresult(shim()->get_CreateOptions(&value));
    return value;
}

template <typename D> void impl_IBitmapImage<D>::CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value) const
{
    check_hresult(shim()->put_CreateOptions(value));
}

template <typename D> Windows::Foundation::Uri impl_IBitmapImage<D>::UriSource() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_UriSource(put(value)));
    return value;
}

template <typename D> void impl_IBitmapImage<D>::UriSource(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_UriSource(get(value)));
}

template <typename D> int32_t impl_IBitmapImage<D>::DecodePixelWidth() const
{
    int32_t value {};
    check_hresult(shim()->get_DecodePixelWidth(&value));
    return value;
}

template <typename D> void impl_IBitmapImage<D>::DecodePixelWidth(int32_t value) const
{
    check_hresult(shim()->put_DecodePixelWidth(value));
}

template <typename D> int32_t impl_IBitmapImage<D>::DecodePixelHeight() const
{
    int32_t value {};
    check_hresult(shim()->get_DecodePixelHeight(&value));
    return value;
}

template <typename D> void impl_IBitmapImage<D>::DecodePixelHeight(int32_t value) const
{
    check_hresult(shim()->put_DecodePixelHeight(value));
}

template <typename D> event_token impl_IBitmapImage<D>::DownloadProgress(const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler & value) const
{
    event_token token {};
    check_hresult(shim()->add_DownloadProgress(get(value), &token));
    return token;
}

template <typename D> event_revoker<IBitmapImage> impl_IBitmapImage<D>::DownloadProgress(auto_revoke_t, const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler & value) const
{
    return impl::make_event_revoker<D, IBitmapImage>(this, &ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage::remove_DownloadProgress, DownloadProgress(value));
}

template <typename D> void impl_IBitmapImage<D>::DownloadProgress(event_token token) const
{
    check_hresult(shim()->remove_DownloadProgress(token));
}

template <typename D> event_token impl_IBitmapImage<D>::ImageOpened(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(shim()->add_ImageOpened(get(value), &token));
    return token;
}

template <typename D> event_revoker<IBitmapImage> impl_IBitmapImage<D>::ImageOpened(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IBitmapImage>(this, &ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage::remove_ImageOpened, ImageOpened(value));
}

template <typename D> void impl_IBitmapImage<D>::ImageOpened(event_token token) const
{
    check_hresult(shim()->remove_ImageOpened(token));
}

template <typename D> event_token impl_IBitmapImage<D>::ImageFailed(const Windows::UI::Xaml::ExceptionRoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(shim()->add_ImageFailed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IBitmapImage> impl_IBitmapImage<D>::ImageFailed(auto_revoke_t, const Windows::UI::Xaml::ExceptionRoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IBitmapImage>(this, &ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage::remove_ImageFailed, ImageFailed(value));
}

template <typename D> void impl_IBitmapImage<D>::ImageFailed(event_token token) const
{
    check_hresult(shim()->remove_ImageFailed(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics<D>::CreateOptionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_CreateOptionsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics<D>::UriSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_UriSourceProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics<D>::DecodePixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_DecodePixelWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics<D>::DecodePixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_DecodePixelHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapImage impl_IBitmapImageFactory<D>::CreateInstanceWithUriSource(const Windows::Foundation::Uri & uriSource) const
{
    Windows::UI::Xaml::Media::Imaging::BitmapImage instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithUriSource(get(uriSource), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::DecodePixelType impl_IBitmapImage2<D>::DecodePixelType() const
{
    Windows::UI::Xaml::Media::Imaging::DecodePixelType value {};
    check_hresult(shim()->get_DecodePixelType(&value));
    return value;
}

template <typename D> void impl_IBitmapImage2<D>::DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType value) const
{
    check_hresult(shim()->put_DecodePixelType(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics2<D>::DecodePixelTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_DecodePixelTypeProperty(put(value)));
    return value;
}

template <typename D> bool impl_IBitmapImage3<D>::IsAnimatedBitmap() const
{
    bool value {};
    check_hresult(shim()->get_IsAnimatedBitmap(&value));
    return value;
}

template <typename D> bool impl_IBitmapImage3<D>::IsPlaying() const
{
    bool value {};
    check_hresult(shim()->get_IsPlaying(&value));
    return value;
}

template <typename D> bool impl_IBitmapImage3<D>::AutoPlay() const
{
    bool value {};
    check_hresult(shim()->get_AutoPlay(&value));
    return value;
}

template <typename D> void impl_IBitmapImage3<D>::AutoPlay(bool value) const
{
    check_hresult(shim()->put_AutoPlay(value));
}

template <typename D> void impl_IBitmapImage3<D>::Play() const
{
    check_hresult(shim()->abi_Play());
}

template <typename D> void impl_IBitmapImage3<D>::Stop() const
{
    check_hresult(shim()->abi_Stop());
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics3<D>::IsAnimatedBitmapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_IsAnimatedBitmapProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics3<D>::IsPlayingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_IsPlayingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBitmapImageStatics3<D>::AutoPlayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(shim()->get_AutoPlayProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource impl_IVirtualSurfaceImageSourceFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithDimensions(pixelWidth, pixelHeight, put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource impl_IVirtualSurfaceImageSourceFactory<D>::CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) const
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, put(instance)));
    return instance;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWriteableBitmap<D>::PixelBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_PixelBuffer(put(value)));
    return value;
}

template <typename D> void impl_IWriteableBitmap<D>::Invalidate() const
{
    check_hresult(shim()->abi_Invalidate());
}

template <typename D> Windows::UI::Xaml::Media::Imaging::WriteableBitmap impl_IWriteableBitmapFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const
{
    Windows::UI::Xaml::Media::Imaging::WriteableBitmap instance { nullptr };
    check_hresult(shim()->abi_CreateInstanceWithDimensions(pixelWidth, pixelHeight, put(instance)));
    return instance;
}

template <typename D> void impl_IXamlRenderingBackgroundTaskOverrides<D>::OnRun(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & taskInstance) const
{
    check_hresult(shim()->abi_OnRun(get(taskInstance)));
}

template <typename D> Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask impl_IXamlRenderingBackgroundTaskFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask instance { nullptr };
    check_hresult(shim()->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISoftwareBitmapSource<D>::SetBitmapAsync(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(shim()->abi_SetBitmapAsync(get(softwareBitmap), put(returnValue)));
    return returnValue;
}

inline BitmapImage::BitmapImage() :
    BitmapImage(activate_instance<BitmapImage>())
{}

inline BitmapImage::BitmapImage(const Windows::Foundation::Uri & uriSource) :
    BitmapImage(get_activation_factory<BitmapImage, IBitmapImageFactory>().CreateInstanceWithUriSource(uriSource))
{}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::CreateOptionsProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics>().CreateOptionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::UriSourceProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics>().UriSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelWidthProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics>().DecodePixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelHeightProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics>().DecodePixelHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelTypeProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics2>().DecodePixelTypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::IsAnimatedBitmapProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics3>().IsAnimatedBitmapProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::IsPlayingProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics3>().IsPlayingProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::AutoPlayProperty()
{
    return get_activation_factory<BitmapImage, IBitmapImageStatics3>().AutoPlayProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapSource::PixelWidthProperty()
{
    return get_activation_factory<BitmapSource, IBitmapSourceStatics>().PixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapSource::PixelHeightProperty()
{
    return get_activation_factory<BitmapSource, IBitmapSourceStatics>().PixelHeightProperty();
}

inline RenderTargetBitmap::RenderTargetBitmap() :
    RenderTargetBitmap(activate_instance<RenderTargetBitmap>())
{}

inline Windows::UI::Xaml::DependencyProperty RenderTargetBitmap::PixelWidthProperty()
{
    return get_activation_factory<RenderTargetBitmap, IRenderTargetBitmapStatics>().PixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty RenderTargetBitmap::PixelHeightProperty()
{
    return get_activation_factory<RenderTargetBitmap, IRenderTargetBitmapStatics>().PixelHeightProperty();
}

inline SoftwareBitmapSource::SoftwareBitmapSource() :
    SoftwareBitmapSource(activate_instance<SoftwareBitmapSource>())
{}

inline SurfaceImageSource::SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<SurfaceImageSource, ISurfaceImageSourceFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight, outer, inner));
}

inline SurfaceImageSource::SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<SurfaceImageSource, ISurfaceImageSourceFactory>().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, outer, inner));
}

inline VirtualSurfaceImageSource::VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight) :
    VirtualSurfaceImageSource(get_activation_factory<VirtualSurfaceImageSource, IVirtualSurfaceImageSourceFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight))
{}

inline VirtualSurfaceImageSource::VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) :
    VirtualSurfaceImageSource(get_activation_factory<VirtualSurfaceImageSource, IVirtualSurfaceImageSourceFactory>().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque))
{}

inline WriteableBitmap::WriteableBitmap(int32_t pixelWidth, int32_t pixelHeight) :
    WriteableBitmap(get_activation_factory<WriteableBitmap, IWriteableBitmapFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight))
{}

}

}
