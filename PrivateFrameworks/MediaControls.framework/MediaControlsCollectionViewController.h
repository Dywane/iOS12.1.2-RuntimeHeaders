/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsCollectionViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSMutableDictionary * _activeViewControllers;
    long long  _animatedSelectionCount;
    long long  _appearanceTransitionCount;
    bool  _appeared;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _controlCenterEdgeInsets;
    MediaControlsCollectionViewCountData * _countData;
    <MediaControlsCollectionViewDataSource> * _dataSource;
    <MediaControlsCollectionViewDelegate> * _delegate;
    id /* block */  _dismissalBlock;
    long long  _displayMode;
    long long  _highlightedItemIndex;
    UIViewController<MediaControlsCollectionItemViewController> * _inactiveSelectedViewController;
    NSMutableSet * _inactiveViewControllers;
    bool  _isAnimatingSelection;
    bool  _isPerformingBatchUpdates;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownEnvironmentSize;
    bool  _needsReloadData;
    NSMutableArray * _pendingUpdates;
    UIScrollView * _scrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollViewInsets;
    long long  _selectedItemIndex;
    bool  _shouldDisableAutoReaping;
    bool  _shouldIgnoreScrollNotifications;
    _MediaControlsTapHoldGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) <MediaControlsCollectionViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (nonatomic) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollViewInsets;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MediaControlsTapHoldGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) NSArray *visibleBottomViewControllers;
@property (nonatomic, readonly) NSIndexSet *visibleIndexes;
@property (nonatomic, readonly) NSArray *visibleTopViewControllers;
@property (nonatomic, readonly) NSArray *visibleViewControllers;

+ (id)alphaAnimatorWithAnimations:(id /* block */)arg1;
+ (id)frameAnimator;

- (void).cxx_destruct;
- (void)_adjustForEnvironmentChangeIfNeededWithSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_adjustForEnvironmentChangeWithSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (double)_backgroundCornerRadius;
- (void)_beginAppearanceTransitionForChildViewControllers:(bool)arg1 animated:(bool)arg2;
- (void)_beginAppearanceTransitionIfNeeded:(bool)arg1 forChildViewController:(id)arg2 animated:(bool)arg3;
- (bool)_canPerformBatchUpdates;
- (long long)_closestItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_commonInit;
- (void)_dequeueAndPerformBatchUpdatesIfNeeded;
- (void)_endAppearanceTransitionForChildViewControllerIfNeeded:(id)arg1;
- (void)_endAppearanceTransitionForChildViewControllers;
- (void)_enumerateActiveViewControllers:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewAtIndex:(long long)arg1 displayMode:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewAtIndex:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_handleScrollViewTap:(id)arg1;
- (id)_indexesOfItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_insertViewControllerForIndex:(long long)arg1;
- (bool)_isScrollViewAnimatingScroll;
- (void)_populateViewsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_preferredSelectedItemHeight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_reapActiveViews;
- (void)_reapViewAtIndex:(long long)arg1;
- (double)_regularItemHeight;
- (void)_reloadDataIfNeeded;
- (void)_removeInactiveViewControllersFromHierarchy;
- (void)_removeViewController:(id)arg1;
- (void)_scrollToSelectedItemAnimated:(bool)arg1;
- (double)_selectedItemHeightInSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_selectedItemHeightInSize:(struct CGSize { double x1; double x2; })arg1 shouldIgnoreInsets:(bool)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_setHighlighted:(bool)arg1 forViewController:(id)arg2;
- (void)_setHighlighted:(bool)arg1 forViewControllerAtIndex:(long long)arg2;
- (void)_setSelectedItemIndex:(long long)arg1 animated:(bool)arg2 shouldScroll:(bool)arg3 shouldNotifyDelegate:(bool)arg4 withReason:(long long)arg5;
- (void)_tileViews;
- (double)_totalHeight;
- (void)_transitionToDisplayMode:(long long)arg1 usingTransitionCoordinator:(id)arg2 assumingSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_transitionToVisible:(bool)arg1;
- (void)_transitionTopAndBottomViewControllersToVisible:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateContentSize;
- (void)_updateFrameForViewController:(id)arg1 atIndex:(long long)arg2 withCoordinator:(id)arg3 assumingSize:(struct CGSize { double x1; double x2; })arg4;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_verticalSpacing;
- (id)_visibleBottomViewControllers;
- (id)_visibleTopViewControllers;
- (bool)_wantsTapGestureRecognizer;
- (id)dataSource;
- (id)delegate;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)deleteItemsAtIndexes:(id)arg1;
- (id)dequeueReusableViewControllerForItemAtIndex:(long long)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)dismissalBlock;
- (long long)displayMode;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (long long)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)reloadData;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)scrollToSelectedItemAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollViewInsets;
- (long long)selectedItemIndex;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1 animated:(bool)arg2 shouldScroll:(bool)arg3;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)tapGestureRecognizer;
- (void)updateContentInsets;
- (id)viewControllerForItemAtIndex:(long long)arg1;
- (id)viewControllerForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)viewControllerForSelectedItem;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleBottomViewControllers;
- (id)visibleIndexes;
- (id)visibleTopViewControllers;
- (id)visibleViewControllers;

@end
