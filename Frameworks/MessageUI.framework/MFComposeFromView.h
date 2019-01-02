/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeFromView : MFComposeHeaderView {
    bool  _accountHasUnsafeDomain;
    UILabel * _accountLabel;
    UIView * _background;
}

@property (nonatomic) bool accountHasUnsafeDomain;

- (id)_accountLabel;
- (void)_setBackgroundVisible:(bool)arg1 animated:(bool)arg2;
- (bool)accountHasUnsafeDomain;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accountLabelRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccountHasUnsafeDomain:(bool)arg1;
- (void)setAccountLabel:(id)arg1;
- (void)setLabelHighlighted:(bool)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
