/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    double  _latitude;
    double  _longitude;
    int  _referenceFrame;
    double  _uncertainty;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) int referenceFrame;
@property (nonatomic, readonly) double uncertainty;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)coordinateToString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (double)latitude;
- (double)longitude;
- (int)referenceFrame;
- (double)uncertainty;

@end
