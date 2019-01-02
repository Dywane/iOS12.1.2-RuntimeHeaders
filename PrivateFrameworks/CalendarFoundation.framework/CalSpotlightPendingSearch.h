/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSpotlightPendingSearch : NSObject <CalSpotlightQueryPendingSearchProtocol, MDSearchQueryDelegate> {
    NSString * _clientBundleID;
    id /* block */  _completionHandler;
    MDSearchQuery * _query;
    NSMutableOrderedSet * _searchableItemIdentifiers;
    NSMutableOrderedSet * _searchableItems;
}

@property (copy) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MDSearchQuery *query;
@property (retain) NSMutableOrderedSet *searchableItemIdentifiers;
@property (retain) NSMutableOrderedSet *searchableItems;
@property (readonly) Class superclass;

+ (id)_createSearchQueryWithPredicate:(id)arg1 options:(id)arg2;
+ (id)_pendingSearches;
+ (id)_queue;
+ (id)_resultForSearchableItem:(id)arg1;
+ (id)_resultsForSearchableItems:(id)arg1;

- (void).cxx_destruct;
- (void)_searchEnded;
- (void)_startSearchWithQuery:(id)arg1;
- (void)cancel;
- (id)clientBundleID;
- (id /* block */)completionHandler;
- (id)initWithString:(id)arg1 clientBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)query;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchWithString:(id)arg1;
- (id)searchableItemIdentifiers;
- (id)searchableItems;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setQuery:(id)arg1;
- (void)setSearchableItemIdentifiers:(id)arg1;
- (void)setSearchableItems:(id)arg1;

@end
