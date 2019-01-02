/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode {
    struct __CVBuffer { } * _pixelBuffer;
}

- (id)_evaluateImage:(out id*)arg1;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (struct { long long x1; long long x2; })pixelSize;

@end
