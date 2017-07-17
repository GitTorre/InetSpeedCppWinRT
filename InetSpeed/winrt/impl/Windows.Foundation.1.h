// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Foundation.0.h"

namespace winrt {

namespace Windows::Foundation {

struct IClosable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClosable>
{
    IClosable(std::nullptr_t = nullptr) noexcept {}
};

struct IDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeferral>,
    impl::require<IDeferral, Windows::Foundation::IClosable>
{
    IDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IDeferralFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeferralFactory>
{
    IDeferralFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGetActivationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGetActivationFactory>
{
    IGetActivationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBuffer>,
    impl::require<IMemoryBuffer, Windows::Foundation::IClosable>
{
    IMemoryBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBufferFactory>
{
    IMemoryBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryBufferReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBufferReference>,
    impl::require<IMemoryBufferReference, Windows::Foundation::IClosable>
{
    IMemoryBufferReference(std::nullptr_t = nullptr) noexcept {}
};

struct IPropertyValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyValue>
{
    IPropertyValue(std::nullptr_t = nullptr) noexcept {}
};

struct IPropertyValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyValueStatics>
{
    IPropertyValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStringable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStringable>
{
    IStringable(std::nullptr_t = nullptr) noexcept {}
};

struct IUriEscapeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriEscapeStatics>
{
    IUriEscapeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUriRuntimeClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClass>
{
    IUriRuntimeClass(std::nullptr_t = nullptr) noexcept {}
};

struct IUriRuntimeClassFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClassFactory>
{
    IUriRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IUriRuntimeClassWithAbsoluteCanonicalUri :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    IUriRuntimeClassWithAbsoluteCanonicalUri(std::nullptr_t = nullptr) noexcept {}
};

struct IWwwFormUrlDecoderEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderEntry>
{
    IWwwFormUrlDecoderEntry(std::nullptr_t = nullptr) noexcept {}
};

struct IWwwFormUrlDecoderRuntimeClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderRuntimeClass>,
    impl::require<IWwwFormUrlDecoderRuntimeClass, Windows::Foundation::Collections::IIterable<Windows::Foundation::IWwwFormUrlDecoderEntry>, Windows::Foundation::Collections::IVectorView<Windows::Foundation::IWwwFormUrlDecoderEntry>>
{
    IWwwFormUrlDecoderRuntimeClass(std::nullptr_t = nullptr) noexcept {}
};

struct IWwwFormUrlDecoderRuntimeClassFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderRuntimeClassFactory>
{
    IWwwFormUrlDecoderRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
