/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldsModel : NSObject {
    PKPaymentSetupFieldFooter * _footerField;
    NSMutableArray * _paymentSetupFields;
}

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;

- (void).cxx_destruct;
- (id)footerPaymentSetupField;
- (bool)hasFooterPaymentSetupField;
- (bool)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)arg1;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (id)paymentSetupFields;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)submissionValuesForDestination:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (double)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2;

@end