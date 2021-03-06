//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVSpriteView : UIView
{
    UIView *_headerView;
    UIView *_imageView;
    _UIFloatingContentView *_floatingView;
    struct CGPoint _focusDirection;
}

@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (long long)_alignmentFromView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

