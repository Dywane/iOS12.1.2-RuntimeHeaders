/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate> {
    struct opaqueCMSession { } * _CMSession;
    struct __CFString { } * _CMSessionAudioMode;
    struct opaqueCMSimpleQueue { } * _activeBuffersQueue;
    long long  _auRenderCount;
    unsigned int  _auSubType;
    int  _audioLevelUnits;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _clientAuditTokenIsValid;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    NSObject<OS_dispatch_queue> * _cmSessionOrientationLockQueue;
    bool  _configuresSession;
    struct TimestampedAudioBufferList { 
        struct __CFAllocator {} *allocator; 
        long long auRenderCount; 
        unsigned int dataBytesCapacity; 
        unsigned int numFrames; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct AudioBufferList {} *abl; 
        unsigned int numPrependedSilenceFrames; 
    }  _currentSilenceBuffer;
    bool  _didBeginInterruption;
    bool  _doEndInterruption;
    struct opaqueCMFormatDescription { } * _formatDescription;
    NSObject<OS_dispatch_queue> * _generateSamplesDispatchQueue;
    struct opaqueCMSimpleQueue { } * _inactiveBuffersQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ioprocTimeStampDeltaLimit;
    bool  _isAppAudioSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latencyOffset;
    bool  _levelMeteringEnabled;
    unsigned long long  _nextExpectedHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextExpectedSampleTime;
    NSObject<OS_dispatch_queue> * _preparedToRecordHandlerCallbackQueue;
    unsigned int  _prevNumFrames;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevPTS;
    unsigned int  _pullDuration;
    struct opaqueCMSimpleQueue { } * _renderProcErrorQueue;
    bool  _selectsMicForFrontCamera;
    long long  _silenceFramesGeneratedSinceLastAURenderProc;
    NSObject<OS_dispatch_source> * _silenceTimer;
    bool  _streamInterrupted;
    bool  _streamStarted;
    bool  _useDecoupledIO;
}

@property (nonatomic, readonly) NSArray *audioLevels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didBeginInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (readonly) Class superclass;

+ (double)_desiredSampleRate;
+ (id)audioSourceNodeWithAttributes:(id)arg1 clock:(struct OpaqueCMClock { }*)arg2 CMSession:(struct opaqueCMSession { }*)arg3 configureSession:(bool)arg4 doEndInterruption:(bool)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8;
+ (void)initialize;

- (struct __CFString { }*)CMSessionAudioMode;
- (unsigned int)_audioCombinedLatency;
- (bool)_cmSessionBooleanPropertyIsTrue:(struct __CFString { }*)arg1;
- (int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(bool*)arg2;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForTimestampedAudioBufferList:(struct TimestampedAudioBufferList { struct __CFAllocator {} *x1; long long x2; unsigned int x3; unsigned int x4; struct { long long x_5_1_1; int x_5_1_2; unsigned int x_5_1_3; long long x_5_1_4; } x5; struct AudioBufferList {} *x6; unsigned int x7; }*)arg1;
- (int)_deactivateCMSessionIfNecessary:(bool*)arg1;
- (int)_generatePullBuffers;
- (void)_generateSamples;
- (void)_generateSilenceIfNeeded;
- (int)_getAudioDevicePullFrames:(unsigned int*)arg1;
- (id)_initWithAttributes:(id)arg1 clock:(struct OpaqueCMClock { }*)arg2 CMSession:(struct opaqueCMSession { }*)arg3 configureSession:(bool)arg4 doEndInterruption:(bool)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8;
- (int)_selectMicForAudioRoute:(id)arg1;
- (int)_setCMSessionAudioModeAndSelectMic:(bool*)arg1;
- (int)_setCMSessionPropertyWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (int)_setupAudioUnit;
- (void)_setupPrepareToRecordStateWithFlags:(unsigned int)arg1;
- (int)_updatePullFormatDescription;
- (id)audioLevels;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (bool)didBeginInterruption;
- (bool)hasNonLiveConfigurationChanges;
- (bool)interrupted;
- (bool)levelMeteringEnabled;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)selectsMicForFrontCamera;
- (void)setCMSessionAudioMode:(struct __CFString { }*)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setLevelMeteringEnabled:(bool)arg1;
- (void)setSelectsMicForFrontCamera:(bool)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;
- (void)unprepareForRecording;

@end
