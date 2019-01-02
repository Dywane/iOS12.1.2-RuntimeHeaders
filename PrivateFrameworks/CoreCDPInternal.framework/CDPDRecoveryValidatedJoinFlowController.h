/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_accountResetRecoveryOptionWithCompletion:(id /* block */)arg1;
- (id)_cancelRecoveryOptionWithCompletion:(id /* block */)arg1;
- (id)_entryLimitNoResetForRepairForDevice:(id)arg1;
- (id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)arg1;
- (id)_entryLimitResetAvailableBodyForDevice:(id)arg1;
- (id)_entryLimitSignInBodyForDevice:(id)arg1;
- (id)_entryLimitTitleForDevice:(id)arg1;
- (unsigned long long)_escapeOfferForDevices:(id)arg1 remoteApproval:(bool)arg2 forMultipleICSC:(bool)arg3;
- (id)_fallbackRecoveryOptionWithCompletion:(id /* block */)arg1;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleLimit:(unsigned long long)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)_hardLimitErrorBodyWithDevice:(id)arg1;
- (id)_hardLimitUserInfoForDevice:(id)arg1;
- (id)_infoDictionaryWithTitle:(id)arg1 andBody:(id)arg2;
- (void)_populateUserInfo:(id)arg1 recoveryIndexHandlers:(id)arg2 withRecoveryOption:(id)arg3;
- (id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)arg1;
- (id)_resetProtectedDataErrorUnrecoverable;
- (void)_showAccountResetConfirmationWithCompletion:(id /* block */)arg1;
- (void)_showAccountResetConfirmationWithoutRecovery:(id /* block */)arg1;
- (void)_showEntryLimitError:(id)arg1 withRecoveryOptionHandlers:(id)arg2 defaultIndex:(long long)arg3 completion:(id /* block */)arg4;
- (id)_skipSignInRecoveryOptionWithCompletion:(id /* block */)arg1;
- (id)_softLimitErrorBodyForDevice:(id)arg1;
- (id)_userInfoForLimit:(unsigned long long)arg1 withDevice:(id)arg2;
- (void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(bool)arg2 usingValidator:(id)arg3;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)arg1;
- (id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)remoteSecretValidator:(id)arg1 applyToJoinCircleWithJoinHandler:(id /* block */)arg2;
- (void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(id /* block */)arg4;
- (bool)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id*)arg2;
- (void)secretValidatorWillAttemptRecovery;

@end
