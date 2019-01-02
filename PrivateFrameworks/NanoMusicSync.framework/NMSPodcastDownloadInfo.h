/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSPodcastDownloadInfo : NSObject {
    unsigned long long  _downloadOrder;
    unsigned long long  _episodeLimit;
    NSString * _feedURL;
}

@property (nonatomic, readonly) unsigned long long downloadOrder;
@property (nonatomic) unsigned long long episodeLimit;
@property (nonatomic, readonly) NSString *feedURL;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)downloadOrder;
- (unsigned long long)episodeLimit;
- (id)feedURL;
- (id)initWithFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;
- (id)initWithFeedURL:(id)arg1 episodeLimit:(unsigned long long)arg2 downloadOrder:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)predicatesForFeedURL;
- (void)setEpisodeLimit:(unsigned long long)arg1;

@end
