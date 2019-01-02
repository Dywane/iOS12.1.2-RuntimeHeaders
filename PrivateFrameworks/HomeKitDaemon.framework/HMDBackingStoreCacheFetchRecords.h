/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
    NSArray * _parentUuids;
    NSArray * _recordNames;
    HMDBackingStoreCacheShareGroup * _share;
    NSArray * _uuids;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) NSArray *parentUuids;
@property (nonatomic, retain) NSArray *recordNames;
@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *share;
@property (nonatomic, retain) NSArray *uuids;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 records:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)mainReturningError;
- (id)parentUuids;
- (id)recordNames;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setParentUuids:(id)arg1;
- (void)setRecordNames:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setUuids:(id)arg1;
- (id)share;
- (id)uuids;

@end
