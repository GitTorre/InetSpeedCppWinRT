// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Services.Maps.0.h"
#include "Windows.Services.Maps.LocalSearch.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Controls.Maps.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Controls::Maps {

struct ICustomMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomMapTileDataSource>
{
    ICustomMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomMapTileDataSourceFactory>
{
    ICustomMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMapTileDataSource>
{
    IHttpMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMapTileDataSourceFactory>
{
    IHttpMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalMapTileDataSource>
{
    ILocalMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct ILocalMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalMapTileDataSourceFactory>
{
    ILocalMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapActualCameraChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangedEventArgs>
{
    IMapActualCameraChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapActualCameraChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangedEventArgs2>
{
    IMapActualCameraChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapActualCameraChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangingEventArgs>
{
    IMapActualCameraChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapActualCameraChangingEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangingEventArgs2>
{
    IMapActualCameraChangingEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapBillboard :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboard>
{
    IMapBillboard(std::nullptr_t = nullptr) noexcept {}
};

struct IMapBillboardFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboardFactory>
{
    IMapBillboardFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapBillboardStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboardStatics>
{
    IMapBillboardStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapCamera :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCamera>
{
    IMapCamera(std::nullptr_t = nullptr) noexcept {}
};

struct IMapCameraFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCameraFactory>
{
    IMapCameraFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapContextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapContextRequestedEventArgs>
{
    IMapContextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl>
{
    IMapControl(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl2>
{
    IMapControl2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControl3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl3>
{
    IMapControl3(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControl4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl4>
{
    IMapControl4(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControl5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl5>
{
    IMapControl5(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlBusinessLandmarkClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkClickEventArgs>
{
    IMapControlBusinessLandmarkClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlBusinessLandmarkPointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkPointerEnteredEventArgs>
{
    IMapControlBusinessLandmarkPointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlBusinessLandmarkPointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkPointerExitedEventArgs>
{
    IMapControlBusinessLandmarkPointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlBusinessLandmarkRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkRightTappedEventArgs>
{
    IMapControlBusinessLandmarkRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlDataHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelper>
{
    IMapControlDataHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlDataHelper2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelper2>
{
    IMapControlDataHelper2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlDataHelperFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelperFactory>
{
    IMapControlDataHelperFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics>
{
    IMapControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics2>
{
    IMapControlStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics4>
{
    IMapControlStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics5>
{
    IMapControlStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlTransitFeatureClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeatureClickEventArgs>
{
    IMapControlTransitFeatureClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlTransitFeaturePointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeaturePointerEnteredEventArgs>
{
    IMapControlTransitFeaturePointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlTransitFeaturePointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeaturePointerExitedEventArgs>
{
    IMapControlTransitFeaturePointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapControlTransitFeatureRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeatureRightTappedEventArgs>
{
    IMapControlTransitFeatureRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapCustomExperience :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperience>
{
    IMapCustomExperience(std::nullptr_t = nullptr) noexcept {}
};

struct IMapCustomExperienceChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperienceChangedEventArgs>
{
    IMapCustomExperienceChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapCustomExperienceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperienceFactory>
{
    IMapCustomExperienceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElement>
{
    IMapElement(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElement2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElement2>
{
    IMapElement2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementClickEventArgs>
{
    IMapElementClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementFactory>
{
    IMapElementFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementPointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementPointerEnteredEventArgs>
{
    IMapElementPointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementPointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementPointerExitedEventArgs>
{
    IMapElementPointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementStatics>
{
    IMapElementStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapElementStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementStatics2>
{
    IMapElementStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIcon>
{
    IMapIcon(std::nullptr_t = nullptr) noexcept {}
};

struct IMapIcon2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIcon2>
{
    IMapIcon2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapIconStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIconStatics>
{
    IMapIconStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapIconStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIconStatics2>
{
    IMapIconStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapInputEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapInputEventArgs>
{
    IMapInputEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapItemsControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapItemsControl>
{
    IMapItemsControl(std::nullptr_t = nullptr) noexcept {}
};

struct IMapItemsControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapItemsControlStatics>
{
    IMapItemsControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapPolygon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygon>
{
    IMapPolygon(std::nullptr_t = nullptr) noexcept {}
};

struct IMapPolygon2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygon2>
{
    IMapPolygon2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapPolygonStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygonStatics>
{
    IMapPolygonStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapPolyline :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolyline>
{
    IMapPolyline(std::nullptr_t = nullptr) noexcept {}
};

struct IMapPolylineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolylineStatics>
{
    IMapPolylineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRightTappedEventArgs>
{
    IMapRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapRouteView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteView>
{
    IMapRouteView(std::nullptr_t = nullptr) noexcept {}
};

struct IMapRouteViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteViewFactory>
{
    IMapRouteViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapScene :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapScene>
{
    IMapScene(std::nullptr_t = nullptr) noexcept {}
};

struct IMapSceneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapSceneStatics>
{
    IMapSceneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapStyleSheet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapStyleSheet>
{
    IMapStyleSheet(std::nullptr_t = nullptr) noexcept {}
};

struct IMapStyleSheetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapStyleSheetStatics>
{
    IMapStyleSheetStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTargetCameraChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTargetCameraChangedEventArgs>
{
    IMapTargetCameraChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTargetCameraChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTargetCameraChangedEventArgs2>
{
    IMapTargetCameraChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileBitmapRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequest>
{
    IMapTileBitmapRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileBitmapRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequestDeferral>
{
    IMapTileBitmapRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileBitmapRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequestedEventArgs>
{
    IMapTileBitmapRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileDataSource>
{
    IMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileDataSourceFactory>
{
    IMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSource>
{
    IMapTileSource(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSourceFactory>
{
    IMapTileSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSourceStatics>
{
    IMapTileSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileUriRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequest>
{
    IMapTileUriRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileUriRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequestDeferral>
{
    IMapTileUriRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IMapTileUriRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequestedEventArgs>
{
    IMapTileUriRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IStreetsideExperience :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsideExperience>
{
    IStreetsideExperience(std::nullptr_t = nullptr) noexcept {}
};

struct IStreetsideExperienceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsideExperienceFactory>
{
    IStreetsideExperienceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IStreetsidePanorama :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsidePanorama>
{
    IStreetsidePanorama(std::nullptr_t = nullptr) noexcept {}
};

struct IStreetsidePanoramaStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsidePanoramaStatics>
{
    IStreetsidePanoramaStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
