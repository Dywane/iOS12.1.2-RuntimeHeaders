/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSession : NSObject {
    bool  _AWDLDisabled;
    struct OpaqueAGPSession { } * _agpSession;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _connectionPendingPeerEvents;
    <MCSessionDelegate> * _delegate;
    long long  _encryptionPreference;
    unsigned int  _gckPID;
    struct OpaqueGCKSession { } * _gckSession;
    unsigned long long  _maxPeers;
    MCPeerID * _myPeerID;
    NSMutableDictionary * _peerIDMap;
    NSMutableDictionary * _peerStates;
    bool  _preferNCMOverEthernet;
    <MCSessionPrivateDelegate> * _privateDelegate;
    NSArray * _securityIdentity;
    NSString * _sessionID;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (getter=isAWDLDisabled, nonatomic) bool AWDLDisabled;
@property (nonatomic) struct OpaqueAGPSession { }*agpSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSArray *connectedPeers;
@property (nonatomic, retain) NSMutableDictionary *connectionPendingPeerEvents;
@property (nonatomic) <MCSessionDelegate> *delegate;
@property (nonatomic, readonly) long long encryptionPreference;
@property (nonatomic) unsigned int gckPID;
@property (nonatomic) struct OpaqueGCKSession { }*gckSession;
@property (nonatomic) unsigned long long maxPeers;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (nonatomic, retain) NSMutableDictionary *peerIDMap;
@property (nonatomic, retain) NSMutableDictionary *peerStates;
@property (nonatomic) bool preferNCMOverEthernet;
@property (nonatomic) <MCSessionPrivateDelegate> *privateDelegate;
@property (nonatomic, readonly) NSArray *securityIdentity;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)stringForMCSessionSendDataMode:(long long)arg1;
+ (id)stringForSessionState:(long long)arg1;

- (struct OpaqueAGPSession { }*)agpSession;
- (id)callbackQueue;
- (void)cancelConnectPeer:(id)arg1;
- (void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)closeDirectConnectionsWithPeer:(id)arg1;
- (void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2;
- (long long)connectedInterfacesForPeer:(id)arg1;
- (id)connectedPeers;
- (id)connectionPendingPeerEvents;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)disconnect;
- (long long)encryptionPreference;
- (unsigned int)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (id)init;
- (id)initWithPeer:(id)arg1;
- (id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3;
- (bool)isAWDLDisabled;
- (bool)isEncryptionPreferenceCompatible:(long long)arg1;
- (void)logSessionInfo;
- (unsigned long long)maxPeers;
- (id)myPeerID;
- (void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)peerDidDeclineInvitation:(id)arg1;
- (id)peerIDMap;
- (id)peerStates;
- (bool)preferNCMOverEthernet;
- (id)privateDelegate;
- (id)securityIdentity;
- (bool)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id*)arg4;
- (id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)sessionID;
- (void)setAWDLDisabled:(bool)arg1;
- (void)setAgpSession:(struct OpaqueAGPSession { }*)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnectionPendingPeerEvents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGckPID:(unsigned int)arg1;
- (void)setGckSession:(struct OpaqueGCKSession { }*)arg1;
- (void)setHeartbeatTimeout:(unsigned long long)arg1;
- (void)setICETimeoutForced:(bool)arg1;
- (void)setMaxPeers:(unsigned long long)arg1;
- (void)setPeerIDMap:(id)arg1;
- (void)setPeerStates:(id)arg1;
- (void)setPreferNCMOverEthernet:(bool)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)startConnectionWithIndirectPID:(unsigned int)arg1;
- (id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3;
- (unsigned long long)stateHandle;
- (id)stringForEncryptionPreference:(long long)arg1;
- (void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 shouldTriggerCancelProgress:(bool)arg6;
- (void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 shouldTriggerCancelProgress:(bool)arg5;
- (void)syncCloseStreamsForPeer:(id)arg1;
- (void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2;
- (unsigned long long)syncConnectedPeersCount;
- (id)syncDetailedDescription;
- (void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)syncHandleNetworkEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 pid:(unsigned int)arg2 freeEventWhenDone:(bool*)arg3;
- (void)syncHandleXDataDataPacket:(char *)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4;
- (void)syncLogConnectedPeers;
- (void)syncLogMaxConnectedPeers;
- (void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(bool)arg3;
- (id)syncQueue;
- (void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg1 connectionBlob:(id)arg2;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg1;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg1 withRequestID:(unsigned int)arg2 streamID:(unsigned int)arg3;
- (void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(bool)arg4;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)syncStateCapture;

@end
