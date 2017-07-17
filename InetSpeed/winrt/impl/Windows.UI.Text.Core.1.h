// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.UI.Text.0.h"
#include "Windows.UI.ViewManagement.0.h"
#include "Windows.UI.Text.Core.0.h"

namespace winrt {

namespace Windows::UI::Text::Core {

struct ICoreTextCompositionCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionCompletedEventArgs>
{
    ICoreTextCompositionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextCompositionSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionSegment>
{
    ICoreTextCompositionSegment(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextCompositionStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionStartedEventArgs>
{
    ICoreTextCompositionStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextEditContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextEditContext>
{
    ICoreTextEditContext(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextEditContext2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextEditContext2>
{
    ICoreTextEditContext2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextFormatUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextFormatUpdatingEventArgs>
{
    ICoreTextFormatUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextLayoutBounds :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutBounds>
{
    ICoreTextLayoutBounds(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextLayoutRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutRequest>
{
    ICoreTextLayoutRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextLayoutRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutRequestedEventArgs>
{
    ICoreTextLayoutRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextSelectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionRequest>
{
    ICoreTextSelectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextSelectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionRequestedEventArgs>
{
    ICoreTextSelectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextSelectionUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionUpdatingEventArgs>
{
    ICoreTextSelectionUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextServicesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesManager>
{
    ICoreTextServicesManager(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextServicesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesManagerStatics>
{
    ICoreTextServicesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextServicesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesStatics>
{
    ICoreTextServicesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextTextRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextRequest>
{
    ICoreTextTextRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextTextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextRequestedEventArgs>
{
    ICoreTextTextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTextTextUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextUpdatingEventArgs>
{
    ICoreTextTextUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
