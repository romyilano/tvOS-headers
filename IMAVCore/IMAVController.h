//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject
{
    _Bool _blockMultipleIncomingInvitations;
    _Bool _blockOutgoingInvitationsDuringCall;
    _Bool _blockIncomingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool blockIncomingInvitationsDuringCall; // @synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall;
@property(nonatomic) _Bool blockOutgoingInvitationsDuringCall; // @synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall;
@property(nonatomic) _Bool blockMultipleIncomingInvitations; // @synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations;
@property(retain, nonatomic) NSMutableArray *_delegates; // @synthesize _delegates;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1;
- (void)_receivedPendingVCRequests;
- (void)_receivedPendingACRequests;
@property(readonly, nonatomic) _Bool _ready;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
@property(readonly, nonatomic) _Bool microphoneCapable;
@property(readonly, nonatomic) _Bool cameraCapable;
@property(readonly, nonatomic) _Bool hasRunningConference;
@property(readonly, nonatomic) _Bool hasActiveConference;
@property(readonly, nonatomic) _Bool microphoneConnected;
@property(readonly, nonatomic) _Bool cameraConnected;
- (void)updateActiveConference;
- (void)setHasActiveConference:(_Bool)arg1;
- (void)setHasRunningConference:(_Bool)arg1;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (void)_dumpCaps;
@property(nonatomic) id <IMAVControllerDelegate> delegate;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, retain, nonatomic) NSArray *delegates;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (id)init;
- (void)setupIMAVController;
- (_Bool)_shouldRunACConferences;
- (_Bool)_shouldObserveConferences;
- (_Bool)_shouldRunConferences;

@end

