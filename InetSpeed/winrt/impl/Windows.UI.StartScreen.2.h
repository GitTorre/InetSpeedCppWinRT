// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.UI.StartScreen.1.h"

namespace winrt {

namespace Windows::UI::StartScreen {

struct JumpList :
    Windows::UI::StartScreen::IJumpList
{
    JumpList(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> LoadCurrentAsync();
    static bool IsSupported();
};

struct JumpListItem :
    Windows::UI::StartScreen::IJumpListItem
{
    JumpListItem(std::nullptr_t) noexcept {}
    static Windows::UI::StartScreen::JumpListItem CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName);
    static Windows::UI::StartScreen::JumpListItem CreateSeparator();
};

struct SecondaryTile :
    Windows::UI::StartScreen::ISecondaryTile,
    impl::require<SecondaryTile, Windows::UI::StartScreen::ISecondaryTile2>
{
    SecondaryTile(std::nullptr_t) noexcept {}
    SecondaryTile();
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference);
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference);
    SecondaryTile(param::hstring const& tileId);
    SecondaryTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize);
    static bool Exists(param::hstring const& tileId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync(param::hstring const& applicationId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllForPackageAsync();
};

struct SecondaryTileVisualElements :
    Windows::UI::StartScreen::ISecondaryTileVisualElements,
    impl::require<SecondaryTileVisualElements, Windows::UI::StartScreen::ISecondaryTileVisualElements2, Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    SecondaryTileVisualElements(std::nullptr_t) noexcept {}
};

struct StartScreenManager :
    Windows::UI::StartScreen::IStartScreenManager
{
    StartScreenManager(std::nullptr_t) noexcept {}
    static Windows::UI::StartScreen::StartScreenManager GetDefault();
    static Windows::UI::StartScreen::StartScreenManager GetForUser(Windows::System::User const& user);
};

struct VisualElementsRequest :
    Windows::UI::StartScreen::IVisualElementsRequest
{
    VisualElementsRequest(std::nullptr_t) noexcept {}
};

struct VisualElementsRequestDeferral :
    Windows::UI::StartScreen::IVisualElementsRequestDeferral
{
    VisualElementsRequestDeferral(std::nullptr_t) noexcept {}
};

struct VisualElementsRequestedEventArgs :
    Windows::UI::StartScreen::IVisualElementsRequestedEventArgs
{
    VisualElementsRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
