/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate> {
    TSDFPSCounter * _FPSCounter;
    NSMapTable * _animatedLayers;
    bool  _animationsRanToCompletion;
    NSDictionary * _attributes;
    CALayer * _backgroundLayer;
    bool  _hasBeenTornDown;
    long long  _numberOfAnimationsStarted;
    bool  _shouldAnimateTransition;
    bool  _shouldTearDownIncomingTexture;
    NSMutableArray * _textures;
    SEL  _transitionEndCallbackSelector;
    id  _transitionEndCallbackTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(bool)arg2;
- (void)animate;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)description;
- (void)forceRemoveAnimations;
- (void)generateTextures;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (bool)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(bool)arg3;
- (void)p_checkForNullTransitions:(Class)arg1;
- (void)p_removeAnimationsShouldForceRemove:(bool)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)renderSlideIndex:(unsigned long long)arg1;
- (void)renderTextures;
- (void)renderTexturesSynchronously;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setupLayerTreeForTransition;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;
- (void)updateAnimationTestingLog;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(bool)arg1;

@end