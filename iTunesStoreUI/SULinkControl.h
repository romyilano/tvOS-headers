//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel;

@interface SULinkControl : UIControl
{
    UILabel *_label;
    _Bool _shouldDrawUnderline;
    unsigned int _sizeIsDirty:1;
    long long _style;
}

@property(nonatomic) _Bool shouldDrawUnderline; // @synthesize shouldDrawUnderline=_shouldDrawUnderline;
- (void)_updateLabel;
- (id)_label;
- (void)sizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)dealloc;

@end

