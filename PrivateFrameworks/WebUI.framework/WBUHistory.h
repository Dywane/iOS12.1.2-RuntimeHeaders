/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUHistory : WBSHistory {
    bool  _shouldScheduleMaintenance;
}

@property (nonatomic) bool shouldScheduleMaintenance;

- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (id)_createHistoryStore;
- (Class)_historyItemClass;
- (void)_removeAllVisitedLinks;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (bool)historyStoreShouldScheduleMaintenance:(id)arg1;
- (id)init;
- (void)setShouldScheduleMaintenance:(bool)arg1;
- (bool)shouldScheduleMaintenance;

@end