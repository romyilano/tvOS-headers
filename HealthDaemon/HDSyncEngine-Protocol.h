//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray;
@protocol HDSyncAnchorMap, HDSyncChange, HDSyncObjectCollection, HDSyncStore;

@protocol HDSyncEngine <NSObject>
- (void)resetStore:(id <HDSyncStore>)arg1;
- (_Bool)applyAcknowledgedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 resetNext:(_Bool)arg3 error:(id *)arg4;
- (_Bool)getReceivedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id *)arg3;
- (_Bool)applySyncChange:(id <HDSyncChange>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id *)arg3;
- (_Bool)applySyncObjectCollection:(id <HDSyncObjectCollection>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id *)arg3;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id <HDSyncStore>)arg2;
- (_Bool)synchronizeStore:(id <HDSyncStore>)arg1 withContext:(id)arg2 error:(id *)arg3;
@end
