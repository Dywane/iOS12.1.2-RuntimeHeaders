/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEntitlementMessageFilter : HMDMessageFilter <HMFLogging> {
    unsigned long long  _entitlements;
    NSArray * _messageNames;
    HMFMessageDestination * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *messageNames;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMFMessageDestination *target;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)__shouldCheckMessage:(id)arg1;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (unsigned long long)entitlements;
- (id)initWithEntitlements:(unsigned long long)arg1 target:(id)arg2 messageNames:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)logIdentifier;
- (id)messageNames;
- (id)target;

@end