//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSDictionary, NSError;
@protocol SBFDeviceLockModelDelegate;

@protocol SBFDeviceLockModel <NSObject>
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property(nonatomic) id <SBFDeviceLockModelDelegate> delegate;
- (void)performPasswordTest:(void (^)(_Bool *))arg1;
- (void)notePasscodeUnlockFailedWithError:(NSError *)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;

@optional
- (void)noteNewMkbDeviceLockStateInfo:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (void)clearBlockedState;
@end

