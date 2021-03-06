//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/NSCacheDelegate-Protocol.h>
#import <Parsec/NSFastEnumeration-Protocol.h>

@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface PRSCache : NSObject <NSCacheDelegate, NSFastEnumeration>
{
    NSMutableOrderedSet *_cache;
    NSMutableSet *_observers;
}

- (void).cxx_destruct;
- (id)cachedResultSetForQuery:(id)arg1;
- (id)copyCachedResult:(id)arg1;
- (void)prune;
- (long long)resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2;
- (void)removeObjects:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)shrink;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

