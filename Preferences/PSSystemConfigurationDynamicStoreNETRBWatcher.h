//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject
{
    struct __CFRunLoopSource *_scRunLoopSource;
    struct __SCDynamicStore *_scDynamicStore;
}

+ (id)sharedManager;
- (void)sendStateUpdate;
- (void)dealloc;
- (id)init;

@end

