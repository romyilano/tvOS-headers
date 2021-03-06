//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVStackViewController, UIView, UIViewController;

@protocol TVStackViewControllerDataSource <NSObject>
- (double)stackViewController:(TVStackViewController *)arg1 heightForSection:(long long)arg2;
- (UIViewController *)stackViewController:(TVStackViewController *)arg1 viewControllerForSection:(long long)arg2;
- (long long)numberOfSectionsInStackViewController:(TVStackViewController *)arg1;

@optional
- (void)stackViewController:(TVStackViewController *)arg1 didEndDisplayingViewController:(UIViewController *)arg2 section:(long long)arg3;
- (UIView *)stackViewController:(TVStackViewController *)arg1 headerViewForSection:(long long)arg2;
- (double)stackViewController:(TVStackViewController *)arg1 heightForHeaderInSection:(long long)arg2;
@end

