/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADCoreSettings : ADSingleton {
    double  _NSURLConnectionTimeout;
    double  _NSURLTransactionTimeout;
    double  _adServerTimeoutInterval;
    NSString * _bundleIdentifier;
    int  _connectionType;
    NSString * _currentCarrierMCC;
    NSString * _currentCarrierMNC;
    NSURL * _defaultConfigurationServerURL;
    NSURL * _defaultServerURL;
    NSString * _deviceModel;
    bool  _educationModeEnabled;
    bool  _hasDeterminedRoamingStatus;
    NSString * _homeCarrierMCC;
    NSString * _homeCarrierMNC;
    NSString * _iTunesStorefront;
    bool  _internationalRoaming;
    double  _jingleTimeoutInterval;
    NSString * _osVersionAndBuild;
    int  _runState;
    NSString * _storefrontLocalizationLanguage;
    float  _timezone;
}

@property (nonatomic, readonly) NSUUID *IDFA;
@property (nonatomic) double NSURLConnectionTimeout;
@property (nonatomic) double NSURLTransactionTimeout;
@property (nonatomic) double adServerTimeoutInterval;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) int connectionType;
@property (nonatomic, copy) NSString *currentCarrierMCC;
@property (nonatomic, copy) NSString *currentCarrierMNC;
@property (nonatomic, readonly) NSString *customJinglePayload;
@property (nonatomic, retain) NSURL *defaultConfigurationServerURL;
@property (nonatomic, retain) NSURL *defaultServerURL;
@property (nonatomic, readonly) bool deviceLimitsAdTracking;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, readonly) bool educationModeEnabled;
@property (nonatomic) bool hasDeterminedRoamingStatus;
@property (nonatomic, copy) NSString *homeCarrierMCC;
@property (nonatomic, copy) NSString *homeCarrierMNC;
@property (nonatomic, readonly) ACAccount *iCloudAccount;
@property (nonatomic, readonly) NSString *iCloudAccountIdentifier;
@property (nonatomic, readonly) NSString *iCloudDSID;
@property (nonatomic, readonly) NSString *iTunesAccountDSID;
@property (nonatomic, readonly) ACAccount *iTunesStoreAccount;
@property (nonatomic, retain) NSString *iTunesStorefront;
@property (nonatomic) bool internationalRoaming;
@property (nonatomic) bool isLATEnabled;
@property (nonatomic, readonly) bool isManagedAppleID;
@property (nonatomic, readonly) bool isManagediCloudAccount;
@property (nonatomic, readonly) bool isManagediTunesAccount;
@property (nonatomic) double jingleTimeoutInterval;
@property (nonatomic, readonly) bool limitAdTrackingRestrictionEnabledBySpringboard;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic) int maxSegmentSendInterval;
@property (nonatomic, retain) NSString *osVersionAndBuild;
@property (nonatomic) int runState;
@property (nonatomic) int segmentRetrievalInterval;
@property (nonatomic, retain) NSString *storefrontLocalizationLanguage;
@property (nonatomic) float timezone;

+ (bool)educationModeEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)IDFA;
- (double)NSURLConnectionTimeout;
- (double)NSURLTransactionTimeout;
- (double)adServerTimeoutInterval;
- (id)bundleIdentifier;
- (void)clearAdvertisingIdentifier;
- (int)connectionType;
- (id)currentCarrierMCC;
- (id)currentCarrierMNC;
- (id)customJinglePayload;
- (id)defaultConfigurationServerURL;
- (id)defaultServerURL;
- (id)deviceDescription;
- (bool)deviceLimitsAdTracking;
- (id)deviceModel;
- (int)deviceRunStateForBundleIdentifier:(id)arg1;
- (bool)deviceUnlockedOnce;
- (bool)educationModeEnabled;
- (void)expire;
- (void)gatherTelephonyData;
- (bool)hasDeterminedRoamingStatus;
- (id)homeCarrierMCC;
- (id)homeCarrierMNC;
- (id)iCloudAccount;
- (id)iCloudAccountIdentifier;
- (id)iCloudDSID;
- (id)iTunesAccountDSID;
- (id)iTunesStoreAccount;
- (id)iTunesStorefront;
- (id)init;
- (bool)internationalRoaming;
- (bool)isLATEnabled;
- (bool)isLATRestrictedByProfile;
- (bool)isManagedAppleID;
- (bool)isManagediCloudAccount;
- (bool)isManagediTunesAccount;
- (double)jingleTimeoutInterval;
- (bool)limitAdTrackingRestrictionEnabledBySpringboard;
- (id)localeIdentifier;
- (int)maxSegmentSendInterval;
- (id)osVersionAndBuild;
- (bool)purpleBuddyWillRun;
- (void)reloadStorefront:(id /* block */)arg1;
- (int)runState;
- (int)segmentRetrievalInterval;
- (void)setAdServerTimeoutInterval:(double)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setCurrentCarrierMCC:(id)arg1;
- (void)setCurrentCarrierMNC:(id)arg1;
- (void)setDefaultConfigurationServerURL:(id)arg1;
- (void)setDefaultServerURL:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setHasDeterminedRoamingStatus:(bool)arg1;
- (void)setHomeCarrierMCC:(id)arg1;
- (void)setHomeCarrierMNC:(id)arg1;
- (void)setITunesStorefront:(id)arg1;
- (void)setInternationalRoaming:(bool)arg1;
- (void)setIsLATEnabled:(bool)arg1;
- (void)setJingleTimeoutInterval:(double)arg1;
- (void)setMaxSegmentSendInterval:(int)arg1;
- (void)setNSURLConnectionTimeout:(double)arg1;
- (void)setNSURLTransactionTimeout:(double)arg1;
- (void)setOsVersionAndBuild:(id)arg1;
- (void)setRunState:(int)arg1;
- (void)setSegmentRetrievalInterval:(int)arg1;
- (void)setStorefrontLocalizationLanguage:(id)arg1;
- (void)setTimezone:(float)arg1;
- (id)storefrontLocalizationLanguage;
- (float)timezone;

@end
