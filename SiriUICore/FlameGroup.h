//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlameGroup : NSObject
{
    _Bool _isAura;
    _Bool _isDyingOff;
    float _stateTime;
    float _zTime;
    float _globalAlpha;
    float _transitionPhase;
    float *_transitionPhasePtr;
    // Error parsing type: ^, name: _stateModifiersPtr
    // Error parsing type: , name: _stateModifiers
}

@property(nonatomic) _Bool isDyingOff; // @synthesize isDyingOff=_isDyingOff;
@property(nonatomic) _Bool isAura; // @synthesize isAura=_isAura;
// Error parsing type for property stateModifiersPtr:
// Property attributes: T^,N,V_stateModifiersPtr

// Error parsing type for property stateModifiers:
// Property attributes: T,N,V_stateModifiers

@property(nonatomic) float *transitionPhasePtr; // @synthesize transitionPhasePtr=_transitionPhasePtr;
@property(nonatomic) float transitionPhase; // @synthesize transitionPhase=_transitionPhase;
@property(nonatomic) float globalAlpha; // @synthesize globalAlpha=_globalAlpha;
@property(nonatomic) float zTime; // @synthesize zTime=_zTime;
@property(nonatomic) float stateTime; // @synthesize stateTime=_stateTime;
- (id)init;

@end
