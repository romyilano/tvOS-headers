//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSXPCConnection, PSProgressClient;
@protocol OS_dispatch_queue, PSYProgressObserverDelegate;

@interface PSYProgressObserver : NSObject
{
    NSMutableDictionary *_failedActivities;
    id <PSYProgressObserverDelegate> _delegate;
    long long _progressObserverState;
    NSString *_activityLabel;
    double _activityProgress;
    double _totalProgress;
    NSDictionary *_activityErrors;
    PSProgressClient *_progressClient;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) PSProgressClient *progressClient; // @synthesize progressClient=_progressClient;
@property(readonly, copy, nonatomic) NSDictionary *activityErrors; // @synthesize activityErrors=_activityErrors;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(nonatomic) double activityProgress; // @synthesize activityProgress=_activityProgress;
@property(retain, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(readonly, nonatomic) long long progressObserverState; // @synthesize progressObserverState=_progressObserverState;
@property(nonatomic) __weak id <PSYProgressObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetProgress;
- (void)setProgressObserverState:(long long)arg1;
- (void)_connectionInterrupted;
- (void)_scheduledJobsDidComplete;
- (void)_currentActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
- (void)_setCurrentActivityProgress:(float)arg1 totalProgress:(float)arg2;
- (void)_updateState;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

