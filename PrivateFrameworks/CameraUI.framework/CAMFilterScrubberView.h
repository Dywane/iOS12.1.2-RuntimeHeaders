/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFilterScrubberView : UIView <CAMFilterScrubberCollectionViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {
    CAMAnimationGenerator * __animationGenerator;
    UICollectionView * __collectionView;
    CAMFilterScrubberCollectionViewLayout * __collectionViewLayout;
    UIView * __collectionViewSnapshot;
    CAMDialGradientView * __dialGradientView;
    UILongPressGestureRecognizer * __pressGestureRecognizer;
    UIPreviewInteraction * __previewInteraction;
    double  __previewTransitionProgress;
    NSArray * __reducedFilterIndicesToShow;
    UIView * __selectedFilterOverlayView;
    UISelectionFeedbackGenerator * __selectionFeedbackGenerator;
    UITapGestureRecognizer * __tapGestureRecognizer;
    long long  _defaultFilterType;
    <CAMFilterScrubberViewDelegate> * _delegate;
    NSArray * _filterTypes;
    long long  _lastCapturedFilterType;
    id  _layerContents;
    long long  _selectedFilterType;
    double  _selectionDotCenterTopSpacing;
    bool  _suspended;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _thumbnailEdgeInsets;
}

@property (nonatomic, readonly) CAMAnimationGenerator *_animationGenerator;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) CAMFilterScrubberCollectionViewLayout *_collectionViewLayout;
@property (setter=_setCollectionViewSnapshot:, nonatomic, retain) UIView *_collectionViewSnapshot;
@property (nonatomic, readonly) CAMDialGradientView *_dialGradientView;
@property (nonatomic, readonly) UILongPressGestureRecognizer *_pressGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *_previewInteraction;
@property (setter=_setPreviewTransitionProgress:, nonatomic) double _previewTransitionProgress;
@property (setter=_setReducedFilterIndicesToShow:, nonatomic, retain) NSArray *_reducedFilterIndicesToShow;
@property (nonatomic, readonly) UIView *_selectedFilterOverlayView;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultFilterType;
@property (nonatomic) <CAMFilterScrubberViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filterTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastCapturedFilterType;
@property (nonatomic, retain) id layerContents;
@property (nonatomic) long long selectedFilterType;
@property (nonatomic, readonly) double selectedThumbnailBorderWidth;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } thumbnailEdgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (double)_alphaForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (id)_animationGenerator;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (id)_collectionViewSnapshot;
- (struct CGPoint { double x1; double x2; })_contentOffsetForFractionalItemOffset:(double)arg1 withPreviewTransitionProgress:(double)arg2;
- (struct CGSize { double x1; double x2; })_defaultItemSize;
- (id)_dialGradientView;
- (long long)_filterTypeForItemIndex:(long long)arg1;
- (double)_fractionalItemOffsetForContentOffset:(struct CGPoint { double x1; double x2; })arg1 withPreviewTransitionProgress:(double)arg2;
- (void)_handlePressGesture:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (double)_idealFractionalItemOffsetTargetForFractionalItemOffset:(double)arg1 allowUnselectedItems:(bool)arg2;
- (long long)_itemIndexForFilterType:(long long)arg1;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint { double x1; double x2; })arg1 switchToNextFilterThreshold:(double)arg2 withPreviewTransitionProgress:(double)arg3;
- (id)_newReducedFilterIndicesToShow;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (id)_pressGestureRecognizer;
- (id)_previewInteraction;
- (double)_previewTransitionProgress;
- (id)_reducedFilterIndicesToShow;
- (void)_resetForTouchesEnded;
- (void)_scrollToFilterType:(long long)arg1 animated:(bool)arg2 shouldOvershoot:(bool)arg3;
- (id)_selectedFilterOverlayView;
- (id)_selectionFeedbackGenerator;
- (void)_setCollectionViewSnapshot:(id)arg1;
- (void)_setPreviewTransitionProgress:(double)arg1;
- (void)_setReducedFilterIndicesToShow:(id)arg1;
- (void)_setSelectedFilterType:(long long)arg1 shouldNotify:(bool)arg2 shouldSuppressHaptic:(bool)arg3;
- (bool)_shouldPerformFeedback;
- (void)_switchToFilterAtIndexOffset:(long long)arg1 shouldOvershoot:(bool)arg2;
- (void)_switchToFilterType:(long long)arg1 shouldOvershoot:(bool)arg2 shouldSuppressHaptic:(bool)arg3;
- (id)_tapGestureRecognizer;
- (void)_updateCollectionViewForLastCapturedFilterTypeAnimated:(bool)arg1;
- (void)_updateFilteredLayerContentsForCell:(id)arg1;
- (double)_widthForItemIndex:(long long)arg1 withPreviewTransitionProgress:(double)arg2;
- (double)_widthForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (long long)defaultFilterType;
- (id)delegate;
- (double)filterScrubberCollectionViewLayout:(id)arg1 alphaForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })filterScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)filterTypes;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSuspended;
- (long long)lastCapturedFilterType;
- (id)layerContents;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)selectedFilterType;
- (double)selectedThumbnailBorderWidth;
- (double)selectionDotCenterTopSpacing;
- (void)setDefaultFilterType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterTypes:(id)arg1;
- (void)setLastCapturedFilterType:(long long)arg1;
- (void)setLastCapturedFilterType:(long long)arg1 animated:(bool)arg2;
- (void)setLayerContents:(id)arg1;
- (void)setSelectedFilterType:(long long)arg1;
- (void)setSelectionDotCenterTopSpacing:(double)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setThumbnailEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_previewInteraction:(id)arg1;
- (void)switchToNextFilter;
- (void)switchToPreviousFilter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })thumbnailEdgeInsets;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
