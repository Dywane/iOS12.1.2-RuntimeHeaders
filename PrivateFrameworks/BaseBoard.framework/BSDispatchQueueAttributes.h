/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDispatchQueueAttributes : NSObject {
    NSObject<OS_dispatch_queue_attr> * _attrs;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue_attr> *attributes;

+ (id)_attributesWithAttributes:(id)arg1;
+ (id)concurrent;
+ (id)serial;

- (void).cxx_destruct;
- (id)attributes;
- (id)autoreleaseFrequency:(unsigned long long)arg1;
- (id)inactive;
- (id)serviceClass:(unsigned int)arg1;
- (void)setAttributes:(id)arg1;

@end
