/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPTravelEstimates : NSObject <NSSecureCoding> {
    NSMeasurement * _distanceRemaining;
    double  _timeRemaining;
    unsigned long long  _timeRemainingColor;
}

@property (nonatomic, readonly, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic) unsigned long long timeRemainingColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)distanceRemaining;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;
- (void)setTimeRemainingColor:(unsigned long long)arg1;
- (double)timeRemaining;
- (unsigned long long)timeRemainingColor;

@end