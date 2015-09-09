//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAlertControllerBackgroundView-Protocol.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView>
{
    UIVisualEffectView *backdropView;
    UIView *dimmingKnockoutView;
    long long _style;
}

@property long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property double cornerRadius;
- (void)setAlpha:(double)arg1;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_filterForBackdropStyle:(long long)arg1;
- (id)_visualEffectForStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
