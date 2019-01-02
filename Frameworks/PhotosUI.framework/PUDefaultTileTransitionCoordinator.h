/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator {
    NSNumber * _animationDuration;
}

@property (nonatomic, copy) NSNumber *animationDuration;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_adjustDefaultDisappearanceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)animationDuration;
- (void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(bool)arg2;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (void)setAnimationDuration:(id)arg1;

@end
