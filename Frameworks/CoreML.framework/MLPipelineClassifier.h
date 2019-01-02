/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLPipelineClassifier : MLClassifier {
    MLPipeline * _engine;
}

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)engine;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)pipeline;
- (void)setEngine:(id)arg1;

@end
