/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController {
    NSNumber * _sceneIdentifier;
}

@property (nonatomic, retain) NSNumber *sceneIdentifier;

+ (id /* block */)assetResourceLargestToSmallestComparator;

- (void).cxx_destruct;
- (id)_assetPathsForAssets:(id)arg1;
- (id)_assetResourceForAsset:(id)arg1;
- (id)_assetResourcesForAssets:(id)arg1;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (id)_globalHeaderTitle;
- (bool)_isJunkSceneIdentifer:(id)arg1;
- (id)_keywordForSceneIdentifier:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2;
- (id)_newEditActionItemsWithWideSpacing:(bool)arg1;
- (void)_tappedFileRadarButton:(id)arg1;
- (double)_thresholdForSceneIdentifer:(id)arg1;
- (bool)allowSlideshowButton;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(id /* block */*)arg4;
- (double)globalHeaderHeight;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (id)sceneIdentifier;
- (void)setSceneIdentifier:(id)arg1;

@end
