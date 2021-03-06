/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficProbeRemoteProxy : NSObject <GEOTrafficProbeProxy>

- (void)_reportTrafficProbesWithMessageDict:(id)arg1;
- (void)reportBatchTrafficProbes:(id)arg1 auditToken:(id)arg2;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4 auditToken:(id)arg5;

@end
