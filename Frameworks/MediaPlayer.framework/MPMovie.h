/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovie : NSObject {
    double  _endPlaybackTime;
    bool  _explicitlySetMovieSourceType;
    MPAVItem * _item;
    double  _lastKnownDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownNaturalSize;
    long long  _lastKnownType;
    bool  _movieIsUnplayable;
    long long  _movieSourceType;
    double  _startPlaybackTime;
    NSURL * _url;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic, readonly) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic) double startPlaybackTime;
@property (nonatomic, readonly) NSURL *url;

+ (id)movieWithAsset:(id)arg1 error:(id*)arg2;
+ (id)movieWithPlayerItem:(id)arg1 error:(id*)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_MPArrayQueueItem;
- (void)_determineMediaType;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithAsset:(id)arg1 error:(id*)arg2;
- (id)_initWithPlayerItem:(id)arg1 error:(id*)arg2;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_sharedInit;
- (void)_typeAvailableNotification:(id)arg1;
- (id)asset;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (struct CGSize { double x1; double x2; })naturalSize;
- (double)playableDuration;
- (id)playerItem;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)setStartPlaybackTime:(double)arg1;
- (double)startPlaybackTime;
- (id)url;

@end
