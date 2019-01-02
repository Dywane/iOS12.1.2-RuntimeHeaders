/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <HKHealthPrivacyServiceRemoteDocumentPickerViewController> *_healthPrivacyServiceViewControllerProxy;
@property (nonatomic) <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
