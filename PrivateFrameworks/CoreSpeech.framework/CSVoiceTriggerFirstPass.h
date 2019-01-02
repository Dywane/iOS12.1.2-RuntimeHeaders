/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFirstPass : NSObject <CSActivationEventNotifierDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate, CSStateMachineDelegate> {
    unsigned long long  _bestChannel;
    float  _bestScore;
    unsigned long long  _channelSelectionDelay;
    NSDictionary * _channelSelectionScores;
    CSAsset * _currentAsset;
    unsigned long long  _delayInSamplesRequiredForChannelSelection;
    <CSVoiceTriggerFirstPassDelegate> * _delegate;
    float  _firstPassThreshold;
    bool  _hasTriggerPending;
    NSMutableArray * _keywordAnalyzersNDAPI;
    float  _masterChannelScoreBoost;
    unsigned long long  _onsetChannel;
    NSDictionary * _onsetResult;
    unsigned long long  _processingChannelsBitset;
    unsigned long long  _processingChunkSamples;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
    bool  _voiceTriggerEnabled;
    CSPolicy * _voiceTriggerStartPolicy;
}

@property (nonatomic) unsigned long long bestChannel;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long channelSelectionDelay;
@property (nonatomic, retain) NSDictionary *channelSelectionScores;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;
@property (nonatomic) <CSVoiceTriggerFirstPassDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float firstPassThreshold;
@property (nonatomic) bool hasTriggerPending;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keywordAnalyzersNDAPI;
@property (nonatomic) float masterChannelScoreBoost;
@property (nonatomic) unsigned long long onsetChannel;
@property (nonatomic, retain) NSDictionary *onsetResult;
@property (nonatomic) unsigned long long processingChannelsBitset;
@property (nonatomic) unsigned long long processingChunkSamples;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic) bool voiceTriggerEnabled;
@property (nonatomic, retain) CSPolicy *voiceTriggerStartPolicy;

- (void).cxx_destruct;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_reportVoiceTriggerFirstPassFire;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_startAOPVoiceTrigger;
- (void)_startAPVoiceTriggerWithCompletion:(id /* block */)arg1;
- (void)_startVoiceTriggerWithCompletion:(id /* block */)arg1;
- (void)_stopAOPVoiceTrigger;
- (void)_stopAPVoiceTrigger;
- (void)_stopVoiceTrigger;
- (void)_transitVoiceTriggerStatus:(bool)arg1;
- (unsigned long long)bestChannel;
- (float)bestScore;
- (unsigned long long)channelSelectionDelay;
- (id)channelSelectionScores;
- (id)currentAsset;
- (unsigned long long)delayInSamplesRequiredForChannelSelection;
- (id)delegate;
- (float)firstPassThreshold;
- (bool)hasTriggerPending;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)keywordAnalyzersNDAPI;
- (float)masterChannelScoreBoost;
- (unsigned long long)onsetChannel;
- (id)onsetResult;
- (unsigned long long)processingChannelsBitset;
- (unsigned long long)processingChunkSamples;
- (id)queue;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)setBestChannel:(unsigned long long)arg1;
- (void)setBestScore:(float)arg1;
- (void)setChannelSelectionDelay:(unsigned long long)arg1;
- (void)setChannelSelectionScores:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelayInSamplesRequiredForChannelSelection:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstPassThreshold:(float)arg1;
- (void)setHasTriggerPending:(bool)arg1;
- (void)setKeywordAnalyzersNDAPI:(id)arg1;
- (void)setMasterChannelScoreBoost:(float)arg1;
- (void)setOnsetChannel:(unsigned long long)arg1;
- (void)setOnsetResult:(id)arg1;
- (void)setProcessingChannelsBitset:(unsigned long long)arg1;
- (void)setProcessingChunkSamples:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)setVoiceTriggerStartPolicy:(id)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)start;
- (bool)voiceTriggerEnabled;
- (id)voiceTriggerStartPolicy;

@end
