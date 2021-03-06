//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKChallenge, GKPlayer;

@protocol GKChallengeListener <NSObject>

@optional
- (void)player:(GKPlayer *)arg1 issuedChallengeWasCompleted:(GKChallenge *)arg2 byFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didCompleteChallenge:(GKChallenge *)arg2 issuedByFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didReceiveChallenge:(GKChallenge *)arg2;
- (void)player:(GKPlayer *)arg1 wantsToPlayChallenge:(GKChallenge *)arg2;
@end

