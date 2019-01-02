/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTapGestureRecognizer : UIGestureRecognizer {
    unsigned long long  _lastTapCount;
    NSTimer * _tapHandleTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _tapLocation;
    UITouch * _trackingTouch;
}

@property unsigned long long tapCount;

- (void).cxx_destruct;
- (void)_delayedHandleTaps:(id)arg1;
- (void)_resetTapTimer;
- (void)_setTapTimerWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;
- (void)setTapCount:(unsigned long long)arg1;
- (unsigned long long)tapCount;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
