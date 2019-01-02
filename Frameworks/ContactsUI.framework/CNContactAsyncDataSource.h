/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {
    NSArray * _allKeysToFetchForTransientContacts;
    CNContactFormatter * _contactFormatter;
    CNContactDataSourceSafeDelegate * _delegate;
    CNContactStoreFilter * _filter;
    <CNSchedulerProvider> * _reloadSchedulerProvider;
    CNPublishingSubject * _reloadStream;
    NSMutableArray * _resultingContacts;
    <CNCancelable> * _searchCancelationToken;
    CNContactStore * _store;
}

@property (nonatomic, retain) NSArray *allKeysToFetchForTransientContacts;
@property (nonatomic, readonly) bool canReload;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (nonatomic, copy) CNContactStoreFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, retain) <CNSchedulerProvider> *reloadSchedulerProvider;
@property (nonatomic, retain) CNPublishingSubject *reloadStream;
@property (nonatomic, retain) NSMutableArray *resultingContacts;
@property (nonatomic, retain) <CNCancelable> *searchCancelationToken;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic, retain) CNContactStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allKeysToFetchForTransientContacts;
- (bool)canReload;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(id)arg3;
- (id)contactFormatter;
- (id)contactMatchInfos;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)displayName;
- (id)effectiveFilter;
- (id)filter;
- (id)indexPathForContact:(id)arg1;
- (id)indexSections;
- (id)initWithStore:(id)arg1;
- (void)invalidate;
- (void)invalidateResults;
- (void)invalidateSearch;
- (id)preferredForNameMeContactIdentifier;
- (void)reload;
- (id)reloadSchedulerProvider;
- (id)reloadStream;
- (void)reloadWithRequest:(id)arg1;
- (id)resultingContacts;
- (id)searchCancelationToken;
- (id)sections;
- (void)setAllKeysToFetchForTransientContacts:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setNetworkActivityIndicatorVisible:(bool)arg1;
- (void)setReloadSchedulerProvider:(id)arg1;
- (void)setReloadStream:(id)arg1;
- (void)setResultingContacts:(id)arg1;
- (void)setSearchCancelationToken:(id)arg1;
- (void)setStore:(id)arg1;
- (bool)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
- (id)store;

@end
