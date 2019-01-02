/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPersonBuildingJobOperation : NSOperation {
    PVCanceler * _canceler;
    <PHAPersonBuildingJobOperationDelegate> * _delegate;
    PHAVisionServiceFaceProcessingWorker * _faceProcessingWorker;
    float  _percentComplete;
    NSProgress * _progress;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)arg1;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)percentComplete;
- (void)setDelegate:(id)arg1;

@end