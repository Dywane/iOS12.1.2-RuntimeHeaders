/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCamera : NSObject <NSCopying, NSSecureCoding> {
    long long  _devicePosition;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    unsigned long long  _lensType;
    void _radialDistortion;
    void _tangentialDistortion;
    long long  _trackingState;
    long long  _trackingStateReason;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic) long long devicePosition;
@property (nonatomic, readonly) void eulerAngles;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projectionMatrix;
@property (nonatomic) void radialDistortion;
@property (nonatomic) void tangentialDistortion;
@property (nonatomic) long long trackingState;
@property (nonatomic) long long trackingStateReason;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (id)_description:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (long long)devicePosition;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })displayCenterTransform;
- (void)encodeWithCoder:(id)arg1;
- (void)eulerAngles;
- (struct CGPoint { double x1; double x2; })focalLength;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lensType;
- (struct CGPoint { double x1; double x2; })principalPoint;
- (struct CGPoint { double x1; double x2; })projectPoint:(void *)arg1 orientation:(void *)arg2 viewportSize:(void *)arg3; // needs 3 arg types, found 2: long long, struct CGSize { double x1; double x2; }
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrixForOrientation:(long long)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 zNear:(double)arg3 zFar:(double)arg4;
- (void)radialDistortion;
- (void)setDevicePosition:(long long)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLensType:(unsigned long long)arg1;
- (void)setRadialDistortion;
- (void)setTangentialDistortion;
- (void)setTrackingState:(long long)arg1;
- (void)setTrackingStateReason:(long long)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)tangentialDistortion;
- (long long)trackingState;
- (long long)trackingStateReason;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)unprojectPoint:(struct CGPoint { double x1; double x2; })arg1 ontoPlaneWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 orientation:(long long)arg3 viewportSize:(struct CGSize { double x1; double x2; })arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewMatrixForOrientation:(long long)arg1;

@end
