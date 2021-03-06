//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMHome, HMMessageDispatcher, HMThreadSafeMutableArrayCollection, NSArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMZone : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    NSUUID *_uuid;
    HMThreadSafeMutableArrayCollection *_currentRooms;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *currentRooms; // @synthesize currentRooms=_currentRooms;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)_handleZoneRenamedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_removeRoom:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)_unconfigure;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)init;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
- (void)setUuid:(id)arg1;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *rooms;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

