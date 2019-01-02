/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment> {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    <CNTUCallProviderManager> * _callProviderManager;
    <CNCapabilities> * _capabilities;
    CNContactStore * _contactStore;
    <CNUIDefaultUserActionFetcher> * _defaultUserActionFetcher;
    <CNSchedulerProvider> * _highLatencySchedulerProvider;
    CNUIIDSContactPropertyResolver * _idsContactPropertyResolver;
    <CNMCProfileConnection> * _profileConnection;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, retain) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, retain) <CNTUCallProviderManager> *callProviderManager;
@property (nonatomic, retain) <CNCapabilities> *capabilities;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CNUIDefaultUserActionFetcher> *defaultUserActionFetcher;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNSchedulerProvider> *highLatencySchedulerProvider;
@property (nonatomic, retain) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property (nonatomic, retain) <CNMCProfileConnection> *profileConnection;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)callProviderManager;
- (id)capabilities;
- (id)contactStore;
- (id)copyWithContactStore:(id)arg1;
- (id)defaultUserActionFetcher;
- (id)highLatencySchedulerProvider;
- (id)idsContactPropertyResolver;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)nts_lazyContactStore;
- (id)profileConnection;
- (id)schedulerProvider;
- (void)setApplicationWorkspace:(id)arg1;
- (void)setCallProviderManager:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDefaultUserActionFetcher:(id)arg1;
- (void)setHighLatencySchedulerProvider:(id)arg1;
- (void)setIdsContactPropertyResolver:(id)arg1;
- (void)setProfileConnection:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;

@end
