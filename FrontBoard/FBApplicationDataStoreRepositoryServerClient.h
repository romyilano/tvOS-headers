//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBBasicSystemServiceFacilityClient.h>

@class NSMutableDictionary, NSObject, NSSet;
@protocol FBApplicationDataStoreRepositoryServerClientDelegate, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryServerClient : FBBasicSystemServiceFacilityClient
{
    NSSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeysPendingChangesByBundleID;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBApplicationDataStoreRepositoryServerClientDelegate> _delegate;
}

@property(nonatomic) id <FBApplicationDataStoreRepositoryServerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_sendValueChangedForObject:(id)arg1 key:(id)arg2 bundleID:(id)arg3;
- (void)_valueChanged:(id)arg1;
- (_Bool)_checkPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)clearPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)setPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)setPrefetchedKeys:(id)arg1 withDataStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithSystemServiceClient:(id)arg1;

@end
