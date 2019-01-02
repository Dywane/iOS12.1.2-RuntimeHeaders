/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAssetTransitionContext : NSObject {
    id /* block */  _animationBlock;
    UIView * _containerView;
    UIView * _fromView;
    bool  _shouldHideBackground;
    UIView * _snapshotView;
    PUOneUpAssetTransitionInfo * _transitionInfo;
}

@property (setter=_setAnimationBlock:, nonatomic, copy) id /* block */ animationBlock;
@property (setter=_setContainerView:, nonatomic, retain) UIView *containerView;
@property (setter=_setFromView:, nonatomic, retain) UIView *fromView;
@property (setter=_setShouldHideBackground:, nonatomic) bool shouldHideBackground;
@property (setter=_setSnapshotView:, nonatomic, retain) UIView *snapshotView;
@property (setter=_setTransitionInfo:, nonatomic, retain) PUOneUpAssetTransitionInfo *transitionInfo;

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;

- (void).cxx_destruct;
- (void)_setAnimationBlock:(id /* block */)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setFromView:(id)arg1;
- (void)_setShouldHideBackground:(bool)arg1;
- (void)_setSnapshotView:(id)arg1;
- (void)_setTransitionInfo:(id)arg1;
- (id /* block */)animationBlock;
- (id)containerView;
- (id)fromView;
- (id)oneUpTransitionContextWithAnimationBlock:(id /* block */)arg1;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(bool)arg1;
- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;
- (bool)shouldHideBackground;
- (id)snapshotView;
- (id)transitionInfo;

@end
