/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutDataCalculator : NSObject {
    NSCache * _cache;
    HKHealthStore * _healthStore;
    bool  _shouldUseFakeSegmentMarkers;
    FIUIUnitManager * _unitManager;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) bool shouldUseFakeSegmentMarkers;
@property (nonatomic, retain) FIUIUnitManager *unitManager;

- (void).cxx_destruct;
- (void)_basalMetabolicRateForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)_distanceTypeIdentifierForActivityType:(unsigned long long)arg1;
- (void)_fetchBasalEnergyBurnFromDatabaseForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchHeartRateDataForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)_predicateForActiveTimeIntervalsForWorkout:(id)arg1;
- (id)_queue_segmentsForWorkout:(id)arg1 markerEvents:(id)arg2 error:(id*)arg3;
- (id)_queue_segmentsWithDateIntervalsForWorkout:(id)arg1 segmentEvents:(id)arg2 error:(id*)arg3;
- (long long)_queue_strokeStyleForStrokeSamples:(id)arg1;
- (id)_queue_swimDistanceByStrokeStyleForWorkout:(id)arg1 error:(id*)arg2;
- (id)_queue_swimmingSetsForWorkout:(id)arg1 error:(id*)arg2;
- (id)_queue_swimmingSplitsForWorkout:(id)arg1 error:(id*)arg2;
- (void)_setDistanceSamples:(id)arg1 forWorkout:(id)arg2;
- (void)_setStrokeSamples:(id)arg1 forWorkout:(id)arg2;
- (id)_testMarkersForWorkout:(id)arg1;
- (bool)_workoutSupportsDistanceAndPace:(id)arg1;
- (void)basalEnergyBurnForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)cache;
- (id)cacheContainerForWorkout:(id)arg1;
- (void)distanceSamplesForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)healthStore;
- (void)heartRateDataForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1 unitManager:(id)arg2;
- (void)saveContainerToCache:(id)arg1 forWorkout:(id)arg2;
- (void)segmentsForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)setCache:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setShouldUseFakeSegmentMarkers:(bool)arg1;
- (void)setUnitManager:(id)arg1;
- (bool)shouldUseFakeSegmentMarkers;
- (void)splitsForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)strokeSamplesForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)swimDistanceByStrokeStyleForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)swimmingSetsForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (void)swimmingSplitsForWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)unitManager;

@end
