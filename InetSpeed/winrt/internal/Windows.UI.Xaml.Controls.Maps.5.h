// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Controls::Maps {

template <typename D, typename ... Interfaces> struct CustomMapTileDataSourceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
{
    using composable = CustomMapTileDataSource;

protected:

    CustomMapTileDataSourceT()
    {
        get_activation_factory<CustomMapTileDataSource, ICustomMapTileDataSourceFactory>().CreateInstance(*this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct HttpMapTileDataSourceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
{
    using composable = HttpMapTileDataSource;

protected:

    HttpMapTileDataSourceT()
    {
        get_activation_factory<HttpMapTileDataSource, IHttpMapTileDataSourceFactory>().CreateInstance(*this, m_inner);
    }

    HttpMapTileDataSourceT(hstring_ref uriFormatString)
    {
        get_activation_factory<HttpMapTileDataSource, IHttpMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, *this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct LocalMapTileDataSourceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
{
    using composable = LocalMapTileDataSource;

protected:

    LocalMapTileDataSourceT()
    {
        get_activation_factory<LocalMapTileDataSource, ILocalMapTileDataSourceFactory>().CreateInstance(*this, m_inner);
    }

    LocalMapTileDataSourceT(hstring_ref uriFormatString)
    {
        get_activation_factory<LocalMapTileDataSource, ILocalMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, *this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct MapCustomExperienceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
{
    using composable = MapCustomExperience;

protected:

    MapCustomExperienceT()
    {
        get_activation_factory<MapCustomExperience, IMapCustomExperienceFactory>().CreateInstance(*this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct MapElementT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2>
{
    using composable = MapElement;

protected:

    MapElementT()
    {
        get_activation_factory<MapElement, IMapElementFactory>().CreateInstance(*this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct MapRouteViewT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapRouteView>
{
    using composable = MapRouteView;

protected:

    MapRouteViewT(const Windows::Services::Maps::MapRoute & route)
    {
        get_activation_factory<MapRouteView, IMapRouteViewFactory>().CreateInstanceWithMapRoute(route, *this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct MapTileDataSourceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
{
    using composable = MapTileDataSource;

protected:

    MapTileDataSourceT()
    {
        get_activation_factory<MapTileDataSource, IMapTileDataSourceFactory>().CreateInstance(*this, m_inner);
    }
};

template <typename D, typename ... Interfaces> struct MapTileSourceT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Controls::Maps::IMapTileSource>
{
    using composable = MapTileSource;

protected:

    MapTileSourceT()
    {
        get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstance(*this, m_inner);
    }

    MapTileSourceT(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource)
    {
        get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSource(dataSource, *this, m_inner);
    }

    MapTileSourceT(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange)
    {
        get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, *this, m_inner);
    }

    MapTileSourceT(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds)
    {
        get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, *this, m_inner);
    }

    MapTileSourceT(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds, int32_t tileSizeInPixels)
    {
        get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, *this, m_inner);
    }
};

}

}