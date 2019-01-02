/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVSecondScreenConnection : NSObject {
    bool  _active;
    AVSecondScreen * _connectedSecondScreen;
    UIView * _contentView;
    AVSecondScreenDebugAssistant * _debugAssistant;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumVideoResolution;
    AVObservationController * _observationController;
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    bool  _playing;
    AVDisplayCriteria * _preferredDisplayCriteria;
    bool  _ready;
    bool  _readyToConnect;
    bool  _requiresTVOutScreen;
    AVSecondScreenViewController * _secondScreenViewController;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) AVSecondScreen *connectedSecondScreen;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) AVSecondScreenDebugAssistant *debugAssistant;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumVideoResolution;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic) AVPlayerLayer *playerLayer;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) AVDisplayCriteria *preferredDisplayCriteria;
@property (getter=isReady, nonatomic) bool ready;
@property (getter=isReadyToConnect, nonatomic, readonly) bool readyToConnect;
@property (nonatomic) bool requiresTVOutScreen;
@property (nonatomic, retain) AVSecondScreenViewController *secondScreenViewController;

- (void).cxx_destruct;
- (bool)_allowsNonAirPlayExternalPlayback;
- (bool)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;
- (bool)_determineIsReadyToConnect;
- (void)_loadSecondScreenViewControllerIfNeeded;
- (void)_postNotification:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)_startObservingPlayer;
- (void)_updatePreferredDisplayCriteria;
- (void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)arg1;
- (void)connectWithScreen:(id)arg1 active:(bool)arg2;
- (id)connectedSecondScreen;
- (id)contentView;
- (id)contentViewController;
- (void)dealloc;
- (id)debugAssistant;
- (id)initWithPlayer:(id)arg1 playerLayer:(id)arg2;
- (bool)isActive;
- (bool)isPlaying;
- (bool)isReady;
- (bool)isReadyToConnect;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)observationController;
- (id)player;
- (id)playerLayer;
- (id)preferredDisplayCriteria;
- (bool)requiresTVOutScreen;
- (id)secondScreenViewController;
- (void)setActive:(bool)arg1;
- (void)setConnectedSecondScreen:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setMaximumVideoResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPreferredDisplayCriteria:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)setReadyToConnect:(bool)arg1;
- (void)setRequiresTVOutScreen:(bool)arg1;
- (void)setSecondScreenViewController:(id)arg1;
- (void)startUpdates;

@end
