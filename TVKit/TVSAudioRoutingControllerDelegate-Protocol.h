//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/NSObject-Protocol.h>

@class TVSAudioRoute, TVSAudioRoutingController;

@protocol TVSAudioRoutingControllerDelegate <NSObject>
- (void)routingControllerAvailableRoutesDidChange:(TVSAudioRoutingController *)arg1;

@optional
- (void)routingControllerAlternateRoutesAvailableDidChange:(TVSAudioRoutingController *)arg1;
- (void)routingController:(TVSAudioRoutingController *)arg1 volumeAvailablilityDidChangeForRoute:(TVSAudioRoute *)arg2;
@end
