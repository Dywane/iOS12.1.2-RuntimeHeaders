/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageTransformOrientation : NUImageTransform {
    struct { 
        long long width; 
        long long height; 
    }  _inputImageSize;
    long long  _orientation;
}

@property (readonly) long long orientation;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGeometryTransformOrientation:(id)arg1;
- (void)nu_updateDigest:(id)arg1;
- (long long)orientation;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
