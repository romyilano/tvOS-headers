//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCache : NSObject
{
    CPBitmapStore *_store;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeImagesInGroup:(id)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (_Bool)_canCacheImages;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;

@end
