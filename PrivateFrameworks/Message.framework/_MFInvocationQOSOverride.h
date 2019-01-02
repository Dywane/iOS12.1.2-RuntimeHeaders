/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFInvocationQOSOverride : NSObject {
    unsigned int  _desiredQoS;
    bool  _lowPriority;
    struct pthread_override_s { } * _override;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _pthread;
}

@property (nonatomic, readonly) unsigned int desiredQoS;
@property (getter=isLowPriority, nonatomic, readonly) bool lowPriority;
@property (nonatomic, readonly) struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*pthread;

- (void)applyOverrideWhileForeground:(bool)arg1;
- (void)dealloc;
- (unsigned int)desiredQoS;
- (unsigned long long)hash;
- (id)initWithPthread:(struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)arg1 desiredQoS:(unsigned int)arg2 lowPriority:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLowPriority;
- (struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)pthread;
- (bool)removeOverride;

@end
