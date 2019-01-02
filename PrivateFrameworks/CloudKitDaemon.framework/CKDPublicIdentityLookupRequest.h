/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest {
    id /* block */  _lookupCompletionBlock;
    NSMutableArray * _lookupInfosToFetch;
    NSArray * _originalLookupInfosToFetch;
    id /* block */  _perLookupInfoProgressBlock;
    CKDDiscoverUserIdentitiesURLRequest * _request;
}

@property (nonatomic, copy) id /* block */ lookupCompletionBlock;
@property (nonatomic, retain) NSMutableArray *lookupInfosToFetch;
@property (nonatomic, retain) NSArray *originalLookupInfosToFetch;
@property (nonatomic, copy) id /* block */ perLookupInfoProgressBlock;
@property (nonatomic, retain) CKDDiscoverUserIdentitiesURLRequest *request;

+ (void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_generateOONPrivateKeyWithError:(id*)arg1;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;
- (bool)_tryComplete;
- (id)ckShortDescription;
- (id)description;
- (void)finishWithError:(id)arg1;
- (id)initWithLookupInfos:(id)arg1;
- (id /* block */)lookupCompletionBlock;
- (id)lookupInfosToFetch;
- (id)originalLookupInfosToFetch;
- (id /* block */)perLookupInfoProgressBlock;
- (void)performRequest;
- (id)request;
- (void)setLookupCompletionBlock:(id /* block */)arg1;
- (void)setLookupInfosToFetch:(id)arg1;
- (void)setOriginalLookupInfosToFetch:(id)arg1;
- (void)setPerLookupInfoProgressBlock:(id /* block */)arg1;
- (void)setRequest:(id)arg1;
- (id)spawnURLRequests;

@end
