/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRenderList : NSObject <BWRenderListParameterListProvider> {
    bool  _affectsMetadata;
    bool  _isolationQueuePrepared;
    /* Warning: unhandled struct encoding: '{BWRenderListRendererNode={?=^{BWRenderListRendererNode}}@}' */ struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; } * _originalMarkerRendererNode;
    struct BWRenderListParameterList { 
        struct BWRenderListParameterNode {} *slh_first; 
    }  _parameterList;
    NSObject<OS_dispatch_queue> * _preparationIsolationQueue;
    struct BWRenderListRendererList { 
        struct BWRenderListRendererNode {} *slh_first; 
    }  _rendererList;
    bool  _supportsAnimation;
}

@property (nonatomic, readonly) bool affectsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*parameterList;
@property (getter=isPrepared, nonatomic) bool prepared;
@property (nonatomic, readonly) bool producesOriginalRender;
@property (nonatomic, readonly) struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*rendererList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;

+ (void)initialize;
+ (id)shallowDepthOfFieldFilterName;

- (void)_appendBatchRendererFromProvider:(id)arg1 toRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)arg2 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)arg3 withContext:(struct BWRenderListOptimizationContext { short x1; struct BWRenderListRendererNode {} *x2; struct BWRenderListParameterNode {} *x3; struct BWRenderListRendererNode {} *x4; id x5; short x6; bool x7; id x8; bool x9; }*)arg4;
- (void)_appendSingleRendererOfType:(short)arg1 forFilter:(id)arg2 fromProvider:(id)arg3 toRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)arg4 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)arg5 withContext:(struct BWRenderListOptimizationContext { short x1; struct BWRenderListRendererNode {} *x2; struct BWRenderListParameterNode {} *x3; struct BWRenderListRendererNode {} *x4; id x5; short x6; bool x7; id x8; bool x9; }*)arg6;
- (void)_continueOptimizingRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)arg1 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)arg2 withFilter:(id)arg3 fromProvider:(id)arg4 context:(struct BWRenderListOptimizationContext { short x1; struct BWRenderListRendererNode {} *x2; struct BWRenderListParameterNode {} *x3; struct BWRenderListRendererNode {} *x4; id x5; short x6; bool x7; id x8; bool x9; }*)arg5;
- (void)_finishOptimizingRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)arg1 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)arg2 fromProvider:(id)arg3 context:(struct BWRenderListOptimizationContext { short x1; struct BWRenderListRendererNode {} *x2; struct BWRenderListParameterNode {} *x3; struct BWRenderListRendererNode {} *x4; id x5; short x6; bool x7; id x8; bool x9; }*)arg4;
- (bool)_shouldStreamingSDOFRendererConsumeFilter:(id)arg1;
- (bool)_shouldUseMetalRendererForFilterWithName:(id)arg1 optimizationStrategy:(short)arg2;
- (bool)_shouldUseOptimizationStrategyDependentSDOFRendererForFilterWithName:(id)arg1;
- (bool)affectsMetadata;
- (id)copyParameters;
- (void)dealloc;
- (/* Warning: unhandled struct encoding: '{BWRenderListRendererNode={?=^{BWRenderListRendererNode}}@}' */ struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; }*)firstRendererNode;
- (id)init;
- (id)initWithAnimationSupported:(bool)arg1;
- (id)initWithResourceProvider:(id)arg1 originalFilters:(id)arg2 processedFilters:(id)arg3 optimizationStrategy:(short)arg4;
- (bool)isPrepared;
- (struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)parameterList;
- (void)prepareWithParameters:(id)arg1 forInputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (bool)producesOriginalRender;
- (struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)rendererList;
- (void)setPrepared:(bool)arg1;
- (bool)shouldAllowOriginalRenderFromNode:(/* Warning: unhandled struct encoding: '{BWRenderListRendererNode={?=^{BWRenderListRendererNode}}@}' */ struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; }*)arg1;
- (bool)supportsAnimation;

@end
