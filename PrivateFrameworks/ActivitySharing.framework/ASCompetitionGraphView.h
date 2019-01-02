/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCompetitionGraphView : UIView {
    long long  _alignment;
    double  _barWidth;
    double  _bottomPadding;
    ASCompetition * _competition;
    UIFont * _currentDateFont;
    UIColor * _dateColor;
    UIFont * _dateFont;
    NSDateFormatter * _dateFormatter;
    double  _dayLabelBaselineOffset;
    bool  _drawsDailyScoreLabels;
    bool  _drawsFutureScoreDots;
    UIColor * _highlightedDateColor;
    bool  _highlightsCurrentDay;
    double  _horizontalInset;
    double  _maxBarHeight;
    bool  _showsBackgroundDateGuide;
    bool  _showsBackgroundScoreGuide;
    double  _spaceBetweenBars;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double barWidth;
@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) ASCompetition *competition;
@property (nonatomic, retain) UIFont *currentDateFont;
@property (nonatomic, retain) UIColor *dateColor;
@property (nonatomic, retain) UIFont *dateFont;
@property (nonatomic, copy) NSString *dateFormat;
@property (nonatomic) double dayLabelBaselineOffset;
@property (nonatomic) bool drawsDailyScoreLabels;
@property (nonatomic) bool drawsFutureScoreDots;
@property (nonatomic, retain) UIColor *highlightedDateColor;
@property (nonatomic) bool highlightsCurrentDay;
@property (nonatomic) double horizontalInset;
@property (nonatomic, readonly) double lastBaselineY;
@property (nonatomic) double maxBarHeight;
@property (nonatomic) bool showsBackgroundDateGuide;
@property (nonatomic) bool showsBackgroundScoreGuide;
@property (nonatomic) double spaceBetweenBars;

+ (id)companionGraph;
+ (id)gizmoGraph;

- (void).cxx_destruct;
- (id)_allScores;
- (id)_attributesForDateLabelWithDate:(id)arg1;
- (double)_firstBarOriginXForDateLabelOriginX:(double)arg1 dateLabelWidth:(double)arg2;
- (unsigned long long)_maxDailyScore;
- (unsigned long long)_minDailyScore;
- (double)_percentForScoreAtIndex:(unsigned long long)arg1 scores:(id)arg2 maxScore:(unsigned long long)arg3;
- (long long)alignment;
- (double)barWidth;
- (double)bottomPadding;
- (id)competition;
- (id)currentDateFont;
- (id)dateColor;
- (id)dateFont;
- (id)dateFormat;
- (double)dayLabelBaselineOffset;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsDailyScoreLabels;
- (bool)drawsFutureScoreDots;
- (id)highlightedDateColor;
- (bool)highlightsCurrentDay;
- (double)horizontalInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineY;
- (void)layoutSubviews;
- (double)maxBarHeight;
- (double)preferredHeight;
- (void)setAlignment:(long long)arg1;
- (void)setBarWidth:(double)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setCompetition:(id)arg1;
- (void)setCurrentDateFont:(id)arg1;
- (void)setDateColor:(id)arg1;
- (void)setDateFont:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDayLabelBaselineOffset:(double)arg1;
- (void)setDrawsDailyScoreLabels:(bool)arg1;
- (void)setDrawsFutureScoreDots:(bool)arg1;
- (void)setHighlightedDateColor:(id)arg1;
- (void)setHighlightsCurrentDay:(bool)arg1;
- (void)setHorizontalInset:(double)arg1;
- (void)setMaxBarHeight:(double)arg1;
- (void)setShowsBackgroundDateGuide:(bool)arg1;
- (void)setShowsBackgroundScoreGuide:(bool)arg1;
- (void)setSpaceBetweenBars:(double)arg1;
- (bool)showsBackgroundDateGuide;
- (bool)showsBackgroundScoreGuide;
- (double)spaceBetweenBars;

@end
