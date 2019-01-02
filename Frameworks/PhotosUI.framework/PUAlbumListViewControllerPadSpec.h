/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec

- (long long)albumDeletionConfirmationStyle;
- (id)albumViewControllerSpec;
- (bool)canShowVirtualCollections;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForStackSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)collageImageContentMode;
- (struct CGSize { double x1; double x2; })collageImageSize;
- (double)collageSpacing;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (unsigned long long)folderStackViewStyle;
- (id)gridViewControllerSpec;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGSize { double x1; double x2; })imageSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)shouldShowSectionHeaders;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;
- (struct CGSize { double x1; double x2; })stackSize;
- (struct CGSize { double x1; double x2; })stackSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (unsigned long long)stackViewStyle;
- (bool)usesStackTransitionToGrid;

@end
