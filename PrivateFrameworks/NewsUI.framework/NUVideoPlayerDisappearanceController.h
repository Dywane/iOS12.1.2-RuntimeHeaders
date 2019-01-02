/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoPlayerDisappearanceController : NSObject <NUVideoPlayerEventTracker> {
    NUVideoAdHistoryEventTracker * _adHistoryEventTracker;
    <SVVideoPlaybackAdvancing> * _playbackAdvancer;
    <SVVideoPlaybackController> * _playbackController;
    <SVVideoQueueProviding> * _queueProvider;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, readonly) NUVideoAdHistoryEventTracker *adHistoryEventTracker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackAdvancing> *playbackAdvancer;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)adHistoryEventTracker;
- (id)init;
- (id)initWithAdHistoryEventTracker:(id)arg1 videoViewControllerProvider:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5;
- (id)playbackAdvancer;
- (id)playbackController;
- (id)queueProvider;
- (void)videoPlayerDidBecomeInvisible;
- (id)videoViewControllerProvider;

@end
