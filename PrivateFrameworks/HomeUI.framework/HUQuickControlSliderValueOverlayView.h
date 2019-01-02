/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSliderValueOverlayView : UIView {
    bool  _hasSecondGrabber;
    bool  _off;
    unsigned long long  _primaryGrabberLocation;
    bool  _showGrabbers;
}

@property (nonatomic) bool hasSecondGrabber;
@property (nonatomic, readonly) CAShapeLayer *layer;
@property (getter=isOff, nonatomic) bool off;
@property (nonatomic) unsigned long long primaryGrabberLocation;
@property (nonatomic) bool showGrabbers;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBlendMode;
- (void)_updateShape;
- (bool)hasSecondGrabber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOff;
- (void)layoutSubviews;
- (unsigned long long)primaryGrabberLocation;
- (void)setHasSecondGrabber:(bool)arg1;
- (void)setOff:(bool)arg1;
- (void)setPrimaryGrabberLocation:(unsigned long long)arg1;
- (void)setShowGrabbers:(bool)arg1;
- (bool)showGrabbers;

@end
