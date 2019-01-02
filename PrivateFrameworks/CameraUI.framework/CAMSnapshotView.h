/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory> {
    long long  __blurStyleForEffectAnimationFactory;
    UIVisualEffectView * __blurView;
    UIView * __dimmingView;
    UIView * __lowQualityBlurView;
    bool  __supportsBlur;
    bool  _blurred;
    long long  _desiredAspectRatio;
    bool  _dimmed;
    UIView * _snapshotView;
}

@property (setter=_setBlurStyleForEffectAnimationFactory:, nonatomic) long long _blurStyleForEffectAnimationFactory;
@property (setter=_setBlurView:, nonatomic, retain) UIVisualEffectView *_blurView;
@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UIView *_lowQualityBlurView;
@property (nonatomic, readonly) bool _supportsBlur;
@property (nonatomic) bool blurred;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long desiredAspectRatio;
@property (nonatomic) bool dimmed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *snapshotView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (long long)_blurStyleForEffectAnimationFactory;
- (id)_blurView;
- (id)_dimmingView;
- (id)_lowQualityBlurView;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(bool)arg2 inputRadiusAmount:(double*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(double*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(bool)arg2 opacityAmount:(double*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (double)_resumeFadeInDuration;
- (void)_setBlurStyleForEffectAnimationFactory:(long long)arg1;
- (void)_setBlurView:(id)arg1;
- (void)_setupDimOnSnapshot;
- (void)_setupLowQualityBlurOnSnapshot;
- (bool)_supportsBlur;
- (bool)blurred;
- (long long)desiredAspectRatio;
- (bool)dimmed;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;
- (void)prepareForResumingUsingCrossfade;
- (void)removeInflightBlurAnimations;
- (void)setBlurred:(bool)arg1;
- (void)setBlurred:(bool)arg1 animated:(bool)arg2 style:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)snapshotView;

@end
