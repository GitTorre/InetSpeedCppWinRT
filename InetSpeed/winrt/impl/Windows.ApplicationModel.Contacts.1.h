// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Text.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.ViewManagement.0.h"
#include "Windows.ApplicationModel.Contacts.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Contacts {

struct IAggregateContactManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAggregateContactManager>
{
    IAggregateContactManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAggregateContactManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAggregateContactManager2>
{
    IAggregateContactManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact>
{
    IContact(std::nullptr_t = nullptr) noexcept {}
};

struct IContact2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact2>,
    impl::require<IContact2, Windows::ApplicationModel::Contacts::IContact>
{
    IContact2(std::nullptr_t = nullptr) noexcept {}
};

struct IContact3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact3>,
    impl::require<IContact3, Windows::ApplicationModel::Contacts::IContact, Windows::ApplicationModel::Contacts::IContact2>
{
    IContact3(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAddress>
{
    IContactAddress(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAnnotation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotation>
{
    IContactAnnotation(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAnnotation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotation2>
{
    IContactAnnotation2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAnnotationList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationList>
{
    IContactAnnotationList(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAnnotationStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationStore>
{
    IContactAnnotationStore(std::nullptr_t = nullptr) noexcept {}
};

struct IContactAnnotationStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationStore2>
{
    IContactAnnotationStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactBatch>
{
    IContactBatch(std::nullptr_t = nullptr) noexcept {}
};

struct IContactCardDelayedDataLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardDelayedDataLoader>,
    impl::require<IContactCardDelayedDataLoader, Windows::Foundation::IClosable>
{
    IContactCardDelayedDataLoader(std::nullptr_t = nullptr) noexcept {}
};

struct IContactCardOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardOptions>
{
    IContactCardOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IContactCardOptions2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardOptions2>,
    impl::require<IContactCardOptions2, Windows::ApplicationModel::Contacts::IContactCardOptions>
{
    IContactCardOptions2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChange>
{
    IContactChange(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeReader>
{
    IContactChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeTracker>
{
    IContactChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangedDeferral>
{
    IContactChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IContactChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangedEventArgs>
{
    IContactChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactConnectedServiceAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactConnectedServiceAccount>
{
    IContactConnectedServiceAccount(std::nullptr_t = nullptr) noexcept {}
};

struct IContactDate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDate>
{
    IContactDate(std::nullptr_t = nullptr) noexcept {}
};

struct IContactEmail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactEmail>
{
    IContactEmail(std::nullptr_t = nullptr) noexcept {}
};

struct IContactField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactField>
{
    IContactField(std::nullptr_t = nullptr) noexcept {}
};

struct IContactFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactFieldFactory>
{
    IContactFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IContactGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactGroup>
{
    IContactGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation>
{
    IContactInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInstantMessageField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInstantMessageField>,
    impl::require<IContactInstantMessageField, Windows::ApplicationModel::Contacts::IContactField>
{
    IContactInstantMessageField(std::nullptr_t = nullptr) noexcept {}
};

struct IContactInstantMessageFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInstantMessageFieldFactory>
{
    IContactInstantMessageFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IContactJobInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactJobInfo>
{
    IContactJobInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IContactLaunchActionVerbsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLaunchActionVerbsStatics>
{
    IContactLaunchActionVerbsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContactList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactList>
{
    IContactList(std::nullptr_t = nullptr) noexcept {}
};

struct IContactList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactList2>
{
    IContactList2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListSyncConstraints :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncConstraints>
{
    IContactListSyncConstraints(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManager>
{
    IContactListSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct IContactListSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManager2>
{
    IContactListSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactLocationField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLocationField>,
    impl::require<IContactLocationField, Windows::ApplicationModel::Contacts::IContactField>
{
    IContactLocationField(std::nullptr_t = nullptr) noexcept {}
};

struct IContactLocationFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLocationFieldFactory>
{
    IContactLocationFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerForUser>
{
    IContactManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerForUser2>
{
    IContactManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics>
{
    IContactManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics2>,
    impl::require<IContactManagerStatics2, Windows::ApplicationModel::Contacts::IContactManagerStatics>
{
    IContactManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics3>,
    impl::require<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics, Windows::ApplicationModel::Contacts::IContactManagerStatics2>
{
    IContactManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics2>::RequestStoreAsync;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::RequestStoreAsync;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics>::ShowContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::ShowContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics>::ShowDelayLoadedContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::ShowDelayLoadedContactCard;
};

struct IContactManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics4>
{
    IContactManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct IContactManagerStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics5>
{
    IContactManagerStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct IContactMatchReason :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactMatchReason>
{
    IContactMatchReason(std::nullptr_t = nullptr) noexcept {}
};

struct IContactName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactName>
{
    IContactName(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPanel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanel>
{
    IContactPanel(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPanelClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanelClosingEventArgs>
{
    IContactPanelClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPanelLaunchFullAppRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanelLaunchFullAppRequestedEventArgs>
{
    IContactPanelLaunchFullAppRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPhone :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPhone>
{
    IContactPhone(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker>
{
    IContactPicker(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker2>
{
    IContactPicker2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPicker3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker3>
{
    IContactPicker3(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerStatics>
{
    IContactPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContactQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptions>
{
    IContactQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IContactQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptionsFactory>
{
    IContactQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IContactQueryTextSearch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryTextSearch>
{
    IContactQueryTextSearch(std::nullptr_t = nullptr) noexcept {}
};

struct IContactReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactReader>
{
    IContactReader(std::nullptr_t = nullptr) noexcept {}
};

struct IContactSignificantOther :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactSignificantOther>
{
    IContactSignificantOther(std::nullptr_t = nullptr) noexcept {}
};

struct IContactSignificantOther2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactSignificantOther2>,
    impl::require<IContactSignificantOther2, Windows::ApplicationModel::Contacts::IContactSignificantOther>
{
    IContactSignificantOther2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore>
{
    IContactStore(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore2>,
    impl::require<IContactStore2, Windows::ApplicationModel::Contacts::IContactStore>
{
    IContactStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreNotificationTriggerDetails>
{
    IContactStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IContactWebsite :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactWebsite>
{
    IContactWebsite(std::nullptr_t = nullptr) noexcept {}
};

struct IContactWebsite2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactWebsite2>,
    impl::require<IContactWebsite2, Windows::ApplicationModel::Contacts::IContactWebsite>
{
    IContactWebsite2(std::nullptr_t = nullptr) noexcept {}
};

struct IFullContactCardOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFullContactCardOptions>
{
    IFullContactCardOptions(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] IKnownContactFieldStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownContactFieldStatics>
{
    IKnownContactFieldStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPinnedContactIdsQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactIdsQueryResult>
{
    IPinnedContactIdsQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPinnedContactManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactManager>
{
    IPinnedContactManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPinnedContactManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactManagerStatics>
{
    IPinnedContactManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
