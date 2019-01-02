/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutCondenserAnalyticEvent : NSObject <HDAnalyticSubmissionEvent> {
    long long  _batchSize;
    long long  _condensedWorkouts;
    long long  _createdSeries;
    long long  _deletedSamples;
    double  _duration;
    NSError * _error;
    bool  _hasWatchSource;
    long long  _processedWorkouts;
    long long  _reason;
    bool  _success;
    NSError * _underlyingError;
    long long  _workoutsToCondense;
    long long  _workoutsToRecondense;
}

@property (nonatomic, readonly) long long batchSize;
@property (nonatomic, readonly) long long condensedWorkouts;
@property (nonatomic, readonly) long long createdSeries;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long deletedSamples;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) bool hasWatchSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long processedWorkouts;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSError *underlyingError;
@property (nonatomic, readonly) long long workoutsToCondense;
@property (nonatomic, readonly) long long workoutsToRecondense;

- (void).cxx_destruct;
- (unsigned int)AWDMetricID;
- (long long)batchSize;
- (id)codableRepresentationForAWDSubmission;
- (long long)condensedWorkouts;
- (long long)createdSeries;
- (long long)deletedSamples;
- (id)description;
- (double)duration;
- (id)error;
- (bool)hasWatchSource;
- (id)initWithReason:(long long)arg1 batchSize:(long long)arg2 hasWatchSource:(bool)arg3 duration:(double)arg4 success:(bool)arg5 error:(id)arg6 workoutsToCondense:(long long)arg7 workoutsToRecondense:(long long)arg8 condensedWorkouts:(long long)arg9 processedWorkouts:(long long)arg10 createdSeries:(long long)arg11 deletedSamples:(long long)arg12;
- (bool)isEqual:(id)arg1;
- (long long)processedWorkouts;
- (long long)reason;
- (bool)success;
- (id)underlyingError;
- (long long)workoutsToCondense;
- (long long)workoutsToRecondense;

@end
