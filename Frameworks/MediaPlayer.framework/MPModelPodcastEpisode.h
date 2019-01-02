/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPodcastEpisode : MPModelObject {
    NSString * _commentText;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSString *commentText;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic, readonly) long long episodeNumber;
@property (nonatomic, readonly) long long episodeType;
@property (getter=isExplicitEpisode, nonatomic) bool explicitEpisode;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__author_KEY;
+ (id)__datePlayed_KEY;
+ (id)__descriptionText_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__hasVideo_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__podcast_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__seasonNumber_KEY;
+ (id)__shareURL_KEY;
+ (id)__title_KEY;
+ (id)__userRating_KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)commentText;
- (id)humanDescription;
- (void)setCommentText:(id)arg1;

@end