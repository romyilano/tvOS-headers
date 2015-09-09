//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, TVLDocument;

@interface UIViewController (TVLAdditions)
@property(copy, nonatomic) NSString *tvl_stateRestorationIdentifier;
- (void)tvl_saveStateWithCoder:(id)arg1;
- (void)tvl_restoreStateWithCoder:(id)arg1;
- (void)reloadPage;
@property(copy, nonatomic) NSString *onRefresh;
@property(nonatomic) float refreshInterval;
@property(retain, nonatomic) NSURL *originalURL;
@property(copy, nonatomic) NSString *onVolatileReload;
@property(nonatomic) _Bool isVolatile;
@property(nonatomic) _Bool wasEverActivated;
@property(retain, nonatomic) TVLDocument *feedDocument;
@end
