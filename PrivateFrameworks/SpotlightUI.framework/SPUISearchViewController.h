/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchViewController : UIViewController <APUIShortLookViewControllerDelegate, SBUIActiveOrientationObserver, SFFeedbackListener, SPUIResultViewDelegate, SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SearchUIResultViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableSet * _allHeaderViews;
    NSTimer * _clearResultsTimer;
    <SPUISearchViewControllerDelegate> * _delegate;
    SPUISearchFirstTimeViewController * _firstTimeExperienceViewController;
    bool  _internetOverrideForPPT;
    bool  _lastQueryWasAuthenticated;
    _UILegibilitySettings * _legibilitySettings;
    SPUILockScreenFooterView * _lockScreenFooterView;
    unsigned long long  _presentationMode;
    SPUIResultViewController * _proactiveResultViewController;
    SPUISearchHeader * _searchHeader;
    SPUIResultViewController * _searchResultViewController;
    SPUITestingHelper * _testingHelper;
}

@property (retain) NSMutableSet *allHeaderViews;
@property (retain) NSTimer *clearResultsTimer;
@property (readonly) NSString *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPUISearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property bool internetOverrideForPPT;
@property bool lastQueryWasAuthenticated;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (retain) SPUILockScreenFooterView *lockScreenFooterView;
@property unsigned long long presentationMode;
@property (retain) SPUIResultViewController *proactiveResultViewController;
@property (retain) SPUISearchHeader *searchHeader;
@property (retain) SPUIResultViewController *searchResultViewController;
@property (readonly) Class superclass;
@property (retain) SPUITestingHelper *testingHelper;

+ (bool)_isSuggestionResult:(id)arg1;
+ (bool)isFeedbackSelector:(SEL)arg1;
+ (bool)shouldShowAsTypedSuggestion;

- (void).cxx_destruct;
- (void)activateFirstTimeExperienceViewAnimate:(bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(bool)arg2;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)activeViewController;
- (id)allHeaderViews;
- (bool)allowInternet;
- (void)cancelButtonPressed;
- (id)clearResultsTimer;
- (void)clearSearchResults;
- (void)clearTimerExpired;
- (id)contentScrollView;
- (id)createAdditionalHeaderView;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(bool)arg2;
- (void)didEngageResult:(id)arg1;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)didUpdateContentScrolledOffScreenStatus:(bool)arg1 animated:(bool)arg2;
- (void)didUpdateFromResults;
- (double)distanceToTopOfAppIcons;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)firstTimeExperienceViewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)getUserActivityForResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasShortLookViewControllerForResult:(id)arg1;
- (id)headerView;
- (void)hideKeyboard;
- (id)homeScreenBringUpTestName;
- (id)init;
- (bool)internetOverrideForPPT;
- (bool)isRunningHomeScreenBringUpTest;
- (bool)lastQueryWasAuthenticated;
- (id)legibilitySettings;
- (void)loadView;
- (id)lockScreenFooterView;
- (void)performSearchWithQuery:(id)arg1 forSuggestions:(bool)arg2;
- (void)performSearchWithSuggestion:(id)arg1;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(long long)arg3;
- (unsigned long long)presentationMode;
- (id)proactiveResultViewController;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(bool)arg3;
- (bool)queryIsPresent;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)runTest:(id)arg1 options:(id)arg2 unlockSpringBoard:(id /* block */)arg3 enterSpotlight:(id /* block */)arg4 exitSpotlight:(id /* block */)arg5;
- (id)searchHeader;
- (id)searchResultViewController;
- (id)searchResultsTestingObject;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
- (void)searchViewDidUpdatePresentationProgress:(double)arg1;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (bool)sectionShouldBeExpanded:(id)arg1;
- (void)sendActionFeedbackFromShortLookViewController:(id)arg1 isPunchout:(bool)arg2;
- (void)setAllHeaderViews:(id)arg1;
- (void)setClearResultsTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstTimeExperienceViewController:(id)arg1;
- (void)setInternetOverrideForPPT:(bool)arg1;
- (void)setInternetOverrideToDisable:(bool)arg1;
- (void)setLastQueryWasAuthenticated:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLockScreenFooterView:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setProactiveResultViewController:(id)arg1;
- (void)setSearchHeader:(id)arg1;
- (void)setSearchResultViewController:(id)arg1;
- (void)setTestingHelper:(id)arg1;
- (void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(bool)arg3 shouldClearAction:(bool)arg4;
- (void)shortLookViewController:(id)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(bool)arg3 shouldClearAction:(bool)arg4;
- (void)shortLookViewController:(id)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (id)shortLookViewControllerForResult:(id)arg1;
- (void)shortLookViewControllerWillBeginUserInteraction:(id)arg1;
- (id)testingHelper;
- (void)updateHeaderViewsWithBlock:(id /* block */)arg1;
- (id)userActivityFromIntent:(id)arg1;
- (id)viewControllerForPresenting;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
