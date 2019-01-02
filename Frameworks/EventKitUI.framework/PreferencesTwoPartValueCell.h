/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface PreferencesTwoPartValueCell : EKUITableViewCell {
    UILabel * _largePart2TextLabel;
    unsigned int  _notifiedShort;
    <EKCellShortener> * _shortener;
    bool  _strikeThroughLargeDetailTextLabel;
    bool  _strikeThroughLargePart2TextLabel;
    TwoPartTextLabel * _twoPartLabel;
}

@property (nonatomic, readonly, retain) UILabel *largePart2TextLabel;
@property (nonatomic) <EKCellShortener> *shortener;
@property (nonatomic) bool strikeThroughLargeDetailTextLabel;
@property (nonatomic) bool strikeThroughLargePart2TextLabel;
@property (nonatomic, readonly, retain) TwoPartTextLabel *twoPartTextLabel;
@property (nonatomic, readonly, retain) UIColor *valueColor;

- (void).cxx_destruct;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (id)description;
- (id)largePart2TextLabel;
- (void)layoutSubviews;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)setShortener:(id)arg1;
- (void)setStrikeThroughLargeDetailTextLabel:(bool)arg1;
- (void)setStrikeThroughLargePart2TextLabel:(bool)arg1;
- (void)shorten;
- (id)shortener;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)strikeThroughLargeDetailTextLabel;
- (bool)strikeThroughLargePart2TextLabel;
- (id)twoPartTextLabel;
- (id)valueColor;

@end
