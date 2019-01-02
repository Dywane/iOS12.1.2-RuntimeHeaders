/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpViewController : UIViewController <PUImportActionCoordinatorDelegate, PUImportAssetsDataSourceManagerObserver, PUImportControllerNotificationsReceiver, PUImportOneUpCellDisplayDelegate, PUImportOneUpScrubberCellDisplayDelegate, PUImportOneUpTransitioning, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUSelectableAssetCollectionViewLayoutDelegate, PXChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    PUImportActionCoordinator * _actionCoordinator;
    bool  _allowsSelection;
    bool  _animatingTransition;
    UIBarButtonItem * _bottomSpacerBarButtonItem;
    UIBarButtonItem * _cancelBarButtonItem;
    PUImportChangeDetailsCollectionViewHelper * _changeDetailsHelper;
    UICollectionView * _collectionView;
    PUSelectableAssetCollectionViewLayout * _collectionViewLayout;
    PLDateRangeFormatter * _dayFormatter;
    UIBarButtonItem * _deleteBarButtonItem;
    bool  _hasPerformedNavigationToStartingAsset;
    UIBarButtonItem * _importBarButtonItem;
    PUImportController * _importController;
    PUImportAssetsDataSource * _importDataSource;
    PUImportAssetsDataSourceManager * _importDataSourceManager;
    NSIndexPath * _inFlightReferenceIndexPath;
    bool  _isCommitingPreview;
    NSMutableArray * _itemsNeedingRelayout;
    NSMutableSet * _itemsWithInvalidImageSizes;
    bool  _loadLargeThumbnailsInCustomOrder;
    PXMediaProvider * _mediaProvider;
    PXNavigationTitleView * _navigationTitleView;
    PUImportAssetsDataSource * _pendingDataSource;
    bool  _performingDataSourceChange;
    unsigned long long  _presentationFilter;
    UIBarButtonItem * _progressButtonItem;
    PFCoalescer * _relayoutCoalescer;
    PUReviewScrubber * _reviewScrubber;
    PLRoundProgressView * _roundProgressView;
    PUImportOneUpViewControllerSpecManager * _specManager;
    PXAssetReference * _startingAssetReference;
    UIBarButtonItem * _stopImportBarButtonItem;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSMutableSet * _thumbnailLoadableItemWhitelist;
    PLDateRangeFormatter * _timeFormatter;
    UICollectionViewLayout * _transitionLayout;
    bool  _updatingContentOffsetFromScrubbing;
}

@property (nonatomic, retain) PUImportActionCoordinator *actionCoordinator;
@property (nonatomic) bool allowsSelection;
@property (getter=isAnimatingTransition, nonatomic) bool animatingTransition;
@property (nonatomic, readonly) UIBarButtonItem *bottomSpacerBarButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *cancelBarButtonItem;
@property (nonatomic, retain) PUImportChangeDetailsCollectionViewHelper *changeDetailsHelper;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) PUSelectableAssetCollectionViewLayout *collectionViewLayout;
@property (nonatomic, readonly) PLDateRangeFormatter *dayFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIBarButtonItem *deleteBarButtonItem;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPerformedNavigationToStartingAsset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIBarButtonItem *importBarButtonItem;
@property (nonatomic, retain) PUImportController *importController;
@property (nonatomic, retain) PUImportAssetsDataSource *importDataSource;
@property (nonatomic, retain) PUImportAssetsDataSourceManager *importDataSourceManager;
@property (nonatomic, readonly) NSIndexPath *inFlightReferenceIndexPath;
@property (nonatomic) bool isCommitingPreview;
@property (nonatomic, retain) NSMutableArray *itemsNeedingRelayout;
@property (nonatomic, retain) NSMutableSet *itemsWithInvalidImageSizes;
@property (nonatomic) bool loadLargeThumbnailsInCustomOrder;
@property (nonatomic, retain) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXNavigationTitleView *navigationTitleView;
@property (nonatomic, retain) PUImportAssetsDataSource *pendingDataSource;
@property (nonatomic) bool performingDataSourceChange;
@property (nonatomic) unsigned long long presentationFilter;
@property (nonatomic, readonly) UIBarButtonItem *progressButtonItem;
@property (nonatomic, retain) PFCoalescer *relayoutCoalescer;
@property (nonatomic, readonly) PUReviewScrubber *reviewScrubber;
@property (nonatomic, retain) PLRoundProgressView *roundProgressView;
@property (nonatomic, retain) PUImportOneUpViewControllerSpecManager *specManager;
@property (nonatomic, readonly) PXAssetReference *startingAssetReference;
@property (nonatomic, readonly) UIBarButtonItem *stopImportBarButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) NSMutableSet *thumbnailLoadableItemWhitelist;
@property (nonatomic, readonly) PLDateRangeFormatter *timeFormatter;
@property (nonatomic, retain) UICollectionViewLayout *transitionLayout;
@property (nonatomic, readonly) bool updatingContentOffsetFromScrubbing;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_cancelAlerts;
- (void)_cancelOneUpView;
- (id)_currentAsset;
- (void)_deleteAction:(id)arg1;
- (void)_dismissReviewControllerWithAsset:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (void)_importAction:(id)arg1;
- (void)_importControllerDidEndAction;
- (void)_importControllerWillBeginAction;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { double x1; double x2; })arg2 excludingIndexPath:(id)arg3;
- (long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_stopImportAction:(id)arg1;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_updateBarItemsAnimated:(bool)arg1;
- (void)_updateReviewScrubberFromContentOffset;
- (double)absoluteProgressFromCurrentContentOffset;
- (id)actionCoordinator;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)allowsSelection;
- (id)assetAtIndexPath:(id)arg1;
- (id)badgeViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)beginCenterPrioritizedThumbnailLoading;
- (id)bottomSpacerBarButtonItem;
- (id)cancelBarButtonItem;
- (id)changeDetailsHelper;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (id)dayFormatter;
- (void)dealloc;
- (id)deleteBarButtonItem;
- (void)deleteItems:(id)arg1;
- (void)didTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)getMainCollectionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 orientation:(long long)arg3;
- (void)handleNewDataSource:(id)arg1;
- (bool)hasPerformedNavigationToStartingAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectFromPhotoView:(id)arg1;
- (id)importAssetAtIndexPath:(id)arg1;
- (id)importBarButtonItem;
- (id)importController;
- (void)importControllerProgressDidChange:(id)arg1 completedItemCount:(id)arg2 totalItemCount:(id)arg3 context:(id)arg4;
- (id)importDataSource;
- (id)importDataSourceManager;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(id /* block */)arg3;
- (void)importOneUpScrubberCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importOneUpScrubberCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(id /* block */)arg3;
- (id)inFlightReferenceIndexPath;
- (id)indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (id)initWithImportController:(id)arg1 mediaProvider:(id)arg2 startingAssetReference:(id)arg3 presentationFilter:(unsigned long long)arg4;
- (void)invalidateLayoutIfNeededForImportItem:(id)arg1;
- (bool)isAnimatingTransition;
- (bool)isCommitingPreview;
- (id)itemsNeedingRelayout;
- (id)itemsWithInvalidImageSizes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadCenterPrioritizedVisibleThumbnails;
- (bool)loadLargeThumbnailsInCustomOrder;
- (id)mediaProvider;
- (id)navigationTitleView;
- (id)nextIndexPath:(id)arg1;
- (long long)nextSectionWithItems:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)numberOfSectionsInReviewScrubber:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pageToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)pageToItemOrNearestIndexPath:(id)arg1 animated:(bool)arg2;
- (id)pendingDataSource;
- (bool)performingDataSourceChange;
- (void)prepareTransitionItemViewForDestination:(id)arg1;
- (unsigned long long)presentationFilter;
- (id)previousIndexPath:(id)arg1;
- (long long)previousSectionWithItems:(long long)arg1;
- (id)progressButtonItem;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (id)relayoutCoalescer;
- (void)relayoutCollectionView;
- (id)reviewScrubber;
- (unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (int)reviewScrubberImageFormat;
- (id)roundProgressView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndexPath:(id)arg2;
- (void)setActionCoordinator:(id)arg1;
- (void)setAllowsSelection:(bool)arg1;
- (void)setAnimatingTransition:(bool)arg1;
- (void)setChangeDetailsHelper:(id)arg1;
- (void)setHasPerformedNavigationToStartingAsset:(bool)arg1;
- (void)setImportController:(id)arg1;
- (void)setImportDataSource:(id)arg1;
- (void)setImportDataSourceManager:(id)arg1;
- (void)setIsCommitingPreview:(bool)arg1;
- (void)setItemsNeedingRelayout:(id)arg1;
- (void)setItemsWithInvalidImageSizes:(id)arg1;
- (void)setLoadLargeThumbnailsInCustomOrder:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPendingDataSource:(id)arg1;
- (void)setPerformingDataSourceChange:(bool)arg1;
- (void)setPresentationFilter:(unsigned long long)arg1;
- (void)setRelayoutCoalescer:(id)arg1;
- (void)setRoundProgressView:(id)arg1;
- (void)setSpecManager:(id)arg1;
- (void)setThumbnailLoadableItemWhitelist:(id)arg1;
- (void)setTransitionLayout:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)specManager;
- (id)startingAssetReference;
- (id)stopImportBarButtonItem;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tapGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrameForTransitionItem:(id)arg1;
- (id)thumbnailLoadableItemWhitelist;
- (id)timeFormatter;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)transitionItemsForContext:(id)arg1;
- (id)transitionLayout;
- (void)updateCollectionViewLayoutInsets;
- (void)updateMainViewAnimated:(bool)arg1;
- (void)updateNavigationItemTitle;
- (void)updateToolbarItems;
- (bool)updatingContentOffsetFromScrubbing;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
