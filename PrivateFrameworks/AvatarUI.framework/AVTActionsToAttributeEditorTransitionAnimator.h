/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    <AVTViewLayoutInfo> * _avtViewLayoutInfo;
    AVTUIEnvironment * _environment;
}

@property (nonatomic, readonly) <AVTViewLayoutInfo> *avtViewLayoutInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedSafeAreaInsetsForView:(id)arg1;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)avtViewLayoutInfo;
- (id)environment;
- (id)initWithAVTViewLayoutInfo:(id)arg1 environment:(id)arg2;
- (double)transitionDuration:(id)arg1;

@end
