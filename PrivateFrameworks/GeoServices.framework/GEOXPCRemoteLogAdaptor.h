/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <GEOProtobufSessionTaskDelegate> {
    NSString * _adaptorIdentifier;
    unsigned long long  _backOffRetryInterval;
    long long  _cacheCountFlushThreshold;
    unsigned long long  _cacheEncryptionType;
    long long  _cacheMaxAllowedMessageCount;
    long long  _cacheMessageExpiryInterval;
    NSString * _debugRequestName;
    unsigned long long  _intervalJitter;
    NSString * _logMessageCacheFilePath;
    GEOLogMessageCacheManager * _logMessageCacheManager;
    bool  _logMessageCollectionRequestPending;
    NSLock * _logMessageCollectionRequesterLock;
    GEOProtobufSessionTask * _logMessageCollectionSessionTask;
    NSObject<OS_dispatch_queue> * _logMessageSendQueue;
    long long  _logMessagesOverflowPurgeSize;
    long long  _maxMessageChunkCount;
    long long  _maxMessageChunkSize;
    NSNumber * _needsProxy;
    NSObject<OS_dispatch_queue> * _networkChangeObserverQueue;
    bool  _observingNetworkChange;
    NSString * _policyIdentifier;
    NSURL * _remoteURL;
    GEOLogMessageCollectionRequest * _request;
    bool  _requireWiFi;
    unsigned long long  _retryInterval;
    bool  _sendInRealtime;
    bool  _shouldAddIntervalJitter;
    bool  _shouldCacheOnDisk;
    bool  _shouldCompressRequest;
    id /* block */  _shouldDeferXPCActivityBlock;
    NSLock * _shouldDeferXPCActivityBlockLock;
    NSLock * _xpcActivityInfoLock;
    NSString * _xpcActivityName;
}

@property (readonly) NSString *adaptorIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugRequestName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *needsProxy;
@property (nonatomic, retain) NSURL *remoteURL;
@property (readonly) Class superclass;
@property (readonly) int supportedLogMessageType;
@property (nonatomic) long long xpcActivityTriggerCount;

- (void).cxx_destruct;
- (void)_addNetworkObserver;
- (void)_beginSendingLogMessageChunks;
- (void)_captureTrafficProbesAndTelemetricEventsFor:(id)arg1 result:(unsigned char)arg2;
- (void)_cleanupLogMessageCollectionRequester;
- (void)_continueToSendNextBatch:(bool)arg1;
- (void)_deviceLocking;
- (void)_deviceUnlocked;
- (void)_initializeAdaptor;
- (void)_networkReachabilityChanged;
- (void)_purgeAndSendLogMessages;
- (void)_purgeExpiredLogMessagesFromCache;
- (void)_purgeLogMessageCache;
- (void)_purgeMapsSuggestionsCacheFile;
- (void)_queueNextLogMessagesChunkForSending;
- (void)_registerXPCActivityTimer;
- (void)_removeNetworkObserver;
- (void)_requesterStartSendRequest:(id)arg1;
- (void)_sendLogMessageRequest:(id)arg1;
- (void)_sendNextLogMessageChunk;
- (void)_setupLogMessageCache;
- (void)_setupQueueAndNotifications;
- (void)_setupXPCActivity;
- (void)_unregisterXPCActivityTimer;
- (bool)_useInMemoryLogMessageCache;
- (id)adaptorIdentifier;
- (void)dealloc;
- (id)debugRequestName;
- (void)flushLogs;
- (void)forceFlushLogs;
- (void)incrementXpcActivityTriggerCount;
- (id)initWithAdaptorPolicy:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 needsProxy:(id)arg2 debugRequestName:(id)arg3 supportedTypes:(id)arg4;
- (bool)isLogFrameworkAdaptor;
- (int)logMsgEventNetworkServiceForSupportedLogMsgType;
- (id)needsProxy;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)queueLogMessage:(id)arg1;
- (id)remoteURL;
- (void)setDebugRequestName:(id)arg1;
- (void)setNeedsProxy:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setXpcActivityTriggerCount:(long long)arg1;
- (int)supportedLogMessageType;
- (void)tearDown;
- (void)updateAdaptorPolicyConfiguration:(id)arg1;
- (long long)xpcActivityTriggerCount;

@end
