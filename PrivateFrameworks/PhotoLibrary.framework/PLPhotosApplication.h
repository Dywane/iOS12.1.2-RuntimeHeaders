/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {
    NSString * _currentTestName;
    NSDictionary * _currentTestOptions;
    BLActivityAlert * _iPhotoMigrationActivityAlert;
    bool  _isOnWifi;
    bool  _isReachable;
    NSSet * _notificationSuppressionContexts;
    int  _observeForRechabilityChanges;
    int  _photoStreamActivityToken;
    bool  _photoStreamIsBusy;
    bool  _receivingRemoteControlEvents;
    int  _sharedPhotoStreamActivityToken;
    int  _sharedPhotoStreamInvitationFailureToken;
    bool  _sharedPhotoStreamIsBusy;
    UIWindow * _window;
}

@property (nonatomic, retain) NSString *currentTestName;
@property (nonatomic, retain) NSDictionary *currentTestOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLActivityAlert *iPhotoMigrationActivityAlert;
@property (nonatomic, readonly) bool isOnWifi;
@property (nonatomic, readonly) bool isReachable;
@property (nonatomic, copy) NSSet *notificationSuppressionContexts;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_cleanUpOutboundSharingAssets;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_setImageOptions;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updateSuspensionSettings;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)currentTestName;
- (id)currentTestOptions;
- (void)dealloc;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void*)getSharedAddressBook;
- (id)getSharedContactStore;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long long)arg2;
- (id)iPhotoMigrationActivityAlert;
- (bool)isOnWifi;
- (bool)isReachable;
- (id)mainWindow;
- (id)notificationSuppressionContexts;
- (void)photosPreferencesChanged;
- (id)rootViewController;
- (void)setCurrentTestName:(id)arg1;
- (void)setCurrentTestOptions:(id)arg1;
- (void)setIPhotoMigrationActivityAlert:(id)arg1;
- (void)setNotificationSuppressionContexts:(id)arg1;
- (void)setReceivingRemoteControlEvents:(bool)arg1;
- (void)sharedFinishedLaunching:(bool)arg1;
- (bool)shouldAllowSBAlertSupression;
- (bool)useCompatibleSuspensionAnimation;
- (bool)visitViewControllersWithBlock:(id /* block */)arg1;

@end
