﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Composition.1.h"
#include "Windows.UI.Xaml.1.h"
#include "Windows.UI.Xaml.Media.1.h"
#include "Windows.UI.Xaml.Shapes.1.h"

namespace winrt {

namespace Windows::UI::Xaml::Shapes {

struct Ellipse :
    Windows::UI::Xaml::Shapes::IEllipse,
    impl::base<Ellipse, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Ellipse, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Ellipse(std::nullptr_t) noexcept {}
    Ellipse();
};

struct Line :
    Windows::UI::Xaml::Shapes::ILine,
    impl::base<Line, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Line, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Line(std::nullptr_t) noexcept {}
    Line();
    static Windows::UI::Xaml::DependencyProperty X1Property();
    static Windows::UI::Xaml::DependencyProperty Y1Property();
    static Windows::UI::Xaml::DependencyProperty X2Property();
    static Windows::UI::Xaml::DependencyProperty Y2Property();
};

struct Path :
    Windows::UI::Xaml::Shapes::IPath,
    impl::base<Path, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Path, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Path(std::nullptr_t) noexcept {}
    Path();
    static Windows::UI::Xaml::DependencyProperty DataProperty();
};

struct Polygon :
    Windows::UI::Xaml::Shapes::IPolygon,
    impl::base<Polygon, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Polygon, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Polygon(std::nullptr_t) noexcept {}
    Polygon();
    static Windows::UI::Xaml::DependencyProperty FillRuleProperty();
    static Windows::UI::Xaml::DependencyProperty PointsProperty();
};

struct Polyline :
    Windows::UI::Xaml::Shapes::IPolyline,
    impl::base<Polyline, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Polyline, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Polyline(std::nullptr_t) noexcept {}
    Polyline();
    static Windows::UI::Xaml::DependencyProperty FillRuleProperty();
    static Windows::UI::Xaml::DependencyProperty PointsProperty();
};

struct Rectangle :
    Windows::UI::Xaml::Shapes::IRectangle,
    impl::base<Rectangle, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Rectangle, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>
{
    Rectangle(std::nullptr_t) noexcept {}
    Rectangle();
    static Windows::UI::Xaml::DependencyProperty RadiusXProperty();
    static Windows::UI::Xaml::DependencyProperty RadiusYProperty();
};

struct Shape :
    Windows::UI::Xaml::Shapes::IShape,
    impl::base<Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Shape, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::Shapes::IShape2>
{
    Shape(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty FillProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeMiterLimitProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeStartLineCapProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeEndLineCapProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeLineJoinProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeDashOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeDashCapProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeDashArrayProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
};

}

namespace impl {

}

}
