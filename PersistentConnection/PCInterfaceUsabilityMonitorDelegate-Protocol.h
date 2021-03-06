//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSObject;
@protocol PCInterfaceUsabilityMonitorProtocol;

@protocol PCInterfaceUsabilityMonitorDelegate <NSObject>

@optional
- (void)interfaceRadioHotnessChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceReachabilityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceLinkQualityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1 previousLinkQuality:(int)arg2;
@end

