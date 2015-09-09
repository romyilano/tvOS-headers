//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CLTilesManagerClient : NSObject
{
    NSObject<OS_xpc_object> *fXpcConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    NSDictionary *fNotificationHandlers;
}

+ (id)sharedClient;
+ (void)initialize;
- (_Bool)unregisterFrom:(id)arg1;
- (_Bool)registerTo:(id)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(_Bool)arg2;
- (_Bool)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)onNotificationReceived:(id)arg1;
- (void)reconnect;

@end
