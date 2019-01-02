/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItemCollection : NSObject <FPReachabilityObserver, FPXEnumeratorObserver> {
    NSData * _changeToken;
    _FPItemList * _currentItems;
    <FPItemCollectionDelegate> * _delegate;
    NSMutableSet * _deletedItemsIdentifiers;
    NSString * _domainIdentifier;
    bool  _enumeratingExtensionResults;
    NSFileProviderEnumerationProperties * _enumerationProperties;
    <FPXEnumerator> * _enumerator;
    id /* block */  _extensionKeepAliveBlock;
    NSArray * _fileTypes;
    bool  _gathering;
    bool  _hasMoreUpdates;
    NSString * _identifier;
    bool  _immutable;
    bool  _isRecursiveFolderEnumeration;
    NSObject<OS_dispatch_queue> * _itemAccessQueue;
    NSPredicate * _itemFilteringPredicate;
    FPItemID * _itemID;
    FPItemManager * _itemManager;
    NSData * _nextPageToken;
    unsigned long long  _numGatheredItems;
    unsigned long long  _observationID;
    bool  _observing;
    NSString * _providerIdentifier;
    bool  _regathering;
    bool  _restartAfterForeground;
    bool  _shouldResort;
    bool  _shouldRetryOnceAfterCrash;
    bool  _shouldUpdate;
    NSArray * _sortDescriptors;
    bool  _started;
    FPPacer * _updatePacer;
    NSObject<OS_dispatch_queue> * _updateQueue;
    NSArray * _updateSortDescriptors;
    NSMutableDictionary * _updatedItemsByIdentifiers;
    NSObject<OS_dispatch_queue> * _workingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPItemCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (getter=isGathering, nonatomic) bool gathering;
@property (nonatomic, readonly) bool hasMoreUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isImmutable, nonatomic, readonly) bool immutable;
@property (nonatomic, retain) NSPredicate *itemFilteringPredicate;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) bool observing;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FPPacer *updatePacer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *updateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workingQueue;

+ (bool)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;
+ (id)activeCollections;
+ (void)addActiveCollection:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4;
+ (void)consumeUpdates:(id)arg1 deletes:(id)arg2;
+ (void)initialize;
+ (bool)isEnumerationSuspended;
+ (bool)item:(id)arg1 isValidForObservedItemID:(id)arg2;
+ (void)removeActiveCollection:(id)arg1;
+ (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2;
+ (void)resumeVendorEnumeration;
+ (void)suspendVendorEnumeration;

- (void).cxx_destruct;
- (bool)__isObservingID:(unsigned long long)arg1;
- (void)_assignHierarchyPathToChildrenOf:(id)arg1 withPath:(id)arg2 hierarchy:(id)arg3;
- (void)_didEncounterError:(id)arg1;
- (void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2;
- (void)_flushPendingUpdates;
- (void)_gatherInitialItems;
- (void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfItemID:(id)arg1;
- (id)_initialPageFromSortDescriptors:(id)arg1;
- (bool)_isObservingID:(unsigned long long)arg1;
- (id)_itemsMutableCopy;
- (long long)_numberOfItems;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(bool)arg3;
- (void)_recomputeHierarchyOfItemList:(id)arg1;
- (void)_restartObservation;
- (id)_t_items;
- (void)_updateItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)_updateObservedItem:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)didUpdateItem:(id)arg1;
- (id)domainIdentifier;
- (void)enumerationResultsDidChange;
- (bool)hasMoreItems;
- (bool)hasMoreUpdates;
- (id)identifier;
- (id)indexPathFromIndex:(long long)arg1;
- (id)indexPathsFromIndexSet:(id)arg1;
- (id)initWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4 fileTypes:(id)arg5 itemManager:(id)arg6;
- (bool)isGathering;
- (bool)isImmutable;
- (id /* block */)isItemMatchingQueryBlock;
- (bool)isRegatheringAfterSignal;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemFilteringPredicate;
- (id)items;
- (long long)numberOfItems;
- (bool)observing;
- (id)providerIdentifier;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(bool)arg2;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)reorderItemsWithSortDescriptors:(id)arg1;
- (void)replaceContentsWithVendorItems:(id)arg1;
- (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGathering:(bool)arg1;
- (void)setIsItemMatchingQueryBlock:(id /* block */)arg1;
- (void)setItemFilteringPredicate:(id)arg1;
- (void)setObserving:(bool)arg1;
- (void)setWorkingQueue:(id)arg1;
- (id)sortDescriptors;
- (void)startObserving;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)stopObserving;
- (id)updatePacer;
- (id)updateQueue;
- (id)workingQueue;

@end