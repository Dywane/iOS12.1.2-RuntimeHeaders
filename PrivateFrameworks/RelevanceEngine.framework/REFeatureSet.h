/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureSet : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, REIndentedDescription>

@property (nonatomic, readonly) NSArray *allFeatures;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureSet;
+ (id)featureSetWithFeature:(id)arg1;
+ (id)featureSetWithFeatures:(id)arg1;

- (id)allFeatures;
- (bool)containsFeature:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)enumerateFeaturesUsingBlock:(id /* block */)arg1;
- (id)featureWithName:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatureSet:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (bool)intersectsFeatureSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeatureSet:(id)arg1;
- (bool)isSubsetOfFeatureSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
