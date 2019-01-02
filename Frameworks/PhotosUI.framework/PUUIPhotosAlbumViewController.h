/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController <PUPhotoPickerSelectionHandler, PUPhotoPickerServicesConsumer> {
    int  __albumFilter;
    PUUIImagePickerControllerHelper * __imagePickerControllerHelper;
    NSArray * __imagePickerMediaTypes;
    bool  _didDisappear;
    UIBarButtonItem * _imagePickerCancelButton;
    UIBarButtonItem * _imagePickerMultipleSelectionDoneButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastKnownSafeAreaInsets;
    double  _lastKnownWidth;
    <PUPhotoPicker> * _photoPicker;
}

@property (setter=_setAlbumFilter:, nonatomic) int _albumFilter;
@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lastKnownSafeAreaInsets;
@property (nonatomic) double lastKnownWidth;
@property (nonatomic) <PUPhotoPicker> *photoPicker;
@property (nonatomic, readonly) bool referenceValuesDidChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_albumFilter;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (id)_imagePickerControllerHelper;
- (id)_imagePickerMediaTypes;
- (void)_scrollToBottomIfNeeded;
- (void)_setAlbumFilter:(int)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (bool)allowsPeeking;
- (bool)canBeginStackCollapseTransition;
- (bool)canDragIn;
- (bool)canDragOut;
- (bool)canNavigateToPhotoInteractively:(bool)arg1;
- (bool)didDisappear;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lastKnownSafeAreaInsets;
- (double)lastKnownWidth;
- (void)loadView;
- (void)performPhotoPickerSelection;
- (id)photoPicker;
- (bool)pu_wantsNavigationBarVisible;
- (bool)referenceValuesDidChange;
- (void)setAlbum:(id)arg1 existingFetchResult:(id)arg2;
- (void)setDidDisappear:(bool)arg1;
- (void)setLastKnownSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLastKnownWidth:(double)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (bool)shouldShowMenu;
- (bool)shouldShowSectionHeaders;
- (double)topMarginForPhotosGlobalFooterView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)wantsGlobalFooter;

@end
