//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, PLBBBulletin, PLBBPendingBulletinsBatch;

@protocol PLBBPendingBulletinsBatchDelegate <NSObject>
- (PLBBBulletin *)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 bulletinByMergingPersistedListWithBulletin:(PLBBBulletin *)arg2;
- (_Bool)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 shouldAllowAlertsFromContactWithEmail:(NSString *)arg2;
- (void)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 didProcessReadyBulletins:(NSArray *)arg2 stillPending:(_Bool)arg3;
@end

