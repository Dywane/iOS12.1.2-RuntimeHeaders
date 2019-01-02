/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    <MKPlaceCardActionSectionViewDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    UIButton * _leftButton;
    NSLayoutConstraint * _leftButtonYConstraint;
    MKPlaceCardActionItem * _leftItem;
    NSLayoutConstraint * _platterSizeConstraint;
    MKPlatterView * _platterView;
    UIButton * _rightButton;
    NSLayoutConstraint * _rightButtonYConstraint;
    MKPlaceCardActionItem * _rightItem;
    bool  _singleItemIsFullWidth;
    bool  _useMarginLayout;
    bool  _usingSmallFonts;
}

@property (nonatomic) <MKPlaceCardActionSectionViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *leftButton;
@property (nonatomic, retain) MKPlaceCardActionItem *leftItem;
@property (nonatomic, retain) MKPlatterView *platterView;
@property (nonatomic, retain) UIButton *rightButton;
@property (nonatomic, retain) MKPlaceCardActionItem *rightItem;
@property (nonatomic) bool singleItemIsFullWidth;

+ (id)_font:(bool)arg1;
+ (void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(bool)arg3;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_leftButtonIsPressed:(id)arg1;
- (id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(bool)arg2 useSmallFonts:(bool)arg3;
- (void)_rightButtonIsPressed:(id)arg1;
- (void)_setUpViewWithButtons;
- (id)currentLeftItem;
- (void)dealloc;
- (id)delegate;
- (id)glyphFont;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(bool)arg3 singleItemIsFullWidth:(bool)arg4;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(bool)arg3 singleItemIsFullWidth:(bool)arg4 useMarginLayout:(bool)arg5;
- (id)leftButton;
- (id)leftItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)platterView;
- (id)rightButton;
- (id)rightItem;
- (void)setDelegate:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightItem:(id)arg1;
- (void)setSingleItemIsFullWidth:(bool)arg1;
- (void)setTopHairlineHidden:(bool)arg1;
- (bool)singleItemIsFullWidth;

@end
