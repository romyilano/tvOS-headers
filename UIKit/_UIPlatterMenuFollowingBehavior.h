//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDynamicItemBehavior.h>

@protocol UIDynamicItem;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuFollowingBehavior : UIDynamicItemBehavior
{
    id <UIDynamicItem> _item;
    id <UIDynamicItem> _followingItem;
}

- (void).cxx_destruct;
- (void)willMoveToAnimator:(id)arg1;
- (id)initWithItem:(id)arg1 followingItem:(id)arg2;

@end

