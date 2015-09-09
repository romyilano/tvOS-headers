//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PhotoLibrary/_UIBackdropViewObserver-Protocol.h>

@class UIImageView, _UIBackdropView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver>
{
    UIImageView *_titleMaskImageView;
    _UIBackdropView *_backdropView;
}

+ (id)autoLayoutCommonWallpaperButtonWithStyle:(long long)arg1;
+ (id)autoLayoutCommonWallpaperButton;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIImageView *titleMaskImageView; // @synthesize titleMaskImageView=_titleMaskImageView;
- (void)backdropViewDidChange:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setupBackdropView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
