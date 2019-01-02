/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSEngine : NSObject <NPHSOSPersistentTimerLocationManagerDelegate, NSXPCListenerDelegate, SOSInternalServerProtocol, SOSServerProtocol> {
    NSMutableArray * _clientConnections;
    SOSContactsManager * _contactsManager;
    FKFriendsManager * _friendsManager;
    CLLocation * _lastLocationSent;
    _MKLocationShifter * _locationShifter;
    long long  _notifyContactsReason;
    NPHSOSPersistentTimerLocationManager * _sosPersistentTimerLocationManager;
    NSDate * _timeLastMessageSent;
    NSDate * _timeToStopSendingMessages;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FKFriendsManager *friendsManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKLocationShifter *locationShifter;
@property (readonly) Class superclass;

+ (id)GPSCoordinatesURLForLocation:(id)arg1;
+ (bool)_isBasebandDevice;
+ (void)_sendCKMessage:(id)arg1 failureBlock:(id /* block */)arg2;
+ (void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(bool)arg4 failureBlock:(id /* block */)arg5;
+ (void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(bool)arg3 Reason:(long long)arg4;
+ (void)_sendSMSMessage:(id)arg1 MMSMessage:(id)arg2 location:(id)arg3 recipients:(id)arg4 failureBlock:(id /* block */)arg5;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(bool)arg2 withMMS:(bool)arg3 callbackNumber:(id)arg4 Reason:(long long)arg5;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(bool)arg2 withMMS:(bool)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6 Reason:(long long)arg7;
+ (id)additionalTextForCallbackNumber:(id)arg1;
+ (id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3;
+ (bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (id)firstNameForContact:(id)arg1;
+ (id)fullNameForContact:(id)arg1;
+ (id)locationShifter;
+ (id)meContact;
+ (void)preloadContactStoreIfNecessary;
+ (id)sharedInstance;
+ (void)shiftedLocationWithLocation:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)SOSSendingLocationUpdateChanged:(id)arg1;
- (id)clientConnections;
- (void)contactStoreDidChange;
- (id)contactsManager;
- (long long)currentSOSInitiationState;
- (void)dealloc;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(id /* block */)arg1;
- (id)friendsManager;
- (id)init;
- (bool)isSendingLocationUpdate;
- (void)isSendingLocationUpdate:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)locationIsValidToSend:(id)arg1;
- (id)locationShifter;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)arg1;
- (bool)notificationEnabledAndContactsExist;
- (void)setClientConnections:(id)arg1;
- (void)setFriendsManager:(id)arg1;
- (void)setLocationShifter:(id)arg1;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2;
- (void)start;
- (void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(id /* block */)arg2;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)stopSendingLocationUpdate;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)willStartSendingLocationUpdate;

@end
