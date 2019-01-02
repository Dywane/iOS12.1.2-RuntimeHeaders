/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLUbiquitousItemFetcher : QLItemFetcher {
    NSFileCoordinator * _fileCoordinator;
    bool  _isAccessingURL;
    id  _progressSubscriber;
    FPSandboxingURLWrapper * _sandboxingWrapper;
    bool  _shouldZipPackageIfNeeded;
    NSNumber * _sizeTotalUnitCount;
    NSMutableArray * _updateBlocks;
    QLURLHandler * _zipPackageUrlHandler;
}

@property (nonatomic, readonly) NSURL *fileURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createURLForPackageIfNeeded;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (void)_removeUpdateBlockIfNeeded:(id /* block */)arg1;
- (bool)canBeCanceled;
- (void)cancelFetch;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(bool)arg2;
- (id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(bool)arg2;
- (id)initWithZippingPackageIfNeeded:(bool)arg1;
- (bool)isLongFetchOperation;
- (id)itemSize;
- (id)newItemProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)shareableItem;
- (void)subscribeToPreviewItemProgress;

@end
