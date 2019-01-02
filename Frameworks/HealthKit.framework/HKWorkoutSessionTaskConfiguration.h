/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration {
    bool  _requiresCoreLocationAssertion;
    bool  _requiresRecovery;
    NSUUID * _sessionUUID;
    bool  _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic) bool requiresCoreLocationAssertion;
@property (nonatomic) bool requiresRecovery;
@property (nonatomic, copy) NSUUID *sessionUUID;
@property (nonatomic) bool supportsAppRelaunchForRecovery;
@property (nonatomic, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresCoreLocationAssertion;
- (bool)requiresRecovery;
- (id)sessionUUID;
- (void)setRequiresCoreLocationAssertion:(bool)arg1;
- (void)setRequiresRecovery:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSupportsAppRelaunchForRecovery:(bool)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (bool)supportsAppRelaunchForRecovery;
- (id)workoutConfiguration;

@end
