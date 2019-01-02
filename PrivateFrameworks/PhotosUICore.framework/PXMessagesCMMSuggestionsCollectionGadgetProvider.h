/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesCMMSuggestionsCollectionGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {
    double  _contentHeightAdjustment;
    bool  _hasGeneratedGadgets;
    bool  _isShowingEmpty;
    PXNoContentGadget * _noContentGadget;
    PXMessagesCMMSuggestionsGadgetProvider * _suggestionsGadgetProvider;
}

@property (nonatomic) double contentHeightAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGadgets;
- (double)contentHeightAdjustment;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setContentHeightAdjustment:(double)arg1;
- (void)setSuggestionsDataSourceManager:(id)arg1;
- (id)suggestionsDataSourceManager;

@end
