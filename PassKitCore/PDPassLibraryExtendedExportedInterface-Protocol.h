//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>
#import <PassKitCore/PDPassLibraryExportedInterface-Protocol.h>

@class CLLocation, NSArray, NSSet, NSString, PKCatalog, PKFieldProperties, PKPass;

@protocol PDPassLibraryExtendedExportedInterface <NSObject, PDPassLibraryExportedInterface>
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)enabledValueAddedServicePassesWithHandler:(void (^)(NSArray *))arg1;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 withHandler:(void (^)(_Bool))arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 withHandler:(void (^)(NSSet *))arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(void (^)(NSSet *, PKCatalog *))arg3;
- (void)getDiffForPassBulletinWithRecordID:(NSString *)arg1 handler:(void (^)(PKDiff *))arg2;
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 withHandler:(void (^)(_Bool))arg3;
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(_Bool))arg2;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 withHandler:(void (^)(NSSet *))arg3;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(NSSet *))arg2;
- (void)getRouteRelevantPassesForLocation:(CLLocation *)arg1 handler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)fetchCurrentRelevantPassInfo:(void (^)(NSArray *))arg1;
- (void)fetchHasCandidatePasses:(void (^)(_Bool))arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)logDelayExitReasons;
- (void)sendUserEditedCatalog:(PKCatalog *)arg1;
- (void)shuffleGroups:(int)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)noteAccountDeletedWithHandler:(void (^)(void))arg1;
- (void)noteAccountChangedWithHandler:(void (^)(void))arg1;
- (void)migrateDataWithHandler:(void (^)(_Bool))arg1;
- (void)notifyPassUsed:(PKPass *)arg1 fromSource:(long long)arg2;
- (void)noteObjectSharedWithUniqueID:(NSString *)arg1;
- (void)getArchivedObjectWithUniqueID:(NSString *)arg1 handler:(void (^)(NSData *))arg2;
- (void)updateObjectWithUniqueID:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(NSString *)arg2;
- (void)ingestPassDatas:(NSArray *)arg1 settings:(NSArray *)arg2 handler:(void (^)(void))arg3;
- (void)removePassesOfType:(unsigned long long)arg1 handler:(void (^)(void))arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(PKFieldProperties *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)getPassesWithUniqueIdentifiers:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)requestContactlessInterfaceSuppressionWithHandler:(void (^)(_Bool))arg1;
- (void)openPaymentUI:(void (^)(_Bool))arg1;
@end
