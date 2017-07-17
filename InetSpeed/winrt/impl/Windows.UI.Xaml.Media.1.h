// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Media.Playback.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Composition.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.UI.Xaml.Media.Media3D.0.h"
#include "Windows.UI.Xaml.Media.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Media {

struct IArcSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcSegment>
{
    IArcSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IArcSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcSegmentStatics>
{
    IArcSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBezierSegment>
{
    IBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBezierSegmentStatics>
{
    IBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapCache :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapCache>
{
    IBitmapCache(std::nullptr_t = nullptr) noexcept {}
};

struct IBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrush>
{
    IBrush(std::nullptr_t = nullptr) noexcept {}
};

struct IBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrushFactory>
{
    IBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrushStatics>
{
    IBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICacheMode :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICacheMode>
{
    ICacheMode(std::nullptr_t = nullptr) noexcept {}
};

struct ICacheModeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICacheModeFactory>
{
    ICacheModeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositeTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform>
{
    ICompositeTransform(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositeTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransformStatics>
{
    ICompositeTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTarget>
{
    ICompositionTarget(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionTargetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTargetStatics>
{
    ICompositionTargetStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IEllipseGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEllipseGeometry>
{
    IEllipseGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct IEllipseGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEllipseGeometryStatics>
{
    IEllipseGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFontFamily :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamily>
{
    IFontFamily(std::nullptr_t = nullptr) noexcept {}
};

struct IFontFamilyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamilyFactory>
{
    IFontFamilyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFontFamilyStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamilyStatics2>
{
    IFontFamilyStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGeneralTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransform>
{
    IGeneralTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IGeneralTransformFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransformFactory>
{
    IGeneralTransformFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeneralTransformOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransformOverrides>
{
    IGeneralTransformOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct IGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometry>
{
    IGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct IGeometryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryFactory>
{
    IGeometryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGeometryGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryGroup>
{
    IGeometryGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IGeometryGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryGroupStatics>
{
    IGeometryGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryStatics>
{
    IGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGradientBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrush>
{
    IGradientBrush(std::nullptr_t = nullptr) noexcept {}
};

struct IGradientBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrushFactory>
{
    IGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGradientBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrushStatics>
{
    IGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGradientStop :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientStop>
{
    IGradientStop(std::nullptr_t = nullptr) noexcept {}
};

struct IGradientStopStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientStopStatics>
{
    IGradientStopStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IImageBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageBrush>
{
    IImageBrush(std::nullptr_t = nullptr) noexcept {}
};

struct IImageBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageBrushStatics>
{
    IImageBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IImageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageSource>
{
    IImageSource(std::nullptr_t = nullptr) noexcept {}
};

struct IImageSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageSourceFactory>
{
    IImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILineGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineGeometry>
{
    ILineGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct ILineGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineGeometryStatics>
{
    ILineGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILineSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineSegment>
{
    ILineSegment(std::nullptr_t = nullptr) noexcept {}
};

struct ILineSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineSegmentStatics>
{
    ILineSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILinearGradientBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrush>
{
    ILinearGradientBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ILinearGradientBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrushFactory>
{
    ILinearGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILinearGradientBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrushStatics>
{
    ILinearGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILoadedImageSourceLoadCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSourceLoadCompletedEventArgs>
{
    ILoadedImageSourceLoadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILoadedImageSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSurface>
{
    ILoadedImageSurface(std::nullptr_t = nullptr) noexcept {}
};

struct ILoadedImageSurfaceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSurfaceStatics>
{
    ILoadedImageSurfaceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrix3DProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DProjection>
{
    IMatrix3DProjection(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrix3DProjectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DProjectionStatics>
{
    IMatrix3DProjectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrixHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixHelper>
{
    IMatrixHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrixHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixHelperStatics>
{
    IMatrixHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrixTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixTransform>
{
    IMatrixTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IMatrixTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixTransformStatics>
{
    IMatrixTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTransportControlsThumbnailRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsThumbnailRequestedEventArgs>
{
    IMediaTransportControlsThumbnailRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPartialMediaFailureDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPartialMediaFailureDetectedEventArgs>
{
    IPartialMediaFailureDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPartialMediaFailureDetectedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPartialMediaFailureDetectedEventArgs2>
{
    IPartialMediaFailureDetectedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IPathFigure :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathFigure>
{
    IPathFigure(std::nullptr_t = nullptr) noexcept {}
};

struct IPathFigureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathFigureStatics>
{
    IPathFigureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPathGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathGeometry>
{
    IPathGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct IPathGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathGeometryStatics>
{
    IPathGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPathSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathSegment>
{
    IPathSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IPathSegmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathSegmentFactory>
{
    IPathSegmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaneProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaneProjection>
{
    IPlaneProjection(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaneProjectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaneProjectionStatics>
{
    IPlaneProjectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyBezierSegment>
{
    IPolyBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyBezierSegmentStatics>
{
    IPolyBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyLineSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyLineSegment>
{
    IPolyLineSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyLineSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyLineSegmentStatics>
{
    IPolyLineSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyQuadraticBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyQuadraticBezierSegment>
{
    IPolyQuadraticBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IPolyQuadraticBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyQuadraticBezierSegmentStatics>
{
    IPolyQuadraticBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjection>
{
    IProjection(std::nullptr_t = nullptr) noexcept {}
};

struct IProjectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjectionFactory>
{
    IProjectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IQuadraticBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuadraticBezierSegment>
{
    IQuadraticBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct IQuadraticBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuadraticBezierSegmentStatics>
{
    IQuadraticBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRateChangedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRateChangedRoutedEventArgs>
{
    IRateChangedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRectangleGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangleGeometry>
{
    IRectangleGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct IRectangleGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangleGeometryStatics>
{
    IRectangleGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRenderingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRenderingEventArgs>
{
    IRenderingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRotateTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRotateTransform>
{
    IRotateTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IRotateTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRotateTransformStatics>
{
    IRotateTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IScaleTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleTransform>
{
    IScaleTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IScaleTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleTransformStatics>
{
    IScaleTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISkewTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISkewTransform>
{
    ISkewTransform(std::nullptr_t = nullptr) noexcept {}
};

struct ISkewTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISkewTransformStatics>
{
    ISkewTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISolidColorBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrush>
{
    ISolidColorBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ISolidColorBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrushFactory>
{
    ISolidColorBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISolidColorBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrushStatics>
{
    ISolidColorBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITileBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrush>
{
    ITileBrush(std::nullptr_t = nullptr) noexcept {}
};

struct ITileBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrushFactory>
{
    ITileBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITileBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrushStatics>
{
    ITileBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITimelineMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarker>
{
    ITimelineMarker(std::nullptr_t = nullptr) noexcept {}
};

struct ITimelineMarkerRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarkerRoutedEventArgs>
{
    ITimelineMarkerRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ITimelineMarkerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarkerStatics>
{
    ITimelineMarkerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform>
{
    ITransform(std::nullptr_t = nullptr) noexcept {}
};

struct ITransformFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformFactory>
{
    ITransformFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITransformGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformGroup>
{
    ITransformGroup(std::nullptr_t = nullptr) noexcept {}
};

struct ITransformGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformGroupStatics>
{
    ITransformGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITranslateTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITranslateTransform>
{
    ITranslateTransform(std::nullptr_t = nullptr) noexcept {}
};

struct ITranslateTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITranslateTransformStatics>
{
    ITranslateTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualTreeHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelper>
{
    IVisualTreeHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualTreeHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelperStatics>
{
    IVisualTreeHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualTreeHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelperStatics2>
{
    IVisualTreeHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlCompositionBrushBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBase>
{
    IXamlCompositionBrushBase(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlCompositionBrushBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseFactory>
{
    IXamlCompositionBrushBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlCompositionBrushBaseOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseOverrides>
{
    IXamlCompositionBrushBaseOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlCompositionBrushBaseProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseProtected>
{
    IXamlCompositionBrushBaseProtected(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlCompositionBrushBaseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseStatics>
{
    IXamlCompositionBrushBaseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLight>
{
    IXamlLight(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlLightFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightFactory>
{
    IXamlLightFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlLightOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightOverrides>
{
    IXamlLightOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlLightProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightProtected>
{
    IXamlLightProtected(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlLightStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightStatics>
{
    IXamlLightStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
