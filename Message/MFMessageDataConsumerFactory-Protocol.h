//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class NSString;
@protocol MFCollectingDataConsumer;

@protocol MFMessageDataConsumerFactory <NSObject>
- (id <MFCollectingDataConsumer>)dataConsumerForPart:(NSString *)arg1;
@end

