/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition

+ (bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (void)animateTransition:(id)arg1;
- (void)animateZoomTransition:(id)arg1 withInitialVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg2 completionHandler:(id /* block */)arg3;
- (bool)supportsEdgeSwipeBackGesture;
- (double)transitionDuration:(id)arg1;

@end
