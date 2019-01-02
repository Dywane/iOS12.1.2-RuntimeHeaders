/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface ASVButton : UIControl {
    UIColor * _black35PercentColor;
    UIColor * _black70PercentColor;
    UIColor * _blue100PercentColor;
    UIColor * _blue50PercentColor;
    ASVBlurredBackgroundView * _blurredBackgroundView;
    UIFont * _boldFont;
    ASVWrappedButton * _button;
    long long  _buttonStyle;
    long long  _controlStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _largeImageInsets;
    UIFont * _regularFont;
    long long  _textStyle;
    UIColor * _white100PercentColor;
    UIColor * _white35PercentColor;
    UIColor * _white70PercentColor;
}

@property (nonatomic, retain) UIColor *black35PercentColor;
@property (nonatomic, retain) UIColor *black70PercentColor;
@property (nonatomic, retain) UIColor *blue100PercentColor;
@property (nonatomic, retain) UIColor *blue50PercentColor;
@property (nonatomic, retain) ASVBlurredBackgroundView *blurredBackgroundView;
@property (nonatomic, retain) UIFont *boldFont;
@property (nonatomic, retain) ASVWrappedButton *button;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) long long controlStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeImageInsets;
@property (nonatomic, retain) UIFont *regularFont;
@property (nonatomic) long long textStyle;
@property (nonatomic, retain) UIColor *white100PercentColor;
@property (nonatomic, retain) UIColor *white35PercentColor;
@property (nonatomic, retain) UIColor *white70PercentColor;

- (void).cxx_destruct;
- (id)_colorDarkenedIfNeededForColor:(id)arg1;
- (void)_didUpdateContentSizeCategory:(id)arg1;
- (void)_didUpdateDarkenColorsSetting:(id)arg1;
- (void)_updateTitleStyleForButton:(id)arg1 withControlStyle:(long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)black35PercentColor;
- (id)black70PercentColor;
- (id)blue100PercentColor;
- (id)blue50PercentColor;
- (id)blurredBackgroundView;
- (id)boldFont;
- (id)button;
- (long long)buttonStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (long long)controlStyle;
- (id)initWithButton:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(bool)arg5;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeImageInsets;
- (id)regularFont;
- (void)setBlack35PercentColor:(id)arg1;
- (void)setBlack70PercentColor:(id)arg1;
- (void)setBlue100PercentColor:(id)arg1;
- (void)setBlue50PercentColor:(id)arg1;
- (void)setBlurredBackgroundView:(id)arg1;
- (void)setBoldFont:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonStyle:(long long)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLargeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRegularFont:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextStyle:(long long)arg1;
- (void)setWhite100PercentColor:(id)arg1;
- (void)setWhite35PercentColor:(id)arg1;
- (void)setWhite70PercentColor:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (long long)textStyle;
- (id)white100PercentColor;
- (id)white35PercentColor;
- (id)white70PercentColor;

@end
