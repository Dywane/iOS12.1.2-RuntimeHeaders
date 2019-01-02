/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate> {
    AVConferenceXPCClient * _connection;
    NSMutableArray * _meters;
    NSMutableDictionary * _sources;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *meters;
@property (nonatomic, readonly) NSMutableDictionary *sources;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (id)meters;
- (void)registerAudioPowerMeterSource:(id)arg1;
- (void)registerBlocksForService;
- (id)sources;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1;

@end