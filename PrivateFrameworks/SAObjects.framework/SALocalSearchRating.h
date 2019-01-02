/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxValue;
@property (nonatomic, copy) NSString *providerId;
@property (readonly) Class superclass;
@property (nonatomic) double value;

+ (id)rating;
+ (id)ratingWithDictionary:(id)arg1 context:(id)arg2;

- (long long)count;
- (id)encodedClassName;
- (id)groupIdentifier;
- (double)maxValue;
- (id)providerId;
- (void)setCount:(long long)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setProviderId:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
