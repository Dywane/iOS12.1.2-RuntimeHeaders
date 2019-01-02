/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFaceResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _identifier;
    double  _rollAngle;
    AVMetadataFaceObject * _underlyingFaceObject;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) double rollAngle;
@property (nonatomic, readonly) AVMetadataFaceObject *underlyingFaceObject;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)burstMetadataRepresentation;
- (id)description;
- (long long)identifier;
- (id)initWithFaceObject:(id)arg1;
- (double)rollAngle;
- (id)underlyingFaceObject;

@end
