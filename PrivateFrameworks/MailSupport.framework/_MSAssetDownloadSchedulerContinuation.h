/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface _MSAssetDownloadSchedulerContinuation : NSObject <MSAssetDownloadSchedulerContinuation> {
    NSObject<OS_xpc_object> * _activity;
    MSAssetDownloadScheduler * _scheduler;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MSAssetDownloadScheduler *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activity;
- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;
- (id)scheduler;
- (void)setActivity:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)stopScheduling;

@end
