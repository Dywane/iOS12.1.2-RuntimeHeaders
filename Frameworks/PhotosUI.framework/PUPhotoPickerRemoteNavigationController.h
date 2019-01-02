/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerRemoteNavigationController : UINavigationController {
    bool  _initialized;
    <PUPhotoPickerRemoteNavigationControllerDelegate> * _remoteViewControllerdelegate;
}

@property (getter=isInitialized, nonatomic) bool initialized;
@property (nonatomic) <PUPhotoPickerRemoteNavigationControllerDelegate> *remoteViewControllerdelegate;

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1;
- (bool)isInitialized;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)remoteViewControllerdelegate;
- (void)setInitialized:(bool)arg1;
- (void)setRemoteViewControllerdelegate:(id)arg1;

@end
