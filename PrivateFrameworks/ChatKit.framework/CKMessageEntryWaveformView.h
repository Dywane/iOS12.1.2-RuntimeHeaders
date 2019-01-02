/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryWaveformView : UIView {
    UIImageView * _balloonImageView;
    UIVisualEffectView * _blurView;
    double  _duration;
    unsigned long long  _maxPowerLevelsCount;
    double  _minTimeLabelWidth;
    NSMutableArray * _powerLevels;
    UILabel * _timeLabel;
    UIImageView * _waveformImageView;
}

@property (nonatomic, retain) UIImageView *balloonImageView;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic, retain) NSMutableArray *powerLevels;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIImageView *waveformImageView;

+ (id)waveformCurveTransform;

- (void).cxx_destruct;
- (void)appendPowerLevel:(double)arg1;
- (id)balloonImageView;
- (id)blurView;
- (void)clearPowerLevels;
- (void)didMoveToWindow;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)maxPowerLevelsCount;
- (double)minTimeLabelWidth;
- (id)powerLevels;
- (void)setBalloonImageView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMaxPowerLevelsCount:(unsigned long long)arg1;
- (void)setMinTimeLabelWidth:(double)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeLabel;
- (void)updateWaveform;
- (id)waveformImageView;

@end
