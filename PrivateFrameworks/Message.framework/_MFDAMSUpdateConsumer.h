/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>

- (void)commitSyncActions;
- (void)drainMailbox;
- (bool)handleItems:(id)arg1;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)receiveSyncActions:(id)arg1;

@end
