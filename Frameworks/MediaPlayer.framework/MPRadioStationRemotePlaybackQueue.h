/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue {
    long long  _stationID;
    NSString * _stationStringID;
}

@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationStringID;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (long long)stationID;
- (id)stationStringID;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
