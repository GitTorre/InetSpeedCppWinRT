// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Interop.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.UI.Xaml.Data.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Data {

struct IBinding :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinding>
{
    IBinding(std::nullptr_t = nullptr) noexcept {}
};

struct IBinding2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinding2>
{
    IBinding2(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingBase>
{
    IBindingBase(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingBaseFactory>
{
    IBindingBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingExpression :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpression>
{
    IBindingExpression(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingExpressionBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionBase>
{
    IBindingExpressionBase(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingExpressionBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionBaseFactory>
{
    IBindingExpressionBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingExpressionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionFactory>
{
    IBindingExpressionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingFactory>
{
    IBindingFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingOperations>
{
    IBindingOperations(std::nullptr_t = nullptr) noexcept {}
};

struct IBindingOperationsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingOperationsStatics>
{
    IBindingOperationsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICollectionView :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionView>,
    impl::require<ICollectionView, Windows::Foundation::Collections::IIterable<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>>
{
    ICollectionView(std::nullptr_t = nullptr) noexcept {}
};

struct ICollectionViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewFactory>
{
    ICollectionViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICollectionViewGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewGroup>
{
    ICollectionViewGroup(std::nullptr_t = nullptr) noexcept {}
};

struct ICollectionViewSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewSource>
{
    ICollectionViewSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICollectionViewSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewSourceStatics>
{
    ICollectionViewSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentChangingEventArgs>
{
    ICurrentChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentChangingEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentChangingEventArgsFactory>
{
    ICurrentChangingEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomProperty :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomProperty>
{
    ICustomProperty(std::nullptr_t = nullptr) noexcept {}
};

struct ICustomPropertyProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomPropertyProvider>
{
    ICustomPropertyProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IItemIndexRange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemIndexRange>
{
    IItemIndexRange(std::nullptr_t = nullptr) noexcept {}
};

struct IItemIndexRangeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemIndexRangeFactory>
{
    IItemIndexRangeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IItemsRangeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsRangeInfo>,
    impl::require<IItemsRangeInfo, Windows::Foundation::IClosable>
{
    IItemsRangeInfo(std::nullptr_t = nullptr) noexcept {}
};

struct INotifyPropertyChanged :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyPropertyChanged>
{
    INotifyPropertyChanged(std::nullptr_t = nullptr) noexcept {}
};

struct IPropertyChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyChangedEventArgs>
{
    IPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPropertyChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyChangedEventArgsFactory>
{
    IPropertyChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRelativeSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRelativeSource>
{
    IRelativeSource(std::nullptr_t = nullptr) noexcept {}
};

struct IRelativeSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRelativeSourceFactory>
{
    IRelativeSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISelectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionInfo>
{
    ISelectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISupportIncrementalLoading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISupportIncrementalLoading>
{
    ISupportIncrementalLoading(std::nullptr_t = nullptr) noexcept {}
};

struct IValueConverter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueConverter>
{
    IValueConverter(std::nullptr_t = nullptr) noexcept {}
};

}

}
