/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorAudioResults : NSObject {
    bool  _allowRecording;
    bool  _allowSwitching;
    unsigned int  _audioUnitModel;
    int  _dtxPayload;
    int  _primaryPayload;
    int  _redPayload;
    unsigned int  _remoteSSRC;
    NSMutableArray * _secondaryPayloads;
    bool  _useSBR;
}

@property (nonatomic) bool allowRecording;
@property (nonatomic) bool allowSwitching;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) int dtxPayload;
@property (nonatomic) int primaryPayload;
@property (nonatomic) int redPayload;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, readonly) NSArray *secondaryPayloads;
@property (nonatomic) bool useSBR;

- (void)addSecondaryPayload:(int)arg1;
- (bool)allowRecording;
- (bool)allowSwitching;
- (unsigned int)audioUnitModel;
- (void)dealloc;
- (int)dtxPayload;
- (id)init;
- (int)primaryPayload;
- (int)redPayload;
- (unsigned int)remoteSSRC;
- (id)secondaryPayloads;
- (void)setAllowRecording:(bool)arg1;
- (void)setAllowSwitching:(bool)arg1;
- (void)setAudioUnitModel:(unsigned int)arg1;
- (void)setDtxPayload:(int)arg1;
- (void)setPrimaryPayload:(int)arg1;
- (void)setRedPayload:(int)arg1;
- (void)setRemoteSSRC:(unsigned int)arg1;
- (void)setUseSBR:(bool)arg1;
- (bool)useSBR;

@end
