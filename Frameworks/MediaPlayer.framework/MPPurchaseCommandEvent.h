/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPurchaseCommandEvent : MPRemoteCommandEvent {
    NSString * _stationHash;
    NSNumber * _stationID;
    NSNumber * _trackID;
    long long  _type;
}

@property (nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) NSNumber *stationID;
@property (nonatomic, readonly) NSNumber *trackID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)stationHash;
- (id)stationID;
- (id)trackID;
- (long long)type;

@end
