/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEffectiveProgressObserver : NSObject {
    id /* block */  _observerBlock;
    double  _targetEffectiveProgress;
    <NACancelable> * _timerCancellationToken;
}

@property (nonatomic, readonly, copy) id /* block */ observerBlock;
@property (nonatomic, readonly) double targetEffectiveProgress;
@property (nonatomic, retain) <NACancelable> *timerCancellationToken;

- (void).cxx_destruct;
- (id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(id /* block */)arg2;
- (id /* block */)observerBlock;
- (void)setTimerCancellationToken:(id)arg1;
- (double)targetEffectiveProgress;
- (id)timerCancellationToken;

@end
