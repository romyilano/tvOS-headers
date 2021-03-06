//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSceneLayer, FBSceneLayerManager;

@protocol FBSceneLayerManagerObserver <NSObject>

@optional
- (void)sceneLayerManager:(FBSceneLayerManager *)arg1 didRepositionLayer:(FBSceneLayer *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)sceneLayerManagerDidStopTrackingLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(FBSceneLayerManager *)arg1;
@end

