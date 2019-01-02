/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate> {
    NSNumber * _assetSyncLimit;
    unsigned long long  _assetSyncLimitType;
    NSNumber * _assetSyncPlaylistPersistentID;
    unsigned long long  _assetSyncType;
    NPSDomainAccessor * _domainAccessor;
    NSObject<OS_dispatch_queue> * _domainAccessorQueue;
    NSNumber * _lastFullySentAssetSyncPlaylistPersistentID;
    NSNumber * _lastFullySentAssetSyncPlaylistVersion;
    NMSNotificationDispatcher * _libraryRecoNotifier;
    NSArray * _listenNowPodcastIdentifiers;
    NSDate * _modificationDate;
    NMSNotificationDispatcher * _musicPinningSelectionsNotifier;
    bool  _needsSync;
    NSDictionary * _notifiersDict;
    NSString * _pairingID;
    NMSNotificationDispatcher * _podcastsPinningSelectionsNotifier;
    NMSNotificationDispatcher * _podcastsSizeInfoNotifier;
    NMSNotificationDispatcher * _podcastsSubscriptionMetadataNotifier;
    NMSNotificationDispatcher * _recoSelectionsNotifier;
    NMSNotificationDispatcher * _settingsNotifier;
    NMSNotificationDispatcher * _storeRecoNotifier;
    NMSNotificationDispatcher * _syncStateNotifier;
}

@property (nonatomic) bool allowOffChargerAssetSync;
@property (nonatomic, copy) NSNumber *assetSyncLimit;
@property (nonatomic) unsigned long long assetSyncLimitType;
@property (nonatomic, retain) MPMediaPlaylist *assetSyncPlaylist;
@property (setter=setAssetSyncPlaylistPersistentID:, nonatomic, retain) NSNumber *assetSyncPlaylistPersistentID;
@property (nonatomic) unsigned long long assetSyncType;
@property (nonatomic, copy) NSData *cachedRecommendationsData;
@property (nonatomic, copy) NSDictionary *clientPinningSettingsToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *gizmoPodcastDownloadOrders;
@property (nonatomic, copy) NSDictionary *gizmoPodcastEpisodeLimits;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistPersistentID;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistVersion;
@property (nonatomic, copy) NSDate *lastMusicAppActiveDate;
@property (nonatomic, copy) NSDate *lastSiriFaceActiveDate;
@property (nonatomic, copy) NSArray *libraryRecommendationAlbums;
@property (nonatomic, copy) NSArray *libraryRecommendationPlaylists;
@property (nonatomic, copy) NSArray *listenNowPodcastEpisodes;
@property (nonatomic, copy) NSArray *listenNowPodcastFeedURLs;
@property (nonatomic, copy) NSArray *listenNowPodcastIdentifiers;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, copy) NSDictionary *musicRecommendationDict;
@property (nonatomic, copy) NSArray *pinnedAlbums;
@property (nonatomic, copy) NSArray *pinnedPlaylists;
@property (nonatomic, copy) NSArray *pinnedPodcastFeedURLs;
@property (nonatomic, copy) NSArray *pinnedPodcastIdentifiers;
@property (nonatomic, copy) NSSet *pinnedPodcasts;
@property (nonatomic) bool pinnedPodcastsAreUserSet;
@property (nonatomic, copy) NSNumber *podcastsAssetSyncLimit;
@property (nonatomic, copy) NSDate *recommendationExpirationDate;
@property (nonatomic) bool shouldUseLibraryRecommendations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *syncStateDict;
@property (nonatomic, retain) NSNumber *workoutPlaylistID;

+ (id)sharedDefaults;

- (void).cxx_destruct;
- (void)_addCapability:(id)arg1 forCapabilitiesKey:(id)arg2;
- (void)_addPhoneCapability:(id)arg1;
- (void)_addWatchCapability:(id)arg1;
- (id)_associatedObject;
- (bool)_boolForKey:(id)arg1 domain:(id)arg2 defaultValue:(bool)arg3;
- (void)_clearAssetSyncPlaylistDependentDefaults;
- (id)_companionSidePerDeviceDefaults;
- (bool)_continueUsingMusicRecommendationKey;
- (id)_defaultPlaylistPersistentID;
- (bool)_deviceHasCapability:(id)arg1 forCapabilitiesKey:(id)arg2;
- (void)_migrateDataIfNecessary;
- (void)_notifyChangesForKey:(id)arg1;
- (id)_objectForKey:(id)arg1 domain:(id)arg2;
- (void)_perDeviceSettingsDidResetNotification:(id)arg1;
- (bool)_phoneHasCapability:(id)arg1;
- (id)_playlistPersistentIDForPlaylistName:(id)arg1;
- (void)_preSeed2_setMusicRecommendationDict:(id)arg1;
- (void)_reloadPropertiesFromDefaults;
- (void)_reloadPropertiesFromDefaultsOnMainThread;
- (void)_removeObjectForKey:(id)arg1 domain:(id)arg2;
- (void)_removeOldMusicRecommendationsInfoIfPossible;
- (void)_resetDomainAccessor;
- (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)_setLegacyObject:(id)arg1 forKey:(id)arg2 ifRemoteDeviceMissingCapability:(id)arg3;
- (void)_setNeedsSynchronize;
- (void)_setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)_setupNotifiers;
- (unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)arg1;
- (bool)_watchHasCapability:(id)arg1;
- (void)_writePropertiesToDefaults;
- (bool)allowOffChargerAssetSync;
- (id)assetSyncLimit;
- (unsigned long long)assetSyncLimitType;
- (id)assetSyncPlaylist;
- (id)assetSyncPlaylistPersistentID;
- (unsigned long long)assetSyncType;
- (void)beginBatchUpdates;
- (id)cachedRecommendationsData;
- (void)clearPodcastsDefaults;
- (id)clientPinningSettingsToken;
- (id)description;
- (void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg1;
- (void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg1;
- (void)endBatchUpdates;
- (id)gizmoPodcastDownloadOrders;
- (id)gizmoPodcastEpisodeLimits;
- (id)init;
- (id)lastFullySentAssetSyncPlaylistPersistentID;
- (id)lastFullySentAssetSyncPlaylistVersion;
- (id)lastMusicAppActiveDate;
- (id)lastSiriFaceActiveDate;
- (id)libraryRecommendationAlbums;
- (id)libraryRecommendationPlaylists;
- (id)listenNowPodcastEpisodes;
- (id)listenNowPodcastFeedURLs;
- (id)listenNowPodcastIdentifiers;
- (id)modificationDate;
- (id)musicRecommendationDict;
- (id)pinnedAlbums;
- (id)pinnedPlaylists;
- (id)pinnedPodcastFeedURLs;
- (id)pinnedPodcastIdentifiers;
- (id)pinnedPodcasts;
- (bool)pinnedPodcastsAreUserSet;
- (id)podcastSizeEstimationData;
- (id)podcastsAssetSyncLimit;
- (id)recommendationExpirationDate;
- (void)setAllowOffChargerAssetSync:(bool)arg1;
- (void)setAssetSyncLimit:(id)arg1;
- (void)setAssetSyncLimitType:(unsigned long long)arg1;
- (void)setAssetSyncPlaylist:(id)arg1;
- (void)setAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setAssetSyncType:(unsigned long long)arg1;
- (void)setCachedRecommendationsData:(id)arg1;
- (void)setClientPinningSettingsToken:(id)arg1;
- (void)setGizmoPodcastDownloadOrders:(id)arg1;
- (void)setGizmoPodcastEpisodeLimits:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistVersion:(id)arg1;
- (void)setLastMusicAppActiveDate:(id)arg1;
- (void)setLastSiriFaceActiveDate:(id)arg1;
- (void)setLibraryRecommendationAlbums:(id)arg1;
- (void)setLibraryRecommendationPlaylists:(id)arg1;
- (void)setListenNowPodcastEpisodes:(id)arg1;
- (void)setListenNowPodcastFeedURLs:(id)arg1;
- (void)setListenNowPodcastIdentifiers:(id)arg1;
- (void)setMusicRecommendationDict:(id)arg1;
- (void)setPinnedAlbums:(id)arg1;
- (void)setPinnedPlaylists:(id)arg1;
- (void)setPinnedPodcastFeedURLs:(id)arg1;
- (void)setPinnedPodcastIdentifiers:(id)arg1;
- (void)setPinnedPodcasts:(id)arg1;
- (void)setPinnedPodcastsAreUserSet:(bool)arg1;
- (void)setPodcastSizeEstimationData:(id)arg1;
- (void)setPodcastsAssetSyncLimit:(id)arg1;
- (void)setRecommendationExpirationDate:(id)arg1;
- (void)setShouldUseLibraryRecommendations:(bool)arg1;
- (void)setWorkoutPlaylistID:(id)arg1;
- (bool)shouldUseLibraryRecommendations;
- (id)syncStateDict;
- (id)workoutPlaylistID;

@end
