//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBMessageChannel.h>

@interface IBMessageReceiveChannel : IBMessageChannel
{
}

- (void)deliverMessage:(SEL)arg1 toTarget:(id)arg2 withArguments:(id)arg3 context:(id)arg4 result:(id *)arg5;
- (void)runBlockingReceiveLoopNotifyingQueue:(id)arg1 notifyingTarget:(id)arg2 context:(id)arg3;
- (void)notifyTarget:(id)arg1 onQueue:(id)arg2 ofShutdownWithError:(id)arg3;
- (_Bool)startupReturningError:(id *)arg1;

@end

