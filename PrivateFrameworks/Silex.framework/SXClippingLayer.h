/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXClippingLayer : CALayer {
    unsigned long long  _clippingMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    CALayer * _contentLayer;
}

@property (nonatomic) unsigned long long clippingMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, retain) CALayer *contentLayer;

- (void).cxx_destruct;
- (unsigned long long)clippingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentLayer;
- (void)layoutForContentsRect;
- (void)layoutForMasking;
- (void)layoutSublayers;
- (void)setClippingMode:(unsigned long long)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentLayer:(id)arg1;

@end
