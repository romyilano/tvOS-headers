//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/UIViewControllerTemplate.h>

#import <IBCocoaTouchToolFoundation/UITabBarDelegate-Protocol.h>

@class NSMutableArray, NSString, UITabBar;

@interface UITabBarControllerTemplate : UIViewControllerTemplate <UITabBarDelegate>
{
    UITabBar *tabBar;
    id delegate;
    NSMutableArray *viewControllers;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)viewControllers;
- (void)setViewControllers:(id)arg1;
@property(retain) UITabBar *tabBar;
- (void)syncTabBarItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

