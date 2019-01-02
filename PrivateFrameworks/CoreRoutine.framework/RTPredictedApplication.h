/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedApplication : NSObject <NSCopying, NSSecureCoding> {
    RTApplication * _application;
    double  _confidence;
    NSUUID * _identifier;
    long long  _reason;
    RTSource * _source;
}

@property (nonatomic, readonly) RTApplication *application;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, retain) RTSource *source;

+ (id)reasonToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithApplication:(id)arg1 reason:(long long)arg2 confidence:(double)arg3 source:(id)arg4 identifier:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reason;
- (void)setIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
