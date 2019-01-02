/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {
    bool  _applyToPrincipalCollectionSet;
    NSDictionary * _extraAttributes;
    NSSet * _searchItems;
}

@property (nonatomic) bool applyToPrincipalCollectionSet;
@property (nonatomic, retain) NSDictionary *extraAttributes;
@property (nonatomic, retain) NSSet *searchItems;

- (void).cxx_destruct;
- (bool)applyToPrincipalCollectionSet;
- (id)extraAttributes;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(bool)arg4 extraAttributes:(id)arg5;
- (id)requestBody;
- (id)searchItems;
- (void)setApplyToPrincipalCollectionSet:(bool)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setSearchItems:(id)arg1;

@end
