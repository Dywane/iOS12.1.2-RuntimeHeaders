/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (nonatomic, readonly) <FBSUIApplicationWorkspaceClientDelegate> *delegate;

- (void)_queue_handleAssertionExpirationImminent:(id)arg1;
- (void)_queue_handleExit:(id)arg1;
- (void)_queue_handleLaunch:(id)arg1;
- (bool)_queue_handleMessageWithType:(long long)arg1 message:(id)arg2;
- (bool)willObserveLayersManually;

@end
