//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow
{
    UIAlertController *_alertController;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIAlertController *alertController;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;
- (id)init;

@end

