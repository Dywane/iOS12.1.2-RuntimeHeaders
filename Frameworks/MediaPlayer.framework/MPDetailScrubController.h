/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDetailScrubController : NSObject {
    float  _accumulatedDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginLocationInView;
    long long  _currentScrubSpeed;
    float  _currentValue;
    <MPDetailScrubControllerDelegate> * _delegate;
    bool  _detailedScrubbingEnabled;
    bool  _didBeginTracking;
    double  _duration;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _isTracking;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastCommittedLocationInView;
    bool  _needsCommit;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocationInView;
    UIControl<MPDetailedScrubbing> * _scrubbingControl;
    double  _scrubbingVerticalRange;
}

@property (nonatomic, readonly) long long currentScrubSpeed;
@property (nonatomic) <MPDetailScrubControllerDelegate> *delegate;
@property (nonatomic) bool detailedScrubbingEnabled;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool durationAllowsForDetailedScrubbing;
@property (nonatomic, readonly) bool isTracking;
@property (nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl;
@property (nonatomic) double scrubbingVerticalRange;

- (void).cxx_destruct;
- (void)_beginScrubbing;
- (void)_commitValue:(float)arg1;
- (void)_endScrubbing;
- (float)_minimumScale;
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)currentScrubSpeed;
- (id)delegate;
- (bool)detailedScrubbingEnabled;
- (double)duration;
- (bool)durationAllowsForDetailedScrubbing;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubbingControl:(id)arg1;
- (bool)isTracking;
- (float)scaleForVerticalPosition:(double)arg1;
- (id)scrubbingControl;
- (double)scrubbingVerticalRange;
- (void)setDelegate:(id)arg1;
- (void)setDetailedScrubbingEnabled:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setScrubbingControl:(id)arg1;
- (void)setScrubbingVerticalRange:(double)arg1;

@end
