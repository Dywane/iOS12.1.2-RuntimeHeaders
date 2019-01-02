/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeChatController : CKChatController <CKBusinessInfoViewDelegate, CKComposeRecipientSelectionControllerDelegate> {
    NSDictionary * _bizIntent;
    CKBusinessInfoView * _businessInfoView;
    UIBarButtonItem * _composeCancelItem;
    CKComposeRecipientSelectionController * _composeRecipientSelectionController;
    id /* block */  _deferredSendAnimationBlock;
    bool  _ignoreKeyboardNotifications;
    CKComposeNavbarManager * _navbarManager;
    bool  _newComposeCancelled;
    CKComposition * _prepopulatedComposition;
    NSArray * _prepopulatedRecipients;
}

@property (nonatomic, retain) NSDictionary *bizIntent;
@property (nonatomic, retain) CKBusinessInfoView *businessInfoView;
@property (nonatomic, retain) UIBarButtonItem *composeCancelItem;
@property (nonatomic, retain) CKComposeRecipientSelectionController *composeRecipientSelectionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredSendAnimationBlock;
@property (nonatomic) <CKComposeChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreKeyboardNotifications;
@property (nonatomic, retain) CKComposeNavbarManager *navbarManager;
@property (nonatomic) bool newComposeCancelled;
@property (nonatomic, retain) CKComposition *prepopulatedComposition;
@property (nonatomic, retain) NSArray *prepopulatedRecipients;
@property (nonatomic, readonly) NSArray *proposedRecipients;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unatomizedRecipientText;

- (void).cxx_destruct;
- (bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (double)_entryViewTopInsetPadding;
- (void)_passKitUIDismissed:(id)arg1;
- (void)_saveDraftState;
- (void)_setConversationDeferredSetup;
- (bool)_shouldSetToFieldAsFirstResponder;
- (bool)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)_triggerRecipientFinalization;
- (void)_updateNavigationButtons;
- (void)_updateTitleAnimated:(bool)arg1;
- (void)addBizIntentToConversation:(id)arg1;
- (bool)becomeFirstResponder;
- (id)bizIntent;
- (id)businessInfoView;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (id)composeCancelItem;
- (id)composeRecipientSelectionController;
- (void)conversationLeft;
- (void)dealloc;
- (id /* block */)deferredSendAnimationBlock;
- (void)handleAddressBookChange:(id)arg1;
- (bool)hasFailedRecipients;
- (bool)hasUnreachableEmergencyRecipient;
- (bool)ignoreKeyboardNotifications;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3;
- (id)inputAccessoryView;
- (bool)isComposingRecipient;
- (bool)isSafeToMarkAsRead;
- (void)keyboardWillShowOrHide:(id)arg1;
- (void)layoutBusinessInfoViewIfNecessary;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (id)navbarManager;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (bool)newComposeCancelled;
- (id)outgoingComposeViewForSendAnimation;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (void)prepareForSuspend;
- (id)prepopulatedComposition;
- (id)prepopulatedRecipients;
- (id)proposedRecipients;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)sendComposition:(id)arg1;
- (void)setBizIntent:(id)arg1;
- (void)setBusinessInfoView:(id)arg1;
- (void)setBusinessInfoViewInfoIfNecessary;
- (void)setComposeCancelItem:(id)arg1;
- (void)setComposeRecipientSelectionController:(id)arg1;
- (void)setDeferredSendAnimationBlock:(id /* block */)arg1;
- (void)setIgnoreKeyboardNotifications:(bool)arg1;
- (void)setNavbarManager:(id)arg1;
- (void)setNewComposeCancelled:(bool)arg1;
- (void)setPrepopulatedComposition:(id)arg1;
- (void)setPrepopulatedRecipients:(id)arg1;
- (bool)shouldUseNavigationBarCanvasView;
- (id)textViewOnscreenWithEntryView;
- (double)topInsetPadding;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (id)unatomizedRecipientText;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
