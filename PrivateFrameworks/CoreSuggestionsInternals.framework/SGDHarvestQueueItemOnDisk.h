/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueItemOnDisk : SGDHarvestQueueItem {
    int  _fileId;
    SGDHarvestQueueOnDisk * _harvestQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)finish;
- (bool)highPriority;
- (id)initWithHarvestQueue:(id)arg1 itemId:(long long)arg2 fileId:(int)arg3 item:(id)arg4 fails:(int)arg5;
- (void)markAsFailed;

@end
