// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Graphics.Imaging.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.SocialInfo.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
{
    HRESULT __stdcall get_Author(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialUserInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryContent(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> value) noexcept override
    {
        try
        {
            *value = detach(shim().PrimaryContent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecondaryContent(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> value) noexcept override
    {
        try
        {
            *value = detach(shim().SecondaryContent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().Timestamp(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnails(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thumbnails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedItem(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> value) noexcept override
    {
        try
        {
            *value = detach(shim().SharedItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharedItem(abi_arg_in<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> value) noexcept override
    {
        try
        {
            shim().SharedItem(*reinterpret_cast<const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Message(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Message(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
{
    HRESULT __stdcall get_Author(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialUserInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryContent(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> value) noexcept override
    {
        try
        {
            *value = detach(shim().PrimaryContent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecondaryContent(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> value) noexcept override
    {
        try
        {
            *value = detach(shim().SecondaryContent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().Timestamp(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnails(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thumbnails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedItem(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> value) noexcept override
    {
        try
        {
            *value = detach(shim().SharedItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharedItem(abi_arg_in<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> value) noexcept override
    {
        try
        {
            shim().SharedItem(*reinterpret_cast<const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().BadgeStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) noexcept override
    {
        try
        {
            shim().BadgeStyle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeCountValue(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().BadgeCountValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BadgeCountValue(int32_t value) noexcept override
    {
        try
        {
            shim().BadgeCountValue(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildItem(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> value) noexcept override
    {
        try
        {
            *value = detach(shim().ChildItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChildItem(abi_arg_in<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> value) noexcept override
    {
        try
        {
            shim().ChildItem(*reinterpret_cast<const Windows::ApplicationModel::SocialInfo::SocialFeedChildItem *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) noexcept override
    {
        try
        {
            shim().Style(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
{
    HRESULT __stdcall get_OriginalSource(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().OriginalSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginalSource(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().OriginalSource(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> value) noexcept override
    {
        try
        {
            *value = detach(shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().Timestamp(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> value) noexcept override
    {
        try
        {
            shim().Thumbnail(*reinterpret_cast<const Windows::ApplicationModel::SocialInfo::SocialItemThumbnail *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thumbnail());
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
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
{
    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().ImageUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ImageUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().ImageUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapSize(abi_arg_out<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            *value = detach(shim().BitmapSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapSize(abi_arg_in<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            shim().BitmapSize(*reinterpret_cast<const Windows::Graphics::Imaging::BitmapSize *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetImageAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> image, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SetImageAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().UserName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().TargetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::SocialInfo {

template <typename D> Windows::Foundation::Uri impl_ISocialItemThumbnail<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialItemThumbnail<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialItemThumbnail<D>::ImageUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_ImageUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialItemThumbnail<D>::ImageUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_ImageUri(get(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapSize impl_ISocialItemThumbnail<D>::BitmapSize() const
{
    Windows::Graphics::Imaging::BitmapSize value {};
    check_hresult(shim()->get_BitmapSize(put(value)));
    return value;
}

template <typename D> void impl_ISocialItemThumbnail<D>::BitmapSize(const Windows::Graphics::Imaging::BitmapSize & value) const
{
    check_hresult(shim()->put_BitmapSize(get(value)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISocialItemThumbnail<D>::SetImageAsync(const Windows::Storage::Streams::IInputStream & image) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_SetImageAsync(get(image), put(operation)));
    return operation;
}

template <typename D> hstring impl_ISocialFeedContent<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedContent<D>::Title(hstring_ref value) const
{
    check_hresult(shim()->put_Title(get(value)));
}

template <typename D> hstring impl_ISocialFeedContent<D>::Message() const
{
    hstring value;
    check_hresult(shim()->get_Message(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedContent<D>::Message(hstring_ref value) const
{
    check_hresult(shim()->put_Message(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialFeedContent<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedContent<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> hstring impl_ISocialUserInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_ISocialUserInfo<D>::DisplayName(hstring_ref value) const
{
    check_hresult(shim()->put_DisplayName(get(value)));
}

template <typename D> hstring impl_ISocialUserInfo<D>::UserName() const
{
    hstring value;
    check_hresult(shim()->get_UserName(put(value)));
    return value;
}

template <typename D> void impl_ISocialUserInfo<D>::UserName(hstring_ref value) const
{
    check_hresult(shim()->put_UserName(get(value)));
}

template <typename D> hstring impl_ISocialUserInfo<D>::RemoteId() const
{
    hstring value;
    check_hresult(shim()->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_ISocialUserInfo<D>::RemoteId(hstring_ref value) const
{
    check_hresult(shim()->put_RemoteId(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialUserInfo<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialUserInfo<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialUserInfo impl_ISocialFeedItem<D>::Author() const
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo value { nullptr };
    check_hresult(shim()->get_Author(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent impl_ISocialFeedItem<D>::PrimaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value { nullptr };
    check_hresult(shim()->get_PrimaryContent(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent impl_ISocialFeedItem<D>::SecondaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value { nullptr };
    check_hresult(shim()->get_SecondaryContent(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISocialFeedItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Timestamp(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::Timestamp(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_Timestamp(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialFeedItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> impl_ISocialFeedItem<D>::Thumbnails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> value;
    check_hresult(shim()->get_Thumbnails(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem impl_ISocialFeedItem<D>::SharedItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem value { nullptr };
    check_hresult(shim()->get_SharedItem(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const
{
    check_hresult(shim()->put_SharedItem(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle impl_ISocialFeedItem<D>::BadgeStyle() const
{
    Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value {};
    check_hresult(shim()->get_BadgeStyle(&value));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) const
{
    check_hresult(shim()->put_BadgeStyle(value));
}

template <typename D> int32_t impl_ISocialFeedItem<D>::BadgeCountValue() const
{
    int32_t value {};
    check_hresult(shim()->get_BadgeCountValue(&value));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::BadgeCountValue(int32_t value) const
{
    check_hresult(shim()->put_BadgeCountValue(value));
}

template <typename D> hstring impl_ISocialFeedItem<D>::RemoteId() const
{
    hstring value;
    check_hresult(shim()->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::RemoteId(hstring_ref value) const
{
    check_hresult(shim()->put_RemoteId(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedChildItem impl_ISocialFeedItem<D>::ChildItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedChildItem value { nullptr };
    check_hresult(shim()->get_ChildItem(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::ChildItem(const Windows::ApplicationModel::SocialInfo::SocialFeedChildItem & value) const
{
    check_hresult(shim()->put_ChildItem(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle impl_ISocialFeedItem<D>::Style() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value {};
    check_hresult(shim()->get_Style(&value));
    return value;
}

template <typename D> void impl_ISocialFeedItem<D>::Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) const
{
    check_hresult(shim()->put_Style(value));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialUserInfo impl_ISocialFeedChildItem<D>::Author() const
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo value { nullptr };
    check_hresult(shim()->get_Author(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent impl_ISocialFeedChildItem<D>::PrimaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value { nullptr };
    check_hresult(shim()->get_PrimaryContent(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent impl_ISocialFeedChildItem<D>::SecondaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value { nullptr };
    check_hresult(shim()->get_SecondaryContent(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISocialFeedChildItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Timestamp(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedChildItem<D>::Timestamp(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_Timestamp(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialFeedChildItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedChildItem<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> impl_ISocialFeedChildItem<D>::Thumbnails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> value;
    check_hresult(shim()->get_Thumbnails(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem impl_ISocialFeedChildItem<D>::SharedItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem value { nullptr };
    check_hresult(shim()->get_SharedItem(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedChildItem<D>::SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const
{
    check_hresult(shim()->put_SharedItem(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialFeedSharedItem<D>::OriginalSource() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_OriginalSource(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedSharedItem<D>::OriginalSource(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_OriginalSource(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent impl_ISocialFeedSharedItem<D>::Content() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value { nullptr };
    check_hresult(shim()->get_Content(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISocialFeedSharedItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Timestamp(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedSharedItem<D>::Timestamp(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_Timestamp(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISocialFeedSharedItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_TargetUri(put(value)));
    return value;
}

template <typename D> void impl_ISocialFeedSharedItem<D>::TargetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_TargetUri(get(value)));
}

template <typename D> void impl_ISocialFeedSharedItem<D>::Thumbnail(const Windows::ApplicationModel::SocialInfo::SocialItemThumbnail & value) const
{
    check_hresult(shim()->put_Thumbnail(get(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialItemThumbnail impl_ISocialFeedSharedItem<D>::Thumbnail() const
{
    Windows::ApplicationModel::SocialInfo::SocialItemThumbnail value { nullptr };
    check_hresult(shim()->get_Thumbnail(put(value)));
    return value;
}

inline SocialFeedChildItem::SocialFeedChildItem() :
    SocialFeedChildItem(activate_instance<SocialFeedChildItem>())
{}

inline SocialFeedItem::SocialFeedItem() :
    SocialFeedItem(activate_instance<SocialFeedItem>())
{}

inline SocialFeedSharedItem::SocialFeedSharedItem() :
    SocialFeedSharedItem(activate_instance<SocialFeedSharedItem>())
{}

inline SocialItemThumbnail::SocialItemThumbnail() :
    SocialItemThumbnail(activate_instance<SocialItemThumbnail>())
{}

}

}
