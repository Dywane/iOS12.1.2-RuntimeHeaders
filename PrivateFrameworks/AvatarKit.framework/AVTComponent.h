/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTComponent : NSObject {
    NSArray * _assets;
    double  _intensity;
    AVTMaterial * _materials;
    AVTMemoji * _memoji;
    bool  _mirrored;
    long long  _type;
}

@property (readonly) NSArray *assets;
@property (nonatomic) double intensity;
@property (nonatomic) bool mirrored;
@property (readonly) long long type;

+ (bool)componentTypeSupportsIntensity:(long long)arg1;
+ (id)componentWithAssets:(id)arg1;

- (void).cxx_destruct;
- (bool)_decode:(id)arg1;
- (void)_encode:(id)arg1;
- (id)assets;
- (id)description;
- (id)initWithAssets:(id)arg1;
- (double)intensity;
- (id)materialAtIndex:(unsigned long long)arg1;
- (id)memoji;
- (bool)mirrored;
- (id)newComponentInstance;
- (void)setIntensity:(double)arg1;
- (void)setMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMemoji:(id)arg1;
- (void)setMirrored:(bool)arg1;
- (long long)type;

@end
