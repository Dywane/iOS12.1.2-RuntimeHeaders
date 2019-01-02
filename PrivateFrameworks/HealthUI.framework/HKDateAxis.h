/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateAxis : HKAxis {
    NSArray * _cachedAxisLabels;
    long long  _dayScopeType;
    HKDateIntervalCache * _intervalCache;
}

@property (nonatomic) long long dayScopeType;

- (void).cxx_destruct;
- (unsigned long long)_anchorUnitForZoom:(long long)arg1;
- (id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2;
- (void)_clearCachedAxisLabels;
- (id)_dateRangeForChartRange:(struct HKRange { double x1; double x2; })arg1 zoomScale:(double)arg2;
- (void)_enumerateCachedCoordinatesInModelRange:(id)arg1 withHandler:(id /* block */)arg2;
- (id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2;
- (bool)_labelsOutsideStartDate:(id)arg1 endDate:(id)arg2;
- (void)_setRangeForDateRange:(id)arg1;
- (void)_updateIntervalCacheWithModelRange:(id)arg1 zoomScale:(double)arg2;
- (long long)dateZoomForZoomScale:(double)arg1;
- (long long)dayScopeType;
- (id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)setDayScopeType:(long long)arg1;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;
- (id)zoomScaleEngine;

@end
