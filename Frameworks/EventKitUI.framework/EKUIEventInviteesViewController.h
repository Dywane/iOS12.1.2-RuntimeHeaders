/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, EKEditItemViewControllerProtocol, UITableViewDataSource, UITableViewDelegate> {
    EKUIInviteesViewAddInviteesSection * _addInviteesSection;
    EKUIInviteesViewAllInviteesCanAttendSection * _allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher * _availabilitySearcher;
    bool  _deletedParticipants;
    EKEvent * _event;
    bool  _fromDetail;
    EKUIInviteesViewInvisibleInviteeStatusSection * _invisibleInviteeStatusSection;
    EKUIEventInviteesView * _inviteesView;
    EKUIInviteesViewNotRespondedInviteesSection * _notRespondedSection;
    EKUIInviteesViewOriginalConflictSection * _originalConflictSection;
    EKUIEventInviteesEditViewController * _parentController;
    bool  _prohibitCallingSearcherStateChanged;
    EKUIInviteesViewProposedTimeSection * _proposedTimeSection;
    bool  _resetAttendeesSections;
    bool  _resetConflictResolutionSections;
    NSMutableArray * _respondedSection;
    NSArray * _sections;
    NSDate * _selectedEndDate;
    NSDate * _selectedStartDate;
    EKUIInviteesViewSomeInviteesCanAttendSection * _someInviteesCanAttendSection;
    bool  _viewIsVisible;
}

@property (nonatomic, retain) EKUIInviteesViewAddInviteesSection *addInviteesSection;
@property (nonatomic, retain) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (nonatomic, retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deletedParticipants;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) bool fromDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection;
@property (nonatomic, retain) EKUIEventInviteesView *inviteesView;
@property (nonatomic, retain) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection;
@property (nonatomic, retain) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (nonatomic) EKUIEventInviteesEditViewController *parentController;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool prohibitCallingSearcherStateChanged;
@property (nonatomic, retain) EKUIInviteesViewProposedTimeSection *proposedTimeSection;
@property (nonatomic) bool resetAttendeesSections;
@property (nonatomic) bool resetConflictResolutionSections;
@property (nonatomic, retain) NSMutableArray *respondedSection;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSDate *selectedEndDate;
@property (nonatomic, retain) NSDate *selectedStartDate;
@property (nonatomic, retain) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomBackButton;
@property (nonatomic) bool viewIsVisible;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)_dismissPresentedViewControllerAnimated:(bool)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (long long)_indexForSection:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_requestDismissal;
- (void)_searcherStateChanged:(long long)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (id)addInviteesSection;
- (id)allInviteesCanAttendSection;
- (id)availabilitySearcher;
- (void)dealloc;
- (bool)deletedParticipants;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (id)event;
- (bool)fromDetail;
- (id)initWithEvent:(id)arg1 fromDetail:(bool)arg2;
- (id)invisibleInviteeStatusSection;
- (id)inviteesView;
- (void)loadView;
- (id)notRespondedSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalConflictSection;
- (id)parentController;
- (bool)prohibitCallingSearcherStateChanged;
- (id)proposedTimeSection;
- (bool)resetAttendeesSections;
- (bool)resetConflictResolutionSections;
- (id)respondedSection;
- (id)sections;
- (id)selectedEndDate;
- (id)selectedStartDate;
- (void)setAddInviteesSection:(id)arg1;
- (void)setAllInviteesCanAttendSection:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setDeletedParticipants:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setFromDetail:(bool)arg1;
- (void)setInvisibleInviteeStatusSection:(id)arg1;
- (void)setInviteesView:(id)arg1;
- (void)setNotRespondedSection:(id)arg1;
- (void)setOriginalConflictSection:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setProhibitCallingSearcherStateChanged:(bool)arg1;
- (void)setProposedTimeSection:(id)arg1;
- (void)setResetAttendeesSections:(bool)arg1;
- (void)setResetConflictResolutionSections:(bool)arg1;
- (void)setRespondedSection:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedEndDate:(id)arg1;
- (void)setSelectedStartDate:(id)arg1;
- (void)setSomeInviteesCanAttendSection:(id)arg1;
- (void)setViewIsVisible:(bool)arg1;
- (id)someInviteesCanAttendSection;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateCustomBackButton;
- (bool)useCustomBackButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewIsVisible;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
