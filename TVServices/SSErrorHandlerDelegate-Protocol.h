//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/NSObject-Protocol.h>

@class SSErrorHandler, SSErrorHandlerSession;

@protocol SSErrorHandlerDelegate <NSObject>

@optional
- (void)errorHandler:(SSErrorHandler *)arg1 handleSession:(SSErrorHandlerSession *)arg2;
- (void)errorHandlerDidDisconnect:(SSErrorHandler *)arg1;
@end
