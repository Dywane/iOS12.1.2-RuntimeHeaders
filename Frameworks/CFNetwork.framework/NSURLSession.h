/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSession : NSObject

@property (retain) NSMutableDictionary *_altSvc;
@property (copy) NSDictionary *_atsState;
@property (retain) NSMutableDictionary *_coalescing;
@property (copy) id /* block */ _connBlock;
@property (retain) NSMutableSet *_h2BlacklistedHosts;
@property bool _isSharedSession;
@property (copy) NSURLSessionConfiguration *_local_immutable_configuration;
@property (copy) NSString *_uuid;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionDelegate> *delegate;
@property (retain) NSOperationQueue *delegateQueue;
@property bool invalid;
@property (copy) NSString *sessionDescription;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_errorFromError:(id)arg1 forTask:(id)arg2;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(id /* block */)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(id /* block */)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (id)_sharedSessionForConnection;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sharedSession;

- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (struct __CFDictionary { }*)_copyATSState;
- (id)_copyConfiguration;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (void)addDelegateBlock:(id /* block */)arg1;
- (id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (bool)can_delegate_AVAggregateAssetDownloadTask_didCompleteForMediaSelection;
- (bool)can_delegate_AVAggregateAssetDownloadTask_didLoadTimeRange;
- (bool)can_delegate_AVAggregateAssetDownloadTask_willDownloadToURL;
- (bool)can_delegate_AVAssetDownloadTask_didFinishDownloadingToURL;
- (bool)can_delegate_AVAssetDownloadTask_didLoadTimeRange;
- (bool)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (bool)can_delegate_AVAssetDownloadTask_didResolveMediaSelection;
- (bool)can_delegate_AVAssetDownloadTask_didWriteData;
- (bool)can_delegate_AVAssetDownloadTask_willDownloadToURL;
- (bool)can_delegate_betterRouteDiscoveredForStreamTask;
- (bool)can_delegate_companionAvailabilityChanged;
- (bool)can_delegate_connectionEstablishedForStreamTask;
- (bool)can_delegate_dataTask_didBecomeDownloadTask;
- (bool)can_delegate_dataTask_didBecomeStreamTask;
- (bool)can_delegate_dataTask_didReceiveData;
- (bool)can_delegate_dataTask_didReceiveResponse;
- (bool)can_delegate_dataTask_willCacheResponse;
- (bool)can_delegate_didFinishEventsForBackgroundURLSession;
- (bool)can_delegate_didReceiveChallenge;
- (bool)can_delegate_downloadTaskNeedsDownloadDirectory;
- (bool)can_delegate_downloadTask_didFinishDownloadingToURL;
- (bool)can_delegate_downloadTask_didReceiveResponse;
- (bool)can_delegate_downloadTask_didResumeAtOffset;
- (bool)can_delegate_downloadTask_didWriteData;
- (bool)can_delegate_needConnectedSocket;
- (bool)can_delegate_openFileAtPath;
- (bool)can_delegate_readClosedForStreamTask;
- (bool)can_delegate_streamTask_didBecomeInputStream_outputStream;
- (bool)can_delegate_taskIsWaitingForConnectivity;
- (bool)can_delegate_task__schemeUpgraded;
- (bool)can_delegate_task_actually_didCompleteWithError;
- (bool)can_delegate_task_conditionalRequirementsChanged;
- (bool)can_delegate_task_didCompleteWithError;
- (bool)can_delegate_task_didFinishCollectingMetrics;
- (bool)can_delegate_task_didReceiveChallenge;
- (bool)can_delegate_task_didSendBodyData;
- (bool)can_delegate_task_isWaitingForConnection;
- (bool)can_delegate_task_isWaitingForConnectionWithError;
- (bool)can_delegate_task_isWaitingForConnectionWithReason;
- (bool)can_delegate_task_needNewBodyStream;
- (bool)can_delegate_task_willBeginDelayedRequest;
- (bool)can_delegate_task_willPerformHTTPRedirection;
- (bool)can_delegate_task_willSendRequestForEstablishedConnection;
- (bool)can_delegate_willRetryBackgroundDataTask;
- (bool)can_delegate_writeClosedForStreamTask;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didCompleteForMediaSelection:(id)arg2;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 forMediaSelection:(id)arg5;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didResolveMediaSelection:(id)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)delegate_AVAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)delegate_betterRouteDiscoveredForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_companionAvailabilityChanged:(bool)arg1;
- (void)delegate_connectionEstablishedForStreamTask:(id)arg1;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (void)delegate_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (void)delegate_readClosedForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_task:(id)arg1 _schemeUpgraded:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(bool)arg2;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)delegate_task:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2;
- (void)delegate_task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)delegate_task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_taskIsWaitingForConnectivity:(id)arg1;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (void)delegate_writeClosedForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finalizeDelegateWithError:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isBackgroundSession;
- (void)remote_externalAuthenticator_task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (void)_geo_sendAsynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 connectionProperties:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 queue:(id)arg3 connectionProperties:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)_geo_sendSynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 connectionProperties:(id)arg3 returningResponse:(id*)arg4 error:(id*)arg5;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_sharedNonCellularSession;
+ (id)safari_sharedSession;

- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandlerIncludingErrors:(id /* block */)arg2;

@end
