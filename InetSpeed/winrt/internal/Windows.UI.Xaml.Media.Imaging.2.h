// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.UI.Xaml.Media.Imaging.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.UI.Xaml.2.h"
#include "Windows.UI.Xaml.Media.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
#define WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
template <> struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IBuffer> : impl_IAsyncOperation<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
#define WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
template <> struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> {};
#endif


}

namespace Windows::UI::Xaml::Media::Imaging {

template <typename D>
class WINRT_EBO impl_IBitmapImage
{
    auto shim() const { return impl::shim<D, IBitmapImage>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions CreateOptions() const;
    void CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value) const;
    Windows::Foundation::Uri UriSource() const;
    void UriSource(const Windows::Foundation::Uri & value) const;
    int32_t DecodePixelWidth() const;
    void DecodePixelWidth(int32_t value) const;
    int32_t DecodePixelHeight() const;
    void DecodePixelHeight(int32_t value) const;
    event_token DownloadProgress(const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler & value) const;
    using DownloadProgress_revoker = event_revoker<IBitmapImage>;
    DownloadProgress_revoker DownloadProgress(auto_revoke_t, const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler & value) const;
    void DownloadProgress(event_token token) const;
    event_token ImageOpened(const Windows::UI::Xaml::RoutedEventHandler & value) const;
    using ImageOpened_revoker = event_revoker<IBitmapImage>;
    ImageOpened_revoker ImageOpened(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const;
    void ImageOpened(event_token token) const;
    event_token ImageFailed(const Windows::UI::Xaml::ExceptionRoutedEventHandler & value) const;
    using ImageFailed_revoker = event_revoker<IBitmapImage>;
    ImageFailed_revoker ImageFailed(auto_revoke_t, const Windows::UI::Xaml::ExceptionRoutedEventHandler & value) const;
    void ImageFailed(event_token token) const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImage2
{
    auto shim() const { return impl::shim<D, IBitmapImage2>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::DecodePixelType DecodePixelType() const;
    void DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType value) const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImage3
{
    auto shim() const { return impl::shim<D, IBitmapImage3>(this); }

public:

    bool IsAnimatedBitmap() const;
    bool IsPlaying() const;
    bool AutoPlay() const;
    void AutoPlay(bool value) const;
    void Play() const;
    void Stop() const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImageFactory
{
    auto shim() const { return impl::shim<D, IBitmapImageFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::BitmapImage CreateInstanceWithUriSource(const Windows::Foundation::Uri & uriSource) const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImageStatics
{
    auto shim() const { return impl::shim<D, IBitmapImageStatics>(this); }

public:

    Windows::UI::Xaml::DependencyProperty CreateOptionsProperty() const;
    Windows::UI::Xaml::DependencyProperty UriSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty DecodePixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty DecodePixelHeightProperty() const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImageStatics2
{
    auto shim() const { return impl::shim<D, IBitmapImageStatics2>(this); }

public:

    Windows::UI::Xaml::DependencyProperty DecodePixelTypeProperty() const;
};

template <typename D>
class WINRT_EBO impl_IBitmapImageStatics3
{
    auto shim() const { return impl::shim<D, IBitmapImageStatics3>(this); }

public:

    Windows::UI::Xaml::DependencyProperty IsAnimatedBitmapProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPlayingProperty() const;
    Windows::UI::Xaml::DependencyProperty AutoPlayProperty() const;
};

template <typename D>
class WINRT_EBO impl_IBitmapSource
{
    auto shim() const { return impl::shim<D, IBitmapSource>(this); }

public:

    int32_t PixelWidth() const;
    int32_t PixelHeight() const;
    void SetSource(const Windows::Storage::Streams::IRandomAccessStream & streamSource) const;
    Windows::Foundation::IAsyncAction SetSourceAsync(const Windows::Storage::Streams::IRandomAccessStream & streamSource) const;
};

template <typename D>
class WINRT_EBO impl_IBitmapSourceFactory
{
    auto shim() const { return impl::shim<D, IBitmapSourceFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::BitmapSource CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IBitmapSourceStatics
{
    auto shim() const { return impl::shim<D, IBitmapSourceStatics>(this); }

public:

    Windows::UI::Xaml::DependencyProperty PixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty PixelHeightProperty() const;
};

template <typename D>
class WINRT_EBO impl_IDownloadProgressEventArgs
{
    auto shim() const { return impl::shim<D, IDownloadProgressEventArgs>(this); }

public:

    int32_t Progress() const;
    void Progress(int32_t value) const;
};

template <typename D>
class WINRT_EBO impl_IRenderTargetBitmap
{
    auto shim() const { return impl::shim<D, IRenderTargetBitmap>(this); }

public:

    int32_t PixelWidth() const;
    int32_t PixelHeight() const;
    Windows::Foundation::IAsyncAction RenderAsync(const Windows::UI::Xaml::UIElement & element) const;
    Windows::Foundation::IAsyncAction RenderAsync(const Windows::UI::Xaml::UIElement & element, int32_t scaledWidth, int32_t scaledHeight) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GetPixelsAsync() const;
};

template <typename D>
class WINRT_EBO impl_IRenderTargetBitmapStatics
{
    auto shim() const { return impl::shim<D, IRenderTargetBitmapStatics>(this); }

public:

    Windows::UI::Xaml::DependencyProperty PixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty PixelHeightProperty() const;
};

template <typename D>
class WINRT_EBO impl_ISoftwareBitmapSource
{
    auto shim() const { return impl::shim<D, ISoftwareBitmapSource>(this); }

public:

    Windows::Foundation::IAsyncAction SetBitmapAsync(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const;
};

template <typename D>
class WINRT_EBO impl_ISurfaceImageSource
{
    auto shim() const { return impl::shim<D, ISurfaceImageSource>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_ISurfaceImageSourceFactory
{
    auto shim() const { return impl::shim<D, ISurfaceImageSourceFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IVirtualSurfaceImageSource
{
    auto shim() const { return impl::shim<D, IVirtualSurfaceImageSource>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IVirtualSurfaceImageSourceFactory
{
    auto shim() const { return impl::shim<D, IVirtualSurfaceImageSourceFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) const;
};

template <typename D>
class WINRT_EBO impl_IWriteableBitmap
{
    auto shim() const { return impl::shim<D, IWriteableBitmap>(this); }

public:

    Windows::Storage::Streams::IBuffer PixelBuffer() const;
    void Invalidate() const;
};

template <typename D>
class WINRT_EBO impl_IWriteableBitmapFactory
{
    auto shim() const { return impl::shim<D, IWriteableBitmapFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::WriteableBitmap CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
};

template <typename D>
class WINRT_EBO impl_IXamlRenderingBackgroundTask
{
    auto shim() const { return impl::shim<D, IXamlRenderingBackgroundTask>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IXamlRenderingBackgroundTaskFactory
{
    auto shim() const { return impl::shim<D, IXamlRenderingBackgroundTaskFactory>(this); }

public:

    Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
class WINRT_EBO impl_IXamlRenderingBackgroundTaskOverrides
{
    auto shim() const { return impl::shim<D, IXamlRenderingBackgroundTaskOverrides>(this); }

public:

    void OnRun(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & taskInstance) const;
};

struct DownloadProgressEventHandler : Windows::IUnknown
{
    DownloadProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DownloadProgressEventHandler>(m_ptr); }
    template <typename L> DownloadProgressEventHandler(L lambda);
    template <typename F> DownloadProgressEventHandler (F * function);
    template <typename O, typename M> DownloadProgressEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs & e) const;
};

struct IBitmapImage :
    Windows::IInspectable,
    impl::consume<IBitmapImage>
{
    IBitmapImage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImage>(m_ptr); }
};

struct IBitmapImage2 :
    Windows::IInspectable,
    impl::consume<IBitmapImage2>
{
    IBitmapImage2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImage2>(m_ptr); }
};

struct IBitmapImage3 :
    Windows::IInspectable,
    impl::consume<IBitmapImage3>
{
    IBitmapImage3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImage3>(m_ptr); }
};

struct IBitmapImageFactory :
    Windows::IInspectable,
    impl::consume<IBitmapImageFactory>
{
    IBitmapImageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImageFactory>(m_ptr); }
};

struct IBitmapImageStatics :
    Windows::IInspectable,
    impl::consume<IBitmapImageStatics>
{
    IBitmapImageStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImageStatics>(m_ptr); }
};

struct IBitmapImageStatics2 :
    Windows::IInspectable,
    impl::consume<IBitmapImageStatics2>
{
    IBitmapImageStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImageStatics2>(m_ptr); }
};

struct IBitmapImageStatics3 :
    Windows::IInspectable,
    impl::consume<IBitmapImageStatics3>
{
    IBitmapImageStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapImageStatics3>(m_ptr); }
};

struct IBitmapSource :
    Windows::IInspectable,
    impl::consume<IBitmapSource>
{
    IBitmapSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapSource>(m_ptr); }
};

struct IBitmapSourceFactory :
    Windows::IInspectable,
    impl::consume<IBitmapSourceFactory>
{
    IBitmapSourceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapSourceFactory>(m_ptr); }
};

struct IBitmapSourceStatics :
    Windows::IInspectable,
    impl::consume<IBitmapSourceStatics>
{
    IBitmapSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapSourceStatics>(m_ptr); }
};

struct IDownloadProgressEventArgs :
    Windows::IInspectable,
    impl::consume<IDownloadProgressEventArgs>
{
    IDownloadProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDownloadProgressEventArgs>(m_ptr); }
};

struct IRenderTargetBitmap :
    Windows::IInspectable,
    impl::consume<IRenderTargetBitmap>
{
    IRenderTargetBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRenderTargetBitmap>(m_ptr); }
};

struct IRenderTargetBitmapStatics :
    Windows::IInspectable,
    impl::consume<IRenderTargetBitmapStatics>
{
    IRenderTargetBitmapStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRenderTargetBitmapStatics>(m_ptr); }
};

struct ISoftwareBitmapSource :
    Windows::IInspectable,
    impl::consume<ISoftwareBitmapSource>
{
    ISoftwareBitmapSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISoftwareBitmapSource>(m_ptr); }
};

struct ISurfaceImageSource :
    Windows::IInspectable,
    impl::consume<ISurfaceImageSource>
{
    ISurfaceImageSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISurfaceImageSource>(m_ptr); }
};

struct ISurfaceImageSourceFactory :
    Windows::IInspectable,
    impl::consume<ISurfaceImageSourceFactory>
{
    ISurfaceImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISurfaceImageSourceFactory>(m_ptr); }
};

struct IVirtualSurfaceImageSource :
    Windows::IInspectable,
    impl::consume<IVirtualSurfaceImageSource>
{
    IVirtualSurfaceImageSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVirtualSurfaceImageSource>(m_ptr); }
};

struct IVirtualSurfaceImageSourceFactory :
    Windows::IInspectable,
    impl::consume<IVirtualSurfaceImageSourceFactory>
{
    IVirtualSurfaceImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVirtualSurfaceImageSourceFactory>(m_ptr); }
};

struct IWriteableBitmap :
    Windows::IInspectable,
    impl::consume<IWriteableBitmap>
{
    IWriteableBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWriteableBitmap>(m_ptr); }
};

struct IWriteableBitmapFactory :
    Windows::IInspectable,
    impl::consume<IWriteableBitmapFactory>
{
    IWriteableBitmapFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWriteableBitmapFactory>(m_ptr); }
};

struct IXamlRenderingBackgroundTask :
    Windows::IInspectable,
    impl::consume<IXamlRenderingBackgroundTask>
{
    IXamlRenderingBackgroundTask(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlRenderingBackgroundTask>(m_ptr); }
};

struct IXamlRenderingBackgroundTaskFactory :
    Windows::IInspectable,
    impl::consume<IXamlRenderingBackgroundTaskFactory>
{
    IXamlRenderingBackgroundTaskFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlRenderingBackgroundTaskFactory>(m_ptr); }
};

struct IXamlRenderingBackgroundTaskOverrides :
    Windows::IInspectable,
    impl::consume<IXamlRenderingBackgroundTaskOverrides>
{
    IXamlRenderingBackgroundTaskOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlRenderingBackgroundTaskOverrides>(m_ptr); }
};

}

}
