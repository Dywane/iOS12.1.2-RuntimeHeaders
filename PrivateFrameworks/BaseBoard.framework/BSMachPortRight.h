/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortRight : NSObject <BSInvalidatable, BSXPCCoding, NSSecureCoding> {
    int  _owner;
    unsigned int  _queue_port;
    unsigned int  _rawPort;
    NSString * _trace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *trace;

+ (id)_descriptionForPort:(unsigned int)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4;
+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (void)_queue_invalidatePortPointer:(unsigned int*)arg1 owner:(int)arg2;
+ (id)_rightDescription;
+ (void)_serialize:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPort:(unsigned int)arg1 owner:(int)arg2 trace:(id)arg3;
- (void)_queue_invalidate;
- (void)_queue_invalidateForOwner:(int)arg1;
- (bool)_queue_isUsable;
- (unsigned int)_queue_port;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isUsable;
- (unsigned int)port;
- (unsigned int)rawPort;
- (id)trace;

@end
