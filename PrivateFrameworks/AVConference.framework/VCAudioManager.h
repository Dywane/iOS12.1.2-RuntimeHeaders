/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource, VCAudioSessionDelegate> {
    NSMutableArray * _allClients;
    struct opaqueVCAudioLimiter { } * _audioLimiter;
    VCAudioSessionMediaProperties * _currentAudioSessionMediaProperties;
    VCAudioUnitProperties * _currentAudioUnitProperties;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct AudioEventQueue_t { } * _eventQueue;
    struct tagHANDLE { int x1; } * _hAUIO;
    AVAudioDevice * _inputDevice;
    bool  _isGKVoiceChat;
    bool  _isInDaemon;
    bool  _isInputMeteringEnabled;
    bool  _isMicrophoneMuted;
    bool  _isOutputMeteringEnabled;
    bool  _isSpeakerPhoneEnabled;
    bool  _isSuspended;
    AVAudioDevice * _outputDevice;
    NSMutableSet * _sinkClients;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
    }  _sinkData;
    struct AudioEventQueue_t { } * _sinkEventQueue;
    struct opaqueVCAudioBufferList { } * _sourceBuffer;
    NSMutableSet * _sourceClients;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
    }  _sourceData;
    struct AudioEventQueue_t { } * _sourceEventQueue;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
    NSMutableArray * _suspendedClients;
    NSDictionary * _vpOperatingModeToAudioSessionMediaFormatMapping;
}

@property (nonatomic, retain) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties;
@property (nonatomic, retain) VCAudioUnitProperties *currentAudioUnitProperties;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isInDaemon;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (getter=isSpeakerPhoneEnabled, nonatomic) bool speakerPhoneEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_cleanupDeadClients;
- (void)_resumeSuspendedClients;
- (void)_suspendAllClients;
- (bool)addClient:(id)arg1;
- (void)addSinkClient:(id)arg1;
- (void)addSourceClient:(id)arg1;
- (void)computeHardwarePreferences;
- (id)currentAudioSessionMediaProperties;
- (id)currentAudioUnitProperties;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (void)dealloc;
- (void)didSessionEnd;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didSessionStop;
- (void)flushEventQueue:(struct AudioEventQueue_t { }*)arg1;
- (bool)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned int)arg2;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned int*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg6;
- (id)init;
- (bool)isGKVoiceChat;
- (bool)isInDaemon;
- (bool)isMicrophoneMuted;
- (bool)isSpeakerPhoneEnabled;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t { }*)arg1 clientList:(id)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (bool)removeClient:(id)arg1;
- (void)removeSinkClient:(id)arg1;
- (void)removeSourceClient:(id)arg1;
- (void)resetAUIOWithProperties:(id)arg1;
- (void)resetAudioSessionWithProperties:(id)arg1;
- (void)resetAudioTimestamps;
- (void)setCurrentAudioSessionMediaProperties:(id)arg1;
- (void)setCurrentAudioUnitProperties:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setInputMetering;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsInDaemon:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMetering;
- (void)setSpeakerPhoneEnabled:(bool)arg1;
- (void)setupIODevicesForAUIO:(struct tagHANDLE { int x1; }*)arg1;
- (bool)shouldResetAudioSessionWithProperties:(id)arg1;
- (bool)shouldResetAudioUnitWithProperties:(id)arg1;
- (bool)startAUIOWithProperties:(id)arg1;
- (bool)startAudioSessionWithProperties:(id)arg1;
- (void)startClient:(id)arg1;
- (bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (void)stateRunningToSessionStarted;
- (bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (void)stopAUIO;
- (void)stopAudioSession;
- (void)stopClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (bool)updateStateWithAudioIOClient:(id)arg1;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;

@end
