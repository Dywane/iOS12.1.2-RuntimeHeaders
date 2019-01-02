/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactViewCache : NSObject {
    CNCache * _cachedAccounts;
    CNCache * _cachedContainers;
    CNCache * _cachedPolicies;
    CNContactStore * _contactStore;
    CNUIGeminiDataSource * _geminiDataSource;
}

@property (nonatomic, retain) CNCache *cachedAccounts;
@property (nonatomic, retain) CNCache *cachedContainers;
@property (nonatomic, retain) CNCache *cachedPolicies;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNUIGeminiDataSource *geminiDataSource;

- (void).cxx_destruct;
- (id)_accountForContact:(id)arg1;
- (id)_containerForContact:(id)arg1;
- (id)_policyForContact:(id)arg1;
- (id)accountForContact:(id)arg1;
- (id)cachedAccounts;
- (id)cachedContainers;
- (id)cachedPolicies;
- (id)contactStore;
- (id)geminiDataSource;
- (id)nts_lazyContactStore;
- (id)policyForContact:(id)arg1;
- (id)policyForDefaultContainer;
- (void)resetCache;
- (void)setCachedAccounts:(id)arg1;
- (void)setCachedContainers:(id)arg1;
- (void)setCachedPolicies:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setGeminiDataSource:(id)arg1;

@end
