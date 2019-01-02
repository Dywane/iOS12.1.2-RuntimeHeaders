/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    UILabel * _dailyHighLabel;
    UILabel * _dailyLowLabel;
    UIColor * _graphLabelAndGridColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _graphRect;
    UIColor * _noDataTextColor;
    NSArray * _timeMarkerLabels;
    NTKColoringLabel * _titleLabel;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedBounds;
@property (nonatomic, readonly) UILabel *dailyHighLabel;
@property (nonatomic, readonly) UILabel *dailyLowLabel;
@property (nonatomic, readonly) UIColor *graphLabelAndGridColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } graphRect;
@property (nonatomic, readonly) UIColor *noDataTextColor;
@property (nonatomic, readonly) NSArray *timeMarkerLabels;
@property (nonatomic, readonly) double timeMarkerPadding;
@property (nonatomic, readonly) NTKColoringLabel *titleLabel;

+ (id)dailyFormattedNoData;
+ (struct CGSize { double x1; double x2; })graphSize;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_addSubviews;
- (double)_calculateGraphXBasedOnRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 constants:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; })arg2;
- (id)_datesForGraphInTimezone:(id)arg1;
- (void)_drawVerticalHourLines:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bottomLabelPadding:(double)arg3;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (double)_lineStrokeWidthGivenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTimeMarkerLabelsForDates:(id)arg1 timezone:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedBounds;
- (id)dailyHighLabel;
- (id)dailyLowLabel;
- (void)drawGraph:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawableGraphRect;
- (id)graphLabelAndGridColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphRect;
- (id)init;
- (void)loadWithMetadata:(id)arg1;
- (id)noDataTextColor;
- (void)resetToNoDataState:(id)arg1;
- (void)setCachedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGraphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)timeMarkerLabels;
- (double)timeMarkerPadding;
- (id)titleLabel;

@end