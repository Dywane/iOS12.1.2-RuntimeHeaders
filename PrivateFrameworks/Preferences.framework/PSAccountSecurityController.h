/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAccountSecurityController : PSListController <KeychainSyncPhoneSettingsFragmentDelegate, KeychainSyncViewControllerDelegate, UIAlertViewDelegate> {
    NSString * _SMSTarget;
    KeychainSyncCountryInfo * _SMSTargetCountryInfo;
    KeychainSyncDevicePINController * _devicePINController;
    PSSetupController * _devicePasscodeChangeSetupController;
    PSKeychainSyncManager * _manager;
    NSArray * _passcodeSpecifiers;
    KeychainSyncPhoneSettingsFragment * _phoneSettingsFragment;
    PSSpecifier * _recoverySwitch;
    bool  _secureBackupEnabled;
    NSString * _securityCode;
    int  _securityCodeType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *securityCode;
@property (nonatomic) int securityCodeType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setShowsDoneButton:(bool)arg1;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;
- (void)cancelPressed;
- (void)changeSecurityCode:(id)arg1;
- (void)disableRecovery;
- (void)handleBurnedRecord;
- (id)init;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)navCancelPressed;
- (void)navDonePressed;
- (id)passcodeSpecifiers;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)reloadSpecifiers;
- (void)saveSMSTargetChanges;
- (id)securityCode;
- (int)securityCodeType;
- (void)setSecurityCode:(id)arg1;
- (void)setSecurityCodeType:(int)arg1;
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)useRecoveryForSepecifier:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
