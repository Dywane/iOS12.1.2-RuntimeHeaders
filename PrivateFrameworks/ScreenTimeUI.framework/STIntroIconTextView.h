/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroIconTextView : UIView {
    UILabel * _contentLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _iconView;
    double  _padding;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) double padding;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (double)_availableTextWidth:(double)arg1;
- (id)contentLabel;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)iconView;
- (id)initWithIcon:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 title:(id)arg3 content:(id)arg4;
- (void)layoutSubviews;
- (double)padding;
- (void)setContentLabel:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconView:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
