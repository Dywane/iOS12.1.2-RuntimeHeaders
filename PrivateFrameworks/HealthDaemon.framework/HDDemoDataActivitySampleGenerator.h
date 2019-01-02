/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {
    HDDemoDataGeneratorWorkoutConfiguration * _currentWorkoutConfiguration;
    HKActivityCache * _lastActivityCache;
    double  _lastUVExposure;
    double  _lastUVIndexPeak;
    double  _lastUVIndexPeakTime;
    double  _nextActiveCaloriesSampleTime;
    double  _nextAppleStandHourSampleTime;
    double  _nextExerciseMinuteTime;
    double  _nextFallSampleTime;
    double  _nextFlightsClimbedSampleTime;
    double  _nextHeartRateRecoveryStartTime;
    double  _nextHeartRateRecoveryStopTime;
    double  _nextRestingCaloriesSampleTime;
    double  _nextStepsSampleTime;
    double  _nextUVIndexSampleTime;
    HDProfile * _profile;
    HDDataOriginProvenance * _provenance;
    _HDDemoDataActivityWorkoutState * _workoutState;
}

@property (nonatomic, retain) HDDemoDataGeneratorWorkoutConfiguration *currentWorkoutConfiguration;
@property (nonatomic, retain) HKActivityCache *lastActivityCache;
@property (nonatomic) double lastUVExposure;
@property (nonatomic) double lastUVIndexPeak;
@property (nonatomic) double lastUVIndexPeakTime;
@property (nonatomic) double nextActiveCaloriesSampleTime;
@property (nonatomic) double nextAppleStandHourSampleTime;
@property (nonatomic) double nextExerciseMinuteTime;
@property (nonatomic) double nextFallSampleTime;
@property (nonatomic) double nextFlightsClimbedSampleTime;
@property (nonatomic) double nextHeartRateRecoveryStartTime;
@property (nonatomic) double nextHeartRateRecoveryStopTime;
@property (nonatomic) double nextRestingCaloriesSampleTime;
@property (nonatomic) double nextStepsSampleTime;
@property (nonatomic) double nextUVIndexSampleTime;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) HDDataOriginProvenance *provenance;
@property (nonatomic, retain) _HDDemoDataActivityWorkoutState *workoutState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_computeCyclingDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (double)_computeExerciseCaloriesForDemoPerson:(id)arg1 duration:(double)arg2 activity:(long long)arg3 weight:(double)arg4;
- (double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_computeSwimmingStrokesFromDistance:(id)arg1 demoPerson:(id)arg2;
- (double)_computeUVIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_computeWalkingRunningDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (void)_generateEllipticalWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateHIITWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateHikingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateRunningWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateSwimmingSegmentDataWithStartDate:(id)arg1 segmentTime:(double)arg2 segmentDistance:(double)arg3 numLaps:(long long)arg4 strokeStyle:(long long)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (void)_generateSwimmingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateWalkingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateWorkoutDataWithHeartRates:(id)arg1 recoveryHeartRates:(id)arg2 objectCollection:(id)arg3 demoPerson:(id)arg4;
- (void)_generateYogaWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (bool)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3;
- (long long)_pickActivityForTime:(double)arg1;
- (id)_sumQuantity:(id)arg1 withQuantity:(id)arg2;
- (void)_updateWorkoutStateWithActiveEnergyBurned:(id)arg1 distanceWalking:(id)arg2 distanceCycling:(id)arg3 currentTime:(double)arg4 date:(id)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (id)activeCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)appleStandHourForDemoPerson:(id)arg1 atTime:(double)arg2 activeCalories:(id)arg3 exerciseMinutes:(id)arg4;
- (id)currentWorkoutConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)exerciseMinutesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)fallsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)flightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastActivityCache;
- (double)lastUVExposure;
- (double)lastUVIndexPeak;
- (double)lastUVIndexPeakTime;
- (double)nextActiveCaloriesSampleTime;
- (double)nextAppleStandHourSampleTime;
- (double)nextExerciseMinuteTime;
- (double)nextFallSampleTime;
- (double)nextFlightsClimbedSampleTime;
- (double)nextHeartRateRecoveryStartTime;
- (double)nextHeartRateRecoveryStopTime;
- (double)nextRestingCaloriesSampleTime;
- (double)nextStepsSampleTime;
- (double)nextUVIndexSampleTime;
- (id)profile;
- (id)provenance;
- (id)restingCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setCurrentWorkoutConfiguration:(id)arg1;
- (void)setLastActivityCache:(id)arg1;
- (void)setLastUVExposure:(double)arg1;
- (void)setLastUVIndexPeak:(double)arg1;
- (void)setLastUVIndexPeakTime:(double)arg1;
- (void)setNextActiveCaloriesSampleTime:(double)arg1;
- (void)setNextAppleStandHourSampleTime:(double)arg1;
- (void)setNextExerciseMinuteTime:(double)arg1;
- (void)setNextFallSampleTime:(double)arg1;
- (void)setNextFlightsClimbedSampleTime:(double)arg1;
- (void)setNextHeartRateRecoveryStartTime:(double)arg1;
- (void)setNextHeartRateRecoveryStopTime:(double)arg1;
- (void)setNextRestingCaloriesSampleTime:(double)arg1;
- (void)setNextStepsSampleTime:(double)arg1;
- (void)setNextUVIndexSampleTime:(double)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfile:(id)arg1 provenance:(id)arg2;
- (void)setProvenance:(id)arg1;
- (void)setWorkoutState:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)stepsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)uvIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)workoutState;

@end
