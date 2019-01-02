/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener> {
    SXComponentView * _componentView;
    SXImageView * _imageView;
    bool  _isReceivingViewportChanges;
    <SXPresentationDelegate> * _presentationDelegate;
    double  _previousYOffset;
}

@property (nonatomic) SXComponentView *componentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageView *imageView;
@property (nonatomic) bool isReceivingViewportChanges;
@property (nonatomic) <SXPresentationDelegate> *presentationDelegate;
@property (nonatomic) double previousYOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentView;
- (id)imageView;
- (id)initWithImageComponentView:(id)arg1 presentationDelegate:(id)arg2 imageView:(id)arg3;
- (bool)isReceivingViewportChanges;
- (id)presentationDelegate;
- (double)previousYOffset;
- (void)registerForViewportChanges;
- (void)setComponentView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsReceivingViewportChanges:(bool)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPreviousYOffset:(double)arg1;
- (void)unregisterForViewportChanges;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
