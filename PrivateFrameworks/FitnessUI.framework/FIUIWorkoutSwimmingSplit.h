/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSwimmingSplit : NSObject {
    double  _distanceInUserUnit;
    double  _duration;
    double  _durationScaledToFillSplit;
    long long  _splitDistance;
    long long  _strokeCount;
    long long  _strokeCountScaledToFillSplit;
}

@property (nonatomic) double distanceInUserUnit;
@property (nonatomic) double duration;
@property (nonatomic) double durationScaledToFillSplit;
@property (nonatomic) long long splitDistance;
@property (nonatomic) long long strokeCount;
@property (nonatomic) long long strokeCountScaledToFillSplit;

- (double)_fractionToFillTotalSplitDistance;
- (id)description;
- (double)distanceInUserUnit;
- (double)duration;
- (double)durationScaledToFillSplit;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (id)formattedStrokeCount;
- (void)setDistanceInUserUnit:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationScaledToFillSplit:(double)arg1;
- (void)setSplitDistance:(long long)arg1;
- (void)setStrokeCount:(long long)arg1;
- (void)setStrokeCountScaledToFillSplit:(long long)arg1;
- (long long)splitDistance;
- (long long)strokeCount;
- (long long)strokeCountScaledToFillSplit;

@end
