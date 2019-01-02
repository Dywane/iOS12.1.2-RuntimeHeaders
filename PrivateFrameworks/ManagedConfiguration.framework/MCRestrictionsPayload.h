/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCRestrictionsPayload : MCPayload {
    NSString * _iCloudPassword;
    NSMutableDictionary * _restrictions;
}

@property (nonatomic, retain) NSString *iCloudPassword;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_defaultValueRestrictions;
- (id)_enforcedFeatureStrings;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(bool)arg3;
- (id)_intersectionStrings;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_restrictedFeatureStrings;
- (id)_unionStrings;
- (id)iCloudPassword;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)localizedRestrictionStrings;
- (id)restrictions;
- (void)setICloudPassword:(id)arg1;
- (id)stubDictionary;

@end
