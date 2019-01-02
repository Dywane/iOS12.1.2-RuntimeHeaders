/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BROperation : NSOperation <BROperationClient> {
    id  _executionTransation;
    bool  _finished;
    bool  _nonDiscretionary;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteOperation;
    unsigned char  _uuid;
    bool  _waitForRemoteToBeCancelled;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool nonDiscretionary;
@property (nonatomic, retain) NSObject<BRCancellable> *remoteOperation;
@property (readonly) Class superclass;
@property (nonatomic) bool waitForRemoteToBeCancelled;

- (void).cxx_destruct;
- (bool)_finishIfCancelled;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_setRemoteOperation:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (oneway void)invalidate;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)nonDiscretionary;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)remoteObject;
- (id)remoteOperation;
- (void)setNonDiscretionary:(bool)arg1;
- (void)setRemoteOperation:(id)arg1;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)setWaitForRemoteToBeCancelled:(bool)arg1;
- (void)start;
- (bool)waitForRemoteToBeCancelled;

@end
