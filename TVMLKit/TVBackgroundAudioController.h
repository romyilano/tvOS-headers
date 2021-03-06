//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSPlaybackState, TVSPlayer;

@interface TVBackgroundAudioController : NSObject
{
    TVSPlayer *_audioPlayer;
    unsigned long long _deactivationReasons;
    _Bool _deactivated;
    _Bool _pausedOnDeactivation;
}

+ (id)sharedBackgroundAudioController;
- (void).cxx_destruct;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)stop;
@property(readonly, nonatomic) TVSPlaybackState *state;
- (void)setCurrentMediaItemFromAudioElement:(id)arg1;
- (void)play;
- (void)pause;
- (void)dealloc;
- (id)init;

@end

