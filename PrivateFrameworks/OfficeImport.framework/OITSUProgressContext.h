/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUProgressContext : NSObject {
    OITSUProgressStage * m_currentStage;
    double  m_lastOverallProgress;
    double  m_lastProgressReport;
    NSDate * m_lastReportTime;
}

- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
- (id)addProgressObserverBlock:(id /* block */)arg1;
- (void)advanceProgress:(double)arg1;
- (void)createStageWithSteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
- (double)currentPosition;
- (id)currentStage;
- (void)dealloc;
- (void)endStage;
- (id)init;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
- (double)overallProgress;
- (void)removeProgressObserver:(id)arg1;
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;
- (void)reset;
- (void)setMessage:(id)arg1;
- (void)setPercentageProgressFromTCProgressContext:(double)arg1;
- (void)setProgress:(double)arg1;

@end