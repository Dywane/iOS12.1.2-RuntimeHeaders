/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSession : NSObject <AVCRateControllerDelegate, RTCPReportProvider, VCConnectionChangedHandler, VCMediaStreamNotification, VCNetworkFeedbackControllerDelegate, VCRateControlMediaControllerDelegate, VCSecurityEventHandler, VCSessionParticipantDelegate, VCSessionParticipantStreamDelegate> {
    unsigned int  _basebandFlushTransactionID;
    VCSessionConfiguration * _configuration;
    VCControlChannelMultiWay * _controlChannel;
    <VCConnectionProtocol> * _currentActiveConnection;
    int  _currentconnectionType;
    <VCSessionDelegate> * _delegate;
    VCSessionDownlinkBandwidthAllocator * _downlinkBandwidthAllocator;
    AVCRateController * _downlinkRateController;
    unsigned int  _downlinkTargetBitrate;
    VCNetworkFeedbackController * _feedbackController;
    bool  _forceDisableMediaPriority;
    NSString * _idsDestination;
    NSMutableArray * _initializingParticipants;
    VCSessionParticipantLocal * _localParticipant;
    bool  _localSourceNeedsReset;
    struct tagVCMediaQueue { } * _mediaQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _optInDictionary;
    NSMutableDictionary * _remoteParticipantsMapByServerID;
    NSMutableDictionary * _remoteParticipantsMapByUUID;
    int  _reportReportFrequency;
    int  _reportUpdateInterval;
    struct opaqueRTCReporting { } * _reportingAgent;
    VCSecurityKeyManager * _securityKeyManager;
    VCSessionMessaging * _sessionMessaging;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    double  _sessionStartTime;
    VCSessionStatsController * _sessionStatsController;
    NSMutableArray * _startingParticipants;
    unsigned int  _state;
    NSError * _stopError;
    NSMutableArray * _stoppingParticipants;
    VCTransportSession * _transportSession;
    unsigned int  _transportSessionID;
    VCRateControlMediaController * _uplinkMediaController;
    AVCRateController * _uplinkRateController;
    unsigned int  _uplinkTargetBitrate;
    bool  _useReducedSizeRTCP;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSDictionary *capabilities;
@property (nonatomic, retain) <VCConnectionProtocol> *currentActiveConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VCSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVCRateController *downlinkRateController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic, readonly) VCSessionParticipant *localParticipant;
@property (nonatomic) struct tagVCMediaQueue { }*mediaQueue;
@property (retain) NSMutableDictionary *optInDictionary;
@property (nonatomic, readonly) NSArray *remoteParticipants;
@property (nonatomic, retain) NSMutableDictionary *remoteParticipantsMapByServerID;
@property (nonatomic, readonly) struct opaqueRTCReporting { }*reportingAgent;
@property (nonatomic, retain) VCSessionMessaging *sessionMessaging;
@property (nonatomic, readonly) VCSessionStatsController *sessionStatsController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCTransportSession *transportSession;
@property (nonatomic, readonly) unsigned int transportSessionID;
@property (nonatomic, readonly) NSString *uuid;

- (void)addParticipantConfigurations:(id)arg1 processID:(int)arg2;
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;
- (id)capabilities;
- (void)collectSessionEventKeyFields:(struct __CFDictionary { }*)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;
- (void)createMediaQueue;
- (void)createSessionMessaging;
- (id)currentActiveConnection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)destroySessionMessaging;
- (bool)detectSSRCCollision:(id)arg1 resetNeeded:(bool*)arg2;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)dispatchedAddParticipantConfigurations:(id)arg1 processID:(int)arg2;
- (void)dispatchedAddParticipantWithConfig:(id)arg1 processID:(int)arg2;
- (void)dispatchedParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)dispatchedRemoveParticipant:(id)arg1;
- (void)dispatchedStart;
- (void)dispatchedStopWithError:(id)arg1;
- (void)dispatchedUpdateConfiguration:(id)arg1;
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(bool)arg1;
- (id)downlinkRateController;
- (int)flushBasebandWithPayloads:(id)arg1;
- (void)generateKeyFrameWithReceivedMessage:(id)arg1;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (struct __CFDictionary { }*)getClientSpecificUserInfo;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;
- (bool)handleEncryptionInfoChange:(id)arg1;
- (void)handleEncryptionInfoEvent:(id)arg1;
- (void)handleMembershipChangeInfoEvent:(id)arg1;
- (id)idsDestination;
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 delegate:(id)arg3 processId:(int)arg4;
- (id)localParticipant;
- (void)mediaController:(void*)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; })arg2;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (void)mediaStateChangedForParticipant:(id)arg1;
- (void)mediaStream:(id)arg1 didReceiveNewMasterKeyIndex:(id)arg2;
- (id)optInDictionary;
- (void)optInStreamWithIDSStreamIDs:(id)arg1;
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;
- (id)participantForID:(id)arg1;
- (id)participantsToString;
- (void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)recommendedSettingsChanged:(id)arg1;
- (void)registerMediaStreamNotificationDelegateForParticipant:(id)arg1;
- (void)registerRemoteParticipantToSession:(id)arg1;
- (void)registerReportingTask;
- (id)remoteParticipants;
- (id)remoteParticipantsMapByServerID;
- (void)removeDelegatesForRemoteParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;
- (void)reportingSessionStopEventWithError:(id)arg1;
- (void)resetDecryptionTimeout;
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;
- (id)sessionMessaging;
- (char *)sessionStateToString:(unsigned int)arg1;
- (id)sessionStatsController;
- (void)setCurrentActiveConnection:(id)arg1;
- (void)setDelegatesForRemoteParticipant:(id)arg1;
- (void)setMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;
- (void)setOptInDictionary:(id)arg1;
- (void)setRemoteParticipantsMapByServerID:(id)arg1;
- (void)setSessionInfoSynchronizerCallbacks;
- (void)setSessionInfoSynchronizerErrorResponseCallback;
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
- (void)setSessionMessaging:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTransportSessionEventHandler;
- (void)setupAudioEnabledMessages;
- (void)setupAudioPausedMessages;
- (void)setupKeyFrameGenerationMessages;
- (void)setupRateControllers;
- (void)setupSymptomEnabledMessages;
- (void)setupTransportSessionWithDestination:(id)arg1;
- (void)setupUplinkBitrateCaps;
- (void)setupVideoEnabledMessages;
- (void)setupVideoPausedMessages;
- (void)setupVideoRedundancyMessages;
- (void)start;
- (void)startRateControllers;
- (void)startSessionMessaging;
- (void)stop;
- (void)stopAllParticipants;
- (void)stopSessionMessaging;
- (void)tearDown;
- (id)transportSession;
- (unsigned int)transportSessionID;
- (void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg1;
- (void)unregisterRemoteParticipantFromSession:(id)arg1;
- (void)unregisterReportingTask;
- (void)updateConfiguration:(id)arg1;
- (void)updateLocalStreamConfiguration;
- (void)updateParticipantConfigurations:(id)arg1;
- (id)uuid;
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 didChangeProminence:(unsigned char)arg2 description:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)arg1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)arg1;
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;

@end
