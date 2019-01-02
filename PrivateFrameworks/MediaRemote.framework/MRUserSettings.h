/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUserSettings : NSObject {
    bool  _externalDevicePairingAllowed;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) double airPlayOutputContextInitTimeoutDuration;
@property (nonatomic, readonly) double bluetoothDeviceResumeDuration;
@property (nonatomic, readonly) double broadcastCommandWaitDuration;
@property (nonatomic, readonly) bool computeNowPlayingApplication;
@property (nonatomic, retain) NSArray *connectedClientPIDs;
@property (nonatomic, readonly) double externalDeviceDisconnectSleepDuration;
@property (nonatomic, readonly) double externalDeviceDisconnectWaitDuration;
@property (nonatomic, readonly) double externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property (nonatomic, readonly) double externalDeviceNowPlayingInfoCoalesceDuration;
@property (getter=isExternalDevicePairingAllowed, nonatomic) bool externalDevicePairingAllowed;
@property (nonatomic, readonly) double externalDeviceSleepAssertionOnClientConnectDuration;
@property (nonatomic, readonly) long long externalDeviceSocketQOSLevel;
@property (nonatomic, readonly) double externalDeviceTimeoutDuration;
@property (nonatomic, readonly) bool hasExternalDeviceSocketQOSLevelSet;
@property (nonatomic, readonly) long long maxTransactionMemorySize;
@property (nonatomic, readonly) double nowPlayingApplicationTimeout;
@property (nonatomic, readonly) double pauseWhileOnLockScreenTimeout;
@property (nonatomic, readonly) bool shouldInitializeGenericBonjourService;
@property (nonatomic, readonly) bool shouldInitializeTelevisionBonjourService;
@property (nonatomic, readonly) bool shouldLogArtwork;
@property (nonatomic, readonly) bool shouldLogPairingSetupCode;
@property (nonatomic, readonly) bool takelockScreenAssertion;
@property (nonatomic, readonly) double transactionWaitDurationOnNetworkSend;
@property (nonatomic, readonly) double transactionWaitDurationOnOutOfMemory;
@property (nonatomic, readonly) double transactionWaitDurationOnXpcSend;
@property (nonatomic, readonly) bool useDebugAVRouteWithoutVolumeControl;
@property (nonatomic, readonly) bool useExternalDeviceSystemPairing;
@property (nonatomic, readonly) bool useGenericTransportForHostedEndpoints;
@property (nonatomic, readonly) bool useNoDelayOptionForExternalDeviceSockets;
@property (nonatomic, readonly) bool usePeerToPeerExternalDeviceConnections;
@property (nonatomic, readonly) bool useSystemAudioContextForAirPlayTransport;

+ (id)currentSettings;

- (void).cxx_destruct;
- (bool)_boolValueForKey:(id)arg1 usingDefaultValue:(bool)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2;
- (long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2;
- (void)_removeValueForKey:(id)arg1;
- (double)airPlayOutputContextInitTimeoutDuration;
- (double)bluetoothDeviceResumeDuration;
- (double)broadcastCommandWaitDuration;
- (bool)computeNowPlayingApplication;
- (id)connectedClientPIDs;
- (double)externalDeviceDisconnectSleepDuration;
- (double)externalDeviceDisconnectWaitDuration;
- (double)externalDeviceNowPlayingInfoArtworkCoalesceDuration;
- (double)externalDeviceNowPlayingInfoCoalesceDuration;
- (double)externalDeviceSleepAssertionOnClientConnectDuration;
- (long long)externalDeviceSocketQOSLevel;
- (double)externalDeviceTimeoutDuration;
- (bool)hasExternalDeviceSocketQOSLevelSet;
- (id)init;
- (bool)isExternalDevicePairingAllowed;
- (long long)maxTransactionMemorySize;
- (double)nowPlayingApplicationTimeout;
- (double)pauseWhileOnLockScreenTimeout;
- (void)setConnectedClientPIDs:(id)arg1;
- (void)setExternalDevicePairingAllowed:(bool)arg1;
- (bool)shouldInitializeGenericBonjourService;
- (bool)shouldInitializeTelevisionBonjourService;
- (bool)shouldLogArtwork;
- (bool)shouldLogPairingSetupCode;
- (bool)takelockScreenAssertion;
- (double)transactionWaitDurationOnNetworkSend;
- (double)transactionWaitDurationOnOutOfMemory;
- (double)transactionWaitDurationOnXpcSend;
- (bool)useDebugAVRouteWithoutVolumeControl;
- (bool)useExternalDeviceSystemPairing;
- (bool)useGenericTransportForHostedEndpoints;
- (bool)useNoDelayOptionForExternalDeviceSockets;
- (bool)usePeerToPeerExternalDeviceConnections;
- (bool)useSystemAudioContextForAirPlayTransport;

@end
