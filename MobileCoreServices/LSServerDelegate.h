//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSDXPCServer, LSDatabaseBuilder, LSInstallProgressDelegate;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface LSServerDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcListenerQueue;
    NSObject<OS_dispatch_queue> *_databaseAccessQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_xpc_object> *_listenerArray;
    unsigned char _runAsRoot;
    int _msgsReceived;
    LSDXPCServer *_server;
    LSDatabaseBuilder *_dbBuilder;
    LSInstallProgressDelegate *_progressDelegate;
}

- (void)dispatchMessage:(id)arg1 withConnection:(id)arg2;
- (void)dispatchXPCEvent:(id)arg1;
- (void)beginListening;
- (void)languagePrefChanged;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 asRoot:(unsigned char)arg2;

@end
