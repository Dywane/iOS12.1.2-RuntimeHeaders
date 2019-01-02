/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUButtonCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol, HUDisableableCellProtocol> {
    UIView * _bottomSeparatorView;
    HUButtonCell * _buttonView;
    UIView * _topSeparatorView;
}

@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (nonatomic) bool bottomSeparatorVisible;
@property (nonatomic, readonly) HUButtonCell *buttonView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic) bool topSeparatorVisible;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (bool)bottomSeparatorVisible;
- (id)buttonView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBottomSeparatorVisible:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setTopSeparatorVisible:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)topSeparatorView;
- (bool)topSeparatorVisible;
- (void)updateUIWithAnimation:(bool)arg1;

@end
