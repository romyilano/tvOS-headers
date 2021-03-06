//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEUtilConfigurationClient.h>

#import <NetworkExtension/NSXPCListenerDelegate-Protocol.h>

@class NEVPNManager, NSMutableArray, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;
@protocol NEConfigurationCommandHandling;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate>
{
    _Bool _isServerMode;
    NSXPCListener *_listener;
    NEVPNManager *_currentManager;
    NSMutableArray *_createdManagers;
    NSMutableArray *_currentManagers;
    NSString *_targetAppBundleID;
    NSXPCConnection *_connection;
    id <NEConfigurationCommandHandling> _remoteObject;
}

@property(retain) id <NEConfigurationCommandHandling> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property _Bool isServerMode; // @synthesize isServerMode=_isServerMode;
@property(retain) NSString *targetAppBundleID; // @synthesize targetAppBundleID=_targetAppBundleID;
@property(retain) NSMutableArray *currentManagers; // @synthesize currentManagers=_currentManagers;
@property(retain) NSMutableArray *createdManagers; // @synthesize createdManagers=_createdManagers;
@property(retain) NEVPNManager *currentManager; // @synthesize currentManager=_currentManager;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (int)deleteKeychainItemWithPersistentReference:(id)arg1;
- (int)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id *)arg3;
- (_Bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProtocolWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)createConfigurationWithParameters:(id)arg1 errorStr:(id *)arg2;
- (id)protocolForParameters:(id)arg1;
- (_Bool)isAlwaysOn;
- (void)setOnDemandRules:(id)arg1;
- (id)onDemandRules;
- (void)setOnDemandEnabled:(_Bool)arg1;
- (_Bool)onDemandEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)handleConfigChanged:(id)arg1;
@property(readonly) NSXPCListenerEndpoint *listenerEndpoint;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initForServerMode;
- (id)initWithClientName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

