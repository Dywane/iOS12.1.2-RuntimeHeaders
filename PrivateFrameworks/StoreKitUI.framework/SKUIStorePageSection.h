/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate> {
    IKColor * _backgroundColorForSection;
    bool  _bottomSection;
    SKUIPageComponent * _component;
    SKUIStorePageSectionContext * _context;
    bool  _hasValidRelevantEntityProviders;
    NSArray * _indexPathsForBackgroundItems;
    SKUIProductPageOverlayController * _overlayController;
    NSSet * _relevantEntityProviders;
    long long  _sectionIndex;
    bool  _topSection;
}

@property (nonatomic, readonly) IKColor *backgroundColorForSection;
@property (getter=isBottomSection, nonatomic) bool bottomSection;
@property (nonatomic, readonly) SKUIStorePageSectionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultItemPinningStyle;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSIndexPath *firstAppearanceIndexPath;
@property (nonatomic, readonly) bool fitsToHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexPathsForBackgroundItems;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (nonatomic, readonly) long long numberOfCells;
@property (nonatomic, readonly) SKUIPageComponent *pageComponent;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly, copy) NSSet *relevantEntityProviders;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property (nonatomic) long long sectionIndex;
@property (readonly) Class superclass;
@property (getter=isTopSection, nonatomic) bool topSection;

- (void).cxx_destruct;
- (id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3;
- (long long)_itemPinningGroup;
- (long long)_itemPinningStyle;
- (void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg1 toSet:(id)arg2;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_setContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)backgroundColorForSection;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x1; double x2; })arg1 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)containsElementWithIndexBarEntryID:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (id)context;
- (void)dealloc;
- (long long)defaultItemPinningStyle;
- (void)deselectItemsAnimated:(bool)arg1;
- (void)didAppearInContext:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (id)firstAppearanceIndexPath;
- (bool)fitsToHeight;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)indexPathsForBackgroundItems;
- (id)indexPathsForPinningItems;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (bool)isBottomSection;
- (bool)isTopSection;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeForIndexPathRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)numberOfCells;
- (id)pageComponent;
- (bool)performDefaultActionForViewElement:(id)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)pinningGroupForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (void)playVideoForElement:(id)arg1;
- (void)playVideoWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (id)relevantEntityProviders;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (bool)requestLayoutWithReloadReason:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (long long)sectionIndex;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setBottomSection:(bool)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setTopSection:(bool)arg1;
- (void)showPageWithLink:(id)arg1;
- (void)showProductViewControllerWithItem:(id)arg1;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (long long)updateWithContext:(id)arg1 pageComponent:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
