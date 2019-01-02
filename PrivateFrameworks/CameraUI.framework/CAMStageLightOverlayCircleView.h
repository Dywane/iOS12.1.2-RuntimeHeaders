/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStageLightOverlayCircleView : UIView {
    bool  _active;
    UIImage * _highlightedImage;
    UIImage * _image;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)_circleImageWithColor:(id)arg1;
- (void)_drawCircleWithColor:(id)arg1;
- (void)_updateContentsAnimated:(bool)arg1;
- (void)_updateImagesIfNeeded;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)highlightedImage;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (void)layoutSubviews;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;

@end
