/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactNavigationController : UINavigationController <CNAccountsAndGroupsViewControllerDelegate, CNContactContentViewControllerDelegate, CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerAddContactPresenter, CNContactViewControllerDelegate> {
    CNAccountsAndGroupsDataSource * _accountsAndGroupsDataSource;
    CNUIUserActivityManager * _activityManager;
    UIKeyCommand * _addKeyCommand;
    bool  _allowsCanceling;
    bool  _allowsCardDeletion;
    bool  _allowsCardEditing;
    bool  _allowsContactBlocking;
    bool  _allowsDone;
    <CNScheduler> * _backgroundScheduler;
    CNContactListViewController * _contactListViewController;
    CNContactStore * _contactStore;
    CNContactStyle * _contactStyle;
    UIAlertController * _facebookContactsAlertController;
    bool  _hasPendingShowCard;
    bool  _ignoresMapsData;
    long long  _leftButtonBehavior;
    CNContactStoreDataSource * _nonServerDataSource;
    CNContactViewController * _presentedContactViewController;
    CNContactViewController * _reusableContactViewController;
    long long  _rightButtonBehavior;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (nonatomic, retain) CNUIUserActivityManager *activityManager;
@property (nonatomic, retain) UIKeyCommand *addKeyCommand;
@property (nonatomic) bool allowsCanceling;
@property (nonatomic) bool allowsCardDeletion;
@property (nonatomic) bool allowsCardEditing;
@property (nonatomic) bool allowsContactBlocking;
@property (nonatomic) bool allowsDone;
@property (nonatomic, retain) <CNScheduler> *backgroundScheduler;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, readonly) <CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactNavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIAlertController *facebookContactsAlertController;
@property (nonatomic) bool hasPendingShowCard;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic) bool ignoresMapsData;
@property (nonatomic) long long leftButtonBehavior;
@property (nonatomic, retain) CNContactStoreDataSource *nonServerDataSource;
@property (nonatomic) CNContactViewController *presentedContactViewController;
@property (nonatomic, retain) CNContactViewController *reusableContactViewController;
@property (nonatomic) long long rightButtonBehavior;
@property (readonly) Class superclass;

+ (id)newContactFormatter;

- (void).cxx_destruct;
- (void)_cnui_presentViewController:(id)arg1 animated:(bool)arg2;
- (id)accountsAndGroupsDataSource;
- (void)accountsAndGroupsViewControllerDidFinish:(id)arg1;
- (id)activityManager;
- (void)addContact:(id)arg1;
- (void)addContact:(id)arg1 animated:(bool)arg2;
- (id)addContactPresenter;
- (id)addKeyCommand;
- (bool)allowsCanceling;
- (bool)allowsCardDeletion;
- (bool)allowsCardEditing;
- (bool)allowsContactBlocking;
- (bool)allowsDone;
- (void)applicationDidResume;
- (id)backgroundScheduler;
- (void)beginSearch:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(bool)arg2;
- (id)contactListViewController;
- (bool)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(bool)arg3;
- (bool)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (id)contactStore;
- (id)contactStyle;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)done:(id)arg1;
- (id)facebookContactsAlertController;
- (bool)hasPendingShowCard;
- (bool)hidesSearchableSources;
- (bool)ignoresMapsData;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 allowsLargeTitles:(bool)arg2;
- (id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(bool)arg3 environment:(id)arg4 allowsLargeTitles:(bool)arg5;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(bool)arg3;
- (bool)isPresentedContactViewControllerVisible;
- (long long)leftButtonBehavior;
- (id)nextResponderForContactListViewController:(id)arg1;
- (id)nonServerDataSource;
- (void)notifyOtherFacebookContactsAlertDidSelectAction;
- (void)observeOtherFacebookContactsAlert;
- (void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1;
- (void)popToContactListAndSaveChanges:(bool)arg1;
- (void)presentAddContactViewController:(id)arg1 animated:(bool)arg2;
- (void)presentGroupsViewController:(id)arg1;
- (id)presentedContactViewController;
- (id)reusableContactViewController;
- (id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2;
- (long long)rightButtonBehavior;
- (void)searchForString:(id)arg1;
- (void)selectNextContact:(id)arg1;
- (void)selectPreviousContact:(id)arg1;
- (void)setAccountsAndGroupsDataSource:(id)arg1;
- (void)setActivityManager:(id)arg1;
- (void)setAddKeyCommand:(id)arg1;
- (void)setAllowsCanceling:(bool)arg1;
- (void)setAllowsCardDeletion:(bool)arg1;
- (void)setAllowsCardEditing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsDone:(bool)arg1;
- (void)setBackgroundScheduler:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setFacebookContactsAlertController:(id)arg1;
- (void)setHasPendingShowCard:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setIgnoresMapsData:(bool)arg1;
- (void)setLeftButtonBehavior:(long long)arg1;
- (void)setNonServerDataSource:(id)arg1;
- (void)setPresentedContactViewController:(id)arg1;
- (void)setReusableContactViewController:(id)arg1;
- (void)setRightButtonBehavior:(long long)arg1;
- (void)setShouldDisplayMeContactBanner:(bool)arg1;
- (bool)shouldDisplayMeContactBanner;
- (void)showCardForContact:(id)arg1 animated:(bool)arg2;
- (void)showCardForContact:(id)arg1 resetFilter:(bool)arg2 resetSearch:(bool)arg3 fallbackToFirstContact:(bool)arg4 scrollToContact:(bool)arg5 animated:(bool)arg6;
- (void)showCardForContactAfterIndexPath:(id)arg1;
- (void)showCardForContactBeforeIndexPath:(id)arg1;
- (void)showCardForContactIfPossible:(id)arg1;
- (void)showUnifiedCardForPerson:(void*)arg1;
- (void)updateLeftNavigationButtonAnimated:(bool)arg1;
- (void)updateNavigationButtonsAnimated:(bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1 animated:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
