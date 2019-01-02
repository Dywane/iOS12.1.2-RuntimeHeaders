/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDConnectionProxy : HMFObject <HMDaemonConnection> {
    bool  _activated;
    HMDApplicationRegistry * _appRegistry;
    NSString * _clientName;
    bool  _entitledForAPIAccess;
    bool  _entitledForBackgroundMode;
    unsigned long long  _entitlements;
    NSDictionary * _privateAccessEntitlement;
    HMDProcessInfo * _processInfo;
    HMFMessageDispatcher * _recvDispatcher;
    HMDXPCRequestTracker * _requestTracker;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) bool activated;
@property (nonatomic, readonly) NSSet *activeRequests;
@property (nonatomic) HMDApplicationRegistry *appRegistry;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (getter=isAuthorizedForHomeDataAccess, nonatomic, readonly) bool authorizedForHomeDataAccess;
@property (getter=isAuthorizedForLocationAccess, nonatomic, readonly) bool authorizedForLocationAccess;
@property (getter=isAuthorizedForMicrophoneAccess, nonatomic, readonly) bool authorizedForMicrophoneAccess;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *effectiveLocationBundleIdentifier;
@property (getter=isEntitledForAPIAccess, nonatomic, readonly) bool entitledForAPIAccess;
@property (getter=isEntitledForBackgroundMode, nonatomic, readonly) bool entitledForBackgroundMode;
@property (getter=isEntitledForSPIAccess, readonly) bool entitledForSPIAccess;
@property (readonly) unsigned long long entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *privateAccessEntitlement;
@property (nonatomic) HMDProcessInfo *processInfo;
@property (nonatomic, retain) HMFMessageDispatcher *recvDispatcher;
@property (nonatomic, readonly) id remoteProxy;
@property (nonatomic, readonly) HMDXPCRequestTracker *requestTracker;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) NSXPCConnection *xpcConnection;

+ (unsigned long long)entitlementsForConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_displayName;
- (id)_extractBundleIdentifier;
- (void)_notifyOfNewIncomingClientMessage;
- (void)activate;
- (bool)activated;
- (id)activeRequests;
- (id)appRegistry;
- (id)applicationBundleIdentifier;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)clientName;
- (int)clientPid;
- (id)companionAppBundleIdentifier;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)effectiveLocationBundleIdentifier;
- (unsigned long long)entitlements;
- (id)extractTeamIdentifier;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5;
- (bool)isAuthorizedForHomeDataAccess;
- (bool)isAuthorizedForLocationAccess;
- (bool)isAuthorizedForMicrophoneAccess;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForBackgroundMode;
- (bool)isEntitledForSPIAccess;
- (id)name;
- (id)privateAccessEntitlement;
- (id)processInfo;
- (void)recheckinWithName:(id)arg1;
- (id)recvDispatcher;
- (id)remoteProxy;
- (id)requestTracker;
- (void)setActivated:(bool)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setPrivateAccessEntitlement:(id)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldSendResponseForMessageIdentifier:(id)arg1;
- (id)teamIdentifier;
- (id)workQueue;
- (id)xpcConnection;

@end
