//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface SBLaunchAppListener : NSObject
{
    NSString *_bundleIdentifier;
    CDUnknownBlockType _block;
    NSLock *_lock;
    _Bool _launched;
    int _notifyToken;
    int _notifyAppExitedToken;
    unsigned int _notifyRegisterStatus;
    unsigned int _notifyAppExitedStatus;
}

+ (_Bool)waitForLaunchThatSpringBoardKnowsAbout:(id)arg1 timeout:(double)arg2;
- (void)invalidate;
- (void)_didFailToLaunch;
- (void)_didLaunch;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;

@end

