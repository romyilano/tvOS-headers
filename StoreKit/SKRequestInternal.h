//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKPaymentQueueClient, SKXPCConnection;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject
{
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id <SKRequestDelegate> _delegate;
    long long _state;
}

- (void)dealloc;

@end
