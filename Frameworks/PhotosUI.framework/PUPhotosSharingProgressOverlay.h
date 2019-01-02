/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingProgressOverlay : UIView {
    bool  _isShowing;
    UIView * _progressView;
}

@property (nonatomic, retain) UIView *progressView;

- (void).cxx_destruct;
- (id)_grayScaleImageFromImage:(id)arg1;
- (void)_installInStatusBarWindow;
- (id)_screenshotImage;
- (void)_setupOverlayAnimated:(bool)arg1;
- (id)_statusBarWindow;
- (void)_tearDownOverlayAnimated:(bool)arg1;
- (void)addProgressView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (void)setShowing:(bool)arg1 animated:(bool)arg2;
- (void)willRemoveSubview:(id)arg1;

@end
