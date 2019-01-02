/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreFollowOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelPerson * _person;
    id /* block */  _responseHandler;
    bool  _unfollow;
}

@property (nonatomic, retain) MPModelPerson *person;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool unfollow;

+ (id)activeDSID;

- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_followURL:(id)arg1 accountDSID:(id)arg2;
- (void)execute;
- (id)person;
- (id /* block */)responseHandler;
- (void)setPerson:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setUnfollow:(bool)arg1;
- (bool)unfollow;

@end
