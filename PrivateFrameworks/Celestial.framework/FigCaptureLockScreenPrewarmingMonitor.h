/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    int  _activeBiometricOperationChangedToken;
    int  _activeBiometricOperationType;
    bool  _addingLayoutObserver;
    int  _biometricEnrollmentChangedToken;
    NSObject<OS_dispatch_source> * _delayedPrewarmTimer;
    int  _deviceLockState;
    int  _deviceLockStateChangedToken;
    bool  _haveEnrolledBiometricIdentities;
    bool  _isPrewarming;
    long long  _lastBiometricMatchCompleteTime;
    long long  _lastDeviceUnlockTime;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    bool  _observingLayoutChanges;
    bool  _onLockScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)start;
+ (void)stop;

- (void)_cancelDelayedPrewarmTimer;
- (void)_evaluatePrewarmingConditions;
- (id)_init;
- (void)_invalidate;
- (void)_prewarmAfterDelay:(float)arg1;
- (void)_registerForBiometricEnrollmentChangesAndStartMonitoring;
- (void)_setIsPrewarming:(bool)arg1;
- (bool)_shouldPrewarmForHostTime:(long long)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)_updateActiveBiometricOperation:(int)arg1;
- (void)_updateDeviceLockState;
- (void)dealloc;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3;

@end
