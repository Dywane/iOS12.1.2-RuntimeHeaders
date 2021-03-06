/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NULivePhotoSourceDefinition : NUSourceDefinition {
    NUMultipleSourceDefinition * _image;
    NUMultipleSourceDefinition * _video;
}

@property (readonly) NUMultipleSourceDefinition *image;
@property (readonly) NUMultipleSourceDefinition *video;

- (void).cxx_destruct;
- (id)image;
- (id)init;
- (id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;
- (id)initWithMultipleResolutionImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)video;

@end
