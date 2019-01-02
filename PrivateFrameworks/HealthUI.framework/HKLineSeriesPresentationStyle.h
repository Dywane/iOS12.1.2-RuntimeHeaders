/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLineSeriesPresentationStyle : NSObject {
    HKAxisLabelStyle * _annotationStyle;
    HKAxisLabelStyle * _axisAnnotationStyle;
    HKFillStyle * _fillStyle;
    UIImage * _lineEndCap;
    UIImage * _pointMarkerImage;
    bool  _shouldApplyRollingAverage;
    double  _sineWaveSmoothingFactor;
    HKStrokeStyle * _strokeStyle;
    int  _waveForm;
}

@property (nonatomic, retain) HKAxisLabelStyle *annotationStyle;
@property (nonatomic, retain) HKAxisLabelStyle *axisAnnotationStyle;
@property (nonatomic, retain) HKFillStyle *fillStyle;
@property (nonatomic, retain) UIImage *lineEndCap;
@property (nonatomic, retain) UIImage *pointMarkerImage;
@property (nonatomic) bool shouldApplyRollingAverage;
@property (nonatomic) double sineWaveSmoothingFactor;
@property (nonatomic, retain) HKStrokeStyle *strokeStyle;
@property (nonatomic) int waveForm;

- (void).cxx_destruct;
- (id)annotationStyle;
- (id)axisAnnotationStyle;
- (id)fillStyle;
- (id)lineEndCap;
- (id)pointMarkerImage;
- (void)setAnnotationStyle:(id)arg1;
- (void)setAxisAnnotationStyle:(id)arg1;
- (void)setFillStyle:(id)arg1;
- (void)setLineEndCap:(id)arg1;
- (void)setPointMarkerImage:(id)arg1;
- (void)setShouldApplyRollingAverage:(bool)arg1;
- (void)setSineWaveSmoothingFactor:(double)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setWaveForm:(int)arg1;
- (bool)shouldApplyRollingAverage;
- (double)sineWaveSmoothingFactor;
- (id)strokeStyle;
- (int)waveForm;

@end
