//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSAccessibilitySettings : NSObject
{
    id _domainObserver;
    _Bool _voiceOverEnabled;
    _Bool _zoomEnabled;
    _Bool _boldTextEnabled;
    _Bool _reduceTransparencyEnabled;
    _Bool _highContrastFocusIndicatorsEnabled;
    _Bool _reduceMotionEnabled;
    _Bool _accessibilityInspectorEnabled;
    unsigned long long _accessibilityMenuOptions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateAccessibilitySettings;
- (void)_accessibilityInspectorEnabled:(id)arg1;
- (void)_reduceMotionEnabled:(id)arg1;
- (void)_reduceTransparencyEnabled:(id)arg1;
- (void)_boldTextEnabled:(id)arg1;
- (void)_zoomEnabled:(id)arg1;
- (void)_voiceOverEnabled:(id)arg1;
@property(nonatomic) _Bool accessibilityInspectorEnabled; // @synthesize accessibilityInspectorEnabled=_accessibilityInspectorEnabled;
@property(nonatomic) _Bool reduceMotionEnabled; // @synthesize reduceMotionEnabled=_reduceMotionEnabled;
@property(nonatomic) _Bool highContrastFocusIndicatorsEnabled; // @synthesize highContrastFocusIndicatorsEnabled=_highContrastFocusIndicatorsEnabled;
@property(nonatomic) _Bool reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled;
@property(nonatomic) _Bool boldTextEnabled; // @synthesize boldTextEnabled=_boldTextEnabled;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) unsigned long long accessibilityMenuOptions; // @synthesize accessibilityMenuOptions=_accessibilityMenuOptions;
@property(nonatomic) _Bool voiceOverEnabled; // @synthesize voiceOverEnabled=_voiceOverEnabled;
- (void)dealloc;
- (id)init;

@end
