/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCQuestionPane : PSEditingPane {
    double  _navigationBarHeight;
    MCQuestionView * _questionView;
    double  _statusBarHeight;
    UITransitionView * _transitionView;
}

@property (nonatomic) double navigationBarHeight;
@property (nonatomic) double statusBarHeight;

- (void).cxx_destruct;
- (void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2;
- (void)_updateInPlaceWithProperties:(id)arg1;
- (void)disableInputField;
- (void)enableInputField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)navigationBarHeight;
- (bool)requiresKeyboard;
- (id)responseValue;
- (void)setNavigationBarHeight:(double)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperties:(id)arg1 withStyle:(int)arg2;
- (void)setStatusBarHeight:(double)arg1;
- (double)statusBarHeight;
- (void)transitionViewDidComplete:(id)arg1;
- (void)viewDidBecomeVisible;

@end
