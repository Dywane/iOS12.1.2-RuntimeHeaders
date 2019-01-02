/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSDAAPPropertyInfo : NSObject {
    NSMutableDictionary * _codeMap;
    NSMutableDictionary * _valueTypeMap;
}

@property (nonatomic, retain) NSMutableDictionary *codeMap;
@property (nonatomic, retain) NSMutableDictionary *valueTypeMap;

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;

- (void).cxx_destruct;
- (id)_init;
- (id)codeMap;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (bool)hasInfoForProperty:(id)arg1;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (void)setCodeMap:(id)arg1;
- (void)setValueTypeMap:(id)arg1;
- (long long)valueTypeForProperty:(id)arg1;
- (id)valueTypeMap;

@end
