/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFileSourceDefinition : NUSingleSourceDefinition {
    NSURL * _url;
    bool  _useEmbeddedPreview;
    NSString * _uti;
}

@property (readonly) NSURL *url;
@property (nonatomic) bool useEmbeddedPreview;
@property (readonly) NSString *uti;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (void)setUseEmbeddedPreview:(bool)arg1;
- (id)url;
- (bool)useEmbeddedPreview;
- (id)uti;

@end