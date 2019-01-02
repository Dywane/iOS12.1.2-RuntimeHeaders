/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate> {
    UIView * _contentView;
    UITapGestureRecognizer * _doubleTapGesture;
    bool  _isVisible;
    QLPreviewScrollView * _scrollView;
    bool  _shouldFit;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldFit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_updateScrollViewZoomUpdate:(struct CGSize { double x1; double x2; })arg1;
- (bool)canPinchToDismiss;
- (id)contentView;
- (void)didEndZoomingAtScale:(double)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (void)loadView;
- (id)parallaxView;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2;
- (double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (bool)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg1;
- (void)previewScrollViewWillBeginZooming:(id)arg1;
- (void)previewWillAppear:(bool)arg1;
- (id)registeredKeyCommands;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setContentView:(id)arg1;
- (void)setShouldFit:(bool)arg1;
- (bool)shouldFit;
- (bool)shouldLayoutContentBasedOnPeripheryInsets;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginZooming;

@end
