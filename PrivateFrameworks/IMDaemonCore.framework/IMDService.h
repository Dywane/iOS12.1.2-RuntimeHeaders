/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDService : NSObject <IMSystemMonitorListener> {
    NSDictionary * _accountDefaults;
    bool  _blockPrefWriting;
    NSBundle * _bundle;
    NSDictionary * _cachedServiceDefaults;
    NSDictionary * _cachedSetupServiceDefaults;
    NSString * _internalName;
    NSDictionary * _serviceDefaults;
    NSDictionary * _serviceProperties;
    Class  _sessionClass;
}

@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, retain) NSDictionary *defaultAccountSettings;
@property (nonatomic, readonly) bool disallowDeactivation;
@property (getter=isDiscontinued, nonatomic, readonly) bool discontinued;
@property (nonatomic, readonly, retain) NSString *internalName;
@property (nonatomic, readonly) bool isIDSBased;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, readonly) bool serviceChatsIgnoreLoginStatus;
@property (nonatomic, readonly, retain) NSDictionary *serviceDefaults;
@property (nonatomic, readonly, retain) NSDictionary *serviceDefaultsForSetup;
@property (nonatomic, readonly, retain) NSString *serviceDomain;
@property (nonatomic, readonly) bool serviceIgnoresNetworkConnectivity;
@property (nonatomic, readonly) bool serviceNeedsLogin;
@property (nonatomic, readonly) bool serviceNeedsPassword;
@property (nonatomic, retain) NSDictionary *serviceProperties;
@property (nonatomic, readonly) long long serviceProtocolVersion;
@property (nonatomic, readonly) bool serviceRequiresHost;
@property (nonatomic, readonly) bool serviceRequiresSingleAccount;
@property (nonatomic, readonly) bool serviceShouldBeAlwaysLoggedIn;
@property (nonatomic, readonly) bool serviceSupportsOneSessionForAllAccounts;
@property (nonatomic, readonly) bool serviceSupportsPresence;
@property (nonatomic, readonly) bool serviceSupportsRegistration;
@property (nonatomic, readonly) bool serviceWantsNullHostReachability;
@property (nonatomic, readonly) Class sessionClass;
@property (nonatomic, readonly) bool shouldCreateActiveAccounts;
@property (nonatomic, readonly) bool shouldForceAccountsActive;
@property (nonatomic, readonly) bool shouldForceAccountsConnected;
@property (nonatomic, readonly) bool supportsDatabase;

- (id)_copyServicePropertiesFromIMServiceBundle:(id)arg1;
- (id)_defaultDefaults;
- (id)_oldServiceDomain;
- (void)_reallyUnloadServiceBundle;
- (id)_serviceDefaultsForDomain:(id)arg1;
- (id)_serviceDomain;
- (void)accountAdded:(id)arg1;
- (Class)accountClass;
- (void)accountRemoved:(id)arg1;
- (id)bundle;
- (bool)clearOneTimeImportAccounts;
- (id)createDiscontinuedAccount;
- (void)dealloc;
- (id)defaultAccountSettings;
- (void)delayedSaveSettings;
- (id)description;
- (void)disableAccount:(id)arg1;
- (bool)disallowDeactivation;
- (void)enableAccount:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)internalName;
- (bool)isDiscontinued;
- (bool)isIDSBased;
- (bool)isLegacy;
- (void)loadServiceBundle;
- (id)mainService;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (id)oldInternalName;
- (void)purgeMemoryCaches;
- (void)saveSettings;
- (bool)serviceChatsIgnoreLoginStatus;
- (id)serviceDefaults;
- (id)serviceDefaultsForSetup;
- (id)serviceDomain;
- (bool)serviceIgnoresNetworkConnectivity;
- (bool)serviceNeedsLogin;
- (bool)serviceNeedsPassword;
- (id)serviceProperties;
- (long long)serviceProtocolVersion;
- (bool)serviceRequiresHost;
- (bool)serviceRequiresSingleAccount;
- (bool)serviceShouldBeAlwaysLoggedIn;
- (bool)serviceSupportsOneSessionForAllAccounts;
- (bool)serviceSupportsPresence;
- (bool)serviceSupportsRegistration;
- (bool)serviceWantsNullHostReachability;
- (Class)sessionClass;
- (void)setServiceProperties:(id)arg1;
- (bool)shouldCreateActiveAccounts;
- (bool)shouldForceAccountsActive;
- (bool)shouldForceAccountsConnected;
- (bool)supportsDatabase;
- (void)synchronizeServiceDefaults;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (void)unloadServiceBundle;

@end
