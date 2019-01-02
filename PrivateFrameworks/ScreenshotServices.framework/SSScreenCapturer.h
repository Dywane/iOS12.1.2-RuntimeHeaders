/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenCapturer : NSObject <SSTestingCoordinatorDelegate, SSUIServiceServerDelegate> {
    <SSScreenCapturerDelegate> * _delegate;
    SSDittoRemoteConnection * _dittoRemoteConnection;
    SSScreenshotsWindow * _serviceWindow;
    SSSnapshotter * _snapshotter;
    SSTestingCoordinator * _testingCoordinator;
    SSUIServiceServer * _uiServiceServer;
}

@property (nonatomic) <SSScreenCapturerDelegate> *delegate;
@property (nonatomic, readonly) UIWindow *screenshotsWindow;

+ (id)_currentDisplayLayout;
+ (void)playScreenshotSound;
+ (bool)shouldUseScreenCapturerForScreenshots;

- (void).cxx_destruct;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)_preheatAndTakeScreenshotIfPossibleWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2;
- (void)_takeScreenshotWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2;
- (id)_testingCoordinator;
- (id)delegate;
- (id)init;
- (id)screenshotsWindow;
- (void)server:(id)arg1 receivedRequest:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;

@end
