/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails> {
    unsigned long long  _fromDataSourceIdentifier;
    NSDictionary * _itemChangeDetailsBySection;
    NSDictionary * _itemsWithSubitemChangesBySection;
    PXArrayChangeDetails * _sectionChanges;
    NSIndexSet * _sectionsWithItemChanges;
    NSDictionary * _subitemChangeDetailsByItemBySection;
    unsigned long long  _toDataSourceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fromDataSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXArrayChangeDetails *sectionChanges;
@property (nonatomic, readonly) NSIndexSet *sectionsWithItemChanges;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long toDataSourceIdentifier;

+ (void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3;
+ (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4;
+ (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4;
+ (id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out bool*)arg3;
+ (id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out bool*)arg3;

- (void).cxx_destruct;
- (id)changedItemsInSection:(long long)arg1;
- (id)deletedItemsInSection:(long long)arg1;
- (id)description;
- (unsigned long long)fromDataSourceIdentifier;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3;
- (id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out bool*)arg2;
- (id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out bool*)arg2;
- (id)init;
- (id)initWithFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5;
- (id)insertedItemsInSection:(long long)arg1;
- (id)itemChangesInSection:(long long)arg1;
- (id)itemsWithSubitemChangesInSection:(long long)arg1;
- (id)sectionChanges;
- (id)sectionsWithItemChanges;
- (id)subitemChangesInItem:(long long)arg1 section:(long long)arg2;
- (unsigned long long)toDataSourceIdentifier;

@end
