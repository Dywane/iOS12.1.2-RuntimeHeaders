/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationTuple : NSObject {
    NSDate * _date;
    CLLocation * _location;
    unsigned long long  _numberOfReachableBTLEAccessory;
    unsigned long long  _numberOfReachableIPAccessory;
    unsigned long long  _numberOfreachableMediaAccessory;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned long long numberOfReachableBTLEAccessory;
@property (nonatomic) unsigned long long numberOfReachableIPAccessory;
@property (nonatomic) unsigned long long numberOfreachableMediaAccessory;

+ (id)tupleWithLocation:(id)arg1 reachableIPAccessory:(unsigned long long)arg2 reachableBTLEAccessory:(unsigned long long)arg3 reachableMediaAccessory:(unsigned long long)arg4 date:(id)arg5;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)location;
- (unsigned long long)numberOfReachableBTLEAccessory;
- (unsigned long long)numberOfReachableIPAccessory;
- (unsigned long long)numberOfreachableMediaAccessory;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumberOfReachableBTLEAccessory:(unsigned long long)arg1;
- (void)setNumberOfReachableIPAccessory:(unsigned long long)arg1;
- (void)setNumberOfreachableMediaAccessory:(unsigned long long)arg1;

@end
