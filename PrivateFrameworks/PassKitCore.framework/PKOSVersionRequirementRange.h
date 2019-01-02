/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKOSVersionRequirementRange : NSObject {
    PKOSVersionRequirement * _maximum;
    PKOSVersionRequirement * _minimum;
}

@property (nonatomic, readonly) PKOSVersionRequirement *maximum;
@property (nonatomic, readonly) PKOSVersionRequirement *minimum;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;
- (id)maximum;
- (id)minimum;
- (bool)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2;

@end
