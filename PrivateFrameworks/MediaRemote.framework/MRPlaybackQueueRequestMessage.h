/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) _MRPlaybackQueueRequestProtobuf *request;

- (id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2;
- (id)playerPath;
- (id)request;
- (unsigned long long)type;

@end
