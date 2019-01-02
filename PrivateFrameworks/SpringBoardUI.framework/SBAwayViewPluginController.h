/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginController, SBLockScreenPluginViewController> {
    <SBLockScreenPluginAgent> * _agent;
    SBLockScreenPluginMutableAppearanceContext * _appearance;
    bool  _viewCanBeDisplayed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long orientation;
@property (nonatomic) <SBLockScreenPluginAgent> *pluginAgent;
@property (nonatomic, readonly) <SBLockScreenPluginAppearance> *pluginAppearance;
@property (nonatomic, readonly) long long pluginPriority;
@property (nonatomic, readonly, retain) SBLockScreenPluginAction *pluginUnlockAction;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool viewCanBeDisplayed;

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;

- (void).cxx_destruct;
- (id)_legibilitySettings;
- (void)_updateAppearance;
- (void)_updateAppearanceAndNotify:(bool)arg1;
- (bool)allowsControlCenter;
- (bool)allowsLockScreenCamera;
- (bool)allowsLockScreenHint;
- (bool)allowsLockScreenMediaControls;
- (bool)allowsLogout;
- (bool)allowsPhotoSlideshow;
- (bool)allowsScreenshots;
- (bool)allowsSiri;
- (bool)allowsTimer;
- (bool)allowsUnlocking;
- (bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (id)bundleIDForUnlock;
- (id)customHeaderView;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (void)disable;
- (bool)disablesAwayItemsCompletely;
- (id /* block */)enableTransitionBlock;
- (bool)handleHeadsetButtonPressed:(bool)arg1;
- (bool)handleLockButtonPressed;
- (bool)handleMenuButtonDoubleTap;
- (bool)handleMenuButtonHeld;
- (bool)handleMenuButtonTap;
- (bool)handleVolumeDownButtonPressed;
- (bool)handleVolumeUpButtonPressed;
- (bool)hasCustomSubtitle;
- (id)init;
- (bool)isContentViewWhiteUnderSlideToUnlockText;
- (id)legibilitySettings;
- (bool)legibilitySettingsOverridesVibrancy;
- (long long)notificationBehavior;
- (long long)orientation;
- (long long)overlayStyle;
- (id)pluginAgent;
- (id)pluginAnimateAppearanceTransition:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)pluginAnimatesAppearanceTransition:(bool)arg1;
- (id)pluginAppearance;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (bool)pluginHandleEvent:(long long)arg1;
- (long long)pluginPriority;
- (id)pluginUnlockAction;
- (id)pluginViewController;
- (void)pluginWillActivateWithContext:(id)arg1;
- (long long)presentationStyle;
- (void)purgeView;
- (void)setActivationContext:(id)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1 duration:(double)arg2;
- (void)setNeedsLegibilityAppearanceUpdate;
- (void)setOrientation:(long long)arg1;
- (void)setPluginAgent:(id)arg1;
- (void)setViewCanBeDisplayed:(bool)arg1;
- (bool)shouldAutoHideNotifications;
- (bool)shouldDisableOnRelock;
- (bool)shouldDisableOnUnlock;
- (bool)shouldShowLockStatusBarTime;
- (bool)showBatteryChargingText;
- (bool)showDate;
- (bool)showDateView;
- (bool)showStatusBar;
- (id)slideToUnlockText;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (bool)viewCanBeDisplayed;
- (bool)viewWantsOverlayLayout;
- (bool)wantsMenuButtonHeldEvent;
- (bool)wantsMesaAutoUnlock;

@end
