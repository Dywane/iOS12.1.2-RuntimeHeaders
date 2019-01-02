/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICXPCStoreCrossProcessChangeListener : NSObject {
    NSManagedObjectContext * _context;
    ICSelectorDelayer * _delayer;
    bool  _listening;
    unsigned long long  _numberOfCoalescedNotifications;
    NSDate * _previousHistoryDate;
    NSPersistentHistoryToken * _previousHistoryToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSPersistentStore * _store;
}

@property (nonatomic) NSManagedObjectContext *context;
@property (nonatomic, retain) ICSelectorDelayer *delayer;
@property (getter=isListening, nonatomic) bool listening;
@property (nonatomic) unsigned long long numberOfCoalescedNotifications;
@property (nonatomic, retain) NSDate *previousHistoryDate;
@property (nonatomic, retain) NSPersistentHistoryToken *previousHistoryToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) NSPersistentStore *store;

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id*)arg4 latestTimestamp:(id*)arg5;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)delayer;
- (void)fetchChangeHistory;
- (void)handleDistributedNotification:(id)arg1;
- (void)handleLocalSaveNotification:(id)arg1;
- (void)handleXPCStoreNotification:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 context:(id)arg2;
- (bool)isListening;
- (unsigned long long)numberOfCoalescedNotifications;
- (void)postDistributedSaveNotification;
- (id)previousHistoryDate;
- (id)previousHistoryToken;
- (id)queue;
- (void)setContext:(id)arg1;
- (void)setDelayer:(id)arg1;
- (void)setListening:(bool)arg1;
- (void)setNumberOfCoalescedNotifications:(unsigned long long)arg1;
- (void)setPreviousHistoryDate:(id)arg1;
- (void)setPreviousHistoryToken:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (id)store;

@end
