/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) unsigned long long maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) unsigned long long requiredVersion;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;

+ (Class)configurationClass;

- (id)_detectorOptions;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)maximumAspectRatio;
- (unsigned long long)maximumObservations;
- (float)minimumAspectRatio;
- (float)minimumConfidence;
- (float)minimumSize;
- (float)quadratureTolerance;
- (unsigned long long)requiredVersion;
- (id /* block */)resultsSortingComparator;
- (void)setMaximumAspectRatio:(float)arg1;
- (void)setMaximumObservations:(unsigned long long)arg1;
- (void)setMinimumAspectRatio:(float)arg1;
- (void)setMinimumConfidence:(float)arg1;
- (void)setMinimumSize:(float)arg1;
- (void)setQuadratureTolerance:(float)arg1;
- (void)setRequiredVersion:(unsigned long long)arg1;
- (void)setSortedResults:(id)arg1;
- (id)supportedImageSizeSet;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
