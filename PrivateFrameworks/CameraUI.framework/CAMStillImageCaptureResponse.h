/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    NSString * _burstIdentifier;
    unsigned long long  _burstRepresentedCount;
    NSDate * _captureDate;
    CAMStillImageCaptureCoordinationInfo * _coordinationInfo;
    bool  _expectingPairedVideo;
    UIImage * _imageWellImage;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long burstRepresentedCount;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) CAMStillImageCaptureCoordinationInfo *coordinationInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly) bool flashFired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (unsigned long long)burstRepresentedCount;
- (id)captureDate;
- (id)coordinationInfo;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)flashFired;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 coordinationInfo:(id)arg8 expectingPairedVideo:(bool)arg9;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (id)metadata;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)stillImageMetadata;
- (id)uuid;

@end
