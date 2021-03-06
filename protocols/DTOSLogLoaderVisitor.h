/* Generated by EzioChiu.
 */

@protocol DTOSLogLoaderVisitor

@required

- (bool)isFetchComplete;
- (unsigned long long)lastMachContinuousTime;
- (unsigned int)lostEventsSinceLastVisit;
- (NSData *)nextOutputBytes;
- (void)setFetchComplete:(bool)arg1;
- (void)setLastMachContinuousTime:(unsigned long long)arg1;
- (void)setLostEventsSinceLastVisit:(unsigned int)arg1;
- (void)setNextOutputBytes:(NSData *)arg1;

@end
