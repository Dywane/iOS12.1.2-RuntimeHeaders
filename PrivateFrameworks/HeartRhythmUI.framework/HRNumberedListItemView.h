/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRNumberedListItemView : UIView {
    unsigned long long  _number;
    UILabel * _numberLabel;
    UIView * _numberLabelBackground;
}

@property (nonatomic) unsigned long long number;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UIView *numberLabelBackground;

+ (id)numberFont;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)initWithInteger:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)number;
- (id)numberLabel;
- (id)numberLabelBackground;
- (void)setNumber:(unsigned long long)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setNumberLabelBackground:(id)arg1;
- (void)setTintColor:(id)arg1;

@end
