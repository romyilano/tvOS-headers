//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/_GCMicroGamepad.h>

#import <GameController/DigitizerValueChangedDelegate-Protocol.h>
#import <GameController/_GCACHomeButtonDelegate-Protocol.h>

@class GCControllerDirectionPad, GCMotion, NSDate, NSString, _GCACHomeButton;

@interface _GCB239RemoteControllerProfile : _GCMicroGamepad <_GCACHomeButtonDelegate, DigitizerValueChangedDelegate>
{
    _GCACHomeButton *_acHome;
    GCMotion *_motion;
    double _windowX;
    double _windowY;
    double _windowSize;
    double _deadzoneSize;
    double _windowBufferSize[4];
    unsigned int _digitizerTouchState;
    unsigned int _sampleCount;
    unsigned int _accumInputSampleCount;
    double _prevLogTime;
    int _orientation;
    int _candidateOrientation;
    NSDate *_candidateOrientationTimestamp;
}

+ (int)updateDevice:(struct __IOHIDDevice *)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(_Bool)arg3;
- (void).cxx_destruct;
- (void)setAllowsRotation:(_Bool)arg1;
- (void)toggleSuspendResume;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (void)initCommon:(id)arg1;
- (void)dealloc;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4;
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double *)arg3 outYInWindow:(double *)arg4;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4;
- (void)processOrientationData:(id)arg1;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (unsigned int)sampleRate;
- (void)set_motion:(id)arg1;
- (id)motion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GCControllerDirectionPad *dpad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
