/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver> {
    PXMemoriesFeedDataSource * _childDataSource;
    PXMemoriesFeedWidgetDataSourceManager * _childDataSourceManager;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dataSourceRange;
}

@property (nonatomic, retain) PXMemoriesFeedDataSource *childDataSource;
@property (nonatomic, readonly) PXMemoriesFeedWidgetDataSourceManager *childDataSourceManager;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } dataSourceRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldHandleEntireDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_adjustChangeDetailsIfNeeded:(id)arg1 previousDataSource:(id)arg2 newDataSource:(id)arg3;
- (id)_adjustChangedIndexSetIfNeeded:(id)arg1;
- (id)_adjustDataSourceIfNeeded:(id)arg1;
- (void)_handleDataSourceChange;
- (id)childDataSource;
- (id)childDataSourceManager;
- (id)createInitialDataSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dataSourceRange;
- (id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setChildDataSource:(id)arg1;
- (void)setDataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldHandleEntireDataSource;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end
