/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessTimelineModel : NSObject {
    HKUnit * _countUnit;
    NSDate * _currentDate;
    HKHealthStore * _healthStore;
    HKUnit * _kcalUnit;
    HKUnit * _minuteUnit;
    NSObject<OS_dispatch_queue> * _queue;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    HKActivitySummary * _queue_currentActivitySummary;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    NSArray * _queue_currentExerciseChartData;
    NSArray * _queue_currentMoveChartData;
    NSArray * _queue_currentStandChartData;
    bool  _queue_ignoreLoadingSummary;
    NSObject<OS_dispatch_queue> * _subscriber_queue;
    NSHashTable * _subscribers;
}

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2;
- (void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1;
- (void)_handleTimeChange;
- (bool)_loadingStateForActivitySummary:(id)arg1;
- (void)_queue_restartQueriesIfQueryInUse:(id)arg1;
- (void)_queue_restartQueriesPreservingHisoricalData:(bool)arg1;
- (void)_queue_startQueries;
- (void)_queue_stopQueriesPreservingHistoricalData:(bool)arg1;
- (void)_queue_updateChartStatisticsWithMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHourStatistics:(id)arg3;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (id)_queue_wellnessEntryModelFromCurrentActivitySummary;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)getCurrentWellnessEntryWithHandler:(id /* block */)arg1;
- (void)getWellnessEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)getWellnessEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (id)switcherWelnessEntry;
- (id)timelineEndDate;
- (id)timelineStartDate;

@end
