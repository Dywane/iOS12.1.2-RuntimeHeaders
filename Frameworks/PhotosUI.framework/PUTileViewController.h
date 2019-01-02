/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileViewController : PUTileController {
    bool  __edgeAntialiasingEnabled;
    bool  __loadingView;
    UIView * __maskView;
    id /* block */  __onReadyToDisplayBlock;
    NSTimer * __readinessTimer;
    UIView * __tintView;
    UIView * __visibleRectView;
    UIView * _contentView;
    bool  _contentViewEnabled;
    NSArray * _gestureRecognizers;
    bool  _isReadyForDisplay;
    UIView * _loadedView;
    UIView * _view;
}

@property (setter=_setEdgeAntialiasingEnabled:, nonatomic) bool _edgeAntialiasingEnabled;
@property (getter=_isLoadingView, setter=_setLoadingView:, nonatomic) bool _loadingView;
@property (setter=_setMaskView:, nonatomic, retain) UIView *_maskView;
@property (setter=_setOnReadyToDisplayBlock:, nonatomic, copy) id /* block */ _onReadyToDisplayBlock;
@property (setter=_setReadinessTimer:, nonatomic, retain) NSTimer *_readinessTimer;
@property (setter=_setTintView:, nonatomic, retain) UIView *_tintView;
@property (setter=_setVisibleRectView:, nonatomic, retain) UIView *_visibleRectView;
@property (setter=_setContentView:, nonatomic, retain) UIView *contentView;
@property (getter=isContentViewEnabled, nonatomic) bool contentViewEnabled;
@property (setter=_setGestureRecognizers:, nonatomic, retain) NSArray *gestureRecognizers;
@property (setter=_setReadyForDisplay:, nonatomic) bool isReadyForDisplay;
@property (nonatomic, readonly) bool isViewLoaded;
@property (setter=_setLoadedView:, nonatomic, retain) UIView *loadedView;
@property (nonatomic, readonly) UIView *originalView;
@property (setter=_setView:, nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (bool)_edgeAntialiasingEnabled;
- (void)_handleReadinessForced:(bool)arg1;
- (void)_invalidateTintView;
- (bool)_isLoadingView;
- (id)_maskView;
- (id /* block */)_onReadyToDisplayBlock;
- (id)_readinessTimer;
- (void)_setContentView:(id)arg1;
- (void)_setEdgeAntialiasingEnabled:(bool)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setLoadedView:(id)arg1;
- (void)_setLoadingView:(bool)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setOnReadyToDisplayBlock:(id /* block */)arg1;
- (void)_setReadinessTimer:(id)arg1;
- (void)_setReadyForDisplay:(bool)arg1;
- (void)_setTintView:(id)arg1;
- (void)_setView:(id)arg1;
- (void)_setVisibleRectView:(id)arg1;
- (id)_tintView;
- (void)_updateDynamicStateDebugging;
- (void)_updateTintView;
- (void)_updateVisibleRectView;
- (id)_visibleRectView;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (id)contentView;
- (void)dealloc;
- (void)didChangeVisibleRect;
- (id)gestureRecognizers;
- (bool)isContentViewEnabled;
- (bool)isPresentationActive;
- (bool)isReadyForDisplay;
- (bool)isViewLoaded;
- (id)loadView;
- (id)loadedView;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)originalView;
- (void)prepareForReuse;
- (id)presentationLayoutInfo;
- (void)removeAllAnimations;
- (void)setContentViewEnabled:(bool)arg1;
- (void)setEdgeAntialiasingEnabled:(bool)arg1;
- (id)view;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsVisibleRectChanges;

@end
