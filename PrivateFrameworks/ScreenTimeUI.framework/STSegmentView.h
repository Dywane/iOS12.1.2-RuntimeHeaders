/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STSegmentView : UIView {
    NSLayoutConstraint * _detailImageHeightConstraint;
    UIImageView * _detailImageView;
    NSLayoutConstraint * _detailImageWidthConstraint;
    UILabel * _detailLabel;
    NSLayoutConstraint * _detailLabelLeadingConstraint;
    STSegmentItem * _item;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) NSLayoutConstraint *detailImageHeightConstraint;
@property (nonatomic, readonly) UIImageView *detailImageView;
@property (nonatomic, readonly) NSLayoutConstraint *detailImageWidthConstraint;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) NSLayoutConstraint *detailLabelLeadingConstraint;
@property (nonatomic, retain) STSegmentItem *item;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)detailImageHeightConstraint;
- (id)detailImageView;
- (id)detailImageWidthConstraint;
- (id)detailLabel;
- (id)detailLabelLeadingConstraint;
- (id)initWithItem:(id)arg1 isWidget:(bool)arg2;
- (id)item;
- (void)setItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
