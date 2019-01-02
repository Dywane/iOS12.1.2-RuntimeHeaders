/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAbstractScaleNode : NURenderNode

@property (nonatomic, readonly) NURenderNode *inputNode;

- (id)_scaleImage:(id)arg1 by:(struct { long long x1; long long x2; })arg2 sampleMode:(long long)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)inputNode;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
