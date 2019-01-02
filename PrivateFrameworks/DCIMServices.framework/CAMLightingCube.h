/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMLightingCube : NSObject {
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _normals;
    long long  _planes;
    long long  _points;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screen;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _world;
}

- (const struct CGPath { }*)centerPathWithSize:(struct CGSize { double x1; double x2; })arg1;
- (const struct CGPath { }*)centerShadowPathWithSize:(struct CGSize { double x1; double x2; })arg1 width:(double)arg2;
- (id)initWithRotationAngle:(double)arg1;
- (double)intensityForPlane:(long long)arg1;
- (const struct CGPath { }*)pathForOutlineWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (const struct CGPath { }*)pathForPlane:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)points:(struct CGPoint { double x1; double x2; }*)arg1 forOutlineWithSize:(struct CGSize { double x1; double x2; })arg2;
- (void)points:(struct CGPoint { double x1; double x2; }*)arg1 forPlane:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;

@end
