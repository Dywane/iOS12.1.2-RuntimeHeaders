/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol> {
    <SFBrowserRemoteViewControllerDelegate> * _delegate;
    bool  _isInFullScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFBrowserRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen;
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *volumeAudioCategory;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didChangeFullScreen:(bool)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(bool)arg2;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (bool)isOnScreenForVolumeDisplay;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)volumeAudioCategory;
- (void)willDismissServiceViewController;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willOpenURLInHostApplication:(id)arg1;

@end
