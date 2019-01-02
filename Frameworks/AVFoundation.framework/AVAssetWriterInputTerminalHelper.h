/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    bool  _didRequestMediaDataOnce;
    long long  _terminalStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (bool)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (bool)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)status;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;

@end
