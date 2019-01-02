/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryHelper : NSObject

+ (bool)_isAssetsdReadyForCPLManager;
+ (void)_stopWaitingForLibraryToBeReadyForCPLManager;
+ (void)disableCPL:(id /* block */)arg1;
+ (void)enableCPL:(id /* block */)arg1;
+ (void)initializeCPLManager;
+ (void)pauseCloudPhotos:(bool)arg1 reason:(short)arg2;
+ (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)arg1;
+ (void)processCloudPhotosLibraryStateChange:(bool)arg1;
+ (void)setShouldSendOptimizeFeedbackOnce:(bool)arg1;
+ (bool)shouldSendOptimizeFeedbackOnce;

@end
