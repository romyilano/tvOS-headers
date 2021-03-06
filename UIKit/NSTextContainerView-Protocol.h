//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>
#import <UIKit/NSTextLayoutOrientationProvider-Protocol.h>

@class NSDictionary;

@protocol NSTextContainerView <NSObject, NSTextLayoutOrientationProvider>

@optional
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (struct CGRect)desiredBoundsForTextContainerSize:(struct CGSize)arg1;
- (struct CGRect)textContainerFrameForBounds:(struct CGRect)arg1;
- (NSDictionary *)linkTextAttributes;
@end

