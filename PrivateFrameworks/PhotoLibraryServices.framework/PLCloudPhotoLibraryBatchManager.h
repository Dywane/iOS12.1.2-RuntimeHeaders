/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray * _batches;
    PLCloudPhotoLibraryBatchContainer * _currentBatch;
    NSMutableSet * _masterHistory;
    unsigned long long  _resourceBudget;
    bool  _wasDrained;
}

- (void)addRecord:(id)arg1;
- (void)addRecord:(id)arg1 ignoreBatchSize:(bool)arg2;
- (long long)currentBatchCount;
- (void)dealloc;
- (id)description;
- (id)drainBatches;
- (id)init;
- (bool)isAboveMaximumResourceBudget;
- (void)reset;

@end
