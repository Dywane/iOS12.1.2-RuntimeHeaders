/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSymptomsHandler : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    _HMContext * _context;
    HMMutableArray * _currentSymptoms;
    <HMSymptomsHandlerDelegate> * _delegate;
    NSHashTable * _fixSessions;
    HMFUnfairLock * _lock;
    NSUUID * _sfDeviceIdentifier;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly) bool canInitiateFix;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, readonly) HMMutableArray *currentSymptoms;
@property (readonly, copy) NSString *debugDescription;
@property <HMSymptomsHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *fixSessions;
@property (readonly) long long fixState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (setter=setSFDeviceIdentifier:, copy) NSUUID *sfDeviceIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *symptoms;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1;
- (void)_addFixSession:(id)arg1;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (void)_callSymptomsUpdatedDelegate:(id)arg1;
- (id)_findAndRemoveFixSessionsForSymptom:(id)arg1;
- (void)_handleSFDeviceIdentifierUpdated:(id)arg1;
- (void)_handleSymptomsUpdated:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (bool)canInitiateFix;
- (id)context;
- (id)currentSymptoms;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)fixSessions;
- (long long)fixState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (void)initiateFixWithCompletionHandler:(id /* block */)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)newFixSessionForSymptom:(id)arg1;
- (void)registerForMessages;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFixSessions:(id)arg1;
- (void)setSFDeviceIdentifier:(id)arg1;
- (id)sfDeviceIdentifier;
- (id)symptoms;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id /* block */)hf_symptomArraySortComparator;
+ (id)hf_symptomTypesSortedByPriority;
+ (void)initialize;

- (id)hf_fakeSymptomsImplementationUsedForDebuggingPleaseDontTouchThisItIsFragileSwizzlingIsBadMKay;
- (id)hf_symptomsSortedByPriority;

@end
