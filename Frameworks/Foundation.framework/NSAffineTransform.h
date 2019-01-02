/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        double m11; 
        double m12; 
        double m21; 
        double m22; 
        double tX; 
        double tY; 
    }  _transformStruct;
}

@property struct { double x1; double x2; double x3; double x4; double x5; double x6; } transformStruct;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;
+ (id)transform;

- (void)appendTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(id)arg1;
- (void)invert;
- (bool)isEqual:(id)arg1;
- (void)prependTransform:(id)arg1;
- (void)rotateByDegrees:(double)arg1;
- (void)rotateByRadians:(double)arg1;
- (void)scaleBy:(double)arg1;
- (void)scaleXBy:(double)arg1 yBy:(double)arg2;
- (void)setTransformStruct:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })transformStruct;
- (void)translateXBy:(double)arg1 yBy:(double)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

+ (id)nu_transformWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

- (id)description;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nu_CGAffineTransform;

// Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation

+ (id)pa_transformWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

- (id)description;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pa_CGAffineTransform;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)gqu_transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 upperLeft:(struct CGPoint { double x1; double x2; }*)arg2 lowerLeft:(struct CGPoint { double x1; double x2; }*)arg3 lowerRight:(struct CGPoint { double x1; double x2; }*)arg4 upperRight:(struct CGPoint { double x1; double x2; }*)arg5;

@end
