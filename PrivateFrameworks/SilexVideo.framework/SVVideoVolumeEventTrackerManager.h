/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVolumeEventTrackerManager : NSObject <SVVideoTransitionObserver, SVVolumeObserving> {
    <SVVideoEventTrackerProviding> * _eventTrackerProvider;
    <SVVideo> * _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SVVideo> *video;

- (void).cxx_destruct;
- (id)eventTrackerProvider;
- (id)initWithEventTrackerProvider:(id)arg1;
- (void)muteStateChanged:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)video;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
