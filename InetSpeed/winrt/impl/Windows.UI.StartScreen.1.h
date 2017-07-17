// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.StartScreen.0.h"

namespace winrt {

namespace Windows::UI::StartScreen {

struct IJumpList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpList>
{
    IJumpList(std::nullptr_t = nullptr) noexcept {}
};

struct IJumpListItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListItem>
{
    IJumpListItem(std::nullptr_t = nullptr) noexcept {}
};

struct IJumpListItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListItemStatics>
{
    IJumpListItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IJumpListStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListStatics>
{
    IJumpListStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTile>
{
    ISecondaryTile(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTile2>,
    impl::require<ISecondaryTile2, Windows::UI::StartScreen::ISecondaryTile>
{
    ISecondaryTile2(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileFactory>
{
    ISecondaryTileFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileFactory2>,
    impl::require<ISecondaryTileFactory2, Windows::UI::StartScreen::ISecondaryTileFactory>
{
    ISecondaryTileFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileStatics>
{
    ISecondaryTileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileVisualElements :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements>
{
    ISecondaryTileVisualElements(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileVisualElements2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements2>
{
    ISecondaryTileVisualElements2(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryTileVisualElements3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements3>
{
    ISecondaryTileVisualElements3(std::nullptr_t = nullptr) noexcept {}
};

struct IStartScreenManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartScreenManager>
{
    IStartScreenManager(std::nullptr_t = nullptr) noexcept {}
};

struct IStartScreenManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartScreenManagerStatics>
{
    IStartScreenManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualElementsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequest>
{
    IVisualElementsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualElementsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequestDeferral>
{
    IVisualElementsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualElementsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequestedEventArgs>
{
    IVisualElementsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
