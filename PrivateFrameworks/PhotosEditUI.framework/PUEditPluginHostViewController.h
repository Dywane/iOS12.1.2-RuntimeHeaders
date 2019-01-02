/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController> {
    NSNumber * __allowsFullScreen;
    bool  __didHandleCancel;
    bool  __didHandleDone;
    id  __disablingIdleTimerToken;
    bool  __extensionDidBeginContentEditing;
    UIViewController * __remoteViewController;
    <NSCopying> * __request;
    <PUEditPluginHostViewControllerDataSource> * _dataSource;
    <PUEditPluginHostViewControllerDelegate> * _delegate;
    PUEditPlugin * _plugin;
}

@property (setter=_setAllowsFullScreen:, nonatomic, retain) NSNumber *_allowsFullScreen;
@property (setter=_setDidHandleCancel:, nonatomic) bool _didHandleCancel;
@property (setter=_setDidHandleDone:, nonatomic) bool _didHandleDone;
@property (setter=_setDisablingIdleTimerToken:, nonatomic, retain) id _disablingIdleTimerToken;
@property (setter=_setExtensionDidBeginContentEditing:, nonatomic) bool _extensionDidBeginContentEditing;
@property (setter=_setRemoteViewController:, retain) UIViewController *_remoteViewController;
@property (setter=_setRequest:, copy) <NSCopying> *_request;
@property (nonatomic) <PUEditPluginHostViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUEditPluginHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUEditPlugin *plugin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(bool)arg1;
- (id)_allowsFullScreen;
- (void)_beginContentEditingWithCompletionHandler:(id /* block */)arg1 timeout:(double)arg2;
- (void)_beginDisablingIdleTimer;
- (bool)_didHandleCancel;
- (bool)_didHandleDone;
- (id)_disablingIdleTimerToken;
- (void)_dismiss;
- (void)_endDisablingIdleTimerIfNecessary;
- (bool)_extensionDidBeginContentEditing;
- (id)_extensionVendorProxy;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)_hostContext;
- (void)_queryAllowsFullScreen:(id /* block */)arg1;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)arg1 timeout:(double)arg2;
- (id)_remoteViewController;
- (id)_request;
- (void)_setAllowsFullScreen:(id)arg1;
- (void)_setDidHandleCancel:(bool)arg1;
- (void)_setDidHandleDone:(bool)arg1;
- (void)_setDisablingIdleTimerToken:(id)arg1;
- (void)_setExtensionDidBeginContentEditing:(bool)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRequest:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlugin:(id)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)loadView;
- (id)plugin;
- (bool)prefersStatusBarHidden;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id /* block */)arg2 timeout:(double)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
