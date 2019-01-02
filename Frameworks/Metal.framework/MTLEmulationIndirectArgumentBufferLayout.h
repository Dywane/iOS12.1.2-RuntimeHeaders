/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    unsigned long long  _alignment;
    void * _bufferIndices;
    unsigned long long  _bufferOffset;
    void * _constantIndices;
    void * _constantOffsets;
    void * _samplerIndices;
    unsigned long long  _samplerOffset;
    unsigned long long  _stride;
    void * _textureIndices;
    unsigned long long  _textureOffset;
}

@property (nonatomic, readonly) unsigned long long stride;

- (unsigned long long)alignment;
- (bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (unsigned int)hashMask;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned int)hashValue;
- (id)initWithStructType:(id)arg1;
- (unsigned long long)offsetForBuffer:(unsigned long long)arg1;
- (unsigned long long)offsetForConstant:(unsigned long long)arg1;
- (unsigned long long)offsetForSampler:(unsigned long long)arg1;
- (unsigned long long)offsetForTexture:(unsigned long long)arg1;
- (unsigned long long)stride;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;

@end
