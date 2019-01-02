/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver, HDIDSMessageCenterDelegate, HDNanoSyncStoreDelegate, HDSyncSessionDelegate> {
    HDNanoSyncStore * _activeSyncStore;
    <_CDLocalContext> * _context;
    bool  _enablePeriodicSyncTimer;
    bool  _invalidated;
    bool  _isMaster;
    NSDate * _lastPeriodicSyncDate;
    HDIDSMessageCenter * _messageCenter;
    HDKeyValueDomain * _nanoSyncDomain;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSArray * _pairedDevices;
    HKNanoSyncPairedDevicesSnapshot * _pairedDevicesSnapshot;
    HDPairedSyncManager * _pairedSyncManager;
    NSObject<OS_dispatch_source> * _periodicSyncTimer;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    double  _restoreTimeout;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _syncStoresByDeviceIdentifier;
    bool  _waitingForFirstUnlock;
}

@property (nonatomic, retain) HDNanoSyncStore *activeSyncStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool enablePeriodicSyncTimer;
@property (readonly) unsigned long long hash;
@property (readonly) bool isMaster;
@property (nonatomic, retain) NSDate *lastPeriodicSyncDate;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic, retain) HDKeyValueDomain *nanoSyncDomain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSArray *pairedDevices;
@property (retain) HKNanoSyncPairedDevicesSnapshot *pairedDevicesSnapshot;
@property (nonatomic, readonly) HDPairedSyncManager *pairedSyncManager;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *periodicSyncTimer;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property double restoreTimeout;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSMutableDictionary *syncStoresByDeviceIdentifier;
@property (nonatomic) bool waitingForFirstUnlock;

- (void).cxx_destruct;
- (long long)_actionForRestoreRequest:(id)arg1 syncStore:(id)arg2 error:(id*)arg3;
- (void)_addDaytonaVersionMessageHandlersToMessageCenter:(id)arg1;
- (id)_allObservers;
- (void)_deviceDidBecomeActive:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_didReceiveChangeRequest;
- (void)_handleIncomingRequest:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_handleIncomingResponse:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_handleOutgoingMessageError:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_invalidate;
- (void)_logIncomingRequest:(id)arg1;
- (void)_logIncomingResponse:(id)arg1;
- (void)_logOutgoingMessageError:(id)arg1;
- (void)_notifyObserversPairedDevicesChanged:(id)arg1;
- (bool)_prepareForCompanionChangeWithStore:(id)arg1 error:(id*)arg2;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_beginProactiveSyncWithCompletion:(id /* block */)arg1;
- (void)_queue_beginRestoreWithStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_changeResponseDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_companionUserNotificationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (id)_queue_eligibleInactiveSyncStores;
- (bool)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1;
- (void)_queue_generateWatchActivationSamples;
- (void)_queue_handleRestoreRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_handleRestoreResponse:(id)arg1 syncStore:(id)arg2;
- (bool)_queue_isRestoreCompleteForSyncStore:(id)arg1 error:(id*)arg2;
- (id)_queue_nanoSyncKeyValueDomain;
- (void)_queue_pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_queue_performNextProactiveSyncWithRemainingDevices:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_periodicSyncTimerFired;
- (bool)_queue_permitSyncWithError:(id*)arg1;
- (void)_queue_receiveAuthorizationCompleteRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveChangeRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveChangeResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveRoutineRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_recieveCompanionUserNotificationRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_recieveCompanionUserNotificationResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_recieveStartWorkoutAppRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_recieveStartWorkoutAppResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_requestAuthorizationForRequestRecord:(id)arg1 syncStore:(id)arg2 requestSentHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_queue_resetSyncWithCompletion:(id /* block */)arg1;
- (void)_queue_sendChangeSet:(id)arg1 status:(id)arg2 session:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_sendCompanionUserNotificationRequest:(id)arg1 syncStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_sendRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 sequenceNumber:(long long)arg3 statusCode:(int)arg4;
- (void)_queue_sendSpeculativeChangeSet:(id)arg1 syncStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_sendStartWorkoutAppRequest:(id)arg1 syncStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_setUpMessageCentersIfNecessary;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_startWorkoutAppRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)_queue_syncStoreForIDSDevice:(id)arg1 updateIfNecessary:(bool)arg2;
- (id)_queue_syncStoreForMessageCenterError:(id)arg1;
- (id)_queue_syncStoreForNanoRegistryPairingID:(id)arg1;
- (void)_queue_synchronizeWithOptions:(unsigned long long)arg1 restoreMessagesSentHandler:(id /* block */)arg2 targetSyncStore:(id)arg3 reason:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_transitionToRestoreCompleteWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreInProgressWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreIncompleteWithSyncStore:(id)arg1 error:(id)arg2;
- (void)_queue_updateDeviceNameIfNecessaryWithSyncStore:(id)arg1;
- (void)_queue_updateSyncStores;
- (void)_queue_updateSyncStoresWithCompletion:(id /* block */)arg1;
- (void)_queue_waitForLastChanceSyncWithPairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchorsForStore:(id)arg1;
- (void)_sendFinalMessageForSyncSession:(id)arg1 status:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (void)_sendFinalStatusMessageForSyncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)_showFitnessAppIfNeeded;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2;
- (bool)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 syncStore:(id)arg3 error:(id*)arg4;
- (void)_syncQueue_forwardSpeculativeChangeSetIfNecessaryForChanges:(id)arg1 destinationSyncStores:(id)arg2 originSyncStore:(id)arg3;
- (void)_unregisterForSyncTriggers;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)_watchOffWristNotification:(id)arg1;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (id)activeSyncStore;
- (void)addObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (bool)enablePeriodicSyncTimer;
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;
- (id)initWithProfile:(id)arg1 isMaster:(bool)arg2;
- (void)invalidateAndWait;
- (bool)isMaster;
- (id)lastPeriodicSyncDate;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (void)messageCenterDidReceiveCompanionUserNotificationError:(id)arg1;
- (void)messageCenterDidReceiveCompanionUserNotificationRequest:(id)arg1;
- (void)messageCenterDidReceiveCompanionUserNotificationResponse:(id)arg1;
- (void)messageCenterDidReceiveRestoreRequest:(id)arg1;
- (void)messageCenterDidReceiveRestoreResponse:(id)arg1;
- (void)messageCenterDidReceiveRoutineRequest:(id)arg1;
- (void)messageCenterDidReceiveStartWorkoutAppError:(id)arg1;
- (void)messageCenterDidReceiveStartWorkoutAppRequest:(id)arg1;
- (void)messageCenterDidReceiveStartWorkoutAppResponse:(id)arg1;
- (void)messageCenterRestoreError:(id)arg1;
- (id)nanoSyncDomain;
- (void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;
- (void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
- (void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2;
- (id)observerQueue;
- (id)observers;
- (id)pairedDevices;
- (id)pairedDevicesSnapshot;
- (void)pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)pairedSyncManager;
- (id)periodicSyncTimer;
- (id)profile;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)resetSyncWithCompletion:(id /* block */)arg1;
- (void)restoreTimedOutWithSyncStore:(id)arg1;
- (double)restoreTimeout;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)sendCompanionUserNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setActiveSyncStore:(id)arg1;
- (void)setEnablePeriodicSyncTimer:(bool)arg1;
- (void)setLastPeriodicSyncDate:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNanoSyncDomain:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPairedDevices:(id)arg1;
- (void)setPairedDevicesSnapshot:(id)arg1;
- (void)setPeriodicSyncTimer:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestoreTimeout:(double)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncStoresByDeviceIdentifier:(id)arg1;
- (void)setWaitingForFirstUnlock:(bool)arg1;
- (void)syncHealthDataWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)syncHealthDataWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)syncQueue;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSessionWillBegin:(id)arg1;
- (id)syncStoresByDeviceIdentifier;
- (void)unitTest_performWithActiveSyncStore:(id /* block */)arg1;
- (void)updatePairedDevicesWithCompletion:(id /* block */)arg1;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (bool)waitingForFirstUnlock;

@end
