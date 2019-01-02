/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureCommandContext : NSObject {
    CAMCaptureEngine * __captureEngine;
    AVCaptureDevice * _currentAudioDevice;
    AVCaptureDeviceInput * _currentAudioDeviceInput;
    AVCaptureSession * _currentCaptureSession;
    AVCaptureDeviceFormat * _currentDepthDataFormat;
    AVCaptureVideoDataOutput * _currentEffectsPreviewOutput;
    AVCaptureMetadataOutput * _currentMetadataOutput;
    AVCaptureMovieFileOutput * _currentMovieFileOutput;
    CAMPanoramaOutput * _currentPanoramaOutput;
    AVCapturePhotoOutput * _currentStillImageOutput;
    AVCaptureDevice * _currentVideoDevice;
    AVCaptureDeviceFormat * _currentVideoDeviceFormat;
    AVCaptureDeviceInput * _currentVideoDeviceInput;
    NSString * _currentVideoDevicePreset;
    AVCaptureVideoPreviewLayer * _currentVideoPreviewLayer;
    AVCaptureVideoThumbnailOutput * _currentVideoThumbnailOutput;
}

@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, retain) AVCaptureDevice *currentAudioDevice;
@property (nonatomic, retain) AVCaptureDeviceInput *currentAudioDeviceInput;
@property (nonatomic, retain) AVCaptureSession *currentCaptureSession;
@property (nonatomic, retain) AVCaptureDeviceFormat *currentDepthDataFormat;
@property (nonatomic, retain) AVCaptureVideoDataOutput *currentEffectsPreviewOutput;
@property (nonatomic, retain) AVCaptureMetadataOutput *currentMetadataOutput;
@property (nonatomic, retain) AVCaptureMovieFileOutput *currentMovieFileOutput;
@property (nonatomic, readonly) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property (nonatomic, retain) CAMPanoramaOutput *currentPanoramaOutput;
@property (nonatomic, readonly) <AVCaptureFileOutputRecordingDelegate> *currentRecordingDelegate;
@property (nonatomic, readonly) <AVCapturePhotoCaptureDelegate> *currentStillImageDelegate;
@property (nonatomic, retain) AVCapturePhotoOutput *currentStillImageOutput;
@property (nonatomic, retain) AVCaptureDevice *currentVideoDevice;
@property (nonatomic, retain) AVCaptureDeviceFormat *currentVideoDeviceFormat;
@property (nonatomic, retain) AVCaptureDeviceInput *currentVideoDeviceInput;
@property (nonatomic, retain) NSString *currentVideoDevicePreset;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer;
@property (nonatomic, retain) AVCaptureVideoThumbnailOutput *currentVideoThumbnailOutput;

- (void).cxx_destruct;
- (id)_captureEngine;
- (id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4;
- (id)audioDeviceInput;
- (void)clear;
- (id)currentAudioDevice;
- (id)currentAudioDeviceInput;
- (id)currentCaptureSession;
- (id)currentDepthDataFormat;
- (id)currentEffectsPreviewOutput;
- (id)currentMetadataOutput;
- (id)currentMovieFileOutput;
- (id)currentPanoramaConfiguration;
- (id)currentPanoramaOutput;
- (id)currentRecordingDelegate;
- (id)currentStillImageDelegate;
- (id)currentStillImageOutput;
- (id)currentVideoDevice;
- (id)currentVideoDeviceFormat;
- (id)currentVideoDeviceInput;
- (id)currentVideoDevicePreset;
- (id)currentVideoPreviewLayer;
- (id)currentVideoThumbnailOutput;
- (id)initWithCaptureEngine:(id)arg1;
- (id)metadataOutputForMode:(long long)arg1;
- (id)outputsForMode:(long long)arg1 shouldUseThumbnailOutputForFilters:(bool)arg2;
- (id)primaryOutputForMode:(long long)arg1;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)setCurrentAudioDevice:(id)arg1;
- (void)setCurrentAudioDeviceInput:(id)arg1;
- (void)setCurrentCaptureSession:(id)arg1;
- (void)setCurrentDepthDataFormat:(id)arg1;
- (void)setCurrentEffectsPreviewOutput:(id)arg1;
- (void)setCurrentMetadataOutput:(id)arg1;
- (void)setCurrentMovieFileOutput:(id)arg1;
- (void)setCurrentPanoramaOutput:(id)arg1;
- (void)setCurrentStillImageOutput:(id)arg1;
- (void)setCurrentVideoDevice:(id)arg1;
- (void)setCurrentVideoDeviceFormat:(id)arg1;
- (void)setCurrentVideoDeviceInput:(id)arg1;
- (void)setCurrentVideoDevicePreset:(id)arg1;
- (void)setCurrentVideoPreviewLayer:(id)arg1;
- (void)setCurrentVideoThumbnailOutput:(id)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCapture;
- (id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4;

@end
