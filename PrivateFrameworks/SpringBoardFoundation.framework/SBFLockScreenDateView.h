/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateView : UIView <SFChargingVisualInformationProvider> {
    double  _alignmentPercent;
    SBFLockScreenDateSubtitleView * _customSubtitleView;
    NSDate * _date;
    SBFLockScreenDateSubtitleDateView * _dateSubtitleView;
    double  _dateToTimeStretch;
    _UILegibilitySettings * _legibilitySettings;
    UIColor * _overrideTextColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _restingFrame;
    double  _subtitleAlpha;
    double  _subtitleLegibilityStrength;
    double  _timeAlpha;
    SBUILegibilityLabel * _timeLabel;
    double  _timeLegibilityStrength;
    bool  _useCompactDateFormat;
}

@property (nonatomic) double alignmentPercent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chargingVisualInformationTimeFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chargingVisualInformationTimeSubtitleFrame;
@property (nonatomic, readonly) double contentAlpha;
@property (nonatomic, retain) SBFLockScreenDateSubtitleView *customSubtitleView;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) double dateToTimeStretch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } restingFrame;
@property (nonatomic, readonly) double subtitleBaselineOffsetFromOrigin;
@property (getter=isSubtitleHidden, nonatomic) bool subtitleHidden;
@property (nonatomic) double subtitleLegibilityStrength;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) double timeBaselineOffsetFromOrigin;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) bool useCompactDateFormat;

+ (double)defaultHeight;
+ (id)timeFont;
+ (struct { double x1; double x2; double x3; double x4; })timeFontMetrics;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_setSubtitleAlpha:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2;
- (id)_timeLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeLabelFrameForAlignmentPercent:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_timeLabelInsetsForTimeString:(id)arg1;
- (void)_updateLabelAlpha;
- (void)_updateLabels;
- (void)_updateUsesCompactDateFormat;
- (double)alignmentPercent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chargingVisualInformationTimeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chargingVisualInformationTimeSubtitleFrame;
- (double)contentAlpha;
- (id)customSubtitleView;
- (id)date;
- (double)dateToTimeStretch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSubtitleHidden;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationExtentForAlignmentPercent:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingFrame;
- (void)setAlignmentPercent:(double)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(bool)arg2;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateToTimeStretch:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRestingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubtitleHidden:(bool)arg1;
- (void)setSubtitleLegibilityStrength:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeLegibilityStrength:(double)arg1;
- (void)setUseCompactDateFormat:(bool)arg1;
- (double)subtitleBaselineOffsetFromOrigin;
- (double)subtitleLegibilityStrength;
- (id)textColor;
- (double)timeBaselineOffsetFromOrigin;
- (double)timeLegibilityStrength;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFormat;
- (bool)useCompactDateFormat;

@end
