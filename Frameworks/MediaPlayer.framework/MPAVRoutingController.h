/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingController : NSObject {
    NSMutableArray * _asyncFetchingCompletionHandlers;
    bool  _asyncFetchingRoutes;
    NSArray * _cachedPickedRoutes;
    NSArray * _cachedRoutes;
    NSString * _category;
    MPAVRoutingDataSource * _dataSource;
    <MPAVRoutingControllerDelegate> * _delegate;
    int  _deviceAvailabilityNotifyToken;
    bool  _deviceAvailabilityOverrideState;
    long long  _discoveryMode;
    long long  _externalScreenType;
    bool  _fetchAvailableRoutesSynchronously;
    bool  _hasExternalScreenType;
    MPAVRoute * _legacyCachedRoute;
    NSString * _name;
    <MPAVOutputDevicePlaybackDataSource> * _playbackDataSource;
    long long  _routeTypes;
    MPAVRoutingControllerSelectionQueue * _routingControllerSelectionQueue;
    bool  _scheduledSendDelegateRoutesChanged;
    long long  _volumeControlStateForPickedRoute;
}

@property (nonatomic, readonly, copy) NSArray *availableRoutes;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) MPAVRoutingDataSource *dataSource;
@property (nonatomic) <MPAVRoutingControllerDelegate> *delegate;
@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly) long long externalScreenType;
@property (nonatomic) bool fetchAvailableRoutesSynchronously;
@property (nonatomic, readonly) bool hasPendingPickedRoutes;
@property (nonatomic, retain) MPAVRoute *legacyCachedRoute;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;
@property (nonatomic, readonly) NSSet *pendingPickedRoutes;
@property (nonatomic, readonly) MPAVRoute *pickedRoute;
@property (nonatomic, readonly) NSArray *pickedRoutes;
@property (nonatomic) <MPAVOutputDevicePlaybackDataSource> *playbackDataSource;
@property (nonatomic) long long routeTypes;
@property (nonatomic, readonly) bool supportsMultipleSelection;
@property (nonatomic, readonly) bool volumeControlIsAvailable;

+ (id)_currentDeviceRoutingIconImage;
+ (id)_currentDeviceRoutingIconImageName;
+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(id /* block */)arg3;
+ (id)_iconImageForRoute:(id)arg1;
+ (id)_sharedSerialQueue;
+ (void)getActiveRouteWithCompletion:(id /* block */)arg1;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(id /* block */)arg2;
+ (void)setActiveRoute:(id)arg1 completion:(id /* block */)arg2;
+ (id)systemRoute;
+ (id)systemRouteWithContextUID:(id)arg1;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_clearLegacyCachedRoute;
- (bool)_deviceAvailabilityOverrideState;
- (long long)_externalScreenType:(bool*)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (void)_onQueue_clearCachedRoutes;
- (bool)_pickRoute:(id)arg1 completion:(id /* block */)arg2;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (id)_pickedRoutesInArray:(id)arg1;
- (void)_promptForHijackIfNeeded:(id)arg1 handler:(id /* block */)arg2;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (void)_unregisterNotifications;
- (void)_updateCachedRoutes;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (long long)_volumeControlStateForPickedRoute;
- (bool)addPickedRoute:(id)arg1;
- (bool)addPickedRoute:(id)arg1 completion:(id /* block */)arg2;
- (bool)airtunesRouteIsPicked;
- (id)availableRoutes;
- (id)category;
- (void)clearCachedRoutes;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)discoveryMode;
- (long long)externalScreenType;
- (bool)fetchAvailableRoutesSynchronously;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (bool)handsetRouteIsPicked;
- (bool)hasPendingPickedRoutes;
- (id)init;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)legacyCachedRoute;
- (id)name;
- (id)pendingPickedRoute;
- (id)pendingPickedRoutes;
- (bool)pickBestDeviceRoute;
- (bool)pickHandsetRoute;
- (bool)pickRoute:(id)arg1;
- (bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (bool)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (bool)pickSpeakerRoute;
- (id)pickedRoute;
- (id)pickedRoutes;
- (id)playbackDataSource;
- (bool)receiverRouteIsPicked;
- (bool)removePickedRoute:(id)arg1;
- (bool)removePickedRoute:(id)arg1 completion:(id /* block */)arg2;
- (bool)routeIsLeaderOfEndpoint:(id)arg1;
- (bool)routeIsPendingPick:(id)arg1;
- (bool)routeOtherThanHandsetAndSpeakerAvailable;
- (bool)routeOtherThanHandsetAvailable;
- (long long)routeTypes;
- (void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(id /* block */)arg3;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setFetchAvailableRoutesSynchronously:(bool)arg1;
- (void)setLegacyCachedRoute:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlaybackDataSource:(id)arg1;
- (void)setRouteTypes:(long long)arg1;
- (bool)speakerRouteIsPicked;
- (bool)supportsMultipleSelection;
- (void)unpickAirPlayScreenRouteWithCompletion:(id /* block */)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (bool)volumeControlIsAvailable;
- (bool)wirelessDisplayRouteIsPicked;
- (bool)wirelessDisplayRoutesAvailable;

@end
