//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMMessageDispatcher.h>

@class HMDAdminEnforcementMessageFilter, HMDHomeManager, HMDIDSMessageTransport, HMDIdentityRegistry, HMDMessageFilterChain, HMDNotificationRelay, HMDSecureSessionNotifications, NSArray, NSMutableDictionary;

@interface HMDIDSMessageDispatcher : HMMessageDispatcher
{
    HMMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remoteGateways;
    HMDMessageFilterChain *_msgFilterChain;
    HMDAdminEnforcementMessageFilter *_adminMsgFilter;
    NSMutableDictionary *_activeClientSecureSessions;
    NSMutableDictionary *_activeServerSecureSessions;
    HMDIdentityRegistry *_identityRegistry;
    HMDNotificationRelay *_notificationRelay;
    HMMessageDispatcher *_notificationDispatcher;
    HMDIDSMessageTransport *_idsProxyTransport;
    HMDHomeManager *_homeManager;
    NSMutableDictionary *_currentHomeConfigurations;
    HMDSecureSessionNotifications *_sessionNotifications;
}

+ (_Bool)isWhitelistedLocalMessage:(id)arg1;
@property(retain, nonatomic) HMDSecureSessionNotifications *sessionNotifications; // @synthesize sessionNotifications=_sessionNotifications;
@property(retain, nonatomic) NSMutableDictionary *currentHomeConfigurations; // @synthesize currentHomeConfigurations=_currentHomeConfigurations;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) __weak HMDIDSMessageTransport *idsProxyTransport; // @synthesize idsProxyTransport=_idsProxyTransport;
@property(retain, nonatomic) HMMessageDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property(retain, nonatomic) HMDNotificationRelay *notificationRelay; // @synthesize notificationRelay=_notificationRelay;
@property(retain, nonatomic) HMDIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) NSMutableDictionary *activeServerSecureSessions; // @synthesize activeServerSecureSessions=_activeServerSecureSessions;
@property(retain, nonatomic) NSMutableDictionary *activeClientSecureSessions; // @synthesize activeClientSecureSessions=_activeClientSecureSessions;
@property(retain, nonatomic) HMDAdminEnforcementMessageFilter *adminMsgFilter; // @synthesize adminMsgFilter=_adminMsgFilter;
@property(retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(retain, nonatomic) HMMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
- (void).cxx_destruct;
- (void)_handleSecureClientMessage:(id)arg1 fromID:(id)arg2;
- (void)_handleSecureServerMessage:(id)arg1 fromID:(id)arg2;
- (_Bool)_handleInternalIDSMessage:(id)arg1 fromID:(id)arg2;
- (_Bool)_haveAllCapabilities:(id)arg1;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (_Bool)_checkAuthorizationForMessage:(id)arg1 errorReason:(id *)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)_setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;
- (void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (_Bool)_checkTransportProtocol;
- (void)disableRemoteSessionForAddresses:(id)arg1;
- (void)_sendSecureMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (_Bool)_watchCompanionCommunication:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)setRemoteAccessPeer:(id)arg1 forHome:(id)arg2;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (id)_reachableWatchDevices;
@property(readonly, nonatomic) NSArray *reachableWatchDevices;
- (id)_reachableCompanionDevices;
@property(readonly, nonatomic) NSArray *reachableCompanionDevices;
- (id)_pairedCompanionDevices;
- (id)pairedCompanionDevices;
- (id)_pairedWatchDevices;
@property(readonly, nonatomic) NSArray *pairedWatchDevices;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)updateLocalAdministratorName;
- (void)removeHome:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
@property(readonly, nonatomic) NSArray *transientDevices;
@property(readonly, nonatomic) NSArray *residentDevices;
@property(readonly, nonatomic, getter=isAccountActive) _Bool accountActive;
- (id)initWithIDSTransport:(id)arg1 idsProxyTransport:(id)arg2 messageFilterChain:(id)arg3 identityRegistry:(id)arg4 notificationRelayDispatcher:(id)arg5;

@end
