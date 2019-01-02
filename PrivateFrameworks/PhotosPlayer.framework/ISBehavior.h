/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISBehavior : NSObject {
    bool  _active;
    <ISBehaviorDelegate> * _delegate;
    ISPlayerState * _initialLayoutInfo;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) long long behaviorType;
@property (nonatomic) <ISBehaviorDelegate> *delegate;
@property (nonatomic, readonly) ISPlayerState *initialLayoutInfo;

- (void).cxx_destruct;
- (void)activeDidChange;
- (void)becomeActive;
- (long long)behaviorType;
- (id)delegate;
- (id)initWithInitialLayoutInfo:(id)arg1;
- (id)initialLayoutInfo;
- (bool)isActive;
- (bool)prerollVideoAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)resignActive;
- (bool)seekVideoPlayerToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (bool)seekVideoPlayerToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoPlayRate:(float)arg1;
- (void)setVideoVolume:(float)arg1;
- (void)videoDidPlayToEnd;
- (void)videoPlayerItemDidChange;
- (void)videoWillPlayToEnd;
- (void)videoWillPlayToPhoto;

@end
