/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSSystemTask : NSObject {
    NSObject<OS_xpc_object> * _executionCriteria;
    id /* block */  _handler;
    NSString * _name;
    unsigned long long  _periodSeconds;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long periodSeconds;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)initWithName:(id)arg1 isPeriodic:(bool)arg2 period:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (id)name;
- (unsigned long long)periodSeconds;
- (id)queue;

@end
