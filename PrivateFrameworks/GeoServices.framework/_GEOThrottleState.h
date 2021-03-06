/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOThrottleState : NSObject {
    double  _lastResetTime;
    unsigned long long  _requestCount;
}

@property (nonatomic) double lastResetTime;
@property (nonatomic) unsigned long long requestCount;

- (id)description;
- (double)lastResetTime;
- (unsigned long long)requestCount;
- (void)setLastResetTime:(double)arg1;
- (void)setRequestCount:(unsigned long long)arg1;

@end
