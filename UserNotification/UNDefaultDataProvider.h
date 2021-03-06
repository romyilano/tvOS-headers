//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/BBRemoteDataProvider-Protocol.h>
#import <UserNotification/SBPushStoreObserver-Protocol.h>

@class BBDataProviderProxy, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface UNDefaultDataProvider : NSObject <SBPushStoreObserver, BBRemoteDataProvider>
{
    NSString *_sectionID;
    NSMutableArray *_publisherBulletinIDs;
    NSString *_displayName;
    BBDataProviderProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct CGSize)_sizeFromSizeConstraint:(id)arg1 originalSize:(struct CGSize)arg2;
@property(retain, nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
- (void)pushStoreClearedNotifications;
- (void)pushStoreNotificationsDidChange;
@property(retain, nonatomic) NSSet *categories;
- (_Bool)syncsBulletinDismissal;
- (void)noteSectionInfoDidChange:(id)arg1;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (void)_cleanupMigrationFromBrightonWithLastClearedDate:(id)arg1;
- (id)_latestBulletinInSet:(id)arg1;
- (long long)_bbActionBehaviorFromUIBehavior:(unsigned long long)arg1;
- (unsigned long long)_bbActivationModeFromUIActivationMode:(unsigned long long)arg1;
- (id)_bbActionFromUIUserNotificationAction:(id)arg1;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)_actionsForCategoryIdentifier:(id)arg1 context:(unsigned long long)arg2;
- (id)_supplementaryActionsForPushStoreNotification:(id)arg1 context:(unsigned long long)arg2;
- (id)_actionsForNormalLayoutFromPushStoreNotification:(id)arg1;
- (id)_actionsForCompactLayoutFromPushStoreNotification:(id)arg1;
- (id)_defaultActionWithTitle:(id)arg1;
- (id)_bulletinForNotification:(id)arg1;
- (id)_publisherBulletinIDForNotification:(id)arg1;
- (id)sectionDisplayName;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)_sortKey;
- (_Bool)_isPushDataProvider;
- (void)invalidate;
- (void)uninstall;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)initWithSectionID:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)_imageForRecordID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

