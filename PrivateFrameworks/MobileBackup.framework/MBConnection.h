/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBConnection : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSObject<MBConnectionHandler> * _handler;
    int  _remotePid;
    NSString * _remoteProcessName;
}

@property (nonatomic) NSObject<MBConnectionHandler> *messageHandler;
@property (readonly, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCEvent:(id)arg1;
- (void)_setEventHandlerForXPCConnection;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 eventQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1 eventQueue:(id)arg2;
- (id)messageHandler;
- (void)resume;
- (void)sendMessage:(id)arg1;
- (id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2;
- (void)setMessageHandler:(id)arg1;
- (void)suspend;
- (id)xpcConnection;

@end
