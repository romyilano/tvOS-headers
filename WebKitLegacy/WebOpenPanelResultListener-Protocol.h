//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol WebOpenPanelResultListener <NSObject>
- (void)chooseFilenames:(NSArray *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilename:(NSString *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage *)arg3;
- (void)cancel;
- (void)chooseFilenames:(NSArray *)arg1;
- (void)chooseFilename:(NSString *)arg1;
@end

