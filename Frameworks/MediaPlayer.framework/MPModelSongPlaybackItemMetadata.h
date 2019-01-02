/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {
    MPModelGenericObject * _modelGenericObject;
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelSong *song;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)requiredProperties;

- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (bool)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)homeSharingAsset;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (id)localFileAsset;
- (id)mediaItem;
- (id)modelGenericObject;
- (id)playbackPosition;
- (void)setSong:(id)arg1;
- (bool)showComposer;
- (id)song;
- (long long)storeAdamID;
- (id)storeAsset;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (float)volumeNormalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mqf_playbackItemMetadataModelObject;

@end
