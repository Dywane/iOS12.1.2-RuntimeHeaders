/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLRenderPassDescriptor * _descriptor;
}

- (void)dealloc;
- (void)endEncoding;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;

@end
