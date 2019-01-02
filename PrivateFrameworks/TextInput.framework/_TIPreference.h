/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface _TIPreference : NSObject {
    id  _currentValue;
    id  _defaultValue;
    NSString * _domain;
    NSString * _key;
}

@property (nonatomic, retain) id currentValue;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *key;

+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;

- (void).cxx_destruct;
- (id)currentValue;
- (id)defaultValue;
- (id)domain;
- (id)key;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setKey:(id)arg1;

@end
