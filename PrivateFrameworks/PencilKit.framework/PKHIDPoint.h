/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKHIDPoint : NSObject {
    double  _altitudeAngle;
    double  _azimuthAngle;
    double  _force;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic) double altitudeAngle;
@property (nonatomic) double azimuthAngle;
@property (nonatomic) double force;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;

+ (id)pointWithLocation:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;

- (double)altitudeAngle;
- (double)azimuthAngle;
- (double)force;
- (struct CGPoint { double x1; double x2; })location;
- (void)setAltitudeAngle:(double)arg1;
- (void)setAzimuthAngle:(double)arg1;
- (void)setForce:(double)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (double)timestamp;
- (long long)type;

@end