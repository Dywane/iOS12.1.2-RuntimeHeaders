/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCloudKitKeyElectionStore : NSObject {
    IDSCKDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) IDSCKDatabase *database;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (bool)isItemNotFoundError:(id)arg1;

- (void).cxx_destruct;
- (id)_itemFromRecord:(id)arg1 error:(id*)arg2;
- (id)_recordFromItem:(id)arg1;
- (id)_recordID;
- (id)database;
- (void)fetchAccountIdentityItemWithCompletion:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (id)queue;
- (void)removeAccountIdentityItemWithCompletion:(id /* block */)arg1;
- (void)setDatabase:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)storeAccountIdentityItem:(id)arg1 withCompletion:(id /* block */)arg2;

@end
