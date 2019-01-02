/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    bool  _dismissing;
    _UIProgressiveBlurPresentationAnimator * _dismissingAnimator;
    UINavigationController * _modalRootViewController;
    _TVPlaybackFadeAnimator * _playbackAnimator;
    _UIProgressiveBlurPresentationAnimator * _presentingAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *modalRootViewController;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (readonly) Class superclass;

+ (id)presenter;

- (void).cxx_destruct;
- (void)_configureModalController:(id)arg1 withFromController:(id)arg2 andConfiguration:(id)arg3;
- (void)_dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_forceOrientationBackToSupportedOrientation;
- (id)_hidden;
- (bool)_isDismissing;
- (void)_willRotateNotification:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)hideAllAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hideController:(id)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)modalRootViewController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewController;
- (void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 andCompletionBlock:(id /* block */)arg4;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 animated:(bool)arg4 andCompletionBlock:(id /* block */)arg5;

@end
