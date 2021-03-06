/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMagicalMomentsSignals : NSObject {
    double  _confidence;
    unsigned long long  _predictionIndex;
    unsigned long long  _predictionSource;
    long long  _reason;
    NSDictionary * _reasonMetadata;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long predictionIndex;
@property (nonatomic, readonly) unsigned long long predictionSource;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *reasonMetadata;

- (void).cxx_destruct;
- (double)confidence;
- (id)init;
- (id)initWithPredictionSource:(unsigned long long)arg1 reason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 index:(unsigned long long)arg5;
- (unsigned long long)predictionIndex;
- (unsigned long long)predictionSource;
- (long long)reason;
- (id)reasonMetadata;

@end
