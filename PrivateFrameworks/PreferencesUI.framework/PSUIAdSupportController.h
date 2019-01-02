/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate> {
    id  _effectiveSettingsChangedObserver;
    UITableViewCell * _limitAdTrackingCell;
    long long  _optInStatus;
    UIView * _originalAccessoryView;
    id  _restrictionsChangedObserver;
    UserTransparencyViewController * _userTransparencyController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id effectiveSettingsChangedObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITableViewCell *limitAdTrackingCell;
@property (nonatomic) long long optInStatus;
@property (nonatomic, retain) UIView *originalAccessoryView;
@property (nonatomic, retain) id restrictionsChangedObserver;
@property (readonly) Class superclass;
@property (nonatomic, retain) UserTransparencyViewController *userTransparencyController;

- (void).cxx_destruct;
- (bool)canChangeLimitAdTracking;
- (void)dealloc;
- (id)effectiveSettingsChangedObserver;
- (id)limitAdTrackingCell;
- (id)limitAdTrackingEnabled:(id)arg1;
- (long long)optInStatus;
- (id)originalAccessoryView;
- (void)refreshOptInStatus;
- (void)reloadLimitAdTrackingSpecifier;
- (void)resetAdID;
- (id)restrictionsChangedObserver;
- (void)setEffectiveSettingsChangedObserver:(id)arg1;
- (void)setLimitAdTrackingCell:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setOptInStatus:(long long)arg1;
- (void)setOriginalAccessoryView:(id)arg1;
- (void)setRestrictionsChangedObserver:(id)arg1;
- (void)setUserTransparencyController:(id)arg1;
- (id)specifiers;
- (void)userDidTapAdPreferences:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (id)userTransparencyController;
- (void)userTransparencyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)userTransparencyViewControllerDidDismiss:(id)arg1;
- (void)userTransparencyViewControllerDidLoad:(id)arg1;
- (void)viewDidLoad;

@end
