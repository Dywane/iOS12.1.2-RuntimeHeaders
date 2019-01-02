/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDialogView : UIView {
    SFDialogContentView * _contentView;
    SFDialogContentView * _contentViewConfiguredForMinimumHeight;
    <_SFDialogViewDelegate> * _delegate;
    _SFKeyboardLayoutAlignmentView * _keyboardAlignmentView;
    UISwipeGestureRecognizer * _keyboardDismissSwipeGesture;
    UITapGestureRecognizer * _keyboardDismissTapGesture;
    NSLayoutConstraint * _obscuredInsetBottomConstraint;
    NSLayoutConstraint * _obscuredInsetLeftConstraint;
    NSLayoutConstraint * _obscuredInsetRightConstraint;
    NSLayoutConstraint * _obscuredInsetTopConstraint;
}

@property (nonatomic) <_SFDialogViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_keyboardDismissGesture:(id)arg1;
- (bool)becomeFirstResponder;
- (id)delegate;
- (void)didAppear;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialogActions:(id)arg1;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setMessageText:(id)arg1;
- (void)setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setTitleText:(id)arg1;
- (void)setUsesOpaqueAppearance:(bool)arg1;
- (void)willDisappear;

@end
