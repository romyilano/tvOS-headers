//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMediaStreamDelegate-Protocol.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, CALayer, NSDictionary, NSString, VCVideoStream;
@protocol AVCVideoStreamDelegate;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate>
{
    AVConferenceXPCClient *_connection;
    AVCMediaStreamConfig *_configuration;
    id <AVCVideoStreamDelegate> _delegate;
    id _weakSelf;
    VCVideoStream *_opaqueStream;
    CALayer *_localVideoLayer;
    CALayer *_localVideoSubLayer;
    CALayer *_remoteVideoLayer;
    CALayer *_remoteVideoSubLayer;
    NSDictionary *_capabilities;
}

@property(nonatomic) void *remoteVideoLayer; // @synthesize remoteVideoLayer=_remoteVideoLayer;
@property(nonatomic) void *localVideoLayer; // @synthesize localVideoLayer=_localVideoLayer;
@property(retain, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) long long direction;
- (id)getStats;
- (void)stop;
- (void)start;
- (void)configure:(id)arg1 error:(id *)arg2;
- (void)refreshLoggingParameters;
@property(nonatomic) id <AVCVideoStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)terminateSession;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
