/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMXPCTransactionManager : NSObject {
    NSCountedSet * _activeTransactions;
    NSString * _keepAliveActivityIdentifier;
    NSObject<OS_dispatch_queue> * _txn_ops_queue;
}

@property (nonatomic, retain) NSCountedSet *activeTransactions;
@property (nonatomic, retain) NSString *keepAliveActivityIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *txn_ops_queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_disableKeepAlive;
- (void)_disableLaunchOnRebootActivity:(id)arg1;
- (void)_disableOldKeepAliveActivity;
- (void)_enableKeepAlive;
- (id)activeTransactions;
- (void)beginTransaction:(id)arg1;
- (void)dealloc;
- (id)dumpActiveTransactions;
- (void)endTransaction:(id)arg1;
- (id)init;
- (id)initSingleton;
- (id)keepAliveActivityIdentifier;
- (void)setActiveTransactions:(id)arg1;
- (void)setKeepAliveActivityIdentifier:(id)arg1;
- (void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2;
- (void)setTxn_ops_queue:(id)arg1;
- (id)txn_ops_queue;

@end
