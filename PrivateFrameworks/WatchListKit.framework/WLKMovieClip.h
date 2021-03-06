/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKMovieClip : NSObject {
    NSArray * _assets;
    WLKMovieClipPreviewArtwork * _previewArtwork;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly) WLKMovieClipAsset *preferredAsset;
@property (nonatomic, readonly) WLKMovieClipPreviewArtwork *previewArtwork;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)movieClipsWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (bool)_supportHD;
- (id)assets;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)preferredAsset;
- (id)previewArtwork;
- (id)title;

@end
