/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFPhotoSharingOperation : NSOperation {
    PFAssetAdjustments * __adjustments;
    NSString * _customAccessibilityLabel;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSURL * _imageURL;
    bool  _operationComplete;
    NSError * _operationError;
    bool  _operationSuccess;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    bool  _shouldConvertToSRGB;
    bool  _shouldStripLocation;
    bool  _shouldStripMetadata;
}

@property (setter=_setAdjustments:, nonatomic, retain) PFAssetAdjustments *_adjustments;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (setter=_setImageURL:, nonatomic, copy) NSURL *imageURL;
@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, readonly) float progress;
@property (nonatomic) bool shouldConvertToSRGB;
@property (nonatomic) bool shouldStripLocation;
@property (nonatomic) bool shouldStripMetadata;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)_adjustments;
- (void)_setAdjustments:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (id)customAccessibilityLabel;
- (id)imageURL;
- (id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;
- (id)operationError;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (float)progress;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldConvertToSRGB:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setShouldStripMetadata:(bool)arg1;
- (bool)shouldConvertToSRGB;
- (bool)shouldStripLocation;
- (bool)shouldStripMetadata;
- (bool)success;

@end
