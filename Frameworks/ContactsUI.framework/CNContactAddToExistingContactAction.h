/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate> {
    CNContact * _chosenContact;
    CNContactPickerViewController * _contactPicker;
}

@property (nonatomic, retain) CNContact *chosenContact;
@property (nonatomic, retain) CNContactPickerViewController *contactPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chosenContact;
- (id)contactPicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)setChosenContact:(id)arg1;
- (void)setContactPicker:(id)arg1;

@end
