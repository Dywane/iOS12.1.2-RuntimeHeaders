/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent> {
    HMDHAPAccessory * _accessory;
    unsigned long long  _errorType;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long errorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorEventWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)accessory;
- (unsigned long long)errorType;
- (id)initWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;
- (id)metricForAWD;

@end