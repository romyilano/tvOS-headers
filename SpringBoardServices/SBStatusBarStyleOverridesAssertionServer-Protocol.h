//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol SBStatusBarStyleOverridesAssertionServer <NSObject>
- (void)setStatusString:(NSString *)arg1 forAssertionWithIdentifier:(NSString *)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(NSSet *)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(NSSet *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end
