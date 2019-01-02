/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AssistantUIViewController : AUUITableViewController <AUUIAlertDelegate, AssistantCallbackUIDelegate, AssistantUIDelegate, TableViewManagerDelegate, UINavigationControllerDelegate> {
    id  _assistantDelegate;
    AssistantUIController * _assistantUIController;
    NSDictionary * _callerParamDict;
    AssistantCallbackController * _controllerContext;
    AssistantSubUIViewController * _currentSubController;
    int  _currentUIConfigStep;
    bool  _goingBack;
    NSString * _macAddress;
    UITableView * _mainTableView;
    NSDictionary * _mfiAccessoryResponseDict;
    NSArray * _paramScanResults;
    NSDictionary * _recommendationParamDict;
    NSDictionary * _scanInfoRecord;
    unsigned long long  _selectedActionTag;
    NSString * _settingUpStatusText;
    UIView * _spinnerWithStatusAdjacentView;
    AUUIAlert * askUserQuestionAlert;
    UIBarButtonItem * cancelButton;
    AUUIAlert * connectionVerificationAlert;
    UITextField * currentTextField;
    UIView * justTextContainerView;
    UILabel * justTextLabel;
    long long  letMeChooseButtonIndex;
    UIBarButtonItem * nextButton;
    AUPasswordUIAlert * passwordAlert;
    long long  recommendationButtonIndex;
    NSDictionary * recommendationParamDict;
    long long  restoreButtonIndex;
    bool  showingPasswordsAtEnd;
    UILabel * spinnerWithStatusBelowLabel;
    UIActivityIndicatorView * spinnerWithStatusBelowSpinner;
    UIView * spinnerWithStatusBelowView;
    UIView * tableHeaderContainerView;
    NetTopoMiniStaticLayout * topoLayout;
    UIView * topoView;
    AUUIAlert * uiAlert;
}

@property (nonatomic, retain) AssistantUIController *_assistantUIController;
@property (nonatomic, retain) AssistantCallbackController *_controllerContext;
@property (nonatomic, retain) AUUIAlert *askUserQuestionAlert;
@property (nonatomic) <AssistantViewControllerDelegate> *assistantDelegate;
@property (nonatomic, copy) NSDictionary *callerParamDict;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) AUUIAlert *connectionVerificationAlert;
@property (nonatomic, retain) AssistantSubUIViewController *currentSubController;
@property (nonatomic, retain) UITextField *currentTextField;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (nonatomic) long long letMeChooseButtonIndex;
@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic, retain) UITableView *mainTableView;
@property (nonatomic, retain) UIBarButtonItem *nextButton;
@property (nonatomic, copy) NSArray *paramScanResults;
@property (nonatomic, retain) AUPasswordUIAlert *passwordAlert;
@property (nonatomic) long long recommendationButtonIndex;
@property (nonatomic, copy) NSDictionary *recommendationParamDict;
@property (nonatomic) long long restoreButtonIndex;
@property (nonatomic, copy) NSDictionary *scanInfoRecord;
@property (retain) NSString *settingUpStatusText;
@property (nonatomic, retain) UIView *spinnerWithStatusAdjacentView;
@property (nonatomic, retain) UIView *spinnerWithStatusBelowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableHeaderContainerView;
@property (nonatomic, retain) NetTopoMiniStaticLayout *topoLayout;
@property (nonatomic, retain) UIView *topoView;
@property (nonatomic, retain) AUUIAlert *uiAlert;

+ (void)readjustSubviewsInContainer:(id)arg1;

- (id)_assistantUIController;
- (id)_controllerContext;
- (id)askUserQuestionAlert;
- (id)assistantDelegate;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)assistantWaitingForResourcesComplete;
- (void)assistantWaitingForResourcesStart;
- (bool)auUIAlertAlternateAction:(id)arg1;
- (bool)auUIAlertCancelAction:(id)arg1;
- (bool)auUIAlertDestructiveAction:(id)arg1;
- (bool)auUIAlertOKAction:(id)arg1;
- (void)baseStationConfigurationComplete:(id)arg1;
- (void)callbackAskCancel;
- (int)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
- (int)callbackAskUserForSetupCode:(int)arg1 isRetry:(bool)arg2 forController:(id)arg3;
- (int)callbackAskUserForUncertifiedForController:(id)arg1;
- (id)callerParamDict;
- (id)cancelButton;
- (void)confirmSkipWANPort;
- (id)connectionVerificationAlert;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithGuestNetSettings;
- (void)continueWithPPPoESettings;
- (void)continueWithSwapCabling;
- (id)currentSubController;
- (id)currentTextField;
- (void)dealloc;
- (bool)disablesAutomaticKeyboardDismissal;
- (void)doneWithAssistantResult:(int)arg1;
- (void)handeImmediateCancel;
- (void)handleCancelButton:(id)arg1;
- (void)handleCancelRequest:(bool)arg1;
- (void)handleNextButton:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeServiesDone;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)keyboardReturnKeySetEnabled:(bool)arg1;
- (long long)letMeChooseButtonIndex;
- (void)loadView;
- (id)macAddress;
- (id)mainTableView;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 newLayout:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)newStepByStepControllerForStep:(int)arg1;
- (id)nextButton;
- (id)paramScanResults;
- (id)passwordAlert;
- (void)playDoneSound;
- (void)popToRootViewControllerAnimated:(bool)arg1;
- (void)presentUIForRecommendationResult:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForSetupResult:(int)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepResult:(int)arg1;
- (void)presentUIForStepByStepStart;
- (void)presentWaitingForWANViewWithContinueText:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)readyToGuess;
- (long long)recommendationButtonIndex;
- (id)recommendationParamDict;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 withAnimation:(bool)arg3;
- (long long)restoreButtonIndex;
- (id)scanInfoRecord;
- (void)setAskUserQuestionAlert:(id)arg1;
- (void)setAssistantDelegate:(id)arg1;
- (void)setCallerParamDict:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConnectionVerificationAlert:(id)arg1;
- (void)setCurrentSubController:(id)arg1;
- (void)setCurrentTextField:(id)arg1;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setLetMeChooseButtonIndex:(long long)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setMainTableView:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setParamScanResults:(id)arg1;
- (void)setPasswordAlert:(id)arg1;
- (void)setRecommendationButtonIndex:(long long)arg1;
- (void)setRecommendationParamDict:(id)arg1;
- (void)setRestoreButtonIndex:(long long)arg1;
- (void)setScanInfoRecord:(id)arg1;
- (void)setSettingUpStatusText:(id)arg1;
- (void)setSpinnerWithStatusAdjacentView:(id)arg1;
- (void)setSpinnerWithStatusBelowView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setTopoLayout:(id)arg1;
- (void)setTopoView:(id)arg1;
- (void)setUiAlert:(id)arg1;
- (void)set_assistantUIController:(id)arg1;
- (void)set_controllerContext:(id)arg1;
- (id)settingUpStatusText;
- (void)setupCompleteShowPasswords:(bool)arg1;
- (void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showTellUserToFixTheirInternetConnection;
- (void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)showUIForSetupStatus;
- (void)skipPluginAudioCabling;
- (void)skipWANPort;
- (id)spinnerWithStatusAdjacentView;
- (id)spinnerWithStatusBelowView;
- (void)startSetup:(id)arg1;
- (id)tableHeaderContainerView;
- (id)topoLayout;
- (id)topoView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)uiAlert;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;

@end
