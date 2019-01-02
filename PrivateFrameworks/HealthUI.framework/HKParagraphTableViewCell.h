/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKParagraphTableViewCell : UITableViewCell {
    UIButton * _button;
    NSLayoutConstraint * _buttonBaselineConstraint;
    NSString * _buttonText;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UILabel * _paragraphLabel;
    NSLayoutConstraint * _paragraphLabelBaselineConstraint;
    NSString * _paragraphText;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
    NSString * _titleText;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *paragraphText;
@property (nonatomic, copy) NSString *titleText;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)_buttonBaselineToBottom;
- (id)_buttonFont;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (void)_setupUI;
- (double)_subtitleLabelBaselineToButton;
- (double)_titleLabelBaselineToParagraphBaseline;
- (id)_titleLabelFont;
- (double)_titleLabelTopToBaseline;
- (void)_updateForCurrentSizeCategory;
- (id)buttonText;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)paragraphText;
- (void)setButtonText:(id)arg1;
- (void)setParagraphText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end
