//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol HAPRelayPairingClientDelegate;

@interface HAPRelayPairingClient : NSObject
{
    id <HAPRelayPairingClientDelegate> _delegate;
    NSURL *_accessoryBagURL;
}

@property(readonly, nonatomic) NSURL *accessoryBagURL; // @synthesize accessoryBagURL=_accessoryBagURL;
@property __weak id <HAPRelayPairingClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2;
- (void)requestControllerIdentifier;
- (void)close;
- (void)open;

@end

