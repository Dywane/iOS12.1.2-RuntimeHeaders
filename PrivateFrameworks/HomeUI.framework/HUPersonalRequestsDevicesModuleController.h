/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate> {
    <HUPersonalRequestsDevicesModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPersonalRequestsDevicesModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUPersonalRequestsDevicesItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isCurrentDeviceCandidateForLocationDevice;
- (id)_preflightEnablingPersonalRequests;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (void)_togglePersonalRequestStateForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
