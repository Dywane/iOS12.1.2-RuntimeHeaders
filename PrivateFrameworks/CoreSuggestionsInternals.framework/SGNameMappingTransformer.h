/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol> {
    id /* block */  _confidenceMapper;
    int  _minimumConfidence;
    NSString * _nameMappings;
    NSString * _tokenToIgnore;
}

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(id /* block */)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7;

- (void).cxx_destruct;
- (id)detectNames:(id)arg1;
- (id)initWithFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(id /* block */)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7;
- (bool)isPossessive:(id)arg1;
- (long long)nameMappingForToken:(id)arg1 withConfidence:(int*)arg2;
- (id)transform:(id)arg1;

@end
