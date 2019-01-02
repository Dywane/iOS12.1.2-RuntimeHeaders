/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationSummaryItemsView : UIView {
    NSMutableArray * _hasBottomPadding;
    NSMutableArray * _labelViews;
    PKPaymentAuthorizationLayout * _layout;
    NSString * _title;
    UILabel * _titleLabel;
    NSMutableArray * _valueViews;
}

@property (nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(bool)arg2;
- (id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2;
- (void)addLabel:(id)arg1 value:(id)arg2 itemType:(unsigned long long)arg3 maxLabelLines:(long long)arg4 maxValueLines:(long long)arg5 hasBottomPadding:(bool)arg6 useDarkColor:(bool)arg7;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)removeLabelsAndValues;
- (void)setLayout:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 andLayout:(bool)arg2;
- (id)title;
- (id)titleLabel;

@end