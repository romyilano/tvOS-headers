//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol UIKeyInput;

@interface TVSearchKeyboard : UIView
{
    id <UIKeyInput> _delegate;
}

@property(nonatomic) __weak id <UIKeyInput> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

