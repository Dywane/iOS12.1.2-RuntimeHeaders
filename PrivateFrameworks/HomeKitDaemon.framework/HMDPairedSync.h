/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator * _coordinator;
    unsigned long long  _currentOperationCount;
    <HMDPairedSyncDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PSYSyncCoordinator *coordinator;
@property (nonatomic) unsigned long long currentOperationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDPairedSyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_callStartSync;
- (id)coordinator;
- (unsigned long long)currentOperationCount;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)needToSync;
- (id)restrictionAsString:(unsigned long long)arg1;
- (void)setCurrentOperationCount:(unsigned long long)arg1;
- (void)syncComplete;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncPartiallyComplete;
- (id)workQueue;

@end
