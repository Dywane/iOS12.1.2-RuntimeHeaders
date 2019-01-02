/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNAppendBurstSequenceFrameRequest : VNTargetedImageRequest {
    NSString * _burstFrameIdentifier;
    NSDictionary * _imageProperties;
}

@property (nonatomic, copy) NSString *burstFrameIdentifier;
@property (nonatomic, copy) NSDictionary *imageProperties;

+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)burstFrameIdentifier;
- (id)imageProperties;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedCIImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setBurstFrameIdentifier:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
