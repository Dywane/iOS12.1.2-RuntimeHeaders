/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetAppIntentPolicyAndVocabResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSDictionary *aceAppBundleInfos;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getAppIntentPolicyAndVocabResponse;
+ (id)getAppIntentPolicyAndVocabResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAppBundleInfos;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAceAppBundleInfos:(id)arg1;

@end
