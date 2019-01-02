/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(bool)arg4 valueAxis:(id)arg5;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)legalChartLabelPositions;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (unsigned long long)seriesIndexForDrawing:(id)arg1;
- (bool)supportsBarGap;
- (id)userInterfaceNameForLabelPosition:(id)arg1;

@end