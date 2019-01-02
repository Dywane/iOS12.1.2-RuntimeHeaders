/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImagePatch : NSObject {
    struct CGImage { } * _imageRef;
    struct CGImage { } * _maskRef;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

+ (id)patchFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImage:(struct CGImage { }*)arg2;
+ (id)patchFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImage:(struct CGImage { }*)arg2 withMask:(struct CGImage { }*)arg3;

- (void)dealloc;
- (id)description;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGImage { }*)image;
- (id)initWithImageRef:(struct CGImage { }*)arg1 andRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithImageRef:(struct CGImage { }*)arg1 andRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andMask:(struct CGImage { }*)arg3;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (struct CGSize { double x1; double x2; })size;
- (void)translateOriginByPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
