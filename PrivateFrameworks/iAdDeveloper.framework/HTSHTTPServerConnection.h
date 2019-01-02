/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {
    bool  _closeOnEmptyQueue;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _identifier;
    NSTimer * _idleTimer;
    struct __CFHTTPMessage { } * _incomingMessage;
    NSMutableArray * _incomingQueue;
    double  _lastActivity;
    NSMutableArray * _outputQueue;
    bool  _outputStalled;
    bool  _readActive;
    NSObject<OS_dispatch_source> * _readSource;
    HTSHTTPServer * _server;
    int  _socket;
    int  _socketRefCount;
    bool  _writeActive;
    NSObject<OS_dispatch_source> * _writeSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSTimer *idleTimer;
@property (nonatomic) double lastActivity;
@property (readonly) Class superclass;

- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)_processStreamInput;
- (void)_processStreamOutput;
- (void)_shutdownIdleConnection:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (id)idleTimer;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (double)lastActivity;
- (void)printData:(id)arg1 withMessage:(id)arg2;
- (void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(bool)arg3;
- (void)setIdleTimer:(id)arg1;
- (void)setLastActivity:(double)arg1;

@end