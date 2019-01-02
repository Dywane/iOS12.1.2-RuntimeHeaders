/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAProcessInstanceAggregator : PASampleAggregator {
    bool  _forceOneBasedTimeIndexes;
    NSString * _headerNote;
    unsigned long long  _stackshotFrameAddress;
    unsigned long long  _startingTSDSIndex;
    unsigned long long  _timestampIndexWhenTransitionedToSamplingAllProcesses;
}

@property bool forceOneBasedTimeIndexes;
@property (readonly) bool hasTargetProcess;
@property (copy) NSString *headerNote;
@property bool printHeavyStacks;
@property bool printSpinSignatureStack;
@property bool printTargetHIDEvent;
@property unsigned long long stackshotFrameAddress;
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;

- (void).cxx_destruct;
- (int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (bool)forceOneBasedTimeIndexes;
- (bool)hasTargetProcess;
- (id)headerNote;
- (id)initWithSampleStore:(id)arg1;
- (id)kernelSampleTaskForSymbolication;
- (void)limitToSampleInterval:(double)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)printFooterToOutputStream:(id)arg1;
- (void)printHIDEvent:(id)arg1 toOutputStream:(id)arg2;
- (void)printHIDEventsToOutputStream:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (bool)printHeavyStacks;
- (bool)printSpinSignatureStack;
- (bool)printTargetHIDEvent;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1;
- (id)sampleIndexStringForMachTime:(double)arg1;
- (id)sampleIndexStringForMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sampleTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestampIndex:(unsigned long long)arg3;
- (id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)setForceOneBasedTimeIndexes:(bool)arg1;
- (void)setHeaderNote:(id)arg1;
- (void)setPrintHeavyStacks:(bool)arg1;
- (void)setPrintSpinSignatureStack:(bool)arg1;
- (void)setPrintTargetHIDEvent:(bool)arg1;
- (void)setSamples:(id)arg1;
- (void)setStackshotFrameAddress:(unsigned long long)arg1;
- (bool)shouldPrintTimeOutsideSamplingRange:(double)arg1;
- (id)sortedTasks;
- (unsigned long long)stackshotFrameAddress;
- (unsigned long long)timestampIndexWhenTransitionedToSamplingAllProcesses;

@end
