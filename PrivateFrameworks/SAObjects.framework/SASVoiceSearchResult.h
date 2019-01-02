/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSData *result;
@property (nonatomic, copy) NSString *searchType;
@property (nonatomic, copy) NSNumber *statusCode;
@property (readonly) Class superclass;

+ (id)voiceSearchResult;
+ (id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headers;
- (id)result;
- (id)searchType;
- (void)setHeaders:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSearchType:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (id)statusCode;

@end
