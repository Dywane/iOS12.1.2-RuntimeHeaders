/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManager : NSObject <PHPhotoLibraryChangeObserver> {
    id  _cachedDomain;
    unsigned long long  _managerID;
    NSObject<OS_dispatch_source> * _memoryEventSource;
    PDImageManager * _newImageManager;
    PHImageManagerSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryEventSource;
@property (readonly) Class superclass;

+ (bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;
+ (id)defaultManager;
+ (struct CGSize { double x1; double x2; })fullScreenSizeForScreen:(id)arg1 contentMode:(long long*)arg2;
+ (void)initialize;
+ (struct CGSize { double x1; double x2; })maximumImageSizeFromProperties:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeOfBestNonFullscreenThumbnailAndContentMode:(long long*)arg1;
+ (bool)useNewImageManager;

- (void).cxx_destruct;
- (id)_asyncFetchCloudSharedVideoForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)_domain;
- (id)_modernImageManager;
- (int)_requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)_requestAsynchronousVideoURLForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(bool)arg3;
- (void)cancelImageRequest:(int)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)imageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 outInfo:(id*)arg5;
- (id)init;
- (id)localOptionsFromOptions:(id)arg1;
- (unsigned long long)managerID;
- (id)memoryEventSource;
- (struct CGImage { }*)newResizedImageForImage:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentMode:(long long)arg4;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerRequest:(id)arg1;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)requestAsynchronousImageForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)requestAsynchronousImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)requestAsynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)requestAsynchronousVideoURLForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)requestAsynchronousVideoURLForImageLoadingAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)requestSynchronousImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestSynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setMemoryEventSource:(id)arg1;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)unregisterRequest:(id)arg1;

@end
