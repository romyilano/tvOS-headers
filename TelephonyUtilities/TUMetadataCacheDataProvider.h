//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TUMetadataCacheDataProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSMutableDictionary *_providerCache;
}

@property(readonly, nonatomic) NSMutableDictionary *providerCache; // @synthesize providerCache=_providerCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
- (void).cxx_destruct;
- (id)description;
- (void)removeMetadataForKey:(id)arg1;
- (_Bool)isEmpty;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)metadataForDestinationID:(id)arg1;
- (id)init;

@end

