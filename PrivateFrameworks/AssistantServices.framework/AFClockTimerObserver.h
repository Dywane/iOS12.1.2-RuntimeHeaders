/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSHashTable * _listeners;
    NSMutableOrderedSet * _notifiedFiringTimerIDs;
    NSObject<OS_dispatch_queue> * _queue;
    MTTimerManager * _timerManager;
    AFClockTimerSnapshot * _timerSnapshot;
    AFClockItemStorage * _timerStorage;
    NSUUID * _timersChangedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_enumerateListenersUsingBlock:(id /* block */)arg1;
- (void)_fetchTimersForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleFetchTimersForReason:(id)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)_setUp;
- (void)_tearDown;
- (id)_timerSnapshot;
- (void)addListener:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)dealloc;
- (void)firingTimerChanged:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)getNotifiedFiringTimerIDsWithCompletion:(id /* block */)arg1;
- (void)getTimerSnapshotWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)removeListener:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)timersChanged:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;

@end
