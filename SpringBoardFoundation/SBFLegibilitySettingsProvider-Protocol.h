//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <NSObject>
@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;
@property(readonly, retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@end
