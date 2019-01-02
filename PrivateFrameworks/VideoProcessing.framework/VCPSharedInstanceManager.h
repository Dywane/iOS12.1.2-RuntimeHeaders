/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPSharedInstanceManager : NSObject {
    NSObject<OS_dispatch_queue> * serialQueue_;
    NSMutableDictionary * sharedInstances_;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(id /* block */)arg2;

@end